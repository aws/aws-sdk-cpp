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
  enum class TaskTemplateFieldType
  {
    NOT_SET,
    NAME,
    DESCRIPTION,
    SCHEDULED_TIME,
    QUICK_CONNECT,
    URL,
    NUMBER,
    TEXT,
    TEXT_AREA,
    DATE_TIME,
    BOOLEAN,
    SINGLE_SELECT,
    EMAIL
  };

namespace TaskTemplateFieldTypeMapper
{
AWS_CONNECT_API TaskTemplateFieldType GetTaskTemplateFieldTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForTaskTemplateFieldType(TaskTemplateFieldType value);
} // namespace TaskTemplateFieldTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
