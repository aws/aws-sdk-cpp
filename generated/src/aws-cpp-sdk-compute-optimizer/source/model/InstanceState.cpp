/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/InstanceState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace InstanceStateMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int running_HASH = HashingUtils::HashString("running");
        static const int shutting_down_HASH = HashingUtils::HashString("shutting-down");
        static const int terminated_HASH = HashingUtils::HashString("terminated");
        static const int stopping_HASH = HashingUtils::HashString("stopping");
        static const int stopped_HASH = HashingUtils::HashString("stopped");


        InstanceState GetInstanceStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return InstanceState::pending;
          }
          else if (hashCode == running_HASH)
          {
            return InstanceState::running;
          }
          else if (hashCode == shutting_down_HASH)
          {
            return InstanceState::shutting_down;
          }
          else if (hashCode == terminated_HASH)
          {
            return InstanceState::terminated;
          }
          else if (hashCode == stopping_HASH)
          {
            return InstanceState::stopping;
          }
          else if (hashCode == stopped_HASH)
          {
            return InstanceState::stopped;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceState>(hashCode);
          }

          return InstanceState::NOT_SET;
        }

        Aws::String GetNameForInstanceState(InstanceState enumValue)
        {
          switch(enumValue)
          {
          case InstanceState::NOT_SET:
            return {};
          case InstanceState::pending:
            return "pending";
          case InstanceState::running:
            return "running";
          case InstanceState::shutting_down:
            return "shutting-down";
          case InstanceState::terminated:
            return "terminated";
          case InstanceState::stopping:
            return "stopping";
          case InstanceState::stopped:
            return "stopped";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceStateMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
