/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MaskMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace MaskModeMapper {

static const int PII_HASH = HashingUtils::HashString("PII");
static const int EntityType_HASH = HashingUtils::HashString("EntityType");

MaskMode GetMaskModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PII_HASH) {
    return MaskMode::PII;
  } else if (hashCode == EntityType_HASH) {
    return MaskMode::EntityType;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MaskMode>(hashCode);
  }

  return MaskMode::NOT_SET;
}

Aws::String GetNameForMaskMode(MaskMode enumValue) {
  switch (enumValue) {
    case MaskMode::NOT_SET:
      return {};
    case MaskMode::PII:
      return "PII";
    case MaskMode::EntityType:
      return "EntityType";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MaskModeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
