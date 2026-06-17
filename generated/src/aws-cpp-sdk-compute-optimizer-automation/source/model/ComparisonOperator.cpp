/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/ComparisonOperator.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
namespace ComparisonOperatorMapper {

static const int StringEquals_HASH = HashingUtils::HashString("StringEquals");
static const int StringNotEquals_HASH = HashingUtils::HashString("StringNotEquals");
static const int StringEqualsIgnoreCase_HASH = HashingUtils::HashString("StringEqualsIgnoreCase");
static const int StringNotEqualsIgnoreCase_HASH = HashingUtils::HashString("StringNotEqualsIgnoreCase");
static const int StringLike_HASH = HashingUtils::HashString("StringLike");
static const int StringNotLike_HASH = HashingUtils::HashString("StringNotLike");
static const int NumericEquals_HASH = HashingUtils::HashString("NumericEquals");
static const int NumericNotEquals_HASH = HashingUtils::HashString("NumericNotEquals");
static const int NumericLessThan_HASH = HashingUtils::HashString("NumericLessThan");
static const int NumericLessThanEquals_HASH = HashingUtils::HashString("NumericLessThanEquals");
static const int NumericGreaterThan_HASH = HashingUtils::HashString("NumericGreaterThan");
static const int NumericGreaterThanEquals_HASH = HashingUtils::HashString("NumericGreaterThanEquals");
static const int StringEqualsIfExists_HASH = HashingUtils::HashString("StringEqualsIfExists");
static const int StringNotEqualsIfExists_HASH = HashingUtils::HashString("StringNotEqualsIfExists");
static const int StringEqualsIgnoreCaseIfExists_HASH = HashingUtils::HashString("StringEqualsIgnoreCaseIfExists");
static const int StringNotEqualsIgnoreCaseIfExists_HASH = HashingUtils::HashString("StringNotEqualsIgnoreCaseIfExists");
static const int StringLikeIfExists_HASH = HashingUtils::HashString("StringLikeIfExists");
static const int StringNotLikeIfExists_HASH = HashingUtils::HashString("StringNotLikeIfExists");
static const int NumericEqualsIfExists_HASH = HashingUtils::HashString("NumericEqualsIfExists");
static const int NumericNotEqualsIfExists_HASH = HashingUtils::HashString("NumericNotEqualsIfExists");
static const int NumericLessThanIfExists_HASH = HashingUtils::HashString("NumericLessThanIfExists");
static const int NumericLessThanEqualsIfExists_HASH = HashingUtils::HashString("NumericLessThanEqualsIfExists");
static const int NumericGreaterThanIfExists_HASH = HashingUtils::HashString("NumericGreaterThanIfExists");
static const int NumericGreaterThanEqualsIfExists_HASH = HashingUtils::HashString("NumericGreaterThanEqualsIfExists");

ComparisonOperator GetComparisonOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == StringEquals_HASH) {
    return ComparisonOperator::StringEquals;
  } else if (hashCode == StringNotEquals_HASH) {
    return ComparisonOperator::StringNotEquals;
  } else if (hashCode == StringEqualsIgnoreCase_HASH) {
    return ComparisonOperator::StringEqualsIgnoreCase;
  } else if (hashCode == StringNotEqualsIgnoreCase_HASH) {
    return ComparisonOperator::StringNotEqualsIgnoreCase;
  } else if (hashCode == StringLike_HASH) {
    return ComparisonOperator::StringLike;
  } else if (hashCode == StringNotLike_HASH) {
    return ComparisonOperator::StringNotLike;
  } else if (hashCode == NumericEquals_HASH) {
    return ComparisonOperator::NumericEquals;
  } else if (hashCode == NumericNotEquals_HASH) {
    return ComparisonOperator::NumericNotEquals;
  } else if (hashCode == NumericLessThan_HASH) {
    return ComparisonOperator::NumericLessThan;
  } else if (hashCode == NumericLessThanEquals_HASH) {
    return ComparisonOperator::NumericLessThanEquals;
  } else if (hashCode == NumericGreaterThan_HASH) {
    return ComparisonOperator::NumericGreaterThan;
  } else if (hashCode == NumericGreaterThanEquals_HASH) {
    return ComparisonOperator::NumericGreaterThanEquals;
  } else if (hashCode == StringEqualsIfExists_HASH) {
    return ComparisonOperator::StringEqualsIfExists;
  } else if (hashCode == StringNotEqualsIfExists_HASH) {
    return ComparisonOperator::StringNotEqualsIfExists;
  } else if (hashCode == StringEqualsIgnoreCaseIfExists_HASH) {
    return ComparisonOperator::StringEqualsIgnoreCaseIfExists;
  } else if (hashCode == StringNotEqualsIgnoreCaseIfExists_HASH) {
    return ComparisonOperator::StringNotEqualsIgnoreCaseIfExists;
  } else if (hashCode == StringLikeIfExists_HASH) {
    return ComparisonOperator::StringLikeIfExists;
  } else if (hashCode == StringNotLikeIfExists_HASH) {
    return ComparisonOperator::StringNotLikeIfExists;
  } else if (hashCode == NumericEqualsIfExists_HASH) {
    return ComparisonOperator::NumericEqualsIfExists;
  } else if (hashCode == NumericNotEqualsIfExists_HASH) {
    return ComparisonOperator::NumericNotEqualsIfExists;
  } else if (hashCode == NumericLessThanIfExists_HASH) {
    return ComparisonOperator::NumericLessThanIfExists;
  } else if (hashCode == NumericLessThanEqualsIfExists_HASH) {
    return ComparisonOperator::NumericLessThanEqualsIfExists;
  } else if (hashCode == NumericGreaterThanIfExists_HASH) {
    return ComparisonOperator::NumericGreaterThanIfExists;
  } else if (hashCode == NumericGreaterThanEqualsIfExists_HASH) {
    return ComparisonOperator::NumericGreaterThanEqualsIfExists;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ComparisonOperator>(hashCode);
  }

  return ComparisonOperator::NOT_SET;
}

