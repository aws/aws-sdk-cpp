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
  enum class StepParameterType
  {
    NOT_SET,
    INT,
    FLOAT,
    STRING,
    PATH,
    CHUNK_INT
  };

namespace StepParameterTypeMapper
{
AWS_DEADLINE_API StepParameterType GetStepParameterTypeForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForStepParameterType(StepParameterType value);
} // namespace StepParameterTypeMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
