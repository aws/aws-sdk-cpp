/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormItemEnablementAction.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace EvaluationFormItemEnablementActionMapper {

static const int DISABLE_HASH = HashingUtils::HashString("DISABLE");
static const int ENABLE_HASH = HashingUtils::HashString("ENABLE");

EvaluationFormItemEnablementAction GetEvaluationFormItemEnablementActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISABLE_HASH) {
    return EvaluationFormItemEnablementAction::DISABLE;
  } else if (hashCode == ENABLE_HASH) {
    return EvaluationFormItemEnablementAction::ENABLE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationFormItemEnablementAction>(hashCode);
  }

  return EvaluationFormItemEnablementAction::NOT_SET;
}

Aws::String GetNameForEvaluationFormItemEnablementAction(EvaluationFormItemEnablementAction enumValue) {
  switch (enumValue) {
    case EvaluationFormItemEnablementAction::NOT_SET:
      return {};
    case EvaluationFormItemEnablementAction::DISABLE:
      return "DISABLE";
    case EvaluationFormItemEnablementAction::ENABLE:
      return "ENABLE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationFormItemEnablementActionMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
