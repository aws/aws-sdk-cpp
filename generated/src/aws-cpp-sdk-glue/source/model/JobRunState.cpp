/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/JobRunState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace JobRunStateMapper
      {

        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t TIMEOUT_HASH = ConstExprHashingUtils::HashString("TIMEOUT");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");
        static constexpr uint32_t WAITING_HASH = ConstExprHashingUtils::HashString("WAITING");


        JobRunState GetJobRunStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STARTING_HASH)
          {
            return JobRunState::STARTING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return JobRunState::RUNNING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return JobRunState::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return JobRunState::STOPPED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return JobRunState::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return JobRunState::FAILED;
          }
          else if (hashCode == TIMEOUT_HASH)
          {
            return JobRunState::TIMEOUT;
          }
          else if (hashCode == ERROR__HASH)
          {
            return JobRunState::ERROR_;
          }
          else if (hashCode == WAITING_HASH)
          {
            return JobRunState::WAITING;
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
          case JobRunState::STARTING:
            return "STARTING";
          case JobRunState::RUNNING:
            return "RUNNING";
          case JobRunState::STOPPING:
            return "STOPPING";
          case JobRunState::STOPPED:
            return "STOPPED";
          case JobRunState::SUCCEEDED:
            return "SUCCEEDED";
          case JobRunState::FAILED:
            return "FAILED";
          case JobRunState::TIMEOUT:
            return "TIMEOUT";
          case JobRunState::ERROR_:
            return "ERROR";
          case JobRunState::WAITING:
            return "WAITING";
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
  } // namespace Glue
} // namespace Aws
