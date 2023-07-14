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
  enum class Protocol
  {
    NOT_SET,
    MQTT,
    HTTP
  };

namespace ProtocolMapper
{
AWS_IOT_API Protocol GetProtocolForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForProtocol(Protocol value);
} // namespace ProtocolMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
