/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMRServerless
{
namespace Model
{
  enum class JobRunState
  {
    NOT_SET,
    SUBMITTED,
    PENDING,
    SCHEDULED,
    RUNNING,
    SUCCESS,
    FAILED,
    CANCELLING,
    CANCELLED
  };

namespace JobRunStateMapper
{
AWS_EMRSERVERLESS_API JobRunState GetJobRunStateForName(const Aws::String& name);

AWS_EMRSERVERLESS_API Aws::String GetNameForJobRunState(JobRunState value);
} // namespace JobRunStateMapper
} // namespace Model
} // namespace EMRServerless
} // namespace Aws
