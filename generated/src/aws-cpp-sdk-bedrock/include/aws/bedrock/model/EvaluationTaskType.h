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
  enum class EvaluationTaskType
  {
    NOT_SET,
    Summarization,
    Classification,
    QuestionAndAnswer,
    Generation,
    Custom
  };

namespace EvaluationTaskTypeMapper
{
AWS_BEDROCK_API EvaluationTaskType GetEvaluationTaskTypeForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForEvaluationTaskType(EvaluationTaskType value);
} // namespace EvaluationTaskTypeMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
