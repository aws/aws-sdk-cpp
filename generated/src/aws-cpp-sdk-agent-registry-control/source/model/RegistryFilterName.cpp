/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/RegistryFilterName.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {
namespace RegistryFilterNameMapper {

static const int status_HASH = HashingUtils::HashString("status");
static const int discoveryConfiguration_authorizerType_HASH = HashingUtils::HashString("discoveryConfiguration.authorizerType");

RegistryFilterName GetRegistryFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == status_HASH) {
    return RegistryFilterName::status;
  } else if (hashCode == discoveryConfiguration_authorizerType_HASH) {
    return RegistryFilterName::discoveryConfiguration_authorizerType;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RegistryFilterName>(hashCode);
  }

  return RegistryFilterName::NOT_SET;
}

Aws::String GetNameForRegistryFilterName(RegistryFilterName enumValue) {
  switch (enumValue) {
    case RegistryFilterName::NOT_SET:
      return {};
    case RegistryFilterName::status:
      return "status";
    case RegistryFilterName::discoveryConfiguration_authorizerType:
      return "discoveryConfiguration.authorizerType";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RegistryFilterNameMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
