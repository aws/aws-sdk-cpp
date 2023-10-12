/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/EntitlementUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LicenseManager
  {
    namespace Model
    {
      namespace EntitlementUnitMapper
      {

        static constexpr uint32_t Count_HASH = ConstExprHashingUtils::HashString("Count");
        static constexpr uint32_t None_HASH = ConstExprHashingUtils::HashString("None");
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


        EntitlementUnit GetEntitlementUnitForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Count_HASH)
          {
            return EntitlementUnit::Count;
          }
          else if (hashCode == None_HASH)
          {
            return EntitlementUnit::None;
          }
          else if (hashCode == Seconds_HASH)
          {
            return EntitlementUnit::Seconds;
          }
          else if (hashCode == Microseconds_HASH)
          {
            return EntitlementUnit::Microseconds;
          }
          else if (hashCode == Milliseconds_HASH)
          {
            return EntitlementUnit::Milliseconds;
          }
          else if (hashCode == Bytes_HASH)
          {
            return EntitlementUnit::Bytes;
          }
          else if (hashCode == Kilobytes_HASH)
          {
            return EntitlementUnit::Kilobytes;
          }
          else if (hashCode == Megabytes_HASH)
          {
            return EntitlementUnit::Megabytes;
          }
          else if (hashCode == Gigabytes_HASH)
          {
            return EntitlementUnit::Gigabytes;
          }
          else if (hashCode == Terabytes_HASH)
          {
            return EntitlementUnit::Terabytes;
          }
          else if (hashCode == Bits_HASH)
          {
            return EntitlementUnit::Bits;
          }
          else if (hashCode == Kilobits_HASH)
          {
            return EntitlementUnit::Kilobits;
          }
          else if (hashCode == Megabits_HASH)
          {
            return EntitlementUnit::Megabits;
          }
          else if (hashCode == Gigabits_HASH)
          {
            return EntitlementUnit::Gigabits;
          }
          else if (hashCode == Terabits_HASH)
          {
            return EntitlementUnit::Terabits;
          }
          else if (hashCode == Percent_HASH)
          {
            return EntitlementUnit::Percent;
          }
          else if (hashCode == Bytes_Second_HASH)
          {
            return EntitlementUnit::Bytes_Second;
          }
          else if (hashCode == Kilobytes_Second_HASH)
          {
            return EntitlementUnit::Kilobytes_Second;
          }
          else if (hashCode == Megabytes_Second_HASH)
          {
            return EntitlementUnit::Megabytes_Second;
          }
          else if (hashCode == Gigabytes_Second_HASH)
          {
            return EntitlementUnit::Gigabytes_Second;
          }
          else if (hashCode == Terabytes_Second_HASH)
          {
            return EntitlementUnit::Terabytes_Second;
          }
          else if (hashCode == Bits_Second_HASH)
          {
            return EntitlementUnit::Bits_Second;
          }
          else if (hashCode == Kilobits_Second_HASH)
          {
            return EntitlementUnit::Kilobits_Second;
          }
          else if (hashCode == Megabits_Second_HASH)
          {
            return EntitlementUnit::Megabits_Second;
          }
          else if (hashCode == Gigabits_Second_HASH)
          {
            return EntitlementUnit::Gigabits_Second;
          }
          else if (hashCode == Terabits_Second_HASH)
          {
            return EntitlementUnit::Terabits_Second;
          }
          else if (hashCode == Count_Second_HASH)
          {
            return EntitlementUnit::Count_Second;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EntitlementUnit>(hashCode);
          }

          return EntitlementUnit::NOT_SET;
        }

        Aws::String GetNameForEntitlementUnit(EntitlementUnit enumValue)
        {
          switch(enumValue)
          {
          case EntitlementUnit::NOT_SET:
            return {};
          case EntitlementUnit::Count:
            return "Count";
          case EntitlementUnit::None:
            return "None";
          case EntitlementUnit::Seconds:
            return "Seconds";
          case EntitlementUnit::Microseconds:
            return "Microseconds";
          case EntitlementUnit::Milliseconds:
            return "Milliseconds";
          case EntitlementUnit::Bytes:
            return "Bytes";
          case EntitlementUnit::Kilobytes:
            return "Kilobytes";
          case EntitlementUnit::Megabytes:
            return "Megabytes";
          case EntitlementUnit::Gigabytes:
            return "Gigabytes";
          case EntitlementUnit::Terabytes:
            return "Terabytes";
          case EntitlementUnit::Bits:
            return "Bits";
          case EntitlementUnit::Kilobits:
            return "Kilobits";
          case EntitlementUnit::Megabits:
            return "Megabits";
          case EntitlementUnit::Gigabits:
            return "Gigabits";
          case EntitlementUnit::Terabits:
            return "Terabits";
          case EntitlementUnit::Percent:
            return "Percent";
          case EntitlementUnit::Bytes_Second:
            return "Bytes/Second";
          case EntitlementUnit::Kilobytes_Second:
            return "Kilobytes/Second";
          case EntitlementUnit::Megabytes_Second:
            return "Megabytes/Second";
          case EntitlementUnit::Gigabytes_Second:
            return "Gigabytes/Second";
          case EntitlementUnit::Terabytes_Second:
            return "Terabytes/Second";
          case EntitlementUnit::Bits_Second:
            return "Bits/Second";
          case EntitlementUnit::Kilobits_Second:
            return "Kilobits/Second";
          case EntitlementUnit::Megabits_Second:
            return "Megabits/Second";
          case EntitlementUnit::Gigabits_Second:
            return "Gigabits/Second";
          case EntitlementUnit::Terabits_Second:
            return "Terabits/Second";
          case EntitlementUnit::Count_Second:
            return "Count/Second";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EntitlementUnitMapper
    } // namespace Model
  } // namespace LicenseManager
} // namespace Aws
