/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormQuestionAutomationAnswerSourceType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace EvaluationFormQuestionAutomationAnswerSourceTypeMapper {

static const int CONTACT_LENS_DATA_HASH = HashingUtils::HashString("CONTACT_LENS_DATA");
static const int GEN_AI_HASH = HashingUtils::HashString("GEN_AI");

EvaluationFormQuestionAutomationAnswerSourceType GetEvaluationFormQuestionAutomationAnswerSourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONTACT_LENS_DATA_HASH) {
    return EvaluationFormQuestionAutomationAnswerSourceType::CONTACT_LENS_DATA;
  } else if (hashCode == GEN_AI_HASH) {
    return EvaluationFormQuestionAutomationAnswerSourceType::GEN_AI;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationFormQuestionAutomationAnswerSourceType>(hashCode);
  }

  return EvaluationFormQuestionAutomationAnswerSourceType::NOT_SET;
}

Aws::String GetNameForEvaluationFormQuestionAutomationAnswerSourceType(EvaluationFormQuestionAutomationAnswerSourceType enumValue) {
  switch (enumValue) {
    case EvaluationFormQuestionAutomationAnswerSourceType::NOT_SET:
      return {};
    case EvaluationFormQuestionAutomationAnswerSourceType::CONTACT_LENS_DATA:
      return "CONTACT_LENS_DATA";
    case EvaluationFormQuestionAutomationAnswerSourceType::GEN_AI:
      return "GEN_AI";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationFormQuestionAutomationAnswerSourceTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
