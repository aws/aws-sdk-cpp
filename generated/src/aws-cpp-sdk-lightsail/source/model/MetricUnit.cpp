/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/MetricUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace MetricUnitMapper
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


        MetricUnit GetMetricUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Seconds_HASH)
          {
            return MetricUnit::Seconds;
          }
          else if (hashCode == Microseconds_HASH)
          {
            return MetricUnit::Microseconds;
          }
          else if (hashCode == Milliseconds_HASH)
          {
            return MetricUnit::Milliseconds;
          }
          else if (hashCode == Bytes_HASH)
          {
            return MetricUnit::Bytes;
          }
          else if (hashCode == Kilobytes_HASH)
          {
            return MetricUnit::Kilobytes;
          }
          else if (hashCode == Megabytes_HASH)
          {
            return MetricUnit::Megabytes;
          }
          else if (hashCode == Gigabytes_HASH)
          {
            return MetricUnit::Gigabytes;
          }
          else if (hashCode == Terabytes_HASH)
          {
            return MetricUnit::Terabytes;
          }
          else if (hashCode == Bits_HASH)
          {
            return MetricUnit::Bits;
          }
          else if (hashCode == Kilobits_HASH)
          {
            return MetricUnit::Kilobits;
          }
          else if (hashCode == Megabits_HASH)
          {
            return MetricUnit::Megabits;
          }
          else if (hashCode == Gigabits_HASH)
          {
            return MetricUnit::Gigabits;
          }
          else if (hashCode == Terabits_HASH)
          {
            return MetricUnit::Terabits;
          }
          else if (hashCode == Percent_HASH)
          {
            return MetricUnit::Percent;
          }
          else if (hashCode == Count_HASH)
          {
            return MetricUnit::Count;
          }
          else if (hashCode == Bytes_Second_HASH)
          {
            return MetricUnit::Bytes_Second;
          }
          else if (hashCode == Kilobytes_Second_HASH)
          {
            return MetricUnit::Kilobytes_Second;
          }
          else if (hashCode == Megabytes_Second_HASH)
          {
            return MetricUnit::Megabytes_Second;
          }
          else if (hashCode == Gigabytes_Second_HASH)
          {
            return MetricUnit::Gigabytes_Second;
          }
          else if (hashCode == Terabytes_Second_HASH)
          {
            return MetricUnit::Terabytes_Second;
          }
          else if (hashCode == Bits_Second_HASH)
          {
            return MetricUnit::Bits_Second;
          }
          else if (hashCode == Kilobits_Second_HASH)
          {
            return MetricUnit::Kilobits_Second;
          }
          else if (hashCode == Megabits_Second_HASH)
          {
            return MetricUnit::Megabits_Second;
          }
          else if (hashCode == Gigabits_Second_HASH)
          {
            return MetricUnit::Gigabits_Second;
          }
          else if (hashCode == Terabits_Second_HASH)
          {
            return MetricUnit::Terabits_Second;
          }
          else if (hashCode == Count_Second_HASH)
          {
            return MetricUnit::Count_Second;
          }
          else if (hashCode == None_HASH)
          {
            return MetricUnit::None;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricUnit>(hashCode);
          }

          return MetricUnit::NOT_SET;
        }

        Aws::String GetNameForMetricUnit(MetricUnit enumValue)
        {
          switch(enumValue)
          {
          case MetricUnit::Seconds:
            return "Seconds";
          case MetricUnit::Microseconds:
            return "Microseconds";
          case MetricUnit::Milliseconds:
            return "Milliseconds";
          case MetricUnit::Bytes:
            return "Bytes";
          case MetricUnit::Kilobytes:
            return "Kilobytes";
          case MetricUnit::Megabytes:
            return "Megabytes";
          case MetricUnit::Gigabytes:
            return "Gigabytes";
          case MetricUnit::Terabytes:
            return "Terabytes";
          case MetricUnit::Bits:
            return "Bits";
          case MetricUnit::Kilobits:
            return "Kilobits";
          case MetricUnit::Megabits:
            return "Megabits";
          case MetricUnit::Gigabits:
            return "Gigabits";
          case MetricUnit::Terabits:
            return "Terabits";
          case MetricUnit::Percent:
            return "Percent";
          case MetricUnit::Count:
            return "Count";
          case MetricUnit::Bytes_Second:
            return "Bytes/Second";
          case MetricUnit::Kilobytes_Second:
            return "Kilobytes/Second";
          case MetricUnit::Megabytes_Second:
            return "Megabytes/Second";
          case MetricUnit::Gigabytes_Second:
            return "Gigabytes/Second";
          case MetricUnit::Terabytes_Second:
            return "Terabytes/Second";
          case MetricUnit::Bits_Second:
            return "Bits/Second";
          case MetricUnit::Kilobits_Second:
            return "Kilobits/Second";
          case MetricUnit::Megabits_Second:
            return "Megabits/Second";
          case MetricUnit::Gigabits_Second:
            return "Gigabits/Second";
          case MetricUnit::Terabits_Second:
            return "Terabits/Second";
          case MetricUnit::Count_Second:
            return "Count/Second";
          case MetricUnit::None:
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

      } // namespace MetricUnitMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
