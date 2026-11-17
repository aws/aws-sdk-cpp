/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/MultipathResilienceStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace MultipathResilienceStatusMapper {

static const int pending_HASH = HashingUtils::HashString("pending");
static const int enabled_HASH = HashingUtils::HashString("enabled");
static const int disabled_HASH = HashingUtils::HashString("disabled");

MultipathResilienceStatus GetMultipathResilienceStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == pending_HASH) {
    return MultipathResilienceStatus::pending;
  } else if (hashCode == enabled_HASH) {
    return MultipathResilienceStatus::enabled;
  } else if (hashCode == disabled_HASH) {
    return MultipathResilienceStatus::disabled;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MultipathResilienceStatus>(hashCode);
  }

  return MultipathResilienceStatus::NOT_SET;
}

Aws::String GetNameForMultipathResilienceStatus(MultipathResilienceStatus enumValue) {
  switch (enumValue) {
    case MultipathResilienceStatus::NOT_SET:
      return {};
    case MultipathResilienceStatus::pending:
      return "pending";
    case MultipathResilienceStatus::enabled:
      return "enabled";
    case MultipathResilienceStatus::disabled:
      return "disabled";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MultipathResilienceStatusMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
