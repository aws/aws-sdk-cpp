/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/MetricName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace MetricNameMapper
      {

        static constexpr uint32_t CPUUtilization_HASH = ConstExprHashingUtils::HashString("CPUUtilization");
        static constexpr uint32_t NetworkIn_HASH = ConstExprHashingUtils::HashString("NetworkIn");
        static constexpr uint32_t NetworkOut_HASH = ConstExprHashingUtils::HashString("NetworkOut");
        static constexpr uint32_t StatusCheckFailed_HASH = ConstExprHashingUtils::HashString("StatusCheckFailed");
        static constexpr uint32_t StatusCheckFailed_Instance_HASH = ConstExprHashingUtils::HashString("StatusCheckFailed_Instance");
        static constexpr uint32_t StatusCheckFailed_System_HASH = ConstExprHashingUtils::HashString("StatusCheckFailed_System");
        static constexpr uint32_t ClientTLSNegotiationErrorCount_HASH = ConstExprHashingUtils::HashString("ClientTLSNegotiationErrorCount");
        static constexpr uint32_t HealthyHostCount_HASH = ConstExprHashingUtils::HashString("HealthyHostCount");
        static constexpr uint32_t UnhealthyHostCount_HASH = ConstExprHashingUtils::HashString("UnhealthyHostCount");
        static constexpr uint32_t HTTPCode_LB_4XX_Count_HASH = ConstExprHashingUtils::HashString("HTTPCode_LB_4XX_Count");
        static constexpr uint32_t HTTPCode_LB_5XX_Count_HASH = ConstExprHashingUtils::HashString("HTTPCode_LB_5XX_Count");
        static constexpr uint32_t HTTPCode_Instance_2XX_Count_HASH = ConstExprHashingUtils::HashString("HTTPCode_Instance_2XX_Count");
        static constexpr uint32_t HTTPCode_Instance_3XX_Count_HASH = ConstExprHashingUtils::HashString("HTTPCode_Instance_3XX_Count");
        static constexpr uint32_t HTTPCode_Instance_4XX_Count_HASH = ConstExprHashingUtils::HashString("HTTPCode_Instance_4XX_Count");
        static constexpr uint32_t HTTPCode_Instance_5XX_Count_HASH = ConstExprHashingUtils::HashString("HTTPCode_Instance_5XX_Count");
        static constexpr uint32_t InstanceResponseTime_HASH = ConstExprHashingUtils::HashString("InstanceResponseTime");
        static constexpr uint32_t RejectedConnectionCount_HASH = ConstExprHashingUtils::HashString("RejectedConnectionCount");
        static constexpr uint32_t RequestCount_HASH = ConstExprHashingUtils::HashString("RequestCount");
        static constexpr uint32_t DatabaseConnections_HASH = ConstExprHashingUtils::HashString("DatabaseConnections");
        static constexpr uint32_t DiskQueueDepth_HASH = ConstExprHashingUtils::HashString("DiskQueueDepth");
        static constexpr uint32_t FreeStorageSpace_HASH = ConstExprHashingUtils::HashString("FreeStorageSpace");
        static constexpr uint32_t NetworkReceiveThroughput_HASH = ConstExprHashingUtils::HashString("NetworkReceiveThroughput");
        static constexpr uint32_t NetworkTransmitThroughput_HASH = ConstExprHashingUtils::HashString("NetworkTransmitThroughput");
        static constexpr uint32_t BurstCapacityTime_HASH = ConstExprHashingUtils::HashString("BurstCapacityTime");
        static constexpr uint32_t BurstCapacityPercentage_HASH = ConstExprHashingUtils::HashString("BurstCapacityPercentage");


        MetricName GetMetricNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CPUUtilization_HASH)
          {
            return MetricName::CPUUtilization;
          }
          else if (hashCode == NetworkIn_HASH)
          {
            return MetricName::NetworkIn;
          }
          else if (hashCode == NetworkOut_HASH)
          {
            return MetricName::NetworkOut;
          }
          else if (hashCode == StatusCheckFailed_HASH)
          {
            return MetricName::StatusCheckFailed;
          }
          else if (hashCode == StatusCheckFailed_Instance_HASH)
          {
            return MetricName::StatusCheckFailed_Instance;
          }
          else if (hashCode == StatusCheckFailed_System_HASH)
          {
            return MetricName::StatusCheckFailed_System;
          }
          else if (hashCode == ClientTLSNegotiationErrorCount_HASH)
          {
            return MetricName::ClientTLSNegotiationErrorCount;
          }
          else if (hashCode == HealthyHostCount_HASH)
          {
            return MetricName::HealthyHostCount;
          }
          else if (hashCode == UnhealthyHostCount_HASH)
          {
            return MetricName::UnhealthyHostCount;
          }
          else if (hashCode == HTTPCode_LB_4XX_Count_HASH)
          {
            return MetricName::HTTPCode_LB_4XX_Count;
          }
          else if (hashCode == HTTPCode_LB_5XX_Count_HASH)
          {
            return MetricName::HTTPCode_LB_5XX_Count;
          }
          else if (hashCode == HTTPCode_Instance_2XX_Count_HASH)
          {
            return MetricName::HTTPCode_Instance_2XX_Count;
          }
          else if (hashCode == HTTPCode_Instance_3XX_Count_HASH)
          {
            return MetricName::HTTPCode_Instance_3XX_Count;
          }
          else if (hashCode == HTTPCode_Instance_4XX_Count_HASH)
          {
            return MetricName::HTTPCode_Instance_4XX_Count;
          }
          else if (hashCode == HTTPCode_Instance_5XX_Count_HASH)
          {
            return MetricName::HTTPCode_Instance_5XX_Count;
          }
          else if (hashCode == InstanceResponseTime_HASH)
          {
            return MetricName::InstanceResponseTime;
          }
          else if (hashCode == RejectedConnectionCount_HASH)
          {
            return MetricName::RejectedConnectionCount;
          }
          else if (hashCode == RequestCount_HASH)
          {
            return MetricName::RequestCount;
          }
          else if (hashCode == DatabaseConnections_HASH)
          {
            return MetricName::DatabaseConnections;
          }
          else if (hashCode == DiskQueueDepth_HASH)
          {
            return MetricName::DiskQueueDepth;
          }
          else if (hashCode == FreeStorageSpace_HASH)
          {
            return MetricName::FreeStorageSpace;
          }
          else if (hashCode == NetworkReceiveThroughput_HASH)
          {
            return MetricName::NetworkReceiveThroughput;
          }
          else if (hashCode == NetworkTransmitThroughput_HASH)
          {
            return MetricName::NetworkTransmitThroughput;
          }
          else if (hashCode == BurstCapacityTime_HASH)
          {
            return MetricName::BurstCapacityTime;
          }
          else if (hashCode == BurstCapacityPercentage_HASH)
          {
            return MetricName::BurstCapacityPercentage;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricName>(hashCode);
          }

          return MetricName::NOT_SET;
        }

        Aws::String GetNameForMetricName(MetricName enumValue)
        {
          switch(enumValue)
          {
          case MetricName::NOT_SET:
            return {};
          case MetricName::CPUUtilization:
            return "CPUUtilization";
          case MetricName::NetworkIn:
            return "NetworkIn";
          case MetricName::NetworkOut:
            return "NetworkOut";
          case MetricName::StatusCheckFailed:
            return "StatusCheckFailed";
          case MetricName::StatusCheckFailed_Instance:
            return "StatusCheckFailed_Instance";
          case MetricName::StatusCheckFailed_System:
            return "StatusCheckFailed_System";
          case MetricName::ClientTLSNegotiationErrorCount:
            return "ClientTLSNegotiationErrorCount";
          case MetricName::HealthyHostCount:
            return "HealthyHostCount";
          case MetricName::UnhealthyHostCount:
            return "UnhealthyHostCount";
          case MetricName::HTTPCode_LB_4XX_Count:
            return "HTTPCode_LB_4XX_Count";
          case MetricName::HTTPCode_LB_5XX_Count:
            return "HTTPCode_LB_5XX_Count";
          case MetricName::HTTPCode_Instance_2XX_Count:
            return "HTTPCode_Instance_2XX_Count";
          case MetricName::HTTPCode_Instance_3XX_Count:
            return "HTTPCode_Instance_3XX_Count";
          case MetricName::HTTPCode_Instance_4XX_Count:
            return "HTTPCode_Instance_4XX_Count";
          case MetricName::HTTPCode_Instance_5XX_Count:
            return "HTTPCode_Instance_5XX_Count";
          case MetricName::InstanceResponseTime:
            return "InstanceResponseTime";
          case MetricName::RejectedConnectionCount:
            return "RejectedConnectionCount";
          case MetricName::RequestCount:
            return "RequestCount";
          case MetricName::DatabaseConnections:
            return "DatabaseConnections";
          case MetricName::DiskQueueDepth:
            return "DiskQueueDepth";
          case MetricName::FreeStorageSpace:
            return "FreeStorageSpace";
          case MetricName::NetworkReceiveThroughput:
            return "NetworkReceiveThroughput";
          case MetricName::NetworkTransmitThroughput:
            return "NetworkTransmitThroughput";
          case MetricName::BurstCapacityTime:
            return "BurstCapacityTime";
          case MetricName::BurstCapacityPercentage:
            return "BurstCapacityPercentage";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricNameMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
