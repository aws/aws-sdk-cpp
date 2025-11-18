/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudFormation {
namespace Model {
enum class EventType { NOT_SET, STACK_EVENT, PROGRESS_EVENT, VALIDATION_ERROR, PROVISIONING_ERROR, HOOK_INVOCATION_ERROR };

namespace EventTypeMapper {
AWS_CLOUDFORMATION_API EventType GetEventTypeForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForEventType(EventType value);
}  // namespace EventTypeMapper
}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
