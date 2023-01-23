/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class DQTransformOutput
  {
    NOT_SET,
    PrimaryInput,
    EvaluationResults
  };

namespace DQTransformOutputMapper
{
AWS_GLUE_API DQTransformOutput GetDQTransformOutputForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForDQTransformOutput(DQTransformOutput value);
} // namespace DQTransformOutputMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
