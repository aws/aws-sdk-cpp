/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>

namespace Aws {
namespace DocDBElastic {
namespace Model {
enum class SnapshotType { NOT_SET, MANUAL, AUTOMATED };

namespace SnapshotTypeMapper {
AWS_DOCDBELASTIC_API SnapshotType GetSnapshotTypeForName(const Aws::String& name);

AWS_DOCDBELASTIC_API Aws::String GetNameForSnapshotType(SnapshotType value);
}  // namespace SnapshotTypeMapper
}  // namespace Model
}  // namespace DocDBElastic
}  // namespace Aws
