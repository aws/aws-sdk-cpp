/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Honeycode
{
namespace Model
{
  enum class TableDataImportJobStatus
  {
    NOT_SET,
    SUBMITTED,
    IN_PROGRESS,
    COMPLETED,
    FAILED
  };

namespace TableDataImportJobStatusMapper
{
AWS_HONEYCODE_API TableDataImportJobStatus GetTableDataImportJobStatusForName(const Aws::String& name);

AWS_HONEYCODE_API Aws::String GetNameForTableDataImportJobStatus(TableDataImportJobStatus value);
} // namespace TableDataImportJobStatusMapper
} // namespace Model
} // namespace Honeycode
} // namespace Aws
