/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EMR
{
namespace Model
{
  enum class ExecutionEngineType
  {
    NOT_SET,
    EMR
  };

namespace ExecutionEngineTypeMapper
{
AWS_EMR_API ExecutionEngineType GetExecutionEngineTypeForName(const Aws::String& name);

AWS_EMR_API Aws::String GetNameForExecutionEngineType(ExecutionEngineType value);
} // namespace ExecutionEngineTypeMapper
} // namespace Model
} // namespace EMR
} // namespace Aws
