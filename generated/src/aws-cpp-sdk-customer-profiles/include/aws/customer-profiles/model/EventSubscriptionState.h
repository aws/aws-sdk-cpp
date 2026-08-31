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
enum class EventSubscriptionState { NOT_SET, RUNNING, UNHEALTHY, STOPPED };

namespace EventSubscriptionStateMapper {
AWS_CUSTOMERPROFILES_API EventSubscriptionState GetEventSubscriptionStateForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForEventSubscriptionState(EventSubscriptionState value);
}  // namespace EventSubscriptionStateMapper
}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
