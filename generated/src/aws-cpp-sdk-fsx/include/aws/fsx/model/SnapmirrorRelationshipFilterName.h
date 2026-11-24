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
enum class SnapmirrorRelationshipFilterName { NOT_SET, file_system_id, destination_volume_id };

namespace SnapmirrorRelationshipFilterNameMapper {
AWS_FSX_API SnapmirrorRelationshipFilterName GetSnapmirrorRelationshipFilterNameForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForSnapmirrorRelationshipFilterName(SnapmirrorRelationshipFilterName value);
}  // namespace SnapmirrorRelationshipFilterNameMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
