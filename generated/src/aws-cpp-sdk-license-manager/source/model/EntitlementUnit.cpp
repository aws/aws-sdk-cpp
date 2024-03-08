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


        EntitlementUnit GetEntitlementUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
