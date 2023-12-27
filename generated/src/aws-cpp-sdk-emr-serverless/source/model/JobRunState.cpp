/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/JobRunState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMRServerless
  {
    namespace Model
    {
      namespace JobRunStateMapper
      {

        static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        JobRunState GetJobRunStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUBMITTED_HASH)
          {
            return JobRunState::SUBMITTED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return JobRunState::PENDING;
          }
          else if (hashCode == SCHEDULED_HASH)
          {
            return JobRunState::SCHEDULED;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return JobRunState::RUNNING;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return JobRunState::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return JobRunState::FAILED;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return JobRunState::CANCELLING;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return JobRunState::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobRunState>(hashCode);
          }

          return JobRunState::NOT_SET;
        }

        Aws::String GetNameForJobRunState(JobRunState enumValue)
        {
          switch(enumValue)
          {
          case JobRunState::NOT_SET:
            return {};
          case JobRunState::SUBMITTED:
            return "SUBMITTED";
          case JobRunState::PENDING:
            return "PENDING";
          case JobRunState::SCHEDULED:
            return "SCHEDULED";
          case JobRunState::RUNNING:
            return "RUNNING";
          case JobRunState::SUCCESS:
            return "SUCCESS";
          case JobRunState::FAILED:
            return "FAILED";
          case JobRunState::CANCELLING:
            return "CANCELLING";
          case JobRunState::CANCELLED:
            return "CANCELLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobRunStateMapper
    } // namespace Model
  } // namespace EMRServerless
} // namespace Aws
