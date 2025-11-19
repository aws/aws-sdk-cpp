/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/AttributeEntityType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace AttributeEntityTypeMapper {

static const int ASSET_HASH = HashingUtils::HashString("ASSET");
static const int LISTING_HASH = HashingUtils::HashString("LISTING");

AttributeEntityType GetAttributeEntityTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ASSET_HASH) {
    return AttributeEntityType::ASSET;
  } else if (hashCode == LISTING_HASH) {
    return AttributeEntityType::LISTING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AttributeEntityType>(hashCode);
  }

  return AttributeEntityType::NOT_SET;
}

Aws::String GetNameForAttributeEntityType(AttributeEntityType enumValue) {
  switch (enumValue) {
    case AttributeEntityType::NOT_SET:
      return {};
    case AttributeEntityType::ASSET:
      return "ASSET";
    case AttributeEntityType::LISTING:
      return "LISTING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AttributeEntityTypeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
