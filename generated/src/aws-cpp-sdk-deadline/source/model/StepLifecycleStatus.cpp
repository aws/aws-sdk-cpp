/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/StepLifecycleStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace StepLifecycleStatusMapper
      {

        static const int CREATE_COMPLETE_HASH = HashingUtils::HashString("CREATE_COMPLETE");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int UPDATE_SUCCEEDED_HASH = HashingUtils::HashString("UPDATE_SUCCEEDED");


        StepLifecycleStatus GetStepLifecycleStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_COMPLETE_HASH)
          {
            return StepLifecycleStatus::CREATE_COMPLETE;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return StepLifecycleStatus::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return StepLifecycleStatus::UPDATE_FAILED;
          }
          else if (hashCode == UPDATE_SUCCEEDED_HASH)
          {
            return StepLifecycleStatus::UPDATE_SUCCEEDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StepLifecycleStatus>(hashCode);
          }

          return StepLifecycleStatus::NOT_SET;
        }

        Aws::String GetNameForStepLifecycleStatus(StepLifecycleStatus enumValue)
        {
          switch(enumValue)
          {
          case StepLifecycleStatus::NOT_SET:
            return {};
          case StepLifecycleStatus::CREATE_COMPLETE:
            return "CREATE_COMPLETE";
          case StepLifecycleStatus::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case StepLifecycleStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case StepLifecycleStatus::UPDATE_SUCCEEDED:
            return "UPDATE_SUCCEEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StepLifecycleStatusMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
