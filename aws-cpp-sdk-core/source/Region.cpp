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

#include <aws/core/Region.h>

using namespace Aws;

namespace Aws
{
namespace RegionMapper
{

const char* GetRegionName(Region region) 
{ 
    switch (region)
    {
        case Region::US_EAST_1:
            return "us-east-1";
        case Region::US_WEST_1:
            return "us-west-1";
        case Region::US_WEST_2:
            return "us-west-2";
        case Region::EU_WEST_1:
            return "eu-west-1";
        case Region::EU_CENTRAL_1:
            return "eu-central-1";
        case Region::AP_SOUTHEAST_1:
            return "ap-southeast-1";
        case Region::AP_SOUTHEAST_2:
            return "ap-southeast-2";
        case Region::AP_NORTHEAST_1:
            return "ap-northeast-1";
        case Region::AP_NORTHEAST_2:
            return "ap-northeast-2";
        case Region::SA_EAST_1:
            return "sa-east-1";
        default:
            return "us-east-1";
    }
}

} // namespace RegionMapper
} // namespace Aws
