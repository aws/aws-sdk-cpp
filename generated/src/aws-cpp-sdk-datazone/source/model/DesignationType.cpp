/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/DesignationType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace DesignationTypeMapper {

static const int MANAGED_HASH = HashingUtils::HashString("MANAGED");
static const int USER_CREATED_HASH = HashingUtils::HashString("USER_CREATED");

DesignationType GetDesignationTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MANAGED_HASH) {
    return DesignationType::MANAGED;
  } else if (hashCode == USER_CREATED_HASH) {
    return DesignationType::USER_CREATED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DesignationType>(hashCode);
  }

  return DesignationType::NOT_SET;
}

Aws::String GetNameForDesignationType(DesignationType enumValue) {
  switch (enumValue) {
    case DesignationType::NOT_SET:
      return {};
    case DesignationType::MANAGED:
      return "MANAGED";
    case DesignationType::USER_CREATED:
      return "USER_CREATED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DesignationTypeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
