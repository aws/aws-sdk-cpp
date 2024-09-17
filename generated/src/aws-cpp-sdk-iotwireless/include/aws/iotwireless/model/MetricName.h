/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{
  enum class MetricName
  {
    NOT_SET,
    DeviceRSSI,
    DeviceSNR,
    DeviceRoamingRSSI,
    DeviceRoamingSNR,
    DeviceUplinkCount,
    DeviceDownlinkCount,
    DeviceUplinkLostCount,
    DeviceUplinkLostRate,
    DeviceJoinRequestCount,
    DeviceJoinAcceptCount,
    DeviceRoamingUplinkCount,
    DeviceRoamingDownlinkCount,
    GatewayUpTime,
    GatewayDownTime,
    GatewayRSSI,
    GatewaySNR,
    GatewayUplinkCount,
    GatewayDownlinkCount,
    GatewayJoinRequestCount,
    GatewayJoinAcceptCount,
    AwsAccountUplinkCount,
    AwsAccountDownlinkCount,
    AwsAccountUplinkLostCount,
    AwsAccountUplinkLostRate,
    AwsAccountJoinRequestCount,
    AwsAccountJoinAcceptCount,
    AwsAccountRoamingUplinkCount,
    AwsAccountRoamingDownlinkCount,
    AwsAccountDeviceCount,
    AwsAccountGatewayCount,
    AwsAccountActiveDeviceCount,
    AwsAccountActiveGatewayCount
  };

namespace MetricNameMapper
{
AWS_IOTWIRELESS_API MetricName GetMetricNameForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForMetricName(MetricName value);
} // namespace MetricNameMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
