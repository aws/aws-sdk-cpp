/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Braket
{
namespace Model
{
  enum class JobPrimaryStatus
  {
    NOT_SET,
    QUEUED,
    RUNNING,
    COMPLETED,
    FAILED,
    CANCELLING,
    CANCELLED
  };

namespace JobPrimaryStatusMapper
{
AWS_BRAKET_API JobPrimaryStatus GetJobPrimaryStatusForName(const Aws::String& name);

AWS_BRAKET_API Aws::String GetNameForJobPrimaryStatus(JobPrimaryStatus value);
} // namespace JobPrimaryStatusMapper
} // namespace Model
} // namespace Braket
} // namespace Aws
