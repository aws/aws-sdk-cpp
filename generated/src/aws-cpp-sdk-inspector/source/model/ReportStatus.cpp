/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/ReportStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector
  {
    namespace Model
    {
      namespace ReportStatusMapper
      {

        static constexpr uint32_t WORK_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("WORK_IN_PROGRESS");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");


        ReportStatus GetReportStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WORK_IN_PROGRESS_HASH)
          {
            return ReportStatus::WORK_IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ReportStatus::FAILED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ReportStatus::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReportStatus>(hashCode);
          }

          return ReportStatus::NOT_SET;
        }

        Aws::String GetNameForReportStatus(ReportStatus enumValue)
        {
          switch(enumValue)
          {
          case ReportStatus::NOT_SET:
            return {};
          case ReportStatus::WORK_IN_PROGRESS:
            return "WORK_IN_PROGRESS";
          case ReportStatus::FAILED:
            return "FAILED";
          case ReportStatus::COMPLETED:
            return "COMPLETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReportStatusMapper
    } // namespace Model
  } // namespace Inspector
} // namespace Aws
