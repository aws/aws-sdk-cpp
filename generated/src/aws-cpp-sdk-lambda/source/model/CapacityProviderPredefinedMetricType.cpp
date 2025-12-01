/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda/model/CapacityProviderPredefinedMetricType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {
namespace CapacityProviderPredefinedMetricTypeMapper {

static const int LambdaCapacityProviderAverageCPUUtilization_HASH = HashingUtils::HashString("LambdaCapacityProviderAverageCPUUtilization");

CapacityProviderPredefinedMetricType GetCapacityProviderPredefinedMetricTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LambdaCapacityProviderAverageCPUUtilization_HASH) {
    return CapacityProviderPredefinedMetricType::LambdaCapacityProviderAverageCPUUtilization;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapacityProviderPredefinedMetricType>(hashCode);
  }

  return CapacityProviderPredefinedMetricType::NOT_SET;
}

Aws::String GetNameForCapacityProviderPredefinedMetricType(CapacityProviderPredefinedMetricType enumValue) {
  switch (enumValue) {
    case CapacityProviderPredefinedMetricType::NOT_SET:
      return {};
    case CapacityProviderPredefinedMetricType::LambdaCapacityProviderAverageCPUUtilization:
      return "LambdaCapacityProviderAverageCPUUtilization";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapacityProviderPredefinedMetricTypeMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
