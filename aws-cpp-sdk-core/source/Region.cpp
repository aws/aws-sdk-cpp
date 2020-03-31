/*
* Copyright 2020 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/Region.h>
namespace Aws
{
    namespace Region
    {
        Aws::String ComputeSignerRegion(const Aws::String& region)
        {
            if (region == Aws::Region::AWS_GLOBAL)
            {
                return Aws::Region::US_EAST_1;
            }
            else if (region == "s3-external-1")
            {
                return Aws::Region::US_EAST_1;
            }
            else if (region.compare(0, 5, "fips-") == 0)
            {
                return region.substr(5);
            }
            else if (region.compare(region.size() - 5, 5, "-fips") == 0)
            {
                return region.substr(0, region.size() - 5);
            }
            else
            {
                return region;
            }
        }
    }
}