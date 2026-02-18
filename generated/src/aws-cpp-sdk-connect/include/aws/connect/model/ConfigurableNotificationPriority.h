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
enum class ConfigurableNotificationPriority { NOT_SET, HIGH, LOW };

namespace ConfigurableNotificationPriorityMapper {
AWS_CONNECT_API ConfigurableNotificationPriority GetConfigurableNotificationPriorityForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForConfigurableNotificationPriority(ConfigurableNotificationPriority value);
}  // namespace ConfigurableNotificationPriorityMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
