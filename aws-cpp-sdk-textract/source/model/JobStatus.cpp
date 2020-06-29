/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/JobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Textract
  {
    namespace Model
    {
      namespace JobStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int PARTIAL_SUCCESS_HASH = HashingUtils::HashString("PARTIAL_SUCCESS");


        JobStatus GetJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return JobStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return JobStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return JobStatus::FAILED;
          }
          else if (hashCode == PARTIAL_SUCCESS_HASH)
          {
            return JobStatus::PARTIAL_SUCCESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobStatus>(hashCode);
          }

          return JobStatus::NOT_SET;
        }

        Aws::String GetNameForJobStatus(JobStatus enumValue)
        {
          switch(enumValue)
          {
          case JobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case JobStatus::SUCCEEDED:
            return "SUCCEEDED";
          case JobStatus::FAILED:
            return "FAILED";
          case JobStatus::PARTIAL_SUCCESS:
            return "PARTIAL_SUCCESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobStatusMapper
    } // namespace Model
  } // namespace Textract
} // namespace Aws
