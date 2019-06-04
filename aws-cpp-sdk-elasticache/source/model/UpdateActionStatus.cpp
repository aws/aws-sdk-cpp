/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/elasticache/model/UpdateActionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElastiCache
  {
    namespace Model
    {
      namespace UpdateActionStatusMapper
      {

        static const int not_applied_HASH = HashingUtils::HashString("not-applied");
        static const int waiting_to_start_HASH = HashingUtils::HashString("waiting-to-start");
        static const int in_progress_HASH = HashingUtils::HashString("in-progress");
        static const int stopping_HASH = HashingUtils::HashString("stopping");
        static const int stopped_HASH = HashingUtils::HashString("stopped");
        static const int complete_HASH = HashingUtils::HashString("complete");


        UpdateActionStatus GetUpdateActionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == not_applied_HASH)
          {
            return UpdateActionStatus::not_applied;
          }
          else if (hashCode == waiting_to_start_HASH)
          {
            return UpdateActionStatus::waiting_to_start;
          }
          else if (hashCode == in_progress_HASH)
          {
            return UpdateActionStatus::in_progress;
          }
          else if (hashCode == stopping_HASH)
          {
            return UpdateActionStatus::stopping;
          }
          else if (hashCode == stopped_HASH)
          {
            return UpdateActionStatus::stopped;
          }
          else if (hashCode == complete_HASH)
          {
            return UpdateActionStatus::complete;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateActionStatus>(hashCode);
          }

          return UpdateActionStatus::NOT_SET;
        }

        Aws::String GetNameForUpdateActionStatus(UpdateActionStatus enumValue)
        {
          switch(enumValue)
          {
          case UpdateActionStatus::not_applied:
            return "not-applied";
          case UpdateActionStatus::waiting_to_start:
            return "waiting-to-start";
          case UpdateActionStatus::in_progress:
            return "in-progress";
          case UpdateActionStatus::stopping:
            return "stopping";
          case UpdateActionStatus::stopped:
            return "stopped";
          case UpdateActionStatus::complete:
            return "complete";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateActionStatusMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
