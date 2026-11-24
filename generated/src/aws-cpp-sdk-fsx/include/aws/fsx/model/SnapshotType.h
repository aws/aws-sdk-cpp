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
enum class SnapshotType { NOT_SET, ONTAP, OPENZFS };

namespace SnapshotTypeMapper {
AWS_FSX_API SnapshotType GetSnapshotTypeForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForSnapshotType(SnapshotType value);
}  // namespace SnapshotTypeMapper
}  // namespace Model
}  // namespace FSx
}  // namespace Aws
