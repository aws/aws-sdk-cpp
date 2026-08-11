/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/TrendIndicator.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace TrendIndicatorMapper {

static const int POSITIVE_HASH = HashingUtils::HashString("POSITIVE");
static const int NEGATIVE_HASH = HashingUtils::HashString("NEGATIVE");
static const int NEUTRAL_HASH = HashingUtils::HashString("NEUTRAL");

TrendIndicator GetTrendIndicatorForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == POSITIVE_HASH) {
    return TrendIndicator::POSITIVE;
  } else if (hashCode == NEGATIVE_HASH) {
    return TrendIndicator::NEGATIVE;
  } else if (hashCode == NEUTRAL_HASH) {
    return TrendIndicator::NEUTRAL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TrendIndicator>(hashCode);
  }

  return TrendIndicator::NOT_SET;
}

Aws::String GetNameForTrendIndicator(TrendIndicator enumValue) {
  switch (enumValue) {
    case TrendIndicator::NOT_SET:
      return {};
    case TrendIndicator::POSITIVE:
      return "POSITIVE";
    case TrendIndicator::NEGATIVE:
      return "NEGATIVE";
    case TrendIndicator::NEUTRAL:
      return "NEUTRAL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TrendIndicatorMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
