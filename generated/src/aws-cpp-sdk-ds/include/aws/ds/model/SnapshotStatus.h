/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{
  enum class SnapshotStatus
  {
    NOT_SET,
    Creating,
    Completed,
    Failed
  };

namespace SnapshotStatusMapper
{
AWS_DIRECTORYSERVICE_API SnapshotStatus GetSnapshotStatusForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForSnapshotStatus(SnapshotStatus value);
} // namespace SnapshotStatusMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
