/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class NotificationResourceType { NOT_SET, PROJECT };

namespace NotificationResourceTypeMapper {
AWS_DATAZONE_API NotificationResourceType GetNotificationResourceTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForNotificationResourceType(NotificationResourceType value);
}  // namespace NotificationResourceTypeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
