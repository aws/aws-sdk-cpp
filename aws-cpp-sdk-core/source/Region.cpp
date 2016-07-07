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
#include <aws/core/utils/HashingUtils.h>

using namespace Aws;

namespace Aws
{
namespace RegionMapper
{

static const char* const US_EAST_1_STR = "us-east-1";
static const int US_EAST_1_HASH = Aws::Utils::HashingUtils::HashString(US_EAST_1_STR);

static const char* const US_WEST_1_STR = "us-west-1";
static const int US_WEST_1_HASH = Aws::Utils::HashingUtils::HashString(US_WEST_1_STR);

static const char* const US_WEST_2_STR = "us-west-2";
static const int US_WEST_2_HASH = Aws::Utils::HashingUtils::HashString(US_WEST_2_STR);

static const char* const EU_WEST_1_STR = "eu-west-1";
static const int EU_WEST_1_HASH = Aws::Utils::HashingUtils::HashString(EU_WEST_1_STR);

static const char* const EU_CENTRAL_1_STR = "eu-central-1";
static const int EU_CENTRAL_1_HASH = Aws::Utils::HashingUtils::HashString(EU_CENTRAL_1_STR);

static const char* const AP_SOUTHEAST_1 = "ap-southeast-1";
static const int AP_SOUTHEAST_1_HASH = Aws::Utils::HashingUtils::HashString(AP_SOUTHEAST_1);

static const char* const AP_SOUTHEAST_2 = "ap-southeast-2";
static const int AP_SOUTHEAST_2_HASH = Aws::Utils::HashingUtils::HashString(AP_SOUTHEAST_2);

static const char* const AP_SOUTH_1_STR = "ap-south-1";
static const int AP_SOUTH_1_HASH = Aws::Utils::HashingUtils::HashString(AP_SOUTH_1_STR);

static const char* const AP_NORTHEAST_1_STR = "ap-northeast-1";
static const int AP_NORTHEAST_1_HASH = Aws::Utils::HashingUtils::HashString(AP_NORTHEAST_1_STR);

static const char* const AP_NORTHEAST_2_STR = "ap-northeast-2";
static const int AP_NORTHEAST_2_HASH = Aws::Utils::HashingUtils::HashString(AP_NORTHEAST_2_STR);

static const char* const SA_EAST_1_STR = "sa-east-1";
static const int SA_EAST_1_HASH = Aws::Utils::HashingUtils::HashString(SA_EAST_1_STR);

const char* GetRegionName(Region region) 
{ 
    switch (region)
    {
        case Region::US_EAST_1:
            return US_EAST_1_STR;
        case Region::US_WEST_1:
            return US_WEST_1_STR;
        case Region::US_WEST_2:
            return US_WEST_2_STR;
        case Region::EU_WEST_1:
            return EU_WEST_1_STR;
        case Region::EU_CENTRAL_1:
            return EU_CENTRAL_1_STR;
        case Region::AP_SOUTHEAST_1:
            return AP_SOUTHEAST_1;
        case Region::AP_SOUTHEAST_2:
            return AP_SOUTHEAST_2;
        case Region::AP_SOUTH_1:
            return AP_SOUTH_1_STR;
        case Region::AP_NORTHEAST_1:
            return AP_NORTHEAST_1_STR;
        case Region::AP_NORTHEAST_2:
            return AP_NORTHEAST_2_STR;
        case Region::SA_EAST_1:
            return SA_EAST_1_STR;
        default:
            return US_EAST_1_STR;
    }
}

Region GetRegionFromName(const char* regionName)
{
    //Turn that O(n) frown upside down to a K. Compute hash and let the compiler do a jump table optimization.
    //One more reason why you shouldn't be using -fPIC.
    auto hash = Aws::Utils::HashingUtils::HashString(regionName);

    if(hash == US_EAST_1_HASH)
    {
        return Region::US_EAST_1;
    }
    else if(hash == US_WEST_1_HASH)
    {
        return Region::US_WEST_1;
    }
    else if(hash == US_WEST_2_HASH)
    {
        return Region::US_WEST_2;
    }
    else if(hash == EU_WEST_1_HASH)
    {
        return Region::EU_WEST_1;
    }
    else if(hash == EU_CENTRAL_1_HASH)
    {
        return Region::EU_CENTRAL_1;
    }
    else if(hash == AP_SOUTHEAST_1_HASH)
    {
        return Region::AP_SOUTHEAST_1;
    }
    else if(hash == AP_SOUTHEAST_2_HASH)
    {
        return Region::AP_SOUTHEAST_2;
    }
    else if(hash == AP_SOUTH_1_HASH)
    {
        return Region::AP_SOUTH_1;
    }
    else if(hash == AP_NORTHEAST_1_HASH)
    {
        return Region::AP_NORTHEAST_1;
    }
    else if(hash == AP_NORTHEAST_2_HASH)
    {
        return Region::AP_NORTHEAST_2;
    }
    else if(hash == SA_EAST_1_HASH)
    {
        return Region::SA_EAST_1;
    }
    else
    {
        return Region::US_EAST_1;
    }
}

} // namespace RegionMapper
} // namespace Aws
