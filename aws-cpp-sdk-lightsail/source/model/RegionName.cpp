﻿/*
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
#include <aws/lightsail/model/RegionName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace RegionNameMapper
      {

        static const int us_east_1_HASH = HashingUtils::HashString("us-east-1");
        static const int us_west_1_HASH = HashingUtils::HashString("us-west-1");
        static const int us_west_2_HASH = HashingUtils::HashString("us-west-2");
        static const int eu_west_1_HASH = HashingUtils::HashString("eu-west-1");
        static const int eu_central_1_HASH = HashingUtils::HashString("eu-central-1");
        static const int ap_south_1_HASH = HashingUtils::HashString("ap-south-1");
        static const int ap_southeast_1_HASH = HashingUtils::HashString("ap-southeast-1");
        static const int ap_southeast_2_HASH = HashingUtils::HashString("ap-southeast-2");
        static const int ap_northeast_1_HASH = HashingUtils::HashString("ap-northeast-1");
        static const int ap_northeast_2_HASH = HashingUtils::HashString("ap-northeast-2");


        RegionName GetRegionNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == us_east_1_HASH)
          {
            return RegionName::us_east_1;
          }
          else if (hashCode == us_west_1_HASH)
          {
            return RegionName::us_west_1;
          }
          else if (hashCode == us_west_2_HASH)
          {
            return RegionName::us_west_2;
          }
          else if (hashCode == eu_west_1_HASH)
          {
            return RegionName::eu_west_1;
          }
          else if (hashCode == eu_central_1_HASH)
          {
            return RegionName::eu_central_1;
          }
          else if (hashCode == ap_south_1_HASH)
          {
            return RegionName::ap_south_1;
          }
          else if (hashCode == ap_southeast_1_HASH)
          {
            return RegionName::ap_southeast_1;
          }
          else if (hashCode == ap_southeast_2_HASH)
          {
            return RegionName::ap_southeast_2;
          }
          else if (hashCode == ap_northeast_1_HASH)
          {
            return RegionName::ap_northeast_1;
          }
          else if (hashCode == ap_northeast_2_HASH)
          {
            return RegionName::ap_northeast_2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RegionName>(hashCode);
          }

          return RegionName::NOT_SET;
        }

        Aws::String GetNameForRegionName(RegionName enumValue)
        {
          switch(enumValue)
          {
          case RegionName::us_east_1:
            return "us-east-1";
          case RegionName::us_west_1:
            return "us-west-1";
          case RegionName::us_west_2:
            return "us-west-2";
          case RegionName::eu_west_1:
            return "eu-west-1";
          case RegionName::eu_central_1:
            return "eu-central-1";
          case RegionName::ap_south_1:
            return "ap-south-1";
          case RegionName::ap_southeast_1:
            return "ap-southeast-1";
          case RegionName::ap_southeast_2:
            return "ap-southeast-2";
          case RegionName::ap_northeast_1:
            return "ap-northeast-1";
          case RegionName::ap_northeast_2:
            return "ap-northeast-2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace RegionNameMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