Aws::String GetNameForComparisonOperator(ComparisonOperator enumValue) {
  switch (enumValue) {
    case ComparisonOperator::NOT_SET:
      return {};
    case ComparisonOperator::StringEquals:
      return "StringEquals";
    case ComparisonOperator::StringNotEquals:
      return "StringNotEquals";
    case ComparisonOperator::StringEqualsIgnoreCase:
      return "StringEqualsIgnoreCase";
    case ComparisonOperator::StringNotEqualsIgnoreCase:
      return "StringNotEqualsIgnoreCase";
    case ComparisonOperator::StringLike:
      return "StringLike";
    case ComparisonOperator::StringNotLike:
      return "StringNotLike";
    case ComparisonOperator::NumericEquals:
      return "NumericEquals";
    case ComparisonOperator::NumericNotEquals:
      return "NumericNotEquals";
    case ComparisonOperator::NumericLessThan:
      return "NumericLessThan";
    case ComparisonOperator::NumericLessThanEquals:
      return "NumericLessThanEquals";
    case ComparisonOperator::NumericGreaterThan:
      return "NumericGreaterThan";
    case ComparisonOperator::NumericGreaterThanEquals:
      return "NumericGreaterThanEquals";
    case ComparisonOperator::StringEqualsIfExists:
      return "StringEqualsIfExists";
    case ComparisonOperator::StringNotEqualsIfExists:
      return "StringNotEqualsIfExists";
    case ComparisonOperator::StringEqualsIgnoreCaseIfExists:
      return "StringEqualsIgnoreCaseIfExists";
    case ComparisonOperator::StringNotEqualsIgnoreCaseIfExists:
      return "StringNotEqualsIgnoreCaseIfExists";
    case ComparisonOperator::StringLikeIfExists:
      return "StringLikeIfExists";
    case ComparisonOperator::StringNotLikeIfExists:
      return "StringNotLikeIfExists";
    case ComparisonOperator::NumericEqualsIfExists:
      return "NumericEqualsIfExists";
    case ComparisonOperator::NumericNotEqualsIfExists:
      return "NumericNotEqualsIfExists";
    case ComparisonOperator::NumericLessThanIfExists:
      return "NumericLessThanIfExists";
    case ComparisonOperator::NumericLessThanEqualsIfExists:
      return "NumericLessThanEqualsIfExists";
    case ComparisonOperator::NumericGreaterThanIfExists:
      return "NumericGreaterThanIfExists";
    case ComparisonOperator::NumericGreaterThanEqualsIfExists:
      return "NumericGreaterThanEqualsIfExists";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ComparisonOperatorMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
