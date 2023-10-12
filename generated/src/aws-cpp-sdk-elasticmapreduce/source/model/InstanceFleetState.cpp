/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/InstanceFleetState.h>
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
      namespace InstanceFleetStateMapper
      {

        static constexpr uint32_t PROVISIONING_HASH = ConstExprHashingUtils::HashString("PROVISIONING");
        static constexpr uint32_t BOOTSTRAPPING_HASH = ConstExprHashingUtils::HashString("BOOTSTRAPPING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t RESIZING_HASH = ConstExprHashingUtils::HashString("RESIZING");
        static constexpr uint32_t SUSPENDED_HASH = ConstExprHashingUtils::HashString("SUSPENDED");
        static constexpr uint32_t TERMINATING_HASH = ConstExprHashingUtils::HashString("TERMINATING");
        static constexpr uint32_t TERMINATED_HASH = ConstExprHashingUtils::HashString("TERMINATED");


        InstanceFleetState GetInstanceFleetStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROVISIONING_HASH)
          {
            return InstanceFleetState::PROVISIONING;
          }
          else if (hashCode == BOOTSTRAPPING_HASH)
          {
            return InstanceFleetState::BOOTSTRAPPING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return InstanceFleetState::RUNNING;
          }
          else if (hashCode == RESIZING_HASH)
          {
            return InstanceFleetState::RESIZING;
          }
          else if (hashCode == SUSPENDED_HASH)
          {
            return InstanceFleetState::SUSPENDED;
          }
          else if (hashCode == TERMINATING_HASH)
          {
            return InstanceFleetState::TERMINATING;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return InstanceFleetState::TERMINATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceFleetState>(hashCode);
          }

          return InstanceFleetState::NOT_SET;
        }

        Aws::String GetNameForInstanceFleetState(InstanceFleetState enumValue)
        {
          switch(enumValue)
          {
          case InstanceFleetState::NOT_SET:
            return {};
          case InstanceFleetState::PROVISIONING:
            return "PROVISIONING";
          case InstanceFleetState::BOOTSTRAPPING:
            return "BOOTSTRAPPING";
          case InstanceFleetState::RUNNING:
            return "RUNNING";
          case InstanceFleetState::RESIZING:
            return "RESIZING";
          case InstanceFleetState::SUSPENDED:
            return "SUSPENDED";
          case InstanceFleetState::TERMINATING:
            return "TERMINATING";
          case InstanceFleetState::TERMINATED:
            return "TERMINATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceFleetStateMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
