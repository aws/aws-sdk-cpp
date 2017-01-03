/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/platform/Platform.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/StringUtils.h>

#include <unistd.h>
#include <pwd.h>
#include <sys/stat.h>
#include <dirent.h>

#include <cassert>

namespace Aws
{
namespace FileSystem
{

static const char* FILE_SYSTEM_UTILS_LOG_TAG = "FileSystemUtils";

    class PosixDirectory : public Directory
    {
    public:
        PosixDirectory(const Aws::String& path, const Aws::String& relativePath) : Directory(path, relativePath), m_dir(nullptr)
        {
            m_dir = opendir(m_directoryEntry.path.c_str());

            if(m_dir)
            {
                m_directoryEntry.fileType = FileType::Directory;
            }
        }

        ~PosixDirectory()
        {
            if (m_dir)
            {
                closedir(m_dir);
            }
        }

        DirectoryEntry Next() override
        {
            assert(m_dir);
            DirectoryEntry entry;

            dirent* dirEntry;
            bool invalidEntry(true);

            while(invalidEntry)
            {
                if ((dirEntry = readdir(m_dir)))
                {
                    Aws::String entryName = dirEntry->d_name;
                    if(entryName != ".." && entryName != ".")
                    {
                        entry = ParseFileInfo(dirEntry, true);
                        invalidEntry = false;
                    }
                }
                else
                {
                    break;
                }
            }

            return entry;
        }

    private:
        DirectoryEntry ParseFileInfo(dirent* dirEnt, bool computePath)
        {
            DirectoryEntry entry;

            if(computePath)
            {
                Aws::StringStream ss;
                ss << m_directoryEntry.path << PATH_DELIM << dirEnt->d_name;
                entry.path = ss.str();

                ss.str("");
                if(m_directoryEntry.relativePath.empty())
                {
                    ss << dirEnt->d_name;
                }
                else
                {
                    ss << m_directoryEntry.relativePath << PATH_DELIM << dirEnt->d_name;
                }
                entry.relativePath = ss.str();
            }
            else
            {
                entry.path = m_directoryEntry.path;
                entry.relativePath = m_directoryEntry.relativePath;
            }

            if(dirEnt->d_type == DT_DIR)
            {
                entry.fileType = FileType::Directory;
            }
            else if(dirEnt->d_type == DT_LNK)
            {
                entry.fileType = FileType::Symlink;
            }
            else
            {
                entry.fileType = FileType::File;
                FILE* fp = fopen(entry.path.c_str(), "r");
                if(fp)
                {
                    auto pos = ftell(fp);
                    fseek(fp, 0, SEEK_END);
                    auto end = ftell(fp);
                    fseek(fp, pos, SEEK_SET);
                    entry.fileSize = static_cast<int64_t>(end);
                    fclose(fp);
                }
            }

            return entry;
        }

        DIR* m_dir;
    };

Aws::String GetHomeDirectory()
{
    static const char* HOME_DIR_ENV_VAR = "HOME";

    AWS_LOGSTREAM_TRACE(FILE_SYSTEM_UTILS_LOG_TAG, "Checking " << HOME_DIR_ENV_VAR << " for the home directory.");

    Aws::String homeDir = Aws::Environment::GetEnv(HOME_DIR_ENV_VAR);

    AWS_LOGSTREAM_DEBUG(FILE_SYSTEM_UTILS_LOG_TAG, "Environment value for variable " << HOME_DIR_ENV_VAR << " is " << homeDir);

    if(homeDir.empty())
    {
        AWS_LOG_WARN(FILE_SYSTEM_UTILS_LOG_TAG, "Home dir not stored in environment, trying to fetch manually from the OS.");

        passwd pw;
        passwd *p_pw = nullptr;
        char pw_buffer[4096];
        getpwuid_r(getuid(), &pw, pw_buffer, sizeof(pw_buffer), &p_pw);
        if(p_pw && p_pw->pw_dir)
        {
            homeDir = p_pw->pw_dir;
        }

        AWS_LOGSTREAM_INFO(FILE_SYSTEM_UTILS_LOG_TAG, "Pulled " << homeDir << " as home directory from the OS.");
    }

    Aws::String retVal = homeDir.size() > 0 ? Aws::Utils::StringUtils::Trim(homeDir.c_str()) : "";
    if(!retVal.empty())
    {
        if(retVal.at(retVal.length() - 1) != PATH_DELIM)
        {
            AWS_LOGSTREAM_DEBUG(FILE_SYSTEM_UTILS_LOG_TAG, "Home directory is missing the final " << PATH_DELIM << " appending one to normalize");
            retVal += PATH_DELIM;
        }
    }

    AWS_LOGSTREAM_DEBUG(FILE_SYSTEM_UTILS_LOG_TAG, "Final Home Directory is " << retVal);

    return retVal;
}

bool CreateDirectoryIfNotExists(const char* path)
{
    AWS_LOGSTREAM_INFO(FILE_SYSTEM_UTILS_LOG_TAG, "Creating directory " << path);

    int errorCode = mkdir(path, S_IRWXU | S_IRWXG | S_IRWXO);
    AWS_LOGSTREAM_DEBUG(FILE_SYSTEM_UTILS_LOG_TAG, "Creation of directory " << path << " returned code: " << errno);
    return errorCode == 0 || errno == EEXIST;
}

bool RemoveFileIfExists(const char* path)
{
    AWS_LOGSTREAM_INFO(FILE_SYSTEM_UTILS_LOG_TAG, "Deleting file: " << path);

    int errorCode = unlink(path);
    AWS_LOGSTREAM_DEBUG(FILE_SYSTEM_UTILS_LOG_TAG, "Deletion of file: " << path << " Returned error code: " << errno);
    return errorCode == 0 || errno == ENOENT;
}

bool RemoveDirectoryIfExists(const char* path)
{
    AWS_LOGSTREAM_INFO(FILE_SYSTEM_UTILS_LOG_TAG, "Deleting directory: " << path);
    int errorCode = rmdir(path);
    AWS_LOGSTREAM_DEBUG(FILE_SYSTEM_UTILS_LOG_TAG, "Deletion of directory: " << path << " Returned error code: " << errno);
    return errorCode == 0 || errno == ENOTDIR || errno == ENOENT;
}

bool RelocateFileOrDirectory(const char* from, const char* to)
{
    AWS_LOGSTREAM_INFO(FILE_SYSTEM_UTILS_LOG_TAG, "Moving file at " << from << " to " << to);

    int errorCode = std::rename(from, to);

    AWS_LOGSTREAM_DEBUG(FILE_SYSTEM_UTILS_LOG_TAG,  "The moving operation of file at " << from << " to " << to << " Returned error code of " << errno);
    return errorCode == 0;
}

Aws::String CreateTempFilePath()
{
    Aws::StringStream ss;
    auto dt = Aws::Utils::DateTime::Now();
    ss << dt.ToGmtString("%Y%m%dT%H%M%S") << dt.Millis();
    Aws::String tempFile(ss.str());

    AWS_LOGSTREAM_DEBUG(FILE_SYSTEM_UTILS_LOG_TAG, "CreateTempFilePath generated: " << tempFile);

    return tempFile;
}

std::shared_ptr<Directory> OpenDirectory(const Aws::String& path, const Aws::String& relativePath)
{
    return Aws::MakeShared<PosixDirectory>(FILE_SYSTEM_UTILS_LOG_TAG, path, relativePath);
}

} // namespace FileSystem
} // namespace Aws
