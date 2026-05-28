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
enum class VolumeState { NOT_SET, PENDING_CREATION, PENDING_ATTACHMENT, IN_USE, AVAILABLE, PENDING_DELETION };

namespace VolumeStateMapper {
AWS_DEADLINE_API VolumeState GetVolumeStateForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForVolumeState(VolumeState value);
}  // namespace VolumeStateMapper
}  // namespace Model
}  // namespace deadline
}  // namespace Aws
