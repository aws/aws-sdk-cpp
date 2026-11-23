/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>

namespace Aws {
namespace FSx {
namespace Model {
enum class SnapshotPolicyLifecycle { NOT_SET, CREATING, CREATED, DELETING, FAILED };

namespace SnapshotPolicyLifecycleMapper {
AWS_FSX_API SnapshotPolicyLifecycle GetSnapshotPolicyLifecycleForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForSnapshotPolicyLifecycle(SnapshotPolicyLifecycle value);
}  // namespace SnapshotPolicyLifecycleMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
