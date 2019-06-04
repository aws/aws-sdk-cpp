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

#include <aws/elasticache/model/NodeUpdateStatus.h>
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
      namespace NodeUpdateStatusMapper
      {

        static const int not_applied_HASH = HashingUtils::HashString("not-applied");
        static const int waiting_to_start_HASH = HashingUtils::HashString("waiting-to-start");
        static const int in_progress_HASH = HashingUtils::HashString("in-progress");
        static const int stopping_HASH = HashingUtils::HashString("stopping");
        static const int stopped_HASH = HashingUtils::HashString("stopped");
        static const int complete_HASH = HashingUtils::HashString("complete");


        NodeUpdateStatus GetNodeUpdateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == not_applied_HASH)
          {
            return NodeUpdateStatus::not_applied;
          }
          else if (hashCode == waiting_to_start_HASH)
          {
            return NodeUpdateStatus::waiting_to_start;
          }
          else if (hashCode == in_progress_HASH)
          {
            return NodeUpdateStatus::in_progress;
          }
          else if (hashCode == stopping_HASH)
          {
            return NodeUpdateStatus::stopping;
          }
          else if (hashCode == stopped_HASH)
          {
            return NodeUpdateStatus::stopped;
          }
          else if (hashCode == complete_HASH)
          {
            return NodeUpdateStatus::complete;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NodeUpdateStatus>(hashCode);
          }

          return NodeUpdateStatus::NOT_SET;
        }

        Aws::String GetNameForNodeUpdateStatus(NodeUpdateStatus enumValue)
        {
          switch(enumValue)
          {
          case NodeUpdateStatus::not_applied:
            return "not-applied";
          case NodeUpdateStatus::waiting_to_start:
            return "waiting-to-start";
          case NodeUpdateStatus::in_progress:
            return "in-progress";
          case NodeUpdateStatus::stopping:
            return "stopping";
          case NodeUpdateStatus::stopped:
            return "stopped";
          case NodeUpdateStatus::complete:
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

      } // namespace NodeUpdateStatusMapper
    } // namespace Model
  } // namespace ElastiCache
} // namespace Aws
