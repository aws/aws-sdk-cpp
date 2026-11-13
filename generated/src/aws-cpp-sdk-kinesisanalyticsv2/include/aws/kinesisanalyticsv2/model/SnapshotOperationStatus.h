/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {
enum class SnapshotOperationStatus { NOT_SET, IN_PROGRESS, SUCCESSFUL, FAILED, CANCELLED };

namespace SnapshotOperationStatusMapper {
AWS_KINESISANALYTICSV2_API SnapshotOperationStatus GetSnapshotOperationStatusForName(const Aws::String& name);

AWS_KINESISANALYTICSV2_API Aws::String GetNameForSnapshotOperationStatus(SnapshotOperationStatus value);
}  // namespace SnapshotOperationStatusMapper
}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
