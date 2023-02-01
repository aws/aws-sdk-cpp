/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MonitorCapability.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace MonitorCapabilityMapper
      {

        static const int SILENT_MONITOR_HASH = HashingUtils::HashString("SILENT_MONITOR");
        static const int BARGE_HASH = HashingUtils::HashString("BARGE");


        MonitorCapability GetMonitorCapabilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SILENT_MONITOR_HASH)
          {
            return MonitorCapability::SILENT_MONITOR;
          }
          else if (hashCode == BARGE_HASH)
          {
            return MonitorCapability::BARGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MonitorCapability>(hashCode);
          }

          return MonitorCapability::NOT_SET;
        }

        Aws::String GetNameForMonitorCapability(MonitorCapability enumValue)
        {
          switch(enumValue)
          {
          case MonitorCapability::SILENT_MONITOR:
            return "SILENT_MONITOR";
          case MonitorCapability::BARGE:
            return "BARGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MonitorCapabilityMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
