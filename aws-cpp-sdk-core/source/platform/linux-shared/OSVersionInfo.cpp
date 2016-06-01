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
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <sys/utsname.h>

namespace Aws
{
namespace Utils
{

Aws::String ComputeOSVersionString()
{
    utsname name;
    int32_t success = uname(&name);
    if(success >= 0)
    {
        Aws::StringStream ss;
        ss << name.sysname << "/" << name.release << " " << name.machine;
        return ss.str();
    }

    return "non-windows/unknown";
}

} // namespace Utils 
} // namespace Aws
