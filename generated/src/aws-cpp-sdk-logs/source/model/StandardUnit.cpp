/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/StandardUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchLogs
  {
    namespace Model
    {
      namespace StandardUnitMapper
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


        StandardUnit GetStandardUnitForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Seconds_HASH)
          {
            return StandardUnit::Seconds;
          }
          else if (hashCode == Microseconds_HASH)
          {
            return StandardUnit::Microseconds;
          }
          else if (hashCode == Milliseconds_HASH)
          {
            return StandardUnit::Milliseconds;
          }
          else if (hashCode == Bytes_HASH)
          {
            return StandardUnit::Bytes;
          }
          else if (hashCode == Kilobytes_HASH)
          {
            return StandardUnit::Kilobytes;
          }
          else if (hashCode == Megabytes_HASH)
          {
            return StandardUnit::Megabytes;
          }
          else if (hashCode == Gigabytes_HASH)
          {
            return StandardUnit::Gigabytes;
          }
          else if (hashCode == Terabytes_HASH)
          {
            return StandardUnit::Terabytes;
          }
          else if (hashCode == Bits_HASH)
          {
            return StandardUnit::Bits;
          }
          else if (hashCode == Kilobits_HASH)
          {
            return StandardUnit::Kilobits;
          }
          else if (hashCode == Megabits_HASH)
          {
            return StandardUnit::Megabits;
          }
          else if (hashCode == Gigabits_HASH)
          {
            return StandardUnit::Gigabits;
          }
          else if (hashCode == Terabits_HASH)
          {
            return StandardUnit::Terabits;
          }
          else if (hashCode == Percent_HASH)
          {
            return StandardUnit::Percent;
          }
          else if (hashCode == Count_HASH)
          {
            return StandardUnit::Count;
          }
          else if (hashCode == Bytes_Second_HASH)
          {
            return StandardUnit::Bytes_Second;
          }
          else if (hashCode == Kilobytes_Second_HASH)
          {
            return StandardUnit::Kilobytes_Second;
          }
          else if (hashCode == Megabytes_Second_HASH)
          {
            return StandardUnit::Megabytes_Second;
          }
          else if (hashCode == Gigabytes_Second_HASH)
          {
            return StandardUnit::Gigabytes_Second;
          }
          else if (hashCode == Terabytes_Second_HASH)
          {
            return StandardUnit::Terabytes_Second;
          }
          else if (hashCode == Bits_Second_HASH)
          {
            return StandardUnit::Bits_Second;
          }
          else if (hashCode == Kilobits_Second_HASH)
          {
            return StandardUnit::Kilobits_Second;
          }
          else if (hashCode == Megabits_Second_HASH)
          {
            return StandardUnit::Megabits_Second;
          }
          else if (hashCode == Gigabits_Second_HASH)
          {
            return StandardUnit::Gigabits_Second;
          }
          else if (hashCode == Terabits_Second_HASH)
          {
            return StandardUnit::Terabits_Second;
          }
          else if (hashCode == Count_Second_HASH)
          {
            return StandardUnit::Count_Second;
          }
          else if (hashCode == None_HASH)
          {
            return StandardUnit::None;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StandardUnit>(hashCode);
          }

          return StandardUnit::NOT_SET;
        }

        Aws::String GetNameForStandardUnit(StandardUnit enumValue)
        {
          switch(enumValue)
          {
          case StandardUnit::NOT_SET:
            return {};
          case StandardUnit::Seconds:
            return "Seconds";
          case StandardUnit::Microseconds:
            return "Microseconds";
          case StandardUnit::Milliseconds:
            return "Milliseconds";
          case StandardUnit::Bytes:
            return "Bytes";
          case StandardUnit::Kilobytes:
            return "Kilobytes";
          case StandardUnit::Megabytes:
            return "Megabytes";
          case StandardUnit::Gigabytes:
            return "Gigabytes";
          case StandardUnit::Terabytes:
            return "Terabytes";
          case StandardUnit::Bits:
            return "Bits";
          case StandardUnit::Kilobits:
            return "Kilobits";
          case StandardUnit::Megabits:
            return "Megabits";
          case StandardUnit::Gigabits:
            return "Gigabits";
          case StandardUnit::Terabits:
            return "Terabits";
          case StandardUnit::Percent:
            return "Percent";
          case StandardUnit::Count:
            return "Count";
          case StandardUnit::Bytes_Second:
            return "Bytes/Second";
          case StandardUnit::Kilobytes_Second:
            return "Kilobytes/Second";
          case StandardUnit::Megabytes_Second:
            return "Megabytes/Second";
          case StandardUnit::Gigabytes_Second:
            return "Gigabytes/Second";
          case StandardUnit::Terabytes_Second:
            return "Terabytes/Second";
          case StandardUnit::Bits_Second:
            return "Bits/Second";
          case StandardUnit::Kilobits_Second:
            return "Kilobits/Second";
          case StandardUnit::Megabits_Second:
            return "Megabits/Second";
          case StandardUnit::Gigabits_Second:
            return "Gigabits/Second";
          case StandardUnit::Terabits_Second:
            return "Terabits/Second";
          case StandardUnit::Count_Second:
            return "Count/Second";
          case StandardUnit::None:
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

      } // namespace StandardUnitMapper
    } // namespace Model
  } // namespace CloudWatchLogs
} // namespace Aws
