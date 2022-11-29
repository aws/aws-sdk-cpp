/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Omics
{
namespace Model
{
  enum class ReadSetImportJobStatus
  {
    NOT_SET,
    SUBMITTED,
    IN_PROGRESS,
    CANCELLING,
    CANCELLED,
    FAILED,
    COMPLETED,
    COMPLETED_WITH_FAILURES
  };

namespace ReadSetImportJobStatusMapper
{
AWS_OMICS_API ReadSetImportJobStatus GetReadSetImportJobStatusForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForReadSetImportJobStatus(ReadSetImportJobStatus value);
} // namespace ReadSetImportJobStatusMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
