/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/ExperimentReportStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FIS
  {
    namespace Model
    {
      namespace ExperimentReportStatusMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int running_HASH = HashingUtils::HashString("running");
        static const int completed_HASH = HashingUtils::HashString("completed");
        static const int cancelled_HASH = HashingUtils::HashString("cancelled");
        static const int failed_HASH = HashingUtils::HashString("failed");


        ExperimentReportStatus GetExperimentReportStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return ExperimentReportStatus::pending;
          }
          else if (hashCode == running_HASH)
          {
            return ExperimentReportStatus::running;
          }
          else if (hashCode == completed_HASH)
          {
            return ExperimentReportStatus::completed;
          }
          else if (hashCode == cancelled_HASH)
          {
            return ExperimentReportStatus::cancelled;
          }
          else if (hashCode == failed_HASH)
          {
            return ExperimentReportStatus::failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExperimentReportStatus>(hashCode);
          }

          return ExperimentReportStatus::NOT_SET;
        }

        Aws::String GetNameForExperimentReportStatus(ExperimentReportStatus enumValue)
        {
          switch(enumValue)
          {
          case ExperimentReportStatus::NOT_SET:
            return {};
          case ExperimentReportStatus::pending:
            return "pending";
          case ExperimentReportStatus::running:
            return "running";
          case ExperimentReportStatus::completed:
            return "completed";
          case ExperimentReportStatus::cancelled:
            return "cancelled";
          case ExperimentReportStatus::failed:
            return "failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExperimentReportStatusMapper
    } // namespace Model
  } // namespace FIS
} // namespace Aws
