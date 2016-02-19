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
#include <aws/core/utils/FileSystemUtils.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/StringUtils.h>

#include <Userenv.h>

#pragma warning( disable : 4996)

using namespace Aws::Utils;

static const char* LOG_TAG = "FileSystemUtils";

Aws::String FileSystemUtils::GetHomeDirectory()
{
    static const char* HOME_DIR_ENV_VAR = "USERPROFILE";

    AWS_LOGSTREAM_TRACE(LOG_TAG, "Checking " << HOME_DIR_ENV_VAR << " for the home directory.");
    char* homeDir = std::getenv(HOME_DIR_ENV_VAR);
    CHAR path[MAX_PATH];
    AWS_LOGSTREAM_DEBUG(LOG_TAG, "Environment value for variable " << HOME_DIR_ENV_VAR << " is " << homeDir);
    if(!homeDir)
    {
        AWS_LOG_WARN(LOG_TAG, "Home dir not stored in environment, trying to fetch manually from the OS.");
        HANDLE hToken;
    
        if (OpenProcessToken(GetCurrentProcess(), TOKEN_READ, &hToken))
        {
            DWORD len = MAX_PATH;
            if (GetUserProfileDirectoryA(hToken, path, &len))
            {                
                homeDir = path;
            }
            CloseHandle(hToken);
        }        

        AWS_LOGSTREAM_INFO(LOG_TAG, "Pulled " << homeDir << " as home directory from the OS.");
    }

    Aws::String retVal = homeDir ? StringUtils::Trim(static_cast<const char*>(homeDir)) : "";

    if (!retVal.empty())
    {
        if (retVal.at(retVal.length() - 1) != PATH_DELIM)
        {
            retVal += PATH_DELIM;
        }
    }
    
    return retVal;
}

bool FileSystemUtils::CreateDirectoryIfNotExists(const char* path)
{
    AWS_LOGSTREAM_INFO(LOG_TAG, "Creating directory " << path);

    if (CreateDirectoryA(path, nullptr))
    {
        AWS_LOGSTREAM_DEBUG(LOG_TAG, "Creation of directory " << path << " succeeded.")
        return true;
    }
    else
    {
        DWORD errorCode = GetLastError();
        AWS_LOGSTREAM_DEBUG(LOG_TAG, " Creation of directory " << path << " returned code: " << errorCode);
        return errorCode == ERROR_ALREADY_EXISTS;
    }
}

bool FileSystemUtils::RemoveFileIfExists(const char* path)
{
    AWS_LOGSTREAM_INFO(LOG_TAG, "Deleting file: " << path);

    if(DeleteFileA(path))
    {
        AWS_LOGSTREAM_DEBUG(LOG_TAG, "Successfully deleted file: " << path);
        return true;
    }
    else
    {
        DWORD errorCode = GetLastError();
        AWS_LOGSTREAM_DEBUG(LOG_TAG, "Deletion of file: " << path << " Returned error code: " << errorCode);
        return errorCode == ERROR_FILE_NOT_FOUND;
    }
}

bool FileSystemUtils::RelocateFileOrDirectory(const char* from, const char* to)
{
    AWS_LOGSTREAM_INFO(LOG_TAG, "Moving file at " << from << " to " << to);

    if(MoveFileA(from, to))
    {
        AWS_LOGSTREAM_DEBUG(LOG_TAG,  "The moving operation of file at " << from << " to " << to << " Succeeded.");
        return true;
    }
    else
    {
        int errorCode = GetLastError();
        AWS_LOGSTREAM_DEBUG(LOG_TAG,  "The moving operation of file at " << from << " to " << to << " Returned error code of " << errorCode);
        return false;
    }
}