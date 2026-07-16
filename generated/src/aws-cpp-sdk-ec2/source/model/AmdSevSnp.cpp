/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/AmdSevSnp.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace AmdSevSnpMapper {

static const int enabled_HASH = HashingUtils::HashString("enabled");
static const int disabled_HASH = HashingUtils::HashString("disabled");

AmdSevSnp GetAmdSevSnpForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == enabled_HASH) {
    return AmdSevSnp::enabled;
  } else if (hashCode == disabled_HASH) {
    return AmdSevSnp::disabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AmdSevSnp>(hashCode);
  }

  return AmdSevSnp::NOT_SET;
}

Aws::String GetNameForAmdSevSnp(AmdSevSnp enumValue) {
  switch (enumValue) {
    case AmdSevSnp::NOT_SET:
      return {};
    case AmdSevSnp::enabled:
      return "enabled";
    case AmdSevSnp::disabled:
      return "disabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AmdSevSnpMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
