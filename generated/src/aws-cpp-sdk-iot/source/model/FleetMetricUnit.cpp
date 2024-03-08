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

        static const int Seconds_HASH = HashingUtils::HashString("Seconds");
        static const int Microseconds_HASH = HashingUtils::HashString("Microseconds");
        static const int Milliseconds_HASH = HashingUtils::HashString("Milliseconds");
        static const int Bytes_HASH = HashingUtils::HashString("Bytes");
        static const int Kilobytes_HASH = HashingUtils::HashString("Kilobytes");
        static const int Megabytes_HASH = HashingUtils::HashString("Megabytes");
        static const int Gigabytes_HASH = HashingUtils::HashString("Gigabytes");
        static const int Terabytes_HASH = HashingUtils::HashString("Terabytes");
        static const int Bits_HASH = HashingUtils::HashString("Bits");
        static const int Kilobits_HASH = HashingUtils::HashString("Kilobits");
        static const int Megabits_HASH = HashingUtils::HashString("Megabits");
        static const int Gigabits_HASH = HashingUtils::HashString("Gigabits");
        static const int Terabits_HASH = HashingUtils::HashString("Terabits");
        static const int Percent_HASH = HashingUtils::HashString("Percent");
        static const int Count_HASH = HashingUtils::HashString("Count");
        static const int Bytes_Second_HASH = HashingUtils::HashString("Bytes/Second");
        static const int Kilobytes_Second_HASH = HashingUtils::HashString("Kilobytes/Second");
        static const int Megabytes_Second_HASH = HashingUtils::HashString("Megabytes/Second");
        static const int Gigabytes_Second_HASH = HashingUtils::HashString("Gigabytes/Second");
        static const int Terabytes_Second_HASH = HashingUtils::HashString("Terabytes/Second");
        static const int Bits_Second_HASH = HashingUtils::HashString("Bits/Second");
        static const int Kilobits_Second_HASH = HashingUtils::HashString("Kilobits/Second");
        static const int Megabits_Second_HASH = HashingUtils::HashString("Megabits/Second");
        static const int Gigabits_Second_HASH = HashingUtils::HashString("Gigabits/Second");
        static const int Terabits_Second_HASH = HashingUtils::HashString("Terabits/Second");
        static const int Count_Second_HASH = HashingUtils::HashString("Count/Second");
        static const int None_HASH = HashingUtils::HashString("None");


        FleetMetricUnit GetFleetMetricUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
