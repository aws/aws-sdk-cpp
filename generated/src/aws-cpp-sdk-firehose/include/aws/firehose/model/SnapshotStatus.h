/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Firehose
{
namespace Model
{
  enum class SnapshotStatus
  {
    NOT_SET,
    IN_PROGRESS,
    COMPLETE,
    SUSPENDED
  };

namespace SnapshotStatusMapper
{
AWS_FIREHOSE_API SnapshotStatus GetSnapshotStatusForName(const Aws::String& name);

AWS_FIREHOSE_API Aws::String GetNameForSnapshotStatus(SnapshotStatus value);
} // namespace SnapshotStatusMapper
} // namespace Model
} // namespace Firehose
} // namespace Aws
