/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/TranscribeRegion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace TranscribeRegionMapper
      {

        static const int us_east_2_HASH = HashingUtils::HashString("us-east-2");
        static const int us_east_1_HASH = HashingUtils::HashString("us-east-1");
        static const int us_west_2_HASH = HashingUtils::HashString("us-west-2");
        static const int ap_northeast_2_HASH = HashingUtils::HashString("ap-northeast-2");
        static const int ap_southeast_2_HASH = HashingUtils::HashString("ap-southeast-2");
        static const int ap_northeast_1_HASH = HashingUtils::HashString("ap-northeast-1");
        static const int ca_central_1_HASH = HashingUtils::HashString("ca-central-1");
        static const int eu_central_1_HASH = HashingUtils::HashString("eu-central-1");
        static const int eu_west_1_HASH = HashingUtils::HashString("eu-west-1");
        static const int eu_west_2_HASH = HashingUtils::HashString("eu-west-2");
        static const int sa_east_1_HASH = HashingUtils::HashString("sa-east-1");
        static const int auto__HASH = HashingUtils::HashString("auto");


        TranscribeRegion GetTranscribeRegionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == us_east_2_HASH)
          {
            return TranscribeRegion::us_east_2;
          }
          else if (hashCode == us_east_1_HASH)
          {
            return TranscribeRegion::us_east_1;
          }
          else if (hashCode == us_west_2_HASH)
          {
            return TranscribeRegion::us_west_2;
          }
          else if (hashCode == ap_northeast_2_HASH)
          {
            return TranscribeRegion::ap_northeast_2;
          }
          else if (hashCode == ap_southeast_2_HASH)
          {
            return TranscribeRegion::ap_southeast_2;
          }
          else if (hashCode == ap_northeast_1_HASH)
          {
            return TranscribeRegion::ap_northeast_1;
          }
          else if (hashCode == ca_central_1_HASH)
          {
            return TranscribeRegion::ca_central_1;
          }
          else if (hashCode == eu_central_1_HASH)
          {
            return TranscribeRegion::eu_central_1;
          }
          else if (hashCode == eu_west_1_HASH)
          {
            return TranscribeRegion::eu_west_1;
          }
          else if (hashCode == eu_west_2_HASH)
          {
            return TranscribeRegion::eu_west_2;
          }
          else if (hashCode == sa_east_1_HASH)
          {
            return TranscribeRegion::sa_east_1;
          }
          else if (hashCode == auto__HASH)
          {
            return TranscribeRegion::auto_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TranscribeRegion>(hashCode);
          }

          return TranscribeRegion::NOT_SET;
        }

        Aws::String GetNameForTranscribeRegion(TranscribeRegion enumValue)
        {
          switch(enumValue)
          {
          case TranscribeRegion::NOT_SET:
            return {};
          case TranscribeRegion::us_east_2:
            return "us-east-2";
          case TranscribeRegion::us_east_1:
            return "us-east-1";
          case TranscribeRegion::us_west_2:
            return "us-west-2";
          case TranscribeRegion::ap_northeast_2:
            return "ap-northeast-2";
          case TranscribeRegion::ap_southeast_2:
            return "ap-southeast-2";
          case TranscribeRegion::ap_northeast_1:
            return "ap-northeast-1";
          case TranscribeRegion::ca_central_1:
            return "ca-central-1";
          case TranscribeRegion::eu_central_1:
            return "eu-central-1";
          case TranscribeRegion::eu_west_1:
            return "eu-west-1";
          case TranscribeRegion::eu_west_2:
            return "eu-west-2";
          case TranscribeRegion::sa_east_1:
            return "sa-east-1";
          case TranscribeRegion::auto_:
            return "auto";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TranscribeRegionMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
