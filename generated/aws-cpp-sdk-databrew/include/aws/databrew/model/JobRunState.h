/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{
  enum class JobRunState
  {
    NOT_SET,
    STARTING,
    RUNNING,
    STOPPING,
    STOPPED,
    SUCCEEDED,
    FAILED,
    TIMEOUT
  };

namespace JobRunStateMapper
{
AWS_GLUEDATABREW_API JobRunState GetJobRunStateForName(const Aws::String& name);

AWS_GLUEDATABREW_API Aws::String GetNameForJobRunState(JobRunState value);
} // namespace JobRunStateMapper
} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
