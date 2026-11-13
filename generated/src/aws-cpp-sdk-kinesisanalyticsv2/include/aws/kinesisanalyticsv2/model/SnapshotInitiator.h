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
enum class SnapshotInitiator { NOT_SET, USER, SYSTEM };

namespace SnapshotInitiatorMapper {
AWS_KINESISANALYTICSV2_API SnapshotInitiator GetSnapshotInitiatorForName(const Aws::String& name);

AWS_KINESISANALYTICSV2_API Aws::String GetNameForSnapshotInitiator(SnapshotInitiator value);
}  // namespace SnapshotInitiatorMapper
}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
