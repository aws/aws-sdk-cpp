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

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SKIPPED_HASH = HashingUtils::HashString("SKIPPED");


        ScanStatus GetScanStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
