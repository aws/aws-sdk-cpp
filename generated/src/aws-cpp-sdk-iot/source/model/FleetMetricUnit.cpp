/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/FleetMetricUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace FleetMetricUnitMapper
      {

        static constexpr uint32_t Seconds_HASH = ConstExprHashingUtils::HashString("Seconds");
        static constexpr uint32_t Microseconds_HASH = ConstExprHashingUtils::HashString("Microseconds");
        static constexpr uint32_t Milliseconds_HASH = ConstExprHashingUtils::HashString("Milliseconds");
        static constexpr uint32_t Bytes_HASH = ConstExprHashingUtils::HashString("Bytes");
        static constexpr uint32_t Kilobytes_HASH = ConstExprHashingUtils::HashString("Kilobytes");
        static constexpr uint32_t Megabytes_HASH = ConstExprHashingUtils::HashString("Megabytes");
        static constexpr uint32_t Gigabytes_HASH = ConstExprHashingUtils::HashString("Gigabytes");
        static constexpr uint32_t Terabytes_HASH = ConstExprHashingUtils::HashString("Terabytes");
        static constexpr uint32_t Bits_HASH = ConstExprHashingUtils::HashString("Bits");
        static constexpr uint32_t Kilobits_HASH = ConstExprHashingUtils::HashString("Kilobits");
        static constexpr uint32_t Megabits_HASH = ConstExprHashingUtils::HashString("Megabits");
        static constexpr uint32_t Gigabits_HASH = ConstExprHashingUtils::HashString("Gigabits");
        static constexpr uint32_t Terabits_HASH = ConstExprHashingUtils::HashString("Terabits");
        static constexpr uint32_t Percent_HASH = ConstExprHashingUtils::HashString("Percent");
        static constexpr uint32_t Count_HASH = ConstExprHashingUtils::HashString("Count");
        static constexpr uint32_t Bytes_Second_HASH = ConstExprHashingUtils::HashString("Bytes/Second");
        static constexpr uint32_t Kilobytes_Second_HASH = ConstExprHashingUtils::HashString("Kilobytes/Second");
        static constexpr uint32_t Megabytes_Second_HASH = ConstExprHashingUtils::HashString("Megabytes/Second");
        static constexpr uint32_t Gigabytes_Second_HASH = ConstExprHashingUtils::HashString("Gigabytes/Second");
        static constexpr uint32_t Terabytes_Second_HASH = ConstExprHashingUtils::HashString("Terabytes/Second");
        static constexpr uint32_t Bits_Second_HASH = ConstExprHashingUtils::HashString("Bits/Second");
        static constexpr uint32_t Kilobits_Second_HASH = ConstExprHashingUtils::HashString("Kilobits/Second");
        static constexpr uint32_t Megabits_Second_HASH = ConstExprHashingUtils::HashString("Megabits/Second");
        static constexpr uint32_t Gigabits_Second_HASH = ConstExprHashingUtils::HashString("Gigabits/Second");
        static constexpr uint32_t Terabits_Second_HASH = ConstExprHashingUtils::HashString("Terabits/Second");
        static constexpr uint32_t Count_Second_HASH = ConstExprHashingUtils::HashString("Count/Second");
        static constexpr uint32_t None_HASH = ConstExprHashingUtils::HashString("None");


        FleetMetricUnit GetFleetMetricUnitForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Seconds_HASH)
          {
            return FleetMetricUnit::Seconds;
          }
          else if (hashCode == Microseconds_HASH)
          {
            return FleetMetricUnit::Microseconds;
          }
          else if (hashCode == Milliseconds_HASH)
          {
            return FleetMetricUnit::Milliseconds;
          }
          else if (hashCode == Bytes_HASH)
          {
            return FleetMetricUnit::Bytes;
          }
          else if (hashCode == Kilobytes_HASH)
          {
            return FleetMetricUnit::Kilobytes;
          }
          else if (hashCode == Megabytes_HASH)
          {
            return FleetMetricUnit::Megabytes;
          }
          else if (hashCode == Gigabytes_HASH)
          {
            return FleetMetricUnit::Gigabytes;
          }
          else if (hashCode == Terabytes_HASH)
          {
            return FleetMetricUnit::Terabytes;
          }
          else if (hashCode == Bits_HASH)
          {
            return FleetMetricUnit::Bits;
          }
          else if (hashCode == Kilobits_HASH)
          {
            return FleetMetricUnit::Kilobits;
          }
          else if (hashCode == Megabits_HASH)
          {
            return FleetMetricUnit::Megabits;
          }
          else if (hashCode == Gigabits_HASH)
          {
            return FleetMetricUnit::Gigabits;
          }
          else if (hashCode == Terabits_HASH)
          {
            return FleetMetricUnit::Terabits;
          }
          else if (hashCode == Percent_HASH)
          {
            return FleetMetricUnit::Percent;
          }
          else if (hashCode == Count_HASH)
          {
            return FleetMetricUnit::Count;
          }
          else if (hashCode == Bytes_Second_HASH)
          {
            return FleetMetricUnit::Bytes_Second;
          }
          else if (hashCode == Kilobytes_Second_HASH)
          {
            return FleetMetricUnit::Kilobytes_Second;
          }
          else if (hashCode == Megabytes_Second_HASH)
          {
            return FleetMetricUnit::Megabytes_Second;
          }
          else if (hashCode == Gigabytes_Second_HASH)
          {
            return FleetMetricUnit::Gigabytes_Second;
          }
          else if (hashCode == Terabytes_Second_HASH)
          {
            return FleetMetricUnit::Terabytes_Second;
          }
          else if (hashCode == Bits_Second_HASH)
          {
            return FleetMetricUnit::Bits_Second;
          }
          else if (hashCode == Kilobits_Second_HASH)
          {
            return FleetMetricUnit::Kilobits_Second;
          }
          else if (hashCode == Megabits_Second_HASH)
          {
            return FleetMetricUnit::Megabits_Second;
          }
          else if (hashCode == Gigabits_Second_HASH)
          {
            return FleetMetricUnit::Gigabits_Second;
          }
          else if (hashCode == Terabits_Second_HASH)
          {
            return FleetMetricUnit::Terabits_Second;
          }
          else if (hashCode == Count_Second_HASH)
          {
            return FleetMetricUnit::Count_Second;
          }
          else if (hashCode == None_HASH)
          {
            return FleetMetricUnit::None;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetMetricUnit>(hashCode);
          }

          return FleetMetricUnit::NOT_SET;
        }

        Aws::String GetNameForFleetMetricUnit(FleetMetricUnit enumValue)
        {
          switch(enumValue)
          {
          case FleetMetricUnit::NOT_SET:
            return {};
          case FleetMetricUnit::Seconds:
            return "Seconds";
          case FleetMetricUnit::Microseconds:
            return "Microseconds";
          case FleetMetricUnit::Milliseconds:
            return "Milliseconds";
          case FleetMetricUnit::Bytes:
            return "Bytes";
          case FleetMetricUnit::Kilobytes:
            return "Kilobytes";
          case FleetMetricUnit::Megabytes:
            return "Megabytes";
          case FleetMetricUnit::Gigabytes:
            return "Gigabytes";
          case FleetMetricUnit::Terabytes:
            return "Terabytes";
          case FleetMetricUnit::Bits:
            return "Bits";
          case FleetMetricUnit::Kilobits:
            return "Kilobits";
          case FleetMetricUnit::Megabits:
            return "Megabits";
          case FleetMetricUnit::Gigabits:
            return "Gigabits";
          case FleetMetricUnit::Terabits:
            return "Terabits";
          case FleetMetricUnit::Percent:
            return "Percent";
          case FleetMetricUnit::Count:
            return "Count";
          case FleetMetricUnit::Bytes_Second:
            return "Bytes/Second";
          case FleetMetricUnit::Kilobytes_Second:
            return "Kilobytes/Second";
          case FleetMetricUnit::Megabytes_Second:
            return "Megabytes/Second";
          case FleetMetricUnit::Gigabytes_Second:
            return "Gigabytes/Second";
          case FleetMetricUnit::Terabytes_Second:
            return "Terabytes/Second";
          case FleetMetricUnit::Bits_Second:
            return "Bits/Second";
          case FleetMetricUnit::Kilobits_Second:
            return "Kilobits/Second";
          case FleetMetricUnit::Megabits_Second:
            return "Megabits/Second";
          case FleetMetricUnit::Gigabits_Second:
            return "Gigabits/Second";
          case FleetMetricUnit::Terabits_Second:
            return "Terabits/Second";
          case FleetMetricUnit::Count_Second:
            return "Count/Second";
          case FleetMetricUnit::None:
            return "None";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetMetricUnitMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
