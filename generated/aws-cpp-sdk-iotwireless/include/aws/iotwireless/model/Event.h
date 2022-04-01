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
  enum class Event
  {
    NOT_SET,
    discovered,
    lost,
    ack,
    nack,
    passthrough
  };

namespace EventMapper
{
AWS_IOTWIRELESS_API Event GetEventForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForEvent(Event value);
} // namespace EventMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
