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
  enum class EvaluationFormQuestionType
  {
    NOT_SET,
    TEXT,
    SINGLESELECT,
    NUMERIC
  };

namespace EvaluationFormQuestionTypeMapper
{
AWS_CONNECT_API EvaluationFormQuestionType GetEvaluationFormQuestionTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationFormQuestionType(EvaluationFormQuestionType value);
} // namespace EvaluationFormQuestionTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
