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
enum class SnapmirrorRelationshipLifecycle { NOT_SET, CREATING, CREATED, DELETING, FAILED };

namespace SnapmirrorRelationshipLifecycleMapper {
AWS_FSX_API SnapmirrorRelationshipLifecycle GetSnapmirrorRelationshipLifecycleForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForSnapmirrorRelationshipLifecycle(SnapmirrorRelationshipLifecycle value);
}  // namespace SnapmirrorRelationshipLifecycleMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
