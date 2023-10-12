/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/VirtualClusterState.h>
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
      namespace VirtualClusterStateMapper
      {

        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t TERMINATING_HASH = ConstExprHashingUtils::HashString("TERMINATING");
        static constexpr uint32_t TERMINATED_HASH = ConstExprHashingUtils::HashString("TERMINATED");
        static constexpr uint32_t ARRESTED_HASH = ConstExprHashingUtils::HashString("ARRESTED");


        VirtualClusterState GetVirtualClusterStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return VirtualClusterState::RUNNING;
          }
          else if (hashCode == TERMINATING_HASH)
          {
            return VirtualClusterState::TERMINATING;
          }
          else if (hashCode == TERMINATED_HASH)
          {
            return VirtualClusterState::TERMINATED;
          }
          else if (hashCode == ARRESTED_HASH)
          {
            return VirtualClusterState::ARRESTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VirtualClusterState>(hashCode);
          }

          return VirtualClusterState::NOT_SET;
        }

        Aws::String GetNameForVirtualClusterState(VirtualClusterState enumValue)
        {
          switch(enumValue)
          {
          case VirtualClusterState::NOT_SET:
            return {};
          case VirtualClusterState::RUNNING:
            return "RUNNING";
          case VirtualClusterState::TERMINATING:
            return "TERMINATING";
          case VirtualClusterState::TERMINATED:
            return "TERMINATED";
          case VirtualClusterState::ARRESTED:
            return "ARRESTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VirtualClusterStateMapper
    } // namespace Model
  } // namespace EMRContainers
} // namespace Aws
