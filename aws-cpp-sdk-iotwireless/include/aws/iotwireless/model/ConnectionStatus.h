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
  enum class ConnectionStatus
  {
    NOT_SET,
    Connected,
    Disconnected
  };

namespace ConnectionStatusMapper
{
AWS_IOTWIRELESS_API ConnectionStatus GetConnectionStatusForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForConnectionStatus(ConnectionStatus value);
} // namespace ConnectionStatusMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
