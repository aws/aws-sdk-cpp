/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/FilterOperator.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace FilterOperatorMapper {

static const int EQ_HASH = HashingUtils::HashString("EQ");
static const int LE_HASH = HashingUtils::HashString("LE");
static const int LT_HASH = HashingUtils::HashString("LT");
static const int GE_HASH = HashingUtils::HashString("GE");
static const int GT_HASH = HashingUtils::HashString("GT");
static const int TEXT_SEARCH_HASH = HashingUtils::HashString("TEXT_SEARCH");

FilterOperator GetFilterOperatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EQ_HASH) {
    return FilterOperator::EQ;
  } else if (hashCode == LE_HASH) {
    return FilterOperator::LE;
  } else if (hashCode == LT_HASH) {
    return FilterOperator::LT;
  } else if (hashCode == GE_HASH) {
    return FilterOperator::GE;
  } else if (hashCode == GT_HASH) {
    return FilterOperator::GT;
  } else if (hashCode == TEXT_SEARCH_HASH) {
    return FilterOperator::TEXT_SEARCH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FilterOperator>(hashCode);
  }

  return FilterOperator::NOT_SET;
}

Aws::String GetNameForFilterOperator(FilterOperator enumValue) {
  switch (enumValue) {
    case FilterOperator::NOT_SET:
      return {};
    case FilterOperator::EQ:
      return "EQ";
    case FilterOperator::LE:
      return "LE";
    case FilterOperator::LT:
      return "LT";
    case FilterOperator::GE:
      return "GE";
    case FilterOperator::GT:
      return "GT";
    case FilterOperator::TEXT_SEARCH:
      return "TEXT_SEARCH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FilterOperatorMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
