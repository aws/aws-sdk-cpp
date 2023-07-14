/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace kendra
{
namespace Model
{
  enum class DataSourceSyncJobStatus
  {
    NOT_SET,
    FAILED,
    SUCCEEDED,
    SYNCING,
    INCOMPLETE,
    STOPPING,
    ABORTED,
    SYNCING_INDEXING
  };

namespace DataSourceSyncJobStatusMapper
{
AWS_KENDRA_API DataSourceSyncJobStatus GetDataSourceSyncJobStatusForName(const Aws::String& name);

AWS_KENDRA_API Aws::String GetNameForDataSourceSyncJobStatus(DataSourceSyncJobStatus value);
} // namespace DataSourceSyncJobStatusMapper
} // namespace Model
} // namespace kendra
} // namespace Aws
