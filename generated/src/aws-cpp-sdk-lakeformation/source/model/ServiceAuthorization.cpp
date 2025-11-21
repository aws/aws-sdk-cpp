/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lakeformation/model/ServiceAuthorization.h>

using namespace Aws::Utils;

namespace Aws {
namespace LakeFormation {
namespace Model {
namespace ServiceAuthorizationMapper {

static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");

ServiceAuthorization GetServiceAuthorizationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ENABLED_HASH) {
    return ServiceAuthorization::ENABLED;
  } else if (hashCode == DISABLED_HASH) {
    return ServiceAuthorization::DISABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ServiceAuthorization>(hashCode);
  }

  return ServiceAuthorization::NOT_SET;
}

Aws::String GetNameForServiceAuthorization(ServiceAuthorization enumValue) {
  switch (enumValue) {
    case ServiceAuthorization::NOT_SET:
      return {};
    case ServiceAuthorization::ENABLED:
      return "ENABLED";
    case ServiceAuthorization::DISABLED:
      return "DISABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ServiceAuthorizationMapper
}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
