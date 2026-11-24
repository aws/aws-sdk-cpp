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
enum class UpdatableSnapmirrorRelationshipState { NOT_SET, SNAPMIRRORED, PAUSED, BROKEN_OFF };

namespace UpdatableSnapmirrorRelationshipStateMapper {
AWS_FSX_API UpdatableSnapmirrorRelationshipState GetUpdatableSnapmirrorRelationshipStateForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForUpdatableSnapmirrorRelationshipState(UpdatableSnapmirrorRelationshipState value);
}  // namespace UpdatableSnapmirrorRelationshipStateMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
