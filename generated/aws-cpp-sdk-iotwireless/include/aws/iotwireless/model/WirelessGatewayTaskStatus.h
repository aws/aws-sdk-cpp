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
  enum class WirelessGatewayTaskStatus
  {
    NOT_SET,
    PENDING,
    IN_PROGRESS,
    FIRST_RETRY,
    SECOND_RETRY,
    COMPLETED,
    FAILED
  };

namespace WirelessGatewayTaskStatusMapper
{
AWS_IOTWIRELESS_API WirelessGatewayTaskStatus GetWirelessGatewayTaskStatusForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForWirelessGatewayTaskStatus(WirelessGatewayTaskStatus value);
} // namespace WirelessGatewayTaskStatusMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
