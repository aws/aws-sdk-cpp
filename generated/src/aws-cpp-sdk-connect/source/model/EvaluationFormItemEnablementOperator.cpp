/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormItemEnablementOperator.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace EvaluationFormItemEnablementOperatorMapper {

static const int OR_HASH = HashingUtils::HashString("OR");
static const int AND_HASH = HashingUtils::HashString("AND");

EvaluationFormItemEnablementOperator GetEvaluationFormItemEnablementOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OR_HASH) {
    return EvaluationFormItemEnablementOperator::OR;
  } else if (hashCode == AND_HASH) {
    return EvaluationFormItemEnablementOperator::AND;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationFormItemEnablementOperator>(hashCode);
  }

  return EvaluationFormItemEnablementOperator::NOT_SET;
}

Aws::String GetNameForEvaluationFormItemEnablementOperator(EvaluationFormItemEnablementOperator enumValue) {
  switch (enumValue) {
    case EvaluationFormItemEnablementOperator::NOT_SET:
      return {};
    case EvaluationFormItemEnablementOperator::OR:
      return "OR";
    case EvaluationFormItemEnablementOperator::AND:
      return "AND";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationFormItemEnablementOperatorMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
