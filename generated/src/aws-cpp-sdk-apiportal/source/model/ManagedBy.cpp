/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/ManagedBy.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {
namespace ManagedByMapper {

static const int SELF_HASH = HashingUtils::HashString("SELF");
static const int ORGANIZATION_HASH = HashingUtils::HashString("ORGANIZATION");

ManagedBy GetManagedByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SELF_HASH) {
    return ManagedBy::SELF;
  } else if (hashCode == ORGANIZATION_HASH) {
    return ManagedBy::ORGANIZATION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ManagedBy>(hashCode);
  }

  return ManagedBy::NOT_SET;
}

Aws::String GetNameForManagedBy(ManagedBy enumValue) {
  switch (enumValue) {
    case ManagedBy::NOT_SET:
      return {};
    case ManagedBy::SELF:
      return "SELF";
    case ManagedBy::ORGANIZATION:
      return "ORGANIZATION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ManagedByMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
