/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{
  enum class TaskType
  {
    NOT_SET,
    Arithmetic,
    Filter,
    Map,
    Mask,
    Merge,
    Truncate,
    Validate
  };

namespace TaskTypeMapper
{
AWS_CUSTOMERPROFILES_API TaskType GetTaskTypeForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForTaskType(TaskType value);
} // namespace TaskTypeMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
