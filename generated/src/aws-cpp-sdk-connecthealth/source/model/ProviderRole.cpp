/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/ProviderRole.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {
namespace ProviderRoleMapper {

static const int CLINICIAN_HASH = HashingUtils::HashString("CLINICIAN");

ProviderRole GetProviderRoleForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CLINICIAN_HASH) {
    return ProviderRole::CLINICIAN;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ProviderRole>(hashCode);
  }

  return ProviderRole::NOT_SET;
}

Aws::String GetNameForProviderRole(ProviderRole enumValue) {
  switch (enumValue) {
    case ProviderRole::NOT_SET:
      return {};
    case ProviderRole::CLINICIAN:
      return "CLINICIAN";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ProviderRoleMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
