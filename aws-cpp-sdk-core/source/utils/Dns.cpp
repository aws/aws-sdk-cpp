/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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




#include <aws/core/utils/DNS.h>
#include <regex>

namespace Aws
{
    namespace Utils
    {
        bool IsValidDnsLabel(const Aws::String& label)
        {
            // Valid DNS hostnames are composed of valid DNS labels separated by a period.
            // Valid DNS labels are characterized by the following:
            // 1- Only contains alphanumeric characters and/or dashes
            // 2- Cannot start or end with a dash
            // 3- Have a maximum length of 63 characters (the entirety of the domain name should be less than 255 bytes)

            //TODO: consider making this regex static and passing std::regex_constants::optimize flag
            const std::regex dnsLabel("^[[:alnum:]](?:[[:alnum:]-]{0,61}[[:alnum:]])?$");
            return regex_search(label, dnsLabel);
        }
    }
}
