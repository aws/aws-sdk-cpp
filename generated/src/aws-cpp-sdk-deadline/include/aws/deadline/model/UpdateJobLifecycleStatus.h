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
  enum class UpdateJobLifecycleStatus
  {
    NOT_SET,
    ARCHIVED
  };

namespace UpdateJobLifecycleStatusMapper
{
AWS_DEADLINE_API UpdateJobLifecycleStatus GetUpdateJobLifecycleStatusForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForUpdateJobLifecycleStatus(UpdateJobLifecycleStatus value);
} // namespace UpdateJobLifecycleStatusMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
