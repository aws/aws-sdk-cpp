/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/DeploymentType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AppConfig {
namespace Model {
namespace DeploymentTypeMapper {

static const int USER_HASH = HashingUtils::HashString("USER");
static const int MANAGED_HASH = HashingUtils::HashString("MANAGED");

DeploymentType GetDeploymentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == USER_HASH) {
    return DeploymentType::USER;
  } else if (hashCode == MANAGED_HASH) {
    return DeploymentType::MANAGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DeploymentType>(hashCode);
  }

  return DeploymentType::NOT_SET;
}

Aws::String GetNameForDeploymentType(DeploymentType enumValue) {
  switch (enumValue) {
    case DeploymentType::NOT_SET:
      return {};
    case DeploymentType::USER:
      return "USER";
    case DeploymentType::MANAGED:
      return "MANAGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DeploymentTypeMapper
}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
