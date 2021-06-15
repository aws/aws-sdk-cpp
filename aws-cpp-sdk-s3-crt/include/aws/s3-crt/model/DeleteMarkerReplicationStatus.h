/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace S3Crt
{
namespace Model
{
  enum class DeleteMarkerReplicationStatus
  {
    NOT_SET,
    Enabled,
    Disabled
  };

namespace DeleteMarkerReplicationStatusMapper
{
AWS_S3CRT_API DeleteMarkerReplicationStatus GetDeleteMarkerReplicationStatusForName(const Aws::String& name);

AWS_S3CRT_API Aws::String GetNameForDeleteMarkerReplicationStatus(DeleteMarkerReplicationStatus value);
} // namespace DeleteMarkerReplicationStatusMapper
} // namespace Model
} // namespace S3Crt
} // namespace Aws
