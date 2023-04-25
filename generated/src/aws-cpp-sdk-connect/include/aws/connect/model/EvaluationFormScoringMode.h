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
  enum class EvaluationFormScoringMode
  {
    NOT_SET,
    QUESTION_ONLY,
    SECTION_ONLY
  };

namespace EvaluationFormScoringModeMapper
{
AWS_CONNECT_API EvaluationFormScoringMode GetEvaluationFormScoringModeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationFormScoringMode(EvaluationFormScoringMode value);
} // namespace EvaluationFormScoringModeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
