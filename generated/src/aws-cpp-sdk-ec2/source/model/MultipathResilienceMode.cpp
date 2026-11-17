/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/MultipathResilienceMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace MultipathResilienceModeMapper {

static const int always_on_HASH = HashingUtils::HashString("always-on");

MultipathResilienceMode GetMultipathResilienceModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == always_on_HASH) {
    return MultipathResilienceMode::always_on;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MultipathResilienceMode>(hashCode);
  }

  return MultipathResilienceMode::NOT_SET;
}

Aws::String GetNameForMultipathResilienceMode(MultipathResilienceMode enumValue) {
  switch (enumValue) {
    case MultipathResilienceMode::NOT_SET:
      return {};
    case MultipathResilienceMode::always_on:
      return "always-on";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MultipathResilienceModeMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
