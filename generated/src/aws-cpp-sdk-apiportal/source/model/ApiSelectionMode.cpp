/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/ApiSelectionMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {
namespace ApiSelectionModeMapper {

static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
static const int RULE_BASED_HASH = HashingUtils::HashString("RULE_BASED");

ApiSelectionMode GetApiSelectionModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CUSTOM_HASH) {
    return ApiSelectionMode::CUSTOM;
  } else if (hashCode == RULE_BASED_HASH) {
    return ApiSelectionMode::RULE_BASED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ApiSelectionMode>(hashCode);
  }

  return ApiSelectionMode::NOT_SET;
}

Aws::String GetNameForApiSelectionMode(ApiSelectionMode enumValue) {
  switch (enumValue) {
    case ApiSelectionMode::NOT_SET:
      return {};
    case ApiSelectionMode::CUSTOM:
      return "CUSTOM";
    case ApiSelectionMode::RULE_BASED:
      return "RULE_BASED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ApiSelectionModeMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
