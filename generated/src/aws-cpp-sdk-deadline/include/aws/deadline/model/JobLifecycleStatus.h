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
  enum class JobLifecycleStatus
  {
    NOT_SET,
    CREATE_IN_PROGRESS,
    CREATE_FAILED,
    CREATE_COMPLETE,
    UPLOAD_IN_PROGRESS,
    UPLOAD_FAILED,
    UPDATE_IN_PROGRESS,
    UPDATE_FAILED,
    UPDATE_SUCCEEDED,
    ARCHIVED
  };

namespace JobLifecycleStatusMapper
{
AWS_DEADLINE_API JobLifecycleStatus GetJobLifecycleStatusForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForJobLifecycleStatus(JobLifecycleStatus value);
} // namespace JobLifecycleStatusMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
