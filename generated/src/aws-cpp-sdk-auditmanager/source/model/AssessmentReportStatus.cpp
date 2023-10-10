/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/AssessmentReportStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AuditManager
  {
    namespace Model
    {
      namespace AssessmentReportStatusMapper
      {

        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        AssessmentReportStatus GetAssessmentReportStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLETE_HASH)
          {
            return AssessmentReportStatus::COMPLETE;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return AssessmentReportStatus::IN_PROGRESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AssessmentReportStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssessmentReportStatus>(hashCode);
          }

          return AssessmentReportStatus::NOT_SET;
        }

        Aws::String GetNameForAssessmentReportStatus(AssessmentReportStatus enumValue)
        {
          switch(enumValue)
          {
          case AssessmentReportStatus::NOT_SET:
            return {};
          case AssessmentReportStatus::COMPLETE:
            return "COMPLETE";
          case AssessmentReportStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case AssessmentReportStatus::FAILED:
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

      } // namespace AssessmentReportStatusMapper
    } // namespace Model
  } // namespace AuditManager
} // namespace Aws
