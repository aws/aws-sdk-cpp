/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMRContainers
{
namespace Model
{
  enum class JobRunState
  {
    NOT_SET,
    PENDING,
    SUBMITTED,
    RUNNING,
    FAILED,
    CANCELLED,
    CANCEL_PENDING,
    COMPLETED
  };

namespace JobRunStateMapper
{
AWS_EMRCONTAINERS_API JobRunState GetJobRunStateForName(const Aws::String& name);

AWS_EMRCONTAINERS_API Aws::String GetNameForJobRunState(JobRunState value);
} // namespace JobRunStateMapper
} // namespace Model
} // namespace EMRContainers
} // namespace Aws
