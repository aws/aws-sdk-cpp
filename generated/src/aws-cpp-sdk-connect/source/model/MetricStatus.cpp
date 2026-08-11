/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MetricStatus.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace MetricStatusMapper {

static const int PUBLISHED_HASH = HashingUtils::HashString("PUBLISHED");
static const int SAVED_HASH = HashingUtils::HashString("SAVED");

MetricStatus GetMetricStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PUBLISHED_HASH) {
    return MetricStatus::PUBLISHED;
  } else if (hashCode == SAVED_HASH) {
    return MetricStatus::SAVED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MetricStatus>(hashCode);
  }

  return MetricStatus::NOT_SET;
}

Aws::String GetNameForMetricStatus(MetricStatus enumValue) {
  switch (enumValue) {
    case MetricStatus::NOT_SET:
      return {};
    case MetricStatus::PUBLISHED:
      return "PUBLISHED";
    case MetricStatus::SAVED:
      return "SAVED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MetricStatusMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
