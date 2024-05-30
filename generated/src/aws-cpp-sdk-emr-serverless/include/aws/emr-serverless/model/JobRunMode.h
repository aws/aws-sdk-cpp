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
  enum class JobRunMode
  {
    NOT_SET,
    BATCH,
    STREAMING
  };

namespace JobRunModeMapper
{
AWS_EMRSERVERLESS_API JobRunMode GetJobRunModeForName(const Aws::String& name);

AWS_EMRSERVERLESS_API Aws::String GetNameForJobRunMode(JobRunMode value);
} // namespace JobRunModeMapper
} // namespace Model
} // namespace EMRServerless
} // namespace Aws
