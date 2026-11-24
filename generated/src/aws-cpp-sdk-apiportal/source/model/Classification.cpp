/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/Classification.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {
namespace ClassificationMapper {

static const int SHADOW_HASH = HashingUtils::HashString("SHADOW");
static const int MANAGED_HASH = HashingUtils::HashString("MANAGED");
static const int MANAGED_ZOMBIE_HASH = HashingUtils::HashString("MANAGED_ZOMBIE");
static const int MANAGED_ORPHANED_HASH = HashingUtils::HashString("MANAGED_ORPHANED");

Classification GetClassificationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SHADOW_HASH) {
    return Classification::SHADOW;
  } else if (hashCode == MANAGED_HASH) {
    return Classification::MANAGED;
  } else if (hashCode == MANAGED_ZOMBIE_HASH) {
    return Classification::MANAGED_ZOMBIE;
  } else if (hashCode == MANAGED_ORPHANED_HASH) {
    return Classification::MANAGED_ORPHANED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Classification>(hashCode);
  }

  return Classification::NOT_SET;
}

Aws::String GetNameForClassification(Classification enumValue) {
  switch (enumValue) {
    case Classification::NOT_SET:
      return {};
    case Classification::SHADOW:
      return "SHADOW";
    case Classification::MANAGED:
      return "MANAGED";
    case Classification::MANAGED_ZOMBIE:
      return "MANAGED_ZOMBIE";
    case Classification::MANAGED_ORPHANED:
      return "MANAGED_ORPHANED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClassificationMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
