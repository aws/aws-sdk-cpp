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
#pragma once
#include <aws/core/Core_EXPORTS.h>

#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
    namespace Utils
    {
#ifdef _WIN32
        static const char PATH_DELIM = '\\';
#else
        static const char PATH_DELIM = '/';
#endif
        /**
         * Various utilities for working with a file system.
         */ 
        class AWS_CORE_API FileSystemUtils
        {
        public:
            /**
             * Returns the directory path for the home dir env variable
             */
            static Aws::String GetHomeDirectory();

            /**
             * Creates directory if it doesn't exist. Returns true if the directory was created
             * or already exists. False for failure.
             */
            static bool CreateDirectoryIfNotExists(const char* path);

            /**
             * Deletes file if it exists. Returns true if file doesn't exist or on success.
             */
            static bool RemoveFileIfExists(const char* fileName);

            /**
             * Moves the file. Returns true on success
             */
            static bool RelocateFileOrDirectory(const char* from, const char* to);

            /**
             * Gets path delimiter for the current platform
             */
            static char GetPathDelimiter() { return PATH_DELIM; }
        };
    }
}
