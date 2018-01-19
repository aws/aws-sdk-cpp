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

#include <aws/core/http/Scheme.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/StringUtils.h>

using namespace Aws::Http;
using namespace Aws::Utils;

namespace Aws
{
namespace Http
{
namespace SchemeMapper
{

    const char* ToString(Scheme scheme)
    {
        switch (scheme)
        {
            case Scheme::HTTP:
                return "http";
            case Scheme::HTTPS:
                return "https";
            case Scheme::SOCKS5:
                return "socks5";
            default:
                return "http";
        }
    }

    Scheme FromString(const char* name)
    {
        Aws::String trimmedString = StringUtils::Trim(name);
        Aws::String loweredTrimmedString = StringUtils::ToLower(trimmedString.c_str());

        if (loweredTrimmedString == "http")
        {
            return Scheme::HTTP;
        }
        //this branch is technically unneeded, but it is here so we don't have a subtle bug
        //creep in as we extend this enum.
        else if (loweredTrimmedString == "https")
        {
            return Scheme::HTTPS;
        }
        else if (loweredTrimmedString == "socks5")
        {
            return Scheme::SOCKS5;
        }


        return Scheme::HTTPS;
    }

} // namespace SchemeMapper
} // namespace Http
} // namespace Aws
