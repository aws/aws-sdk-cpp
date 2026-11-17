/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

namespace Aws {
namespace ElementalInference {
namespace Model {
enum class EventBridgeDeliveryMode { NOT_SET, ENABLED, DISABLED };

namespace EventBridgeDeliveryModeMapper {
AWS_ELEMENTALINFERENCE_API EventBridgeDeliveryMode GetEventBridgeDeliveryModeForName(const Aws::String& name);

AWS_ELEMENTALINFERENCE_API Aws::String GetNameForEventBridgeDeliveryMode(EventBridgeDeliveryMode value);
}  // namespace EventBridgeDeliveryModeMapper
}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
