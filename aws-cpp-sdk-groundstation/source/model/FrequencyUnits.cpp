/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/FrequencyUnits.h>
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
      namespace FrequencyUnitsMapper
      {

        static const int GHz_HASH = HashingUtils::HashString("GHz");
        static const int MHz_HASH = HashingUtils::HashString("MHz");
        static const int kHz_HASH = HashingUtils::HashString("kHz");


        FrequencyUnits GetFrequencyUnitsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GHz_HASH)
          {
            return FrequencyUnits::GHz;
          }
          else if (hashCode == MHz_HASH)
          {
            return FrequencyUnits::MHz;
          }
          else if (hashCode == kHz_HASH)
          {
            return FrequencyUnits::kHz;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FrequencyUnits>(hashCode);
          }

          return FrequencyUnits::NOT_SET;
        }

        Aws::String GetNameForFrequencyUnits(FrequencyUnits enumValue)
        {
          switch(enumValue)
          {
          case FrequencyUnits::GHz:
            return "GHz";
          case FrequencyUnits::MHz:
            return "MHz";
          case FrequencyUnits::kHz:
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

      } // namespace FrequencyUnitsMapper
    } // namespace Model
  } // namespace GroundStation
} // namespace Aws
