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

        static constexpr uint32_t PROVISIONING_HASH = ConstExprHashingUtils::HashString("PROVISIONING");
        static constexpr uint32_t BOOTSTRAPPING_HASH = ConstExprHashingUtils::HashString("BOOTSTRAPPING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t RECONFIGURING_HASH = ConstExprHashingUtils::HashString("RECONFIGURING");
        static constexpr uint32_t RESIZING_HASH = ConstExprHashingUtils::HashString("RESIZING");
        static constexpr uint32_t SUSPENDED_HASH = ConstExprHashingUtils::HashString("SUSPENDED");
        static constexpr uint32_t TERMINATING_HASH = ConstExprHashingUtils::HashString("TERMINATING");
        static constexpr uint32_t TERMINATED_HASH = ConstExprHashingUtils::HashString("TERMINATED");
        static constexpr uint32_t ARRESTED_HASH = ConstExprHashingUtils::HashString("ARRESTED");
        static constexpr uint32_t SHUTTING_DOWN_HASH = ConstExprHashingUtils::HashString("SHUTTING_DOWN");
        static constexpr uint32_t ENDED_HASH = ConstExprHashingUtils::HashString("ENDED");


        InstanceGroupState GetInstanceGroupStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case InstanceGroupState::NOT_SET:
            return {};
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
