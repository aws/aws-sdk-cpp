/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class EvaluationFormQuestionAutomationAnswerSourceType { NOT_SET, CONTACT_LENS_DATA, GEN_AI };

namespace EvaluationFormQuestionAutomationAnswerSourceTypeMapper {
AWS_CONNECT_API EvaluationFormQuestionAutomationAnswerSourceType
GetEvaluationFormQuestionAutomationAnswerSourceTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationFormQuestionAutomationAnswerSourceType(
    EvaluationFormQuestionAutomationAnswerSourceType value);
}  // namespace EvaluationFormQuestionAutomationAnswerSourceTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
