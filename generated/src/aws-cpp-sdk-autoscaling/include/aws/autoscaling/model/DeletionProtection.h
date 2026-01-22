/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AutoScaling {
namespace Model {
enum class DeletionProtection { NOT_SET, none, prevent_force_deletion, prevent_all_deletion };

namespace DeletionProtectionMapper {
AWS_AUTOSCALING_API DeletionProtection GetDeletionProtectionForName(const Aws::String& name);

AWS_AUTOSCALING_API Aws::String GetNameForDeletionProtection(DeletionProtection value);
}  // namespace DeletionProtectionMapper
}  // namespace Model
}  // namespace AutoScaling
}  // namespace Aws
