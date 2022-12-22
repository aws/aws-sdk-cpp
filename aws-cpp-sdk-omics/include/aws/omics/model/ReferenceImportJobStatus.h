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
  enum class ReferenceImportJobStatus
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

namespace ReferenceImportJobStatusMapper
{
AWS_OMICS_API ReferenceImportJobStatus GetReferenceImportJobStatusForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForReferenceImportJobStatus(ReferenceImportJobStatus value);
} // namespace ReferenceImportJobStatusMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
