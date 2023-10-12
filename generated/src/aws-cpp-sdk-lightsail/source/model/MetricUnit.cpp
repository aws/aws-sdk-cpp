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


        MetricUnit GetMetricUnitForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case MetricUnit::NOT_SET:
            return {};
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
