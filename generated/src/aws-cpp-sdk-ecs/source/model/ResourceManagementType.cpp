/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/ResourceManagementType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace ResourceManagementTypeMapper {

static const int CUSTOMER_HASH = HashingUtils::HashString("CUSTOMER");
static const int ECS_HASH = HashingUtils::HashString("ECS");

ResourceManagementType GetResourceManagementTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CUSTOMER_HASH) {
    return ResourceManagementType::CUSTOMER;
  } else if (hashCode == ECS_HASH) {
    return ResourceManagementType::ECS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceManagementType>(hashCode);
  }

  return ResourceManagementType::NOT_SET;
}

Aws::String GetNameForResourceManagementType(ResourceManagementType enumValue) {
  switch (enumValue) {
    case ResourceManagementType::NOT_SET:
      return {};
    case ResourceManagementType::CUSTOMER:
      return "CUSTOMER";
    case ResourceManagementType::ECS:
      return "ECS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceManagementTypeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
