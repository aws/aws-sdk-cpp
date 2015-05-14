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

#include <aws/core/utils/logging/LogLevel.h>

#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

using namespace Aws::Utils::Logging;

static Aws::Map<LogLevel, Aws::String> logLevelNameMap =
{
{ LogLevel::Fatal, "FATAL" },
{ LogLevel::Error, "ERROR" },
{ LogLevel::Warn, "WARN" },
{ LogLevel::Info, "INFO" },
{ LogLevel::Debug, "DEBUG" },
{ LogLevel::Trace, "TRACE" } };

namespace Aws
{
namespace Utils
{
namespace Logging
{

Aws::String GetLogLevelName(LogLevel logLevel) 
{ 
    auto iter = logLevelNameMap.find(logLevel);
    if(iter == logLevelNameMap.cend())
    {
        return Aws::String("");
    }

    return iter->second; 
}

} // namespace Logging
} // namespace Utils
} // namespace Aws
