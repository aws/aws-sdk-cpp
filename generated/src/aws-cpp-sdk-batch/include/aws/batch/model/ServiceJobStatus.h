/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Batch
{
namespace Model
{
  enum class ServiceJobStatus
  {
    NOT_SET,
    SUBMITTED,
    PENDING,
    RUNNABLE,
    SCHEDULED,
    STARTING,
    RUNNING,
    SUCCEEDED,
    FAILED
  };

namespace ServiceJobStatusMapper
{
AWS_BATCH_API ServiceJobStatus GetServiceJobStatusForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForServiceJobStatus(ServiceJobStatus value);
} // namespace ServiceJobStatusMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
