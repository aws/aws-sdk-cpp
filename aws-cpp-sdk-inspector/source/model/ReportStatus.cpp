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

        static const int WORK_IN_PROGRESS_HASH = HashingUtils::HashString("WORK_IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        ReportStatus GetReportStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
