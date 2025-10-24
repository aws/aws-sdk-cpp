/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/IoTWireless_EXPORTS.h>

namespace Aws {
namespace IoTWireless {
namespace Model {
enum class EventNotificationPartnerType { NOT_SET, Sidewalk };

namespace EventNotificationPartnerTypeMapper {
AWS_IOTWIRELESS_API EventNotificationPartnerType GetEventNotificationPartnerTypeForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForEventNotificationPartnerType(EventNotificationPartnerType value);
}  // namespace EventNotificationPartnerTypeMapper
}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
