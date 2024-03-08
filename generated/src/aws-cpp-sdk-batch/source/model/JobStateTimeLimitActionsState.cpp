/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/JobStateTimeLimitActionsState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Batch
  {
    namespace Model
    {
      namespace JobStateTimeLimitActionsStateMapper
      {

        static const int RUNNABLE_HASH = HashingUtils::HashString("RUNNABLE");


        JobStateTimeLimitActionsState GetJobStateTimeLimitActionsStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNABLE_HASH)
          {
            return JobStateTimeLimitActionsState::RUNNABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobStateTimeLimitActionsState>(hashCode);
          }

          return JobStateTimeLimitActionsState::NOT_SET;
        }

        Aws::String GetNameForJobStateTimeLimitActionsState(JobStateTimeLimitActionsState enumValue)
        {
          switch(enumValue)
          {
          case JobStateTimeLimitActionsState::NOT_SET:
            return {};
          case JobStateTimeLimitActionsState::RUNNABLE:
            return "RUNNABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobStateTimeLimitActionsStateMapper
    } // namespace Model
  } // namespace Batch
} // namespace Aws
