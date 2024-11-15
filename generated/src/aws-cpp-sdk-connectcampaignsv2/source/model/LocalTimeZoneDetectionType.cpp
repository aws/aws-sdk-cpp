/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/LocalTimeZoneDetectionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectCampaignsV2
  {
    namespace Model
    {
      namespace LocalTimeZoneDetectionTypeMapper
      {

        static const int ZIP_CODE_HASH = HashingUtils::HashString("ZIP_CODE");
        static const int AREA_CODE_HASH = HashingUtils::HashString("AREA_CODE");


        LocalTimeZoneDetectionType GetLocalTimeZoneDetectionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ZIP_CODE_HASH)
          {
            return LocalTimeZoneDetectionType::ZIP_CODE;
          }
          else if (hashCode == AREA_CODE_HASH)
          {
            return LocalTimeZoneDetectionType::AREA_CODE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LocalTimeZoneDetectionType>(hashCode);
          }

          return LocalTimeZoneDetectionType::NOT_SET;
        }

        Aws::String GetNameForLocalTimeZoneDetectionType(LocalTimeZoneDetectionType enumValue)
        {
          switch(enumValue)
          {
          case LocalTimeZoneDetectionType::NOT_SET:
            return {};
          case LocalTimeZoneDetectionType::ZIP_CODE:
            return "ZIP_CODE";
          case LocalTimeZoneDetectionType::AREA_CODE:
            return "AREA_CODE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LocalTimeZoneDetectionTypeMapper
    } // namespace Model
  } // namespace ConnectCampaignsV2
} // namespace Aws
