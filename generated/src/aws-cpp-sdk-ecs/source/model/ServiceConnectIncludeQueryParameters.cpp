/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/ServiceConnectIncludeQueryParameters.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace ServiceConnectIncludeQueryParametersMapper {

static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");

ServiceConnectIncludeQueryParameters GetServiceConnectIncludeQueryParametersForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DISABLED_HASH) {
    return ServiceConnectIncludeQueryParameters::DISABLED;
  } else if (hashCode == ENABLED_HASH) {
    return ServiceConnectIncludeQueryParameters::ENABLED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ServiceConnectIncludeQueryParameters>(hashCode);
  }

  return ServiceConnectIncludeQueryParameters::NOT_SET;
}

Aws::String GetNameForServiceConnectIncludeQueryParameters(ServiceConnectIncludeQueryParameters enumValue) {
  switch (enumValue) {
    case ServiceConnectIncludeQueryParameters::NOT_SET:
      return {};
    case ServiceConnectIncludeQueryParameters::DISABLED:
      return "DISABLED";
    case ServiceConnectIncludeQueryParameters::ENABLED:
      return "ENABLED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ServiceConnectIncludeQueryParametersMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
