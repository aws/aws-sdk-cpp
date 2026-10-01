/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/endusermessaging/model/BrandProfileAttributeType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EndUserMessaging {
namespace Model {
namespace BrandProfileAttributeTypeMapper {

static const int TEXT_HASH = HashingUtils::HashString("TEXT");
static const int IMAGE_HASH = HashingUtils::HashString("IMAGE");
static const int DOCUMENT_HASH = HashingUtils::HashString("DOCUMENT");

BrandProfileAttributeType GetBrandProfileAttributeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TEXT_HASH) {
    return BrandProfileAttributeType::TEXT;
  } else if (hashCode == IMAGE_HASH) {
    return BrandProfileAttributeType::IMAGE;
  } else if (hashCode == DOCUMENT_HASH) {
    return BrandProfileAttributeType::DOCUMENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BrandProfileAttributeType>(hashCode);
  }

  return BrandProfileAttributeType::NOT_SET;
}

Aws::String GetNameForBrandProfileAttributeType(BrandProfileAttributeType enumValue) {
  switch (enumValue) {
    case BrandProfileAttributeType::NOT_SET:
      return {};
    case BrandProfileAttributeType::TEXT:
      return "TEXT";
    case BrandProfileAttributeType::IMAGE:
      return "IMAGE";
    case BrandProfileAttributeType::DOCUMENT:
      return "DOCUMENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BrandProfileAttributeTypeMapper
}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
