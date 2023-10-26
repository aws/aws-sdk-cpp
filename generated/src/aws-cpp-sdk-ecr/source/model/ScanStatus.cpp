/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/ScanStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECR
  {
    namespace Model
    {
      namespace ScanStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int UNSUPPORTED_IMAGE_HASH = HashingUtils::HashString("UNSUPPORTED_IMAGE");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int SCAN_ELIGIBILITY_EXPIRED_HASH = HashingUtils::HashString("SCAN_ELIGIBILITY_EXPIRED");
        static const int FINDINGS_UNAVAILABLE_HASH = HashingUtils::HashString("FINDINGS_UNAVAILABLE");


        ScanStatus GetScanStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return ScanStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return ScanStatus::COMPLETE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ScanStatus::FAILED;
          }
          else if (hashCode == UNSUPPORTED_IMAGE_HASH)
          {
            return ScanStatus::UNSUPPORTED_IMAGE;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ScanStatus::ACTIVE;
          }
          else if (hashCode == PENDING_HASH)
          {
            return ScanStatus::PENDING;
          }
          else if (hashCode == SCAN_ELIGIBILITY_EXPIRED_HASH)
          {
            return ScanStatus::SCAN_ELIGIBILITY_EXPIRED;
          }
          else if (hashCode == FINDINGS_UNAVAILABLE_HASH)
          {
            return ScanStatus::FINDINGS_UNAVAILABLE;
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
          case ScanStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ScanStatus::COMPLETE:
            return "COMPLETE";
          case ScanStatus::FAILED:
            return "FAILED";
          case ScanStatus::UNSUPPORTED_IMAGE:
            return "UNSUPPORTED_IMAGE";
          case ScanStatus::ACTIVE:
            return "ACTIVE";
          case ScanStatus::PENDING:
            return "PENDING";
          case ScanStatus::SCAN_ELIGIBILITY_EXPIRED:
            return "SCAN_ELIGIBILITY_EXPIRED";
          case ScanStatus::FINDINGS_UNAVAILABLE:
            return "FINDINGS_UNAVAILABLE";
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
  } // namespace ECR
} // namespace Aws
