/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/ApplyCancellationCharges.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace ApplyCancellationChargesMapper {

static const int commitment_wind_down_HASH = HashingUtils::HashString("commitment-wind-down");

ApplyCancellationCharges GetApplyCancellationChargesForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == commitment_wind_down_HASH) {
    return ApplyCancellationCharges::commitment_wind_down;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ApplyCancellationCharges>(hashCode);
  }

  return ApplyCancellationCharges::NOT_SET;
}

Aws::String GetNameForApplyCancellationCharges(ApplyCancellationCharges enumValue) {
  switch (enumValue) {
    case ApplyCancellationCharges::NOT_SET:
      return {};
    case ApplyCancellationCharges::commitment_wind_down:
      return "commitment-wind-down";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ApplyCancellationChargesMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
