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
  enum class ReadSetActivationJobStatus
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

namespace ReadSetActivationJobStatusMapper
{
AWS_OMICS_API ReadSetActivationJobStatus GetReadSetActivationJobStatusForName(const Aws::String& name);

AWS_OMICS_API Aws::String GetNameForReadSetActivationJobStatus(ReadSetActivationJobStatus value);
} // namespace ReadSetActivationJobStatusMapper
} // namespace Model
} // namespace Omics
} // namespace Aws
