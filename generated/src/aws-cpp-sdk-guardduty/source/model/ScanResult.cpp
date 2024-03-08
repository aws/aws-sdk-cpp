/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ScanResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace ScanResultMapper
      {

        static const int CLEAN_HASH = HashingUtils::HashString("CLEAN");
        static const int INFECTED_HASH = HashingUtils::HashString("INFECTED");


        ScanResult GetScanResultForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLEAN_HASH)
          {
            return ScanResult::CLEAN;
          }
          else if (hashCode == INFECTED_HASH)
          {
            return ScanResult::INFECTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScanResult>(hashCode);
          }

          return ScanResult::NOT_SET;
        }

        Aws::String GetNameForScanResult(ScanResult enumValue)
        {
          switch(enumValue)
          {
          case ScanResult::NOT_SET:
            return {};
          case ScanResult::CLEAN:
            return "CLEAN";
          case ScanResult::INFECTED:
            return "INFECTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScanResultMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
