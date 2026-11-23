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
enum class SnapmirrorPolicyScope { NOT_SET, FILESYSTEM, SVM };

namespace SnapmirrorPolicyScopeMapper {
AWS_FSX_API SnapmirrorPolicyScope GetSnapmirrorPolicyScopeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForSnapmirrorPolicyScope(SnapmirrorPolicyScope value);
}  // namespace SnapmirrorPolicyScopeMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
