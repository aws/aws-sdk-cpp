/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/JobRunState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMRContainers
  {
    namespace Model
    {
      namespace JobRunStateMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int CANCEL_PENDING_HASH = HashingUtils::HashString("CANCEL_PENDING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        JobRunState GetJobRunStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return JobRunState::PENDING;
          }
          else if (hashCode == SUBMITTED_HASH)
          {
            return JobRunState::SUBMITTED;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return JobRunState::RUNNING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return JobRunState::FAILED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return JobRunState::CANCELLED;
          }
          else if (hashCode == CANCEL_PENDING_HASH)
          {
            return JobRunState::CANCEL_PENDING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return JobRunState::COMPLETED;
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
          case JobRunState::PENDING:
            return "PENDING";
          case JobRunState::SUBMITTED:
            return "SUBMITTED";
          case JobRunState::RUNNING:
            return "RUNNING";
          case JobRunState::FAILED:
            return "FAILED";
          case JobRunState::CANCELLED:
            return "CANCELLED";
          case JobRunState::CANCEL_PENDING:
            return "CANCEL_PENDING";
          case JobRunState::COMPLETED:
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

      } // namespace JobRunStateMapper
    } // namespace Model
  } // namespace EMRContainers
} // namespace Aws
