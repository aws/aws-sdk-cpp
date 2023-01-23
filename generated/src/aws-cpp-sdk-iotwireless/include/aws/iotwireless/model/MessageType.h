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
  enum class MessageType
  {
    NOT_SET,
    CUSTOM_COMMAND_ID_NOTIFY,
    CUSTOM_COMMAND_ID_GET,
    CUSTOM_COMMAND_ID_SET,
    CUSTOM_COMMAND_ID_RESP
  };

namespace MessageTypeMapper
{
AWS_IOTWIRELESS_API MessageType GetMessageTypeForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForMessageType(MessageType value);
} // namespace MessageTypeMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
