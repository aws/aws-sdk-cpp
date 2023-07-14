/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/HlsAdMarkers.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace HlsAdMarkersMapper
      {

        static const int ADOBE_HASH = HashingUtils::HashString("ADOBE");
        static const int ELEMENTAL_HASH = HashingUtils::HashString("ELEMENTAL");
        static const int ELEMENTAL_SCTE35_HASH = HashingUtils::HashString("ELEMENTAL_SCTE35");


        HlsAdMarkers GetHlsAdMarkersForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADOBE_HASH)
          {
            return HlsAdMarkers::ADOBE;
          }
          else if (hashCode == ELEMENTAL_HASH)
          {
            return HlsAdMarkers::ELEMENTAL;
          }
          else if (hashCode == ELEMENTAL_SCTE35_HASH)
          {
            return HlsAdMarkers::ELEMENTAL_SCTE35;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsAdMarkers>(hashCode);
          }

          return HlsAdMarkers::NOT_SET;
        }

        Aws::String GetNameForHlsAdMarkers(HlsAdMarkers enumValue)
        {
          switch(enumValue)
          {
          case HlsAdMarkers::ADOBE:
            return "ADOBE";
          case HlsAdMarkers::ELEMENTAL:
            return "ELEMENTAL";
          case HlsAdMarkers::ELEMENTAL_SCTE35:
            return "ELEMENTAL_SCTE35";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsAdMarkersMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
