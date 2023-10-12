/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/EntitlementDataUnit.h>
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
      namespace EntitlementDataUnitMapper
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


        EntitlementDataUnit GetEntitlementDataUnitForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Count_HASH)
          {
            return EntitlementDataUnit::Count;
          }
          else if (hashCode == None_HASH)
          {
            return EntitlementDataUnit::None;
          }
          else if (hashCode == Seconds_HASH)
          {
            return EntitlementDataUnit::Seconds;
          }
          else if (hashCode == Microseconds_HASH)
          {
            return EntitlementDataUnit::Microseconds;
          }
          else if (hashCode == Milliseconds_HASH)
          {
            return EntitlementDataUnit::Milliseconds;
          }
          else if (hashCode == Bytes_HASH)
          {
            return EntitlementDataUnit::Bytes;
          }
          else if (hashCode == Kilobytes_HASH)
          {
            return EntitlementDataUnit::Kilobytes;
          }
          else if (hashCode == Megabytes_HASH)
          {
            return EntitlementDataUnit::Megabytes;
          }
          else if (hashCode == Gigabytes_HASH)
          {
            return EntitlementDataUnit::Gigabytes;
          }
          else if (hashCode == Terabytes_HASH)
          {
            return EntitlementDataUnit::Terabytes;
          }
          else if (hashCode == Bits_HASH)
          {
            return EntitlementDataUnit::Bits;
          }
          else if (hashCode == Kilobits_HASH)
          {
            return EntitlementDataUnit::Kilobits;
          }
          else if (hashCode == Megabits_HASH)
          {
            return EntitlementDataUnit::Megabits;
          }
          else if (hashCode == Gigabits_HASH)
          {
            return EntitlementDataUnit::Gigabits;
          }
          else if (hashCode == Terabits_HASH)
          {
            return EntitlementDataUnit::Terabits;
          }
          else if (hashCode == Percent_HASH)
          {
            return EntitlementDataUnit::Percent;
          }
          else if (hashCode == Bytes_Second_HASH)
          {
            return EntitlementDataUnit::Bytes_Second;
          }
          else if (hashCode == Kilobytes_Second_HASH)
          {
            return EntitlementDataUnit::Kilobytes_Second;
          }
          else if (hashCode == Megabytes_Second_HASH)
          {
            return EntitlementDataUnit::Megabytes_Second;
          }
          else if (hashCode == Gigabytes_Second_HASH)
          {
            return EntitlementDataUnit::Gigabytes_Second;
          }
          else if (hashCode == Terabytes_Second_HASH)
          {
            return EntitlementDataUnit::Terabytes_Second;
          }
          else if (hashCode == Bits_Second_HASH)
          {
            return EntitlementDataUnit::Bits_Second;
          }
          else if (hashCode == Kilobits_Second_HASH)
          {
            return EntitlementDataUnit::Kilobits_Second;
          }
          else if (hashCode == Megabits_Second_HASH)
          {
            return EntitlementDataUnit::Megabits_Second;
          }
          else if (hashCode == Gigabits_Second_HASH)
          {
            return EntitlementDataUnit::Gigabits_Second;
          }
          else if (hashCode == Terabits_Second_HASH)
          {
            return EntitlementDataUnit::Terabits_Second;
          }
          else if (hashCode == Count_Second_HASH)
          {
            return EntitlementDataUnit::Count_Second;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EntitlementDataUnit>(hashCode);
          }

          return EntitlementDataUnit::NOT_SET;
        }

        Aws::String GetNameForEntitlementDataUnit(EntitlementDataUnit enumValue)
        {
          switch(enumValue)
          {
          case EntitlementDataUnit::NOT_SET:
            return {};
          case EntitlementDataUnit::Count:
            return "Count";
          case EntitlementDataUnit::None:
            return "None";
          case EntitlementDataUnit::Seconds:
            return "Seconds";
          case EntitlementDataUnit::Microseconds:
            return "Microseconds";
          case EntitlementDataUnit::Milliseconds:
            return "Milliseconds";
          case EntitlementDataUnit::Bytes:
            return "Bytes";
          case EntitlementDataUnit::Kilobytes:
            return "Kilobytes";
          case EntitlementDataUnit::Megabytes:
            return "Megabytes";
          case EntitlementDataUnit::Gigabytes:
            return "Gigabytes";
          case EntitlementDataUnit::Terabytes:
            return "Terabytes";
          case EntitlementDataUnit::Bits:
            return "Bits";
          case EntitlementDataUnit::Kilobits:
            return "Kilobits";
          case EntitlementDataUnit::Megabits:
            return "Megabits";
          case EntitlementDataUnit::Gigabits:
            return "Gigabits";
          case EntitlementDataUnit::Terabits:
            return "Terabits";
          case EntitlementDataUnit::Percent:
            return "Percent";
          case EntitlementDataUnit::Bytes_Second:
            return "Bytes/Second";
          case EntitlementDataUnit::Kilobytes_Second:
            return "Kilobytes/Second";
          case EntitlementDataUnit::Megabytes_Second:
            return "Megabytes/Second";
          case EntitlementDataUnit::Gigabytes_Second:
            return "Gigabytes/Second";
          case EntitlementDataUnit::Terabytes_Second:
            return "Terabytes/Second";
          case EntitlementDataUnit::Bits_Second:
            return "Bits/Second";
          case EntitlementDataUnit::Kilobits_Second:
            return "Kilobits/Second";
          case EntitlementDataUnit::Megabits_Second:
            return "Megabits/Second";
          case EntitlementDataUnit::Gigabits_Second:
            return "Gigabits/Second";
          case EntitlementDataUnit::Terabits_Second:
            return "Terabits/Second";
          case EntitlementDataUnit::Count_Second:
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

      } // namespace EntitlementDataUnitMapper
    } // namespace Model
  } // namespace LicenseManager
} // namespace Aws
