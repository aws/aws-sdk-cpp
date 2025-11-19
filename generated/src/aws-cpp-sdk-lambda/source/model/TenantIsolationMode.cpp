/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda/model/TenantIsolationMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {
namespace TenantIsolationModeMapper {

static const int PER_TENANT_HASH = HashingUtils::HashString("PER_TENANT");

TenantIsolationMode GetTenantIsolationModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PER_TENANT_HASH) {
    return TenantIsolationMode::PER_TENANT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TenantIsolationMode>(hashCode);
  }

  return TenantIsolationMode::NOT_SET;
}

Aws::String GetNameForTenantIsolationMode(TenantIsolationMode enumValue) {
  switch (enumValue) {
    case TenantIsolationMode::NOT_SET:
      return {};
    case TenantIsolationMode::PER_TENANT:
      return "PER_TENANT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TenantIsolationModeMapper
}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
