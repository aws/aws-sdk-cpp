/*
  * Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  *
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  *
  *  http://aws.amazon.com/apache2.0
  *
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */
#include <aws/core/platform/FileSystem.h>

#include <aws/core/platform/Environment.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/StringUtils.h>
#include <cassert>
#include <iostream>
#include <Userenv.h>

#pragma warning( disable : 4996)

namespace Aws
{
namespace FileSystem
{

static const char* FILE_SYSTEM_UTILS_LOG_TAG = "FileSystem";

class User32Directory : public Directory
{
public:
    User32Directory(const Aws::String& path, const Aws::String& relativePath) : Directory(path, relativePath), m_find(INVALID_HANDLE_VALUE), m_lastError(0)
    {
        WIN32_FIND_DATAW ffd;
        AWS_LOGSTREAM_TRACE(FILE_SYSTEM_UTILS_LOG_TAG, "Entering directory " << m_directoryEntry.path);

        m_find = FindFirstFileW(Aws::Utils::StringUtils::ToWString(m_directoryEntry.path.c_str()).c_str(), &ffd);
        if (m_find != INVALID_HANDLE_VALUE)
        {
            m_directoryEntry = ParseFileInfo(ffd, false);
            FindClose(m_find);
            auto seachPath = Join(m_directoryEntry.path, "*");
            m_find = FindFirstFileW(Aws::Utils::StringUtils::ToWString(seachPath.c_str()).c_str(), &m_ffd);
        }
        else
        {
            AWS_LOGSTREAM_ERROR(FILE_SYSTEM_UTILS_LOG_TAG, "Could not load directory " << m_directoryEntry.path << " with error code " << GetLastError());
        }
    }

    ~User32Directory()
    {
        if (m_find != INVALID_HANDLE_VALUE)
        {
            FindClose(m_find);
        }
    }

	operator bool() const override { return m_directoryEntry.operator bool() && m_find != INVALID_HANDLE_VALUE; }

