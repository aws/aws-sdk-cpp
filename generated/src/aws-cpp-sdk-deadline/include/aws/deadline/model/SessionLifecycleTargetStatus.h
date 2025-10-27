/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/Deadline_EXPORTS.h>

namespace Aws {
namespace deadline {
namespace Model {
enum class SessionLifecycleTargetStatus { NOT_SET, ENDED };

namespace SessionLifecycleTargetStatusMapper {
AWS_DEADLINE_API SessionLifecycleTargetStatus GetSessionLifecycleTargetStatusForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForSessionLifecycleTargetStatus(SessionLifecycleTargetStatus value);
}  // namespace SessionLifecycleTargetStatusMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws
