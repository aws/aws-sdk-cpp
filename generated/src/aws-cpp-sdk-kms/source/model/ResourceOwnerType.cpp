/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kms/model/ResourceOwnerType.h>

using namespace Aws::Utils;

namespace Aws {
namespace KMS {
namespace Model {
namespace ResourceOwnerTypeMapper {

static const int SELF_HASH = HashingUtils::HashString("SELF");
static const int OTHER_ACCOUNTS_VIA_RAM_HASH = HashingUtils::HashString("OTHER_ACCOUNTS_VIA_RAM");

ResourceOwnerType GetResourceOwnerTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SELF_HASH) {
    return ResourceOwnerType::SELF;
  } else if (hashCode == OTHER_ACCOUNTS_VIA_RAM_HASH) {
    return ResourceOwnerType::OTHER_ACCOUNTS_VIA_RAM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceOwnerType>(hashCode);
  }

  return ResourceOwnerType::NOT_SET;
}

Aws::String GetNameForResourceOwnerType(ResourceOwnerType enumValue) {
  switch (enumValue) {
    case ResourceOwnerType::NOT_SET:
      return {};
    case ResourceOwnerType::SELF:
      return "SELF";
    case ResourceOwnerType::OTHER_ACCOUNTS_VIA_RAM:
      return "OTHER_ACCOUNTS_VIA_RAM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceOwnerTypeMapper
}  // namespace Model
}  // namespace KMS
}  // namespace Aws
