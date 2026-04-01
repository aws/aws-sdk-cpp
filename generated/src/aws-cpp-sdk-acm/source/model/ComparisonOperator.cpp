/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/ComparisonOperator.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {
namespace ComparisonOperatorMapper {

static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
static const int EQUALS_HASH = HashingUtils::HashString("EQUALS");

ComparisonOperator GetComparisonOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CONTAINS_HASH) {
    return ComparisonOperator::CONTAINS;
  } else if (hashCode == EQUALS_HASH) {
    return ComparisonOperator::EQUALS;
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
    case ComparisonOperator::CONTAINS:
      return "CONTAINS";
    case ComparisonOperator::EQUALS:
      return "EQUALS";
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
}  // namespace ACM
}  // namespace Aws
