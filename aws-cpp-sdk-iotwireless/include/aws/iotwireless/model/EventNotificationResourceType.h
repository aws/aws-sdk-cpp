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
  enum class EventNotificationResourceType
  {
    NOT_SET,
    SidewalkAccount,
    WirelessDevice,
    WirelessGateway
  };

namespace EventNotificationResourceTypeMapper
{
AWS_IOTWIRELESS_API EventNotificationResourceType GetEventNotificationResourceTypeForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForEventNotificationResourceType(EventNotificationResourceType value);
} // namespace EventNotificationResourceTypeMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
