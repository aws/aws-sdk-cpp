/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MetricCreationMethod.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace MetricCreationMethodMapper {

static const int SERVICE_LEVEL_BUILDER_HASH = HashingUtils::HashString("SERVICE_LEVEL_BUILDER");
static const int METRIC_BUILDER_HASH = HashingUtils::HashString("METRIC_BUILDER");

MetricCreationMethod GetMetricCreationMethodForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SERVICE_LEVEL_BUILDER_HASH) {
    return MetricCreationMethod::SERVICE_LEVEL_BUILDER;
  } else if (hashCode == METRIC_BUILDER_HASH) {
    return MetricCreationMethod::METRIC_BUILDER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MetricCreationMethod>(hashCode);
  }

  return MetricCreationMethod::NOT_SET;
}

Aws::String GetNameForMetricCreationMethod(MetricCreationMethod enumValue) {
  switch (enumValue) {
    case MetricCreationMethod::NOT_SET:
      return {};
    case MetricCreationMethod::SERVICE_LEVEL_BUILDER:
      return "SERVICE_LEVEL_BUILDER";
    case MetricCreationMethod::METRIC_BUILDER:
      return "METRIC_BUILDER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MetricCreationMethodMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
