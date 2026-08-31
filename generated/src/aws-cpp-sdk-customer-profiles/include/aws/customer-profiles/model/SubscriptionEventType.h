/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>

namespace Aws {
namespace CustomerProfiles {
namespace Model {
enum class SubscriptionEventType { NOT_SET, LIVE, SCHEDULE };

namespace SubscriptionEventTypeMapper {
AWS_CUSTOMERPROFILES_API SubscriptionEventType GetSubscriptionEventTypeForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForSubscriptionEventType(SubscriptionEventType value);
}  // namespace SubscriptionEventTypeMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
