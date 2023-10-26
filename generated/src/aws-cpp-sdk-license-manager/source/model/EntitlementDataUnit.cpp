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

        static const int Count_HASH = HashingUtils::HashString("Count");
        static const int None_HASH = HashingUtils::HashString("None");
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


        EntitlementDataUnit GetEntitlementDataUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
