/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{
  enum class SnapshotStatus
  {
    NOT_SET,
    CREATING,
    READY,
    DELETING,
    FAILED
  };

namespace SnapshotStatusMapper
{
AWS_KINESISANALYTICSV2_API SnapshotStatus GetSnapshotStatusForName(const Aws::String& name);

AWS_KINESISANALYTICSV2_API Aws::String GetNameForSnapshotStatus(SnapshotStatus value);
} // namespace SnapshotStatusMapper
} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
