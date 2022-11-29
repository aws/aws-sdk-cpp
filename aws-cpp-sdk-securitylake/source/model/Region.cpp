/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/Region.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityLake
  {
    namespace Model
    {
      namespace RegionMapper
      {

        static const int us_east_1_HASH = HashingUtils::HashString("us-east-1");
        static const int us_west_2_HASH = HashingUtils::HashString("us-west-2");
        static const int eu_central_1_HASH = HashingUtils::HashString("eu-central-1");
        static const int us_east_2_HASH = HashingUtils::HashString("us-east-2");
        static const int eu_west_1_HASH = HashingUtils::HashString("eu-west-1");
        static const int ap_northeast_1_HASH = HashingUtils::HashString("ap-northeast-1");
        static const int ap_southeast_2_HASH = HashingUtils::HashString("ap-southeast-2");


        Region GetRegionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == us_east_1_HASH)
          {
            return Region::us_east_1;
          }
          else if (hashCode == us_west_2_HASH)
          {
            return Region::us_west_2;
          }
          else if (hashCode == eu_central_1_HASH)
          {
            return Region::eu_central_1;
          }
          else if (hashCode == us_east_2_HASH)
          {
            return Region::us_east_2;
          }
          else if (hashCode == eu_west_1_HASH)
          {
            return Region::eu_west_1;
          }
          else if (hashCode == ap_northeast_1_HASH)
          {
            return Region::ap_northeast_1;
          }
          else if (hashCode == ap_southeast_2_HASH)
          {
            return Region::ap_southeast_2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Region>(hashCode);
          }

          return Region::NOT_SET;
        }

        Aws::String GetNameForRegion(Region enumValue)
        {
          switch(enumValue)
          {
          case Region::us_east_1:
            return "us-east-1";
          case Region::us_west_2:
            return "us-west-2";
          case Region::eu_central_1:
            return "eu-central-1";
          case Region::us_east_2:
            return "us-east-2";
          case Region::eu_west_1:
            return "eu-west-1";
          case Region::ap_northeast_1:
            return "ap-northeast-1";
          case Region::ap_southeast_2:
            return "ap-southeast-2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RegionMapper
    } // namespace Model
  } // namespace SecurityLake
} // namespace Aws
