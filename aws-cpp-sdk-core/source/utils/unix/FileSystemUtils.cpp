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

#include <unistd.h>
#include <pwd.h>
#include <sys/stat.h>

#if __ANDROID__
#include <cerrno>
#endif

using namespace Aws::Utils;

static const char* LOG_TAG = "FileSystemUtils";

Aws::String FileSystemUtils::GetHomeDirectory()
{
    static const char* HOME_DIR_ENV_VAR = "HOME";

    AWS_LOGSTREAM_TRACE(LOG_TAG, "Checking " << HOME_DIR_ENV_VAR << " for the home directory.");
    char* homeDir = std::getenv(HOME_DIR_ENV_VAR);
    AWS_LOGSTREAM_DEBUG(LOG_TAG, "Environment value for variable " << HOME_DIR_ENV_VAR << " is " << homeDir);
    if(!homeDir)
    {
        AWS_LOG_WARN(LOG_TAG, "Home dir not stored in environment, trying to fetch manually from the OS.");
#if  !defined(__ANDROID__)
        struct passwd *pw = getpwuid(getuid());
        homeDir = pw->pw_dir;
#endif
        AWS_LOGSTREAM_INFO(LOG_TAG, "Pulled " << homeDir << " as home directory from the OS.");
    }

    Aws::String retVal = homeDir ? StringUtils::Trim(static_cast<const char*>(homeDir)) : "";
    if(!retVal.empty())
    {
        if(retVal.at(retVal.length() - 1) != PATH_DELIM)
        {
            AWS_LOGSTREAM_DEBUG(LOG_TAG, "Home directory is missing the final " << PATH_DELIM << " appending one to normalize");
            retVal += PATH_DELIM;
        }
    }

    AWS_LOGSTREAM_DEBUG(LOG_TAG, "Final Home Directory is " << retVal);

    return retVal;
}

bool FileSystemUtils::CreateDirectoryIfNotExists(const char* path)
{
    AWS_LOGSTREAM_INFO(LOG_TAG, "Creating directory " << path);

    int errorCode = mkdir(path, S_IRWXU | S_IRWXG | S_IRWXO);
    AWS_LOGSTREAM_DEBUG(LOG_TAG, "Creation of directory " << path << " returned code: " << errno);
    return errorCode == 0 || errno == EEXIST;
}

bool FileSystemUtils::RemoveFileIfExists(const char* path)
{
    AWS_LOGSTREAM_INFO(LOG_TAG, "Deleting file: " << path);

    int errorCode = unlink(path);
    AWS_LOGSTREAM_DEBUG(LOG_TAG, "Deletion of file: " << path << " Returned error code: " << errno);
    return errorCode == 0 || errno == ENOENT;
}

bool FileSystemUtils::RelocateFileOrDirectory(const char* from, const char* to)
{
    AWS_LOGSTREAM_INFO(LOG_TAG, "Moving file at " << from << " to " << to);

#if __ANDROID__
    int errorCode = rename(from, to);
#else
    int errorCode = std::rename(from, to);
#endif // __ANDROID__

    AWS_LOGSTREAM_DEBUG(LOG_TAG,  "The moving operation of file at " << from << " to " << to << " Returned error code of " << errno);
    return errorCode == 0;
}
