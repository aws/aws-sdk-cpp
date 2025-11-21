/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/SummaryDimensionKey.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {
namespace SummaryDimensionKeyMapper {

static const int EventStatus_HASH = HashingUtils::HashString("EventStatus");

SummaryDimensionKey GetSummaryDimensionKeyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EventStatus_HASH) {
    return SummaryDimensionKey::EventStatus;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SummaryDimensionKey>(hashCode);
  }

  return SummaryDimensionKey::NOT_SET;
}

Aws::String GetNameForSummaryDimensionKey(SummaryDimensionKey enumValue) {
  switch (enumValue) {
    case SummaryDimensionKey::NOT_SET:
      return {};
    case SummaryDimensionKey::EventStatus:
      return "EventStatus";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SummaryDimensionKeyMapper
}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