    DirectoryEntry Next() override
    {
        assert(m_find != INVALID_HANDLE_VALUE);
        DirectoryEntry entry;
        bool invalidEntry = true;

        while(invalidEntry && !m_lastError)
        {
            //due to the way the FindFirstFile api works, 
            //the first entry will already be loaded by the time we get here.
            entry = ParseFileInfo(m_ffd, true);

            Aws::String fileName = Aws::Utils::StringUtils::FromWString(m_ffd.cFileName);
            if (fileName != ".." && fileName != ".")
            {
                AWS_LOGSTREAM_TRACE(FILE_SYSTEM_UTILS_LOG_TAG, "Found entry " << entry.path);
                invalidEntry = false;
            }
            else
            {
                entry.fileType = FileType::None;
                AWS_LOGSTREAM_TRACE(FILE_SYSTEM_UTILS_LOG_TAG, "Skipping . or .. entries.");
            }

            if(!FindNextFileW(m_find, &m_ffd))
            {
                m_lastError = GetLastError();
                AWS_LOGSTREAM_ERROR(FILE_SYSTEM_UTILS_LOG_TAG, "Could not fetch next entry from " << m_directoryEntry.path << " with error code " << m_lastError);
                break;
            }            
        }
       
        return entry;
    }

private:
    DirectoryEntry ParseFileInfo(WIN32_FIND_DATAW& ffd, bool computePath)
    {
        DirectoryEntry entry;
        LARGE_INTEGER fileSize;
        fileSize.HighPart = ffd.nFileSizeHigh;
        fileSize.LowPart = ffd.nFileSizeLow;
        entry.fileSize = static_cast<int64_t>(fileSize.QuadPart);

        if (ffd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
        {
            entry.fileType = FileType::Directory;
        }
        else
        {
            entry.fileType = FileType::File;
        }

        if(computePath)
        {
            entry.path = Join(m_directoryEntry.path, Aws::Utils::StringUtils::FromWString(ffd.cFileName));
            entry.relativePath = m_directoryEntry.relativePath.empty() ? Aws::Utils::StringUtils::FromWString(ffd.cFileName) : Join(m_directoryEntry.relativePath, Aws::Utils::StringUtils::FromWString(ffd.cFileName));
        }
        else
        {
            entry.path = m_directoryEntry.path;
            entry.relativePath = m_directoryEntry.relativePath;
        }

        return entry;
    }

    HANDLE m_find;
    WIN32_FIND_DATAW m_ffd;
    DWORD m_lastError;
};

Aws::String GetHomeDirectory()
{
    static const char* HOME_DIR_ENV_VAR = "USERPROFILE";

    AWS_LOGSTREAM_TRACE(FILE_SYSTEM_UTILS_LOG_TAG, "Checking " << HOME_DIR_ENV_VAR << " for the home directory.");
    Aws::String homeDir = Aws::Environment::GetEnv(HOME_DIR_ENV_VAR);
    AWS_LOGSTREAM_DEBUG(FILE_SYSTEM_UTILS_LOG_TAG, "Environment value for variable " << HOME_DIR_ENV_VAR << " is " << homeDir);
    if(homeDir.empty())
    {
        AWS_LOGSTREAM_WARN(FILE_SYSTEM_UTILS_LOG_TAG, "Home dir not stored in environment, trying to fetch manually from the OS.");
        HANDLE hToken;
    
        if (OpenProcessToken(GetCurrentProcess(), TOKEN_READ, &hToken))
        {
            DWORD len = MAX_PATH;
            WCHAR path[MAX_PATH];
            if (GetUserProfileDirectoryW(hToken, path, &len))
            {                
                homeDir = Aws::Utils::StringUtils::FromWString(path);
            }
            CloseHandle(hToken);
        }        

        AWS_LOGSTREAM_INFO(FILE_SYSTEM_UTILS_LOG_TAG, "Pulled " << homeDir << " as home directory from the OS.");
    }

    Aws::String retVal = (homeDir.size() > 0) ? Aws::Utils::StringUtils::Trim(homeDir.c_str()) : "";

    if (!retVal.empty())
    {
        if (retVal.at(retVal.length() - 1) != Aws::FileSystem::PATH_DELIM)
        {
            retVal += Aws::FileSystem::PATH_DELIM;
        }
    }
    
    return retVal;
}

Aws::String GetExecutableDirectory()
{
    static const unsigned long long bufferSize = 256;
    WCHAR buffer[bufferSize];

    memset(buffer, 0, sizeof(buffer));

    if (GetModuleFileNameW(nullptr, buffer, static_cast<DWORD>(sizeof(buffer))))
    {
        Aws::String bufferStr(Aws::Utils::StringUtils::FromWString(buffer));
        auto fileNameStart = bufferStr.find_last_of(PATH_DELIM);
        if (fileNameStart != std::string::npos)
        {
            bufferStr = bufferStr.substr(0, fileNameStart);
        }

        return bufferStr;
    }

    return "";
}

bool CreateDirectoryIfNotExists(const char* path)
{
    AWS_LOGSTREAM_INFO(FILE_SYSTEM_UTILS_LOG_TAG, "Creating directory " << path);

    if (CreateDirectoryW(Aws::Utils::StringUtils::ToWString(path).c_str(), nullptr))
    {
        AWS_LOGSTREAM_DEBUG(FILE_SYSTEM_UTILS_LOG_TAG, "Creation of directory " << path << " succeeded.")
        return true;
    }
    else
    {
        DWORD errorCode = GetLastError();
        AWS_LOGSTREAM_DEBUG(FILE_SYSTEM_UTILS_LOG_TAG, " Creation of directory " << path << " returned code: " << errorCode);
        return errorCode == ERROR_ALREADY_EXISTS;
    }
}

bool RemoveFileIfExists(const char* path)
{
    AWS_LOGSTREAM_INFO(FILE_SYSTEM_UTILS_LOG_TAG, "Deleting file: " << path);

    if (DeleteFileW(Aws::Utils::StringUtils::ToWString(path).c_str()))
    {
        AWS_LOGSTREAM_DEBUG(FILE_SYSTEM_UTILS_LOG_TAG, "Successfully deleted file: " << path);
        return true;
    }
    else
    {
        DWORD errorCode = GetLastError();
        AWS_LOGSTREAM_DEBUG(FILE_SYSTEM_UTILS_LOG_TAG, "Deletion of file: " << path << " Returned error code: " << errorCode);
        return errorCode == ERROR_FILE_NOT_FOUND;
    }
}

bool RelocateFileOrDirectory(const char* from, const char* to)
{
    AWS_LOGSTREAM_INFO(FILE_SYSTEM_UTILS_LOG_TAG, "Moving file at " << from << " to " << to);

    if(MoveFileW(Aws::Utils::StringUtils::ToWString(from).c_str(), Aws::Utils::StringUtils::ToWString(to).c_str()))
    {
        AWS_LOGSTREAM_DEBUG(FILE_SYSTEM_UTILS_LOG_TAG,  "The moving operation of file at " << from << " to " << to << " Succeeded.");
        return true;
    }
    else
    {
        int errorCode = GetLastError();
        AWS_LOGSTREAM_DEBUG(FILE_SYSTEM_UTILS_LOG_TAG,  "The moving operation of file at " << from << " to " << to << " Returned error code of " << errorCode);
        return false;
    }
}

bool RemoveDirectoryIfExists(const char* path)
{
    AWS_LOGSTREAM_INFO(FILE_SYSTEM_UTILS_LOG_TAG, "Removing directory at " << path);

    if(RemoveDirectoryW(Aws::Utils::StringUtils::ToWString(path).c_str()))
    {
        AWS_LOGSTREAM_DEBUG(FILE_SYSTEM_UTILS_LOG_TAG,  "The remove operation of file at " << path << " Succeeded.");
        return true;
    }
    else
    {
        int errorCode = GetLastError();
        if (errorCode == ERROR_DIR_NOT_EMPTY)
        {
            AWS_LOGSTREAM_ERROR(FILE_SYSTEM_UTILS_LOG_TAG, "The remove operation of file at " << path << " failed. with error code because it was not empty.");
        }

        else if(errorCode == ERROR_DIRECTORY)
        {
            AWS_LOGSTREAM_DEBUG(FILE_SYSTEM_UTILS_LOG_TAG, "The deletion of directory at " << path << " failed because it doesn't exist.");
            return true;

        }

        AWS_LOGSTREAM_DEBUG(FILE_SYSTEM_UTILS_LOG_TAG,  "The remove operation of file at " << path << " failed. with error code " << errorCode);
        return false;
    }
}

Aws::String CreateTempFilePath()
{
#ifdef _MSC_VER
#pragma warning(disable: 4996) // _CRT_SECURE_NO_WARNINGS
#endif
    char s_tempName[L_tmpnam_s+1];

    /*
    Prior to VS 2014, tmpnam/tmpnam_s generated root level files ("\filename") which were not appropriate for our usage, so for the windows version, we prepended a '.' to make it a
    tempfile in the current directory.  Starting with VS2014, the behavior of tmpnam/tmpnam_s was changed to be a full, valid filepath based on the
    current user ("C:\Users\username\AppData\Local\Temp\...").

    See the tmpnam section in http://blogs.msdn.com/b/vcblog/archive/2014/06/18/crt-features-fixes-and-breaking-changes-in-visual-studio-14-ctp1.aspx
    for more details.
    */

#if _MSC_VER >= 1900
    tmpnam_s(s_tempName, L_tmpnam_s);
#else
    s_tempName[0] = '.';
    tmpnam_s(s_tempName + 1, L_tmpnam_s);
#endif // _MSC_VER


    return s_tempName;
}

std::shared_ptr<Directory> OpenDirectory(const Aws::String& path, const Aws::String& relativePath)
{
    return Aws::MakeShared<User32Directory>(FILE_SYSTEM_UTILS_LOG_TAG, path, relativePath);
}

} // namespace FileSystem
} // namespace Aws
