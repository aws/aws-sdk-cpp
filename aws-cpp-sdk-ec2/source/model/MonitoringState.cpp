/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

        static const int disabled_HASH = HashingUtils::HashString("disabled");
        static const int disabling_HASH = HashingUtils::HashString("disabling");
        static const int enabled_HASH = HashingUtils::HashString("enabled");
        static const int pending_HASH = HashingUtils::HashString("pending");


        MonitoringState GetMonitoringStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace MonitoringStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
