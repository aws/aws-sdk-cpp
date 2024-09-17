/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace deadline
{
namespace Model
{
  enum class CreateJobTargetTaskRunStatus
  {
    NOT_SET,
    READY,
    SUSPENDED
  };

namespace CreateJobTargetTaskRunStatusMapper
{
AWS_DEADLINE_API CreateJobTargetTaskRunStatus GetCreateJobTargetTaskRunStatusForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForCreateJobTargetTaskRunStatus(CreateJobTargetTaskRunStatus value);
} // namespace CreateJobTargetTaskRunStatusMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
