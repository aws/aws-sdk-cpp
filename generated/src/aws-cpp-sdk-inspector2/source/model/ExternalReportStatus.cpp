/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ExternalReportStatus.h>
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
      namespace ExternalReportStatusMapper
      {

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ExternalReportStatus GetExternalReportStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return ExternalReportStatus::SUCCEEDED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return ExternalReportStatus::IN_PROGRESS;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return ExternalReportStatus::CANCELLED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ExternalReportStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExternalReportStatus>(hashCode);
          }

          return ExternalReportStatus::NOT_SET;
        }

        Aws::String GetNameForExternalReportStatus(ExternalReportStatus enumValue)
        {
          switch(enumValue)
          {
          case ExternalReportStatus::NOT_SET:
            return {};
          case ExternalReportStatus::SUCCEEDED:
            return "SUCCEEDED";
          case ExternalReportStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ExternalReportStatus::CANCELLED:
            return "CANCELLED";
          case ExternalReportStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExternalReportStatusMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
