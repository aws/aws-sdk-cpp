/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/MonitorConfigState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace InternetMonitor
  {
    namespace Model
    {
      namespace MonitorConfigStateMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        MonitorConfigState GetMonitorConfigStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return MonitorConfigState::PENDING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return MonitorConfigState::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return MonitorConfigState::INACTIVE;
          }
          else if (hashCode == ERROR__HASH)
          {
            return MonitorConfigState::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MonitorConfigState>(hashCode);
          }

          return MonitorConfigState::NOT_SET;
        }

        Aws::String GetNameForMonitorConfigState(MonitorConfigState enumValue)
        {
          switch(enumValue)
          {
          case MonitorConfigState::NOT_SET:
            return {};
          case MonitorConfigState::PENDING:
            return "PENDING";
          case MonitorConfigState::ACTIVE:
            return "ACTIVE";
          case MonitorConfigState::INACTIVE:
            return "INACTIVE";
          case MonitorConfigState::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MonitorConfigStateMapper
    } // namespace Model
  } // namespace InternetMonitor
} // namespace Aws
