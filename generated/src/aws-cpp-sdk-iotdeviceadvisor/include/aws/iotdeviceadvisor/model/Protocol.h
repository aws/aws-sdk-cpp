/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTDeviceAdvisor
{
namespace Model
{
  enum class Protocol
  {
    NOT_SET,
    MqttV3_1_1,
    MqttV5,
    MqttV3_1_1_OverWebSocket,
    MqttV5_OverWebSocket
  };

namespace ProtocolMapper
{
AWS_IOTDEVICEADVISOR_API Protocol GetProtocolForName(const Aws::String& name);

AWS_IOTDEVICEADVISOR_API Aws::String GetNameForProtocol(Protocol value);
} // namespace ProtocolMapper
} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
