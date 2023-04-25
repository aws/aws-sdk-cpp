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
  enum class EvaluationFormSingleSelectQuestionDisplayMode
  {
    NOT_SET,
    DROPDOWN,
    RADIO
  };

namespace EvaluationFormSingleSelectQuestionDisplayModeMapper
{
AWS_CONNECT_API EvaluationFormSingleSelectQuestionDisplayMode GetEvaluationFormSingleSelectQuestionDisplayModeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationFormSingleSelectQuestionDisplayMode(EvaluationFormSingleSelectQuestionDisplayMode value);
} // namespace EvaluationFormSingleSelectQuestionDisplayModeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
