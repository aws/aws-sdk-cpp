/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda/model/CapacityProviderScalingMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {
namespace CapacityProviderScalingModeMapper {

static const int Auto_HASH = HashingUtils::HashString("Auto");
static const int Manual_HASH = HashingUtils::HashString("Manual");

CapacityProviderScalingMode GetCapacityProviderScalingModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Auto_HASH) {
    return CapacityProviderScalingMode::Auto;
  } else if (hashCode == Manual_HASH) {
    return CapacityProviderScalingMode::Manual;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<CapacityProviderScalingMode>(hashCode);
  }

  return CapacityProviderScalingMode::NOT_SET;
}

Aws::String GetNameForCapacityProviderScalingMode(CapacityProviderScalingMode enumValue) {
  switch (enumValue) {
    case CapacityProviderScalingMode::NOT_SET:
      return {};
    case CapacityProviderScalingMode::Auto:
      return "Auto";
    case CapacityProviderScalingMode::Manual:
      return "Manual";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace CapacityProviderScalingModeMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
