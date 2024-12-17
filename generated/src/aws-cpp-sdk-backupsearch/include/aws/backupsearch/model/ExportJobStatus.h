/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BackupSearch
{
namespace Model
{
  enum class ExportJobStatus
  {
    NOT_SET,
    RUNNING,
    FAILED,
    COMPLETED
  };

namespace ExportJobStatusMapper
{
AWS_BACKUPSEARCH_API ExportJobStatus GetExportJobStatusForName(const Aws::String& name);

AWS_BACKUPSEARCH_API Aws::String GetNameForExportJobStatus(ExportJobStatus value);
} // namespace ExportJobStatusMapper
} // namespace Model
} // namespace BackupSearch
} // namespace Aws
