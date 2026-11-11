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
enum class SnapshotOperation { NOT_SET, CreateSnapshot, DeleteSnapshot, ImportSnapshot, ExportSnapshot, SystemCreateSnapshot };

namespace SnapshotOperationMapper {
AWS_KINESISANALYTICSV2_API SnapshotOperation GetSnapshotOperationForName(const Aws::String& name);

AWS_KINESISANALYTICSV2_API Aws::String GetNameForSnapshotOperation(SnapshotOperation value);
}  // namespace SnapshotOperationMapper
}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
