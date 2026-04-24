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
enum class SubscriptionStatus { NOT_SET, APPROVED, REVOKED, CANCELLED };

namespace SubscriptionStatusMapper {
AWS_DATAZONE_API SubscriptionStatus GetSubscriptionStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForSubscriptionStatus(SubscriptionStatus value);
}  // namespace SubscriptionStatusMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
