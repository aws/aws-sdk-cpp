/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class AutoSnapshotStatus
  {
    NOT_SET,
    Success,
    Failed,
    InProgress,
    NotFound
  };

namespace AutoSnapshotStatusMapper
{
AWS_LIGHTSAIL_API AutoSnapshotStatus GetAutoSnapshotStatusForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForAutoSnapshotStatus(AutoSnapshotStatus value);
} // namespace AutoSnapshotStatusMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
