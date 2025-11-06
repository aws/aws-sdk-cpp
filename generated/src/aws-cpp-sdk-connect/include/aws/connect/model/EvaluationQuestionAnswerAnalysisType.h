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
enum class EvaluationQuestionAnswerAnalysisType { NOT_SET, CONTACT_LENS_DATA, GEN_AI };

namespace EvaluationQuestionAnswerAnalysisTypeMapper {
AWS_CONNECT_API EvaluationQuestionAnswerAnalysisType GetEvaluationQuestionAnswerAnalysisTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForEvaluationQuestionAnswerAnalysisType(EvaluationQuestionAnswerAnalysisType value);
}  // namespace EvaluationQuestionAnswerAnalysisTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
