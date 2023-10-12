/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/BandwidthUnits.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GroundStation
  {
    namespace Model
    {
      namespace BandwidthUnitsMapper
      {

        static constexpr uint32_t GHz_HASH = ConstExprHashingUtils::HashString("GHz");
        static constexpr uint32_t MHz_HASH = ConstExprHashingUtils::HashString("MHz");
        static constexpr uint32_t kHz_HASH = ConstExprHashingUtils::HashString("kHz");


        BandwidthUnits GetBandwidthUnitsForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GHz_HASH)
          {
            return BandwidthUnits::GHz;
          }
          else if (hashCode == MHz_HASH)
          {
            return BandwidthUnits::MHz;
          }
          else if (hashCode == kHz_HASH)
          {
            return BandwidthUnits::kHz;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BandwidthUnits>(hashCode);
          }

          return BandwidthUnits::NOT_SET;
        }

        Aws::String GetNameForBandwidthUnits(BandwidthUnits enumValue)
        {
          switch(enumValue)
          {
          case BandwidthUnits::NOT_SET:
            return {};
          case BandwidthUnits::GHz:
            return "GHz";
          case BandwidthUnits::MHz:
            return "MHz";
          case BandwidthUnits::kHz:
            return "kHz";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BandwidthUnitsMapper
    } // namespace Model
  } // namespace GroundStation
} // namespace Aws
