/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/MetricName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTWireless
  {
    namespace Model
    {
      namespace MetricNameMapper
      {

        static const int DeviceRSSI_HASH = HashingUtils::HashString("DeviceRSSI");
        static const int DeviceSNR_HASH = HashingUtils::HashString("DeviceSNR");
        static const int DeviceUplinkCount_HASH = HashingUtils::HashString("DeviceUplinkCount");
        static const int DeviceDownlinkCount_HASH = HashingUtils::HashString("DeviceDownlinkCount");
        static const int DeviceUplinkLostCount_HASH = HashingUtils::HashString("DeviceUplinkLostCount");
        static const int DeviceUplinkLostRate_HASH = HashingUtils::HashString("DeviceUplinkLostRate");
        static const int DeviceJoinRequestCount_HASH = HashingUtils::HashString("DeviceJoinRequestCount");
        static const int DeviceJoinAcceptCount_HASH = HashingUtils::HashString("DeviceJoinAcceptCount");
        static const int DeviceRoamingUplinkCount_HASH = HashingUtils::HashString("DeviceRoamingUplinkCount");
        static const int DeviceRoamingDownlinkCount_HASH = HashingUtils::HashString("DeviceRoamingDownlinkCount");
        static const int GatewayUpTime_HASH = HashingUtils::HashString("GatewayUpTime");
        static const int GatewayDownTime_HASH = HashingUtils::HashString("GatewayDownTime");
        static const int GatewayRSSI_HASH = HashingUtils::HashString("GatewayRSSI");
        static const int GatewaySNR_HASH = HashingUtils::HashString("GatewaySNR");
        static const int GatewayUplinkCount_HASH = HashingUtils::HashString("GatewayUplinkCount");
        static const int GatewayDownlinkCount_HASH = HashingUtils::HashString("GatewayDownlinkCount");
        static const int GatewayJoinRequestCount_HASH = HashingUtils::HashString("GatewayJoinRequestCount");
        static const int GatewayJoinAcceptCount_HASH = HashingUtils::HashString("GatewayJoinAcceptCount");
        static const int AwsAccountUplinkCount_HASH = HashingUtils::HashString("AwsAccountUplinkCount");
        static const int AwsAccountDownlinkCount_HASH = HashingUtils::HashString("AwsAccountDownlinkCount");
        static const int AwsAccountUplinkLostCount_HASH = HashingUtils::HashString("AwsAccountUplinkLostCount");
        static const int AwsAccountUplinkLostRate_HASH = HashingUtils::HashString("AwsAccountUplinkLostRate");
        static const int AwsAccountJoinRequestCount_HASH = HashingUtils::HashString("AwsAccountJoinRequestCount");
        static const int AwsAccountJoinAcceptCount_HASH = HashingUtils::HashString("AwsAccountJoinAcceptCount");
        static const int AwsAccountRoamingUplinkCount_HASH = HashingUtils::HashString("AwsAccountRoamingUplinkCount");
        static const int AwsAccountRoamingDownlinkCount_HASH = HashingUtils::HashString("AwsAccountRoamingDownlinkCount");
        static const int AwsAccountDeviceCount_HASH = HashingUtils::HashString("AwsAccountDeviceCount");
        static const int AwsAccountGatewayCount_HASH = HashingUtils::HashString("AwsAccountGatewayCount");
        static const int AwsAccountActiveDeviceCount_HASH = HashingUtils::HashString("AwsAccountActiveDeviceCount");
        static const int AwsAccountActiveGatewayCount_HASH = HashingUtils::HashString("AwsAccountActiveGatewayCount");


        MetricName GetMetricNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DeviceRSSI_HASH)
          {
            return MetricName::DeviceRSSI;
          }
          else if (hashCode == DeviceSNR_HASH)
          {
            return MetricName::DeviceSNR;
          }
          else if (hashCode == DeviceUplinkCount_HASH)
          {
            return MetricName::DeviceUplinkCount;
          }
          else if (hashCode == DeviceDownlinkCount_HASH)
          {
            return MetricName::DeviceDownlinkCount;
          }
          else if (hashCode == DeviceUplinkLostCount_HASH)
          {
            return MetricName::DeviceUplinkLostCount;
          }
          else if (hashCode == DeviceUplinkLostRate_HASH)
          {
            return MetricName::DeviceUplinkLostRate;
          }
          else if (hashCode == DeviceJoinRequestCount_HASH)
          {
            return MetricName::DeviceJoinRequestCount;
          }
          else if (hashCode == DeviceJoinAcceptCount_HASH)
          {
            return MetricName::DeviceJoinAcceptCount;
          }
          else if (hashCode == DeviceRoamingUplinkCount_HASH)
          {
            return MetricName::DeviceRoamingUplinkCount;
          }
          else if (hashCode == DeviceRoamingDownlinkCount_HASH)
          {
            return MetricName::DeviceRoamingDownlinkCount;
          }
          else if (hashCode == GatewayUpTime_HASH)
          {
            return MetricName::GatewayUpTime;
          }
          else if (hashCode == GatewayDownTime_HASH)
          {
            return MetricName::GatewayDownTime;
          }
          else if (hashCode == GatewayRSSI_HASH)
          {
            return MetricName::GatewayRSSI;
          }
          else if (hashCode == GatewaySNR_HASH)
          {
            return MetricName::GatewaySNR;
          }
          else if (hashCode == GatewayUplinkCount_HASH)
          {
            return MetricName::GatewayUplinkCount;
          }
          else if (hashCode == GatewayDownlinkCount_HASH)
          {
            return MetricName::GatewayDownlinkCount;
          }
          else if (hashCode == GatewayJoinRequestCount_HASH)
          {
            return MetricName::GatewayJoinRequestCount;
          }
          else if (hashCode == GatewayJoinAcceptCount_HASH)
          {
            return MetricName::GatewayJoinAcceptCount;
          }
          else if (hashCode == AwsAccountUplinkCount_HASH)
          {
            return MetricName::AwsAccountUplinkCount;
          }
          else if (hashCode == AwsAccountDownlinkCount_HASH)
          {
            return MetricName::AwsAccountDownlinkCount;
          }
          else if (hashCode == AwsAccountUplinkLostCount_HASH)
          {
            return MetricName::AwsAccountUplinkLostCount;
          }
          else if (hashCode == AwsAccountUplinkLostRate_HASH)
          {
            return MetricName::AwsAccountUplinkLostRate;
          }
          else if (hashCode == AwsAccountJoinRequestCount_HASH)
          {
            return MetricName::AwsAccountJoinRequestCount;
          }
          else if (hashCode == AwsAccountJoinAcceptCount_HASH)
          {
            return MetricName::AwsAccountJoinAcceptCount;
          }
          else if (hashCode == AwsAccountRoamingUplinkCount_HASH)
          {
            return MetricName::AwsAccountRoamingUplinkCount;
          }
          else if (hashCode == AwsAccountRoamingDownlinkCount_HASH)
          {
            return MetricName::AwsAccountRoamingDownlinkCount;
          }
          else if (hashCode == AwsAccountDeviceCount_HASH)
          {
            return MetricName::AwsAccountDeviceCount;
          }
          else if (hashCode == AwsAccountGatewayCount_HASH)
          {
            return MetricName::AwsAccountGatewayCount;
          }
          else if (hashCode == AwsAccountActiveDeviceCount_HASH)
          {
            return MetricName::AwsAccountActiveDeviceCount;
          }
          else if (hashCode == AwsAccountActiveGatewayCount_HASH)
          {
            return MetricName::AwsAccountActiveGatewayCount;
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
          case MetricName::DeviceRSSI:
            return "DeviceRSSI";
          case MetricName::DeviceSNR:
            return "DeviceSNR";
          case MetricName::DeviceUplinkCount:
            return "DeviceUplinkCount";
          case MetricName::DeviceDownlinkCount:
            return "DeviceDownlinkCount";
          case MetricName::DeviceUplinkLostCount:
            return "DeviceUplinkLostCount";
          case MetricName::DeviceUplinkLostRate:
            return "DeviceUplinkLostRate";
          case MetricName::DeviceJoinRequestCount:
            return "DeviceJoinRequestCount";
          case MetricName::DeviceJoinAcceptCount:
            return "DeviceJoinAcceptCount";
          case MetricName::DeviceRoamingUplinkCount:
            return "DeviceRoamingUplinkCount";
          case MetricName::DeviceRoamingDownlinkCount:
            return "DeviceRoamingDownlinkCount";
          case MetricName::GatewayUpTime:
            return "GatewayUpTime";
          case MetricName::GatewayDownTime:
            return "GatewayDownTime";
          case MetricName::GatewayRSSI:
            return "GatewayRSSI";
          case MetricName::GatewaySNR:
            return "GatewaySNR";
          case MetricName::GatewayUplinkCount:
            return "GatewayUplinkCount";
          case MetricName::GatewayDownlinkCount:
            return "GatewayDownlinkCount";
          case MetricName::GatewayJoinRequestCount:
            return "GatewayJoinRequestCount";
          case MetricName::GatewayJoinAcceptCount:
            return "GatewayJoinAcceptCount";
          case MetricName::AwsAccountUplinkCount:
            return "AwsAccountUplinkCount";
          case MetricName::AwsAccountDownlinkCount:
            return "AwsAccountDownlinkCount";
          case MetricName::AwsAccountUplinkLostCount:
            return "AwsAccountUplinkLostCount";
          case MetricName::AwsAccountUplinkLostRate:
            return "AwsAccountUplinkLostRate";
          case MetricName::AwsAccountJoinRequestCount:
            return "AwsAccountJoinRequestCount";
          case MetricName::AwsAccountJoinAcceptCount:
            return "AwsAccountJoinAcceptCount";
          case MetricName::AwsAccountRoamingUplinkCount:
            return "AwsAccountRoamingUplinkCount";
          case MetricName::AwsAccountRoamingDownlinkCount:
            return "AwsAccountRoamingDownlinkCount";
          case MetricName::AwsAccountDeviceCount:
            return "AwsAccountDeviceCount";
          case MetricName::AwsAccountGatewayCount:
            return "AwsAccountGatewayCount";
          case MetricName::AwsAccountActiveDeviceCount:
            return "AwsAccountActiveDeviceCount";
          case MetricName::AwsAccountActiveGatewayCount:
            return "AwsAccountActiveGatewayCount";
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
  } // namespace IoTWireless
} // namespace Aws
