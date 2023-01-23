/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/InstanceGroupState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace InstanceGroupStateMapper
      {

        static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
        static const int BOOTSTRAPPING_HASH = HashingUtils::HashString("BOOTSTRAPPING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int RECONFIGURING_HASH = HashingUtils::HashString("RECONFIGURING");
        static const int RESIZING_HASH = HashingUtils::HashString("RESIZING");
        static const int SUSPENDED_HASH = HashingUtils::HashString("SUSPENDED");
        static const int TERMINATING_HASH = HashingUtils::HashString("TERMINATING");
        static const int TERMINATED_HASH = HashingUtils::HashString("TERMINATED");
        static const int ARRESTED_HASH = HashingUtils::HashString("ARRESTED");
        static const int SHUTTING_DOWN_HASH = HashingUtils::HashString("SHUTTING_DOWN");
        static const int ENDED_HASH = HashingUtils::HashString("ENDED");


        InstanceGroupState GetInstanceGroupStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROVISIONING_HASH)
          {
            return InstanceGroupState::PROVISIONING;
          }
          else if (hashCode == BOOTSTRAPPING_HASH)
          {
            return InstanceGroupState::BOOTSTRAPPING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return InstanceGroupState::RUNNING;
          }
          else if (hashCode == RECONFIGURING_HASH)
          {
            return InstanceGroupState::RECONFIGURING;
          }
          else if (hashCode == RESIZING_HASH)
          {
            return InstanceGroupState::RESIZING;
          }
          else if (hashCode == SUSPENDED_HASH)
          {
            return InstanceGroupState::SUSPENDED;
          }
          else if (hashCode == TERMINATING_HASH)
          {
            return InstanceGroupState::TERMINATING;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return InstanceGroupState::TERMINATED;
          }
          else if (hashCode == ARRESTED_HASH)
          {
            return InstanceGroupState::ARRESTED;
          }
          else if (hashCode == SHUTTING_DOWN_HASH)
          {
            return InstanceGroupState::SHUTTING_DOWN;
          }
          else if (hashCode == ENDED_HASH)
          {
            return InstanceGroupState::ENDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceGroupState>(hashCode);
          }

          return InstanceGroupState::NOT_SET;
        }

        Aws::String GetNameForInstanceGroupState(InstanceGroupState enumValue)
        {
          switch(enumValue)
          {
          case InstanceGroupState::PROVISIONING:
            return "PROVISIONING";
          case InstanceGroupState::BOOTSTRAPPING:
            return "BOOTSTRAPPING";
          case InstanceGroupState::RUNNING:
            return "RUNNING";
          case InstanceGroupState::RECONFIGURING:
            return "RECONFIGURING";
          case InstanceGroupState::RESIZING:
            return "RESIZING";
          case InstanceGroupState::SUSPENDED:
            return "SUSPENDED";
          case InstanceGroupState::TERMINATING:
            return "TERMINATING";
          case InstanceGroupState::TERMINATED:
            return "TERMINATED";
          case InstanceGroupState::ARRESTED:
            return "ARRESTED";
          case InstanceGroupState::SHUTTING_DOWN:
            return "SHUTTING_DOWN";
          case InstanceGroupState::ENDED:
            return "ENDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceGroupStateMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
