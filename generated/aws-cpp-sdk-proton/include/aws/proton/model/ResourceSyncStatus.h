/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Proton
{
namespace Model
{
  enum class ResourceSyncStatus
  {
    NOT_SET,
    INITIATED,
    IN_PROGRESS,
    SUCCEEDED,
    FAILED
  };

namespace ResourceSyncStatusMapper
{
AWS_PROTON_API ResourceSyncStatus GetResourceSyncStatusForName(const Aws::String& name);

AWS_PROTON_API Aws::String GetNameForResourceSyncStatus(ResourceSyncStatus value);
} // namespace ResourceSyncStatusMapper
} // namespace Model
} // namespace Proton
} // namespace Aws
