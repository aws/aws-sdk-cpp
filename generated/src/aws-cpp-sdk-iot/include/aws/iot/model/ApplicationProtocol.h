/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class ApplicationProtocol
  {
    NOT_SET,
    SECURE_MQTT,
    MQTT_WSS,
    HTTPS,
    DEFAULT
  };

namespace ApplicationProtocolMapper
{
AWS_IOT_API ApplicationProtocol GetApplicationProtocolForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForApplicationProtocol(ApplicationProtocol value);
} // namespace ApplicationProtocolMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
