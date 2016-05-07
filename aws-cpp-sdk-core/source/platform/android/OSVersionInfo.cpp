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

#include <aws/core/utils/OSVersionInfo.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <regex>

namespace Aws
{
namespace Utils
{

Aws::String ComputeOSVersionString()
{
    // regex is not allocator-aware, so technically we're breaking our memory contract here (http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2011/n3254.pdf)
    // Since it's internal, nothing escapes, and what gets allocated/deallocated is very small, I think that's acceptable for now

    std::string androidBuildVersion = GetSysCommandOutput("cat /proc/version 2>&1").c_str();
    std::regex versionRegex("version (\\S+)\\s");

    std::smatch versionMatchResults;
    std::regex_search(androidBuildVersion, versionMatchResults, versionRegex);

    if(versionMatchResults.size() >= 2)
    {
        return Aws::String("Android/") + versionMatchResults[1].str().c_str();
    }

    return Aws::String("Android/Unknown");
}

} // namespace Utils
} // namespace Aws
