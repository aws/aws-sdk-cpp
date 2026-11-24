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
enum class SnapshotPolicyScope { NOT_SET, FILESYSTEM, SVM };

namespace SnapshotPolicyScopeMapper {
AWS_FSX_API SnapshotPolicyScope GetSnapshotPolicyScopeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForSnapshotPolicyScope(SnapshotPolicyScope value);
}  // namespace SnapshotPolicyScopeMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
