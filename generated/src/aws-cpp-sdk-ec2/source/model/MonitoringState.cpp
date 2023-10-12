/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/MonitoringState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace MonitoringStateMapper
      {

        static constexpr uint32_t disabled_HASH = ConstExprHashingUtils::HashString("disabled");
        static constexpr uint32_t disabling_HASH = ConstExprHashingUtils::HashString("disabling");
        static constexpr uint32_t enabled_HASH = ConstExprHashingUtils::HashString("enabled");
        static constexpr uint32_t pending_HASH = ConstExprHashingUtils::HashString("pending");


        MonitoringState GetMonitoringStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == disabled_HASH)
          {
            return MonitoringState::disabled;
          }
          else if (hashCode == disabling_HASH)
          {
            return MonitoringState::disabling;
          }
          else if (hashCode == enabled_HASH)
          {
            return MonitoringState::enabled;
          }
          else if (hashCode == pending_HASH)
          {
            return MonitoringState::pending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MonitoringState>(hashCode);
          }

          return MonitoringState::NOT_SET;
        }

        Aws::String GetNameForMonitoringState(MonitoringState enumValue)
        {
          switch(enumValue)
          {
          case MonitoringState::NOT_SET:
            return {};
          case MonitoringState::disabled:
            return "disabled";
          case MonitoringState::disabling:
            return "disabling";
          case MonitoringState::enabled:
            return "enabled";
          case MonitoringState::pending:
            return "pending";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MonitoringStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
