/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/Firehose_EXPORTS.h>

namespace Aws {
namespace Firehose {
namespace Model {
enum class SnapshotRequestedBy { NOT_SET, USER, FIREHOSE };

namespace SnapshotRequestedByMapper {
AWS_FIREHOSE_API SnapshotRequestedBy GetSnapshotRequestedByForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForSnapshotRequestedBy(SnapshotRequestedBy value);
}  // namespace SnapshotRequestedByMapper
}  // namespace Model
}  // namespace Firehose
}  // namespace Aws
