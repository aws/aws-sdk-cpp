/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{
  enum class LogAnomalyType
  {
    NOT_SET,
    KEYWORD,
    KEYWORD_TOKEN,
    FORMAT,
    HTTP_CODE,
    BLOCK_FORMAT,
    NUMERICAL_POINT,
    NUMERICAL_NAN,
    NEW_FIELD_NAME
  };

namespace LogAnomalyTypeMapper
{
AWS_DEVOPSGURU_API LogAnomalyType GetLogAnomalyTypeForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForLogAnomalyType(LogAnomalyType value);
} // namespace LogAnomalyTypeMapper
} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
