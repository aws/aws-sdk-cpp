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
static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");
static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
static const int GREATER_THAN_OR_EQUAL_TO_HASH = HashingUtils::HashString("GREATER_THAN_OR_EQUAL_TO");
static const int LESS_THAN_OR_EQUAL_TO_HASH = HashingUtils::HashString("LESS_THAN_OR_EQUAL_TO");
static const int EQUAL_TO_HASH = HashingUtils::HashString("EQUAL_TO");
static const int NOT_EQUAL_TO_HASH = HashingUtils::HashString("NOT_EQUAL_TO");

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
  } else if (hashCode == GREATER_THAN_HASH) {
    return EvaluationFormItemSourceValuesComparator::GREATER_THAN;
  } else if (hashCode == LESS_THAN_HASH) {
    return EvaluationFormItemSourceValuesComparator::LESS_THAN;
  } else if (hashCode == GREATER_THAN_OR_EQUAL_TO_HASH) {
    return EvaluationFormItemSourceValuesComparator::GREATER_THAN_OR_EQUAL_TO;
  } else if (hashCode == LESS_THAN_OR_EQUAL_TO_HASH) {
    return EvaluationFormItemSourceValuesComparator::LESS_THAN_OR_EQUAL_TO;
  } else if (hashCode == EQUAL_TO_HASH) {
    return EvaluationFormItemSourceValuesComparator::EQUAL_TO;
  } else if (hashCode == NOT_EQUAL_TO_HASH) {
    return EvaluationFormItemSourceValuesComparator::NOT_EQUAL_TO;
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
    case EvaluationFormItemSourceValuesComparator::GREATER_THAN:
      return "GREATER_THAN";
    case EvaluationFormItemSourceValuesComparator::LESS_THAN:
      return "LESS_THAN";
    case EvaluationFormItemSourceValuesComparator::GREATER_THAN_OR_EQUAL_TO:
      return "GREATER_THAN_OR_EQUAL_TO";
    case EvaluationFormItemSourceValuesComparator::LESS_THAN_OR_EQUAL_TO:
      return "LESS_THAN_OR_EQUAL_TO";
    case EvaluationFormItemSourceValuesComparator::EQUAL_TO:
      return "EQUAL_TO";
    case EvaluationFormItemSourceValuesComparator::NOT_EQUAL_TO:
      return "NOT_EQUAL_TO";
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
