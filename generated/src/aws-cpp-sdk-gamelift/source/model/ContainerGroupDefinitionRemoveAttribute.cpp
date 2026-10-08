/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/gamelift/model/ContainerGroupDefinitionRemoveAttribute.h>

using namespace Aws::Utils;

namespace Aws {
namespace GameLift {
namespace Model {
namespace ContainerGroupDefinitionRemoveAttributeMapper {

static const int TOTAL_VCPU_LIMIT_HASH = HashingUtils::HashString("TOTAL_VCPU_LIMIT");

ContainerGroupDefinitionRemoveAttribute GetContainerGroupDefinitionRemoveAttributeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TOTAL_VCPU_LIMIT_HASH) {
    return ContainerGroupDefinitionRemoveAttribute::TOTAL_VCPU_LIMIT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ContainerGroupDefinitionRemoveAttribute>(hashCode);
  }

  return ContainerGroupDefinitionRemoveAttribute::NOT_SET;
}

Aws::String GetNameForContainerGroupDefinitionRemoveAttribute(ContainerGroupDefinitionRemoveAttribute enumValue) {
  switch (enumValue) {
    case ContainerGroupDefinitionRemoveAttribute::NOT_SET:
      return {};
    case ContainerGroupDefinitionRemoveAttribute::TOTAL_VCPU_LIMIT:
      return "TOTAL_VCPU_LIMIT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ContainerGroupDefinitionRemoveAttributeMapper
}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
