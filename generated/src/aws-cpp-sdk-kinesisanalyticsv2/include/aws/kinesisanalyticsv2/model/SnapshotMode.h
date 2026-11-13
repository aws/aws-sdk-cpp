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
enum class SnapshotMode { NOT_SET, APPLICATION_SNAPSHOTS_LEGACY, ENHANCED_SNAPSHOTS };

namespace SnapshotModeMapper {
AWS_KINESISANALYTICSV2_API SnapshotMode GetSnapshotModeForName(const Aws::String& name);

AWS_KINESISANALYTICSV2_API Aws::String GetNameForSnapshotMode(SnapshotMode value);
}  // namespace SnapshotModeMapper
}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
