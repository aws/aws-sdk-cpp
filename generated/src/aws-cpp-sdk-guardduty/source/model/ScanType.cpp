/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ScanType.h>
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
      namespace ScanTypeMapper
      {

        static constexpr uint32_t GUARDDUTY_INITIATED_HASH = ConstExprHashingUtils::HashString("GUARDDUTY_INITIATED");
        static constexpr uint32_t ON_DEMAND_HASH = ConstExprHashingUtils::HashString("ON_DEMAND");


        ScanType GetScanTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GUARDDUTY_INITIATED_HASH)
          {
            return ScanType::GUARDDUTY_INITIATED;
          }
          else if (hashCode == ON_DEMAND_HASH)
          {
            return ScanType::ON_DEMAND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScanType>(hashCode);
          }

          return ScanType::NOT_SET;
        }

        Aws::String GetNameForScanType(ScanType enumValue)
        {
          switch(enumValue)
          {
          case ScanType::NOT_SET:
            return {};
          case ScanType::GUARDDUTY_INITIATED:
            return "GUARDDUTY_INITIATED";
          case ScanType::ON_DEMAND:
            return "ON_DEMAND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScanTypeMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
