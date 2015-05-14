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
#include <aws/core/utils/memory/stl/AWSStringStream.h>

namespace Aws
{
namespace Utils
{
namespace Logging
{

enum class LogLevel : int;

class AWS_CORE_API LogSystemInterface
{
    public:
        
        virtual ~LogSystemInterface() {}

        virtual LogLevel GetLogLevel(void) const = 0;

        virtual void Log(LogLevel logLevel, const char* tag, const char* formatStr, ...) = 0;
        virtual void LogStream(LogLevel logLevel, const char* tag, const Aws::OStringStream &messageStream) = 0;

};

} // namespace Logging
} // namespace Utils
} // namespace Aws
