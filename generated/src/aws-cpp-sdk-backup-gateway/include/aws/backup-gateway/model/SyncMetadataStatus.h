/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BackupGateway
{
namespace Model
{
  enum class SyncMetadataStatus
  {
    NOT_SET,
    CREATED,
    RUNNING,
    FAILED,
    PARTIALLY_FAILED,
    SUCCEEDED
  };

namespace SyncMetadataStatusMapper
{
AWS_BACKUPGATEWAY_API SyncMetadataStatus GetSyncMetadataStatusForName(const Aws::String& name);

AWS_BACKUPGATEWAY_API Aws::String GetNameForSyncMetadataStatus(SyncMetadataStatus value);
} // namespace SyncMetadataStatusMapper
} // namespace Model
} // namespace BackupGateway
} // namespace Aws
