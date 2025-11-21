/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ecs/model/AccessType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {
namespace AccessTypeMapper {

static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");
static const int PRIVATE__HASH = HashingUtils::HashString("PRIVATE");

AccessType GetAccessTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PUBLIC__HASH) {
    return AccessType::PUBLIC_;
  } else if (hashCode == PRIVATE__HASH) {
    return AccessType::PRIVATE_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccessType>(hashCode);
  }

  return AccessType::NOT_SET;
}

Aws::String GetNameForAccessType(AccessType enumValue) {
  switch (enumValue) {
    case AccessType::NOT_SET:
      return {};
    case AccessType::PUBLIC_:
      return "PUBLIC";
    case AccessType::PRIVATE_:
      return "PRIVATE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccessTypeMapper
}  // namespace Model
}  // namespace ECS
}  // namespace Aws
