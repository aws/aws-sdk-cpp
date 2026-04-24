/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationQuestionAnswerAnalysisType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace EvaluationQuestionAnswerAnalysisTypeMapper {

static const int CONTACT_LENS_DATA_HASH = HashingUtils::HashString("CONTACT_LENS_DATA");
static const int GEN_AI_HASH = HashingUtils::HashString("GEN_AI");

EvaluationQuestionAnswerAnalysisType GetEvaluationQuestionAnswerAnalysisTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONTACT_LENS_DATA_HASH) {
    return EvaluationQuestionAnswerAnalysisType::CONTACT_LENS_DATA;
  } else if (hashCode == GEN_AI_HASH) {
    return EvaluationQuestionAnswerAnalysisType::GEN_AI;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationQuestionAnswerAnalysisType>(hashCode);
  }

  return EvaluationQuestionAnswerAnalysisType::NOT_SET;
}

Aws::String GetNameForEvaluationQuestionAnswerAnalysisType(EvaluationQuestionAnswerAnalysisType enumValue) {
  switch (enumValue) {
    case EvaluationQuestionAnswerAnalysisType::NOT_SET:
      return {};
    case EvaluationQuestionAnswerAnalysisType::CONTACT_LENS_DATA:
      return "CONTACT_LENS_DATA";
    case EvaluationQuestionAnswerAnalysisType::GEN_AI:
      return "GEN_AI";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationQuestionAnswerAnalysisTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
