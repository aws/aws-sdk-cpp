/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class NotificationDeliveryType
  {
    NOT_SET,
    EMAIL
  };

namespace NotificationDeliveryTypeMapper
{
AWS_CONNECT_API NotificationDeliveryType GetNotificationDeliveryTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForNotificationDeliveryType(NotificationDeliveryType value);
} // namespace NotificationDeliveryTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
