/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{
  enum class SyncStatus
  {
    NOT_SET,
    SYNCING,
    ACKNOWLEDGED,
    IN_SYNC,
    SYNC_FAILED,
    DELETING,
    DELETE_FAILED
  };

namespace SyncStatusMapper
{
AWS_KINESISVIDEO_API SyncStatus GetSyncStatusForName(const Aws::String& name);

AWS_KINESISVIDEO_API Aws::String GetNameForSyncStatus(SyncStatus value);
} // namespace SyncStatusMapper
} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
