/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class NotificationSource { NOT_SET, CUSTOMER, RULES, SYSTEM };

namespace NotificationSourceMapper {
AWS_CONNECT_API NotificationSource GetNotificationSourceForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForNotificationSource(NotificationSource value);
}  // namespace NotificationSourceMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
