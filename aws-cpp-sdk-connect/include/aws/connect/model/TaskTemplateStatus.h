/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class TaskTemplateStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace TaskTemplateStatusMapper
{
AWS_CONNECT_API TaskTemplateStatus GetTaskTemplateStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForTaskTemplateStatus(TaskTemplateStatus value);
} // namespace TaskTemplateStatusMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
