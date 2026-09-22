/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/Comparator.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace ComparatorMapper {

static const int GT_HASH = HashingUtils::HashString("GT");
static const int LT_HASH = HashingUtils::HashString("LT");
static const int GTE_HASH = HashingUtils::HashString("GTE");
static const int LTE_HASH = HashingUtils::HashString("LTE");

Comparator GetComparatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GT_HASH) {
    return Comparator::GT;
  } else if (hashCode == LT_HASH) {
    return Comparator::LT;
  } else if (hashCode == GTE_HASH) {
    return Comparator::GTE;
  } else if (hashCode == LTE_HASH) {
    return Comparator::LTE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Comparator>(hashCode);
  }

  return Comparator::NOT_SET;
}

Aws::String GetNameForComparator(Comparator enumValue) {
  switch (enumValue) {
    case Comparator::NOT_SET:
      return {};
    case Comparator::GT:
      return "GT";
    case Comparator::LT:
      return "LT";
    case Comparator::GTE:
      return "GTE";
    case Comparator::LTE:
      return "LTE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ComparatorMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
