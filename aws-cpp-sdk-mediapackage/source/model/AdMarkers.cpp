/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/AdMarkers.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaPackage
  {
    namespace Model
    {
      namespace AdMarkersMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int SCTE35_ENHANCED_HASH = HashingUtils::HashString("SCTE35_ENHANCED");
        static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");
        static const int DATERANGE_HASH = HashingUtils::HashString("DATERANGE");


        AdMarkers GetAdMarkersForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return AdMarkers::NONE;
          }
          else if (hashCode == SCTE35_ENHANCED_HASH)
          {
            return AdMarkers::SCTE35_ENHANCED;
          }
          else if (hashCode == PASSTHROUGH_HASH)
          {
            return AdMarkers::PASSTHROUGH;
          }
          else if (hashCode == DATERANGE_HASH)
          {
            return AdMarkers::DATERANGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdMarkers>(hashCode);
          }

          return AdMarkers::NOT_SET;
        }

        Aws::String GetNameForAdMarkers(AdMarkers enumValue)
        {
          switch(enumValue)
          {
          case AdMarkers::NONE:
            return "NONE";
          case AdMarkers::SCTE35_ENHANCED:
            return "SCTE35_ENHANCED";
          case AdMarkers::PASSTHROUGH:
            return "PASSTHROUGH";
          case AdMarkers::DATERANGE:
            return "DATERANGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdMarkersMapper
    } // namespace Model
  } // namespace MediaPackage
} // namespace Aws
