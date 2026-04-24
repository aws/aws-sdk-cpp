/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormItemSourceValuesComparator.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace EvaluationFormItemSourceValuesComparatorMapper {

static const int IN_HASH = HashingUtils::HashString("IN");
static const int NOT_IN_HASH = HashingUtils::HashString("NOT_IN");
static const int ALL_IN_HASH = HashingUtils::HashString("ALL_IN");
static const int EXACT_HASH = HashingUtils::HashString("EXACT");

EvaluationFormItemSourceValuesComparator GetEvaluationFormItemSourceValuesComparatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IN_HASH) {
    return EvaluationFormItemSourceValuesComparator::IN;
  } else if (hashCode == NOT_IN_HASH) {
    return EvaluationFormItemSourceValuesComparator::NOT_IN;
  } else if (hashCode == ALL_IN_HASH) {
    return EvaluationFormItemSourceValuesComparator::ALL_IN;
  } else if (hashCode == EXACT_HASH) {
    return EvaluationFormItemSourceValuesComparator::EXACT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EvaluationFormItemSourceValuesComparator>(hashCode);
  }

  return EvaluationFormItemSourceValuesComparator::NOT_SET;
}

Aws::String GetNameForEvaluationFormItemSourceValuesComparator(EvaluationFormItemSourceValuesComparator enumValue) {
  switch (enumValue) {
    case EvaluationFormItemSourceValuesComparator::NOT_SET:
      return {};
    case EvaluationFormItemSourceValuesComparator::IN:
      return "IN";
    case EvaluationFormItemSourceValuesComparator::NOT_IN:
      return "NOT_IN";
    case EvaluationFormItemSourceValuesComparator::ALL_IN:
      return "ALL_IN";
    case EvaluationFormItemSourceValuesComparator::EXACT:
      return "EXACT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EvaluationFormItemSourceValuesComparatorMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
