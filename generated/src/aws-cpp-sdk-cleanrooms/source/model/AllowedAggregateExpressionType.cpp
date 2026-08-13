/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AllowedAggregateExpressionType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {
namespace AllowedAggregateExpressionTypeMapper {

static const int COLUMNS_ONLY_HASH = HashingUtils::HashString("COLUMNS_ONLY");
static const int ANY_EXPRESSION_HASH = HashingUtils::HashString("ANY_EXPRESSION");

AllowedAggregateExpressionType GetAllowedAggregateExpressionTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == COLUMNS_ONLY_HASH) {
    return AllowedAggregateExpressionType::COLUMNS_ONLY;
  } else if (hashCode == ANY_EXPRESSION_HASH) {
    return AllowedAggregateExpressionType::ANY_EXPRESSION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AllowedAggregateExpressionType>(hashCode);
  }

  return AllowedAggregateExpressionType::NOT_SET;
}

Aws::String GetNameForAllowedAggregateExpressionType(AllowedAggregateExpressionType enumValue) {
  switch (enumValue) {
    case AllowedAggregateExpressionType::NOT_SET:
      return {};
    case AllowedAggregateExpressionType::COLUMNS_ONLY:
      return "COLUMNS_ONLY";
    case AllowedAggregateExpressionType::ANY_EXPRESSION:
      return "ANY_EXPRESSION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AllowedAggregateExpressionTypeMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
