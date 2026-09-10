/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/BootModeOverrideValues.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace BootModeOverrideValuesMapper {

static const int uefi_HASH = HashingUtils::HashString("uefi");

BootModeOverrideValues GetBootModeOverrideValuesForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == uefi_HASH) {
    return BootModeOverrideValues::uefi;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BootModeOverrideValues>(hashCode);
  }

  return BootModeOverrideValues::NOT_SET;
}

Aws::String GetNameForBootModeOverrideValues(BootModeOverrideValues enumValue) {
  switch (enumValue) {
    case BootModeOverrideValues::NOT_SET:
      return {};
    case BootModeOverrideValues::uefi:
      return "uefi";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BootModeOverrideValuesMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
