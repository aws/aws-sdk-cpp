/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/GeoMatchLevel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKVoice
  {
    namespace Model
    {
      namespace GeoMatchLevelMapper
      {

        static const int Country_HASH = HashingUtils::HashString("Country");
        static const int AreaCode_HASH = HashingUtils::HashString("AreaCode");


        GeoMatchLevel GetGeoMatchLevelForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Country_HASH)
          {
            return GeoMatchLevel::Country;
          }
          else if (hashCode == AreaCode_HASH)
          {
            return GeoMatchLevel::AreaCode;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GeoMatchLevel>(hashCode);
          }

          return GeoMatchLevel::NOT_SET;
        }

        Aws::String GetNameForGeoMatchLevel(GeoMatchLevel enumValue)
        {
          switch(enumValue)
          {
          case GeoMatchLevel::Country:
            return "Country";
          case GeoMatchLevel::AreaCode:
            return "AreaCode";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GeoMatchLevelMapper
    } // namespace Model
  } // namespace ChimeSDKVoice
} // namespace Aws
