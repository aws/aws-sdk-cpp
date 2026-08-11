/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MetricType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace MetricTypeMapper {

static const int AWS_MANAGED_HASH = HashingUtils::HashString("AWS_MANAGED");
static const int CUSTOMER_MANAGED_HASH = HashingUtils::HashString("CUSTOMER_MANAGED");

MetricType GetMetricTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_MANAGED_HASH) {
    return MetricType::AWS_MANAGED;
  } else if (hashCode == CUSTOMER_MANAGED_HASH) {
    return MetricType::CUSTOMER_MANAGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MetricType>(hashCode);
  }

  return MetricType::NOT_SET;
}

Aws::String GetNameForMetricType(MetricType enumValue) {
  switch (enumValue) {
    case MetricType::NOT_SET:
      return {};
    case MetricType::AWS_MANAGED:
      return "AWS_MANAGED";
    case MetricType::CUSTOMER_MANAGED:
      return "CUSTOMER_MANAGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MetricTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
