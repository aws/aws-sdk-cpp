/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ScanStatus.h>
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
      namespace ScanStatusMapper
      {

        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t SKIPPED_HASH = ConstExprHashingUtils::HashString("SKIPPED");


        ScanStatus GetScanStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return ScanStatus::RUNNING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ScanStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ScanStatus::FAILED;
          }
          else if (hashCode == SKIPPED_HASH)
          {
            return ScanStatus::SKIPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScanStatus>(hashCode);
          }

          return ScanStatus::NOT_SET;
        }

        Aws::String GetNameForScanStatus(ScanStatus enumValue)
        {
          switch(enumValue)
          {
          case ScanStatus::NOT_SET:
            return {};
          case ScanStatus::RUNNING:
            return "RUNNING";
          case ScanStatus::COMPLETED:
            return "COMPLETED";
          case ScanStatus::FAILED:
            return "FAILED";
          case ScanStatus::SKIPPED:
            return "SKIPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScanStatusMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
