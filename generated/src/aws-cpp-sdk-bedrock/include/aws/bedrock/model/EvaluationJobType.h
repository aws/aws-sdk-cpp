/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class EvaluationJobType
  {
    NOT_SET,
    Human,
    Automated
  };

namespace EvaluationJobTypeMapper
{
AWS_BEDROCK_API EvaluationJobType GetEvaluationJobTypeForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForEvaluationJobType(EvaluationJobType value);
} // namespace EvaluationJobTypeMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
