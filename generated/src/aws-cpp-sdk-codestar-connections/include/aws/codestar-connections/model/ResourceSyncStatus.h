/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-connections/CodeStarconnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeStarconnections
{
namespace Model
{
  enum class ResourceSyncStatus
  {
    NOT_SET,
    FAILED,
    INITIATED,
    IN_PROGRESS,
    SUCCEEDED
  };

namespace ResourceSyncStatusMapper
{
AWS_CODESTARCONNECTIONS_API ResourceSyncStatus GetResourceSyncStatusForName(const Aws::String& name);

AWS_CODESTARCONNECTIONS_API Aws::String GetNameForResourceSyncStatus(ResourceSyncStatus value);
} // namespace ResourceSyncStatusMapper
} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
