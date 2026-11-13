/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/guardduty/model/FetchCriterionCondition.h>

using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {
namespace FetchCriterionConditionMapper {

static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");
static const int NOT_EQUALS_HASH = HashingUtils::HashString("NOT_EQUALS");
static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");
static const int GREATER_THAN_OR_EQUAL_HASH = HashingUtils::HashString("GREATER_THAN_OR_EQUAL");
static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
static const int LESS_THAN_OR_EQUAL_HASH = HashingUtils::HashString("LESS_THAN_OR_EQUAL");

FetchCriterionCondition GetFetchCriterionConditionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EQUALS_HASH) {
    return FetchCriterionCondition::EQUALS;
  } else if (hashCode == NOT_EQUALS_HASH) {
    return FetchCriterionCondition::NOT_EQUALS;
  } else if (hashCode == GREATER_THAN_HASH) {
    return FetchCriterionCondition::GREATER_THAN;
  } else if (hashCode == GREATER_THAN_OR_EQUAL_HASH) {
    return FetchCriterionCondition::GREATER_THAN_OR_EQUAL;
  } else if (hashCode == LESS_THAN_HASH) {
    return FetchCriterionCondition::LESS_THAN;
  } else if (hashCode == LESS_THAN_OR_EQUAL_HASH) {
    return FetchCriterionCondition::LESS_THAN_OR_EQUAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FetchCriterionCondition>(hashCode);
  }

  return FetchCriterionCondition::NOT_SET;
}

Aws::String GetNameForFetchCriterionCondition(FetchCriterionCondition enumValue) {
  switch (enumValue) {
    case FetchCriterionCondition::NOT_SET:
      return {};
    case FetchCriterionCondition::EQUALS:
      return "EQUALS";
    case FetchCriterionCondition::NOT_EQUALS:
      return "NOT_EQUALS";
    case FetchCriterionCondition::GREATER_THAN:
      return "GREATER_THAN";
    case FetchCriterionCondition::GREATER_THAN_OR_EQUAL:
      return "GREATER_THAN_OR_EQUAL";
    case FetchCriterionCondition::LESS_THAN:
      return "LESS_THAN";
    case FetchCriterionCondition::LESS_THAN_OR_EQUAL:
      return "LESS_THAN_OR_EQUAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FetchCriterionConditionMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
