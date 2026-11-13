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
enum class SnapshotInitiatorOperation { NOT_SET, CreateSnapshot, ImportSnapshot, SystemCreateSnapshot };

namespace SnapshotInitiatorOperationMapper {
AWS_KINESISANALYTICSV2_API SnapshotInitiatorOperation GetSnapshotInitiatorOperationForName(const Aws::String& name);

AWS_KINESISANALYTICSV2_API Aws::String GetNameForSnapshotInitiatorOperation(SnapshotInitiatorOperation value);
}  // namespace SnapshotInitiatorOperationMapper
}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
