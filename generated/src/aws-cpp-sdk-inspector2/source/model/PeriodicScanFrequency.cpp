/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/PeriodicScanFrequency.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace PeriodicScanFrequencyMapper
      {

        static const int WEEKLY_HASH = HashingUtils::HashString("WEEKLY");
        static const int MONTHLY_HASH = HashingUtils::HashString("MONTHLY");
        static const int NEVER_HASH = HashingUtils::HashString("NEVER");


        PeriodicScanFrequency GetPeriodicScanFrequencyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WEEKLY_HASH)
          {
            return PeriodicScanFrequency::WEEKLY;
          }
          else if (hashCode == MONTHLY_HASH)
          {
            return PeriodicScanFrequency::MONTHLY;
          }
          else if (hashCode == NEVER_HASH)
          {
            return PeriodicScanFrequency::NEVER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PeriodicScanFrequency>(hashCode);
          }

          return PeriodicScanFrequency::NOT_SET;
        }

        Aws::String GetNameForPeriodicScanFrequency(PeriodicScanFrequency enumValue)
        {
          switch(enumValue)
          {
          case PeriodicScanFrequency::NOT_SET:
            return {};
          case PeriodicScanFrequency::WEEKLY:
            return "WEEKLY";
          case PeriodicScanFrequency::MONTHLY:
            return "MONTHLY";
          case PeriodicScanFrequency::NEVER:
            return "NEVER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PeriodicScanFrequencyMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
