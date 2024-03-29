/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeConnections
{
namespace Model
{
  enum class RepositorySyncStatus
  {
    NOT_SET,
    FAILED,
    INITIATED,
    IN_PROGRESS,
    SUCCEEDED,
    QUEUED
  };

namespace RepositorySyncStatusMapper
{
AWS_CODECONNECTIONS_API RepositorySyncStatus GetRepositorySyncStatusForName(const Aws::String& name);

AWS_CODECONNECTIONS_API Aws::String GetNameForRepositorySyncStatus(RepositorySyncStatus value);
} // namespace RepositorySyncStatusMapper
} // namespace Model
} // namespace CodeConnections
} // namespace Aws
