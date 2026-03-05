/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectHealth {
namespace Model {
enum class SubscriptionStatus { NOT_SET, ACTIVE, INACTIVE, DELETED };

namespace SubscriptionStatusMapper {
AWS_CONNECTHEALTH_API SubscriptionStatus GetSubscriptionStatusForName(const Aws::String& name);

AWS_CONNECTHEALTH_API Aws::String GetNameForSubscriptionStatus(SubscriptionStatus value);
}  // namespace SubscriptionStatusMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
