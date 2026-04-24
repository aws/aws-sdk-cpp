/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormMultiSelectQuestionDisplayMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace EvaluationFormMultiSelectQuestionDisplayModeMapper {

static const int DROPDOWN_HASH = HashingUtils::HashString("DROPDOWN");
static const int CHECKBOX_HASH = HashingUtils::HashString("CHECKBOX");

EvaluationFormMultiSelectQuestionDisplayMode GetEvaluationFormMultiSelectQuestionDisplayModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DROPDOWN_HASH) {
    return EvaluationFormMultiSelectQuestionDisplayMode::DROPDOWN;
  } else if (hashCode == CHECKBOX_HASH) {
    return EvaluationFormMultiSelectQuestionDisplayMode::CHECKBOX;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationFormMultiSelectQuestionDisplayMode>(hashCode);
  }

  return EvaluationFormMultiSelectQuestionDisplayMode::NOT_SET;
}

Aws::String GetNameForEvaluationFormMultiSelectQuestionDisplayMode(EvaluationFormMultiSelectQuestionDisplayMode enumValue) {
  switch (enumValue) {
    case EvaluationFormMultiSelectQuestionDisplayMode::NOT_SET:
      return {};
    case EvaluationFormMultiSelectQuestionDisplayMode::DROPDOWN:
      return "DROPDOWN";
    case EvaluationFormMultiSelectQuestionDisplayMode::CHECKBOX:
      return "CHECKBOX";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationFormMultiSelectQuestionDisplayModeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
