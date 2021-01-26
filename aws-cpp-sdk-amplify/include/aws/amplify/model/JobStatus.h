/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Amplify
{
namespace Model
{
  enum class JobStatus
  {
    NOT_SET,
    PENDING,
    PROVISIONING,
    RUNNING,
    FAILED,
    SUCCEED,
    CANCELLING,
    CANCELLED
  };

namespace JobStatusMapper
{
AWS_AMPLIFY_API JobStatus GetJobStatusForName(const Aws::String& name);

AWS_AMPLIFY_API Aws::String GetNameForJobStatus(JobStatus value);
} // namespace JobStatusMapper
} // namespace Model
} // namespace Amplify
} // namespace Aws
