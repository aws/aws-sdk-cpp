/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/MonitorProcessingStatusCode.h>
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
      namespace MonitorProcessingStatusCodeMapper
      {

        static constexpr uint32_t OK_HASH = ConstExprHashingUtils::HashString("OK");
        static constexpr uint32_t INACTIVE_HASH = ConstExprHashingUtils::HashString("INACTIVE");
        static constexpr uint32_t COLLECTING_DATA_HASH = ConstExprHashingUtils::HashString("COLLECTING_DATA");
        static constexpr uint32_t INSUFFICIENT_DATA_HASH = ConstExprHashingUtils::HashString("INSUFFICIENT_DATA");
        static constexpr uint32_t FAULT_SERVICE_HASH = ConstExprHashingUtils::HashString("FAULT_SERVICE");
        static constexpr uint32_t FAULT_ACCESS_CLOUDWATCH_HASH = ConstExprHashingUtils::HashString("FAULT_ACCESS_CLOUDWATCH");


        MonitorProcessingStatusCode GetMonitorProcessingStatusCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OK_HASH)
          {
            return MonitorProcessingStatusCode::OK;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return MonitorProcessingStatusCode::INACTIVE;
          }
          else if (hashCode == COLLECTING_DATA_HASH)
          {
            return MonitorProcessingStatusCode::COLLECTING_DATA;
          }
          else if (hashCode == INSUFFICIENT_DATA_HASH)
          {
            return MonitorProcessingStatusCode::INSUFFICIENT_DATA;
          }
          else if (hashCode == FAULT_SERVICE_HASH)
          {
            return MonitorProcessingStatusCode::FAULT_SERVICE;
          }
          else if (hashCode == FAULT_ACCESS_CLOUDWATCH_HASH)
          {
            return MonitorProcessingStatusCode::FAULT_ACCESS_CLOUDWATCH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MonitorProcessingStatusCode>(hashCode);
          }

          return MonitorProcessingStatusCode::NOT_SET;
        }

        Aws::String GetNameForMonitorProcessingStatusCode(MonitorProcessingStatusCode enumValue)
        {
          switch(enumValue)
          {
          case MonitorProcessingStatusCode::NOT_SET:
            return {};
          case MonitorProcessingStatusCode::OK:
            return "OK";
          case MonitorProcessingStatusCode::INACTIVE:
            return "INACTIVE";
          case MonitorProcessingStatusCode::COLLECTING_DATA:
            return "COLLECTING_DATA";
          case MonitorProcessingStatusCode::INSUFFICIENT_DATA:
            return "INSUFFICIENT_DATA";
          case MonitorProcessingStatusCode::FAULT_SERVICE:
            return "FAULT_SERVICE";
          case MonitorProcessingStatusCode::FAULT_ACCESS_CLOUDWATCH:
            return "FAULT_ACCESS_CLOUDWATCH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MonitorProcessingStatusCodeMapper
    } // namespace Model
  } // namespace InternetMonitor
} // namespace Aws
