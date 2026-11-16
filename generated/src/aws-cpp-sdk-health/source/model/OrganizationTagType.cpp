/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/health/model/OrganizationTagType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Health {
namespace Model {
namespace OrganizationTagTypeMapper {

static const int ORGANIZATION_RESOURCE_TAG_HASH = HashingUtils::HashString("ORGANIZATION_RESOURCE_TAG");
static const int ORGANIZATION_ACCOUNT_TAG_HASH = HashingUtils::HashString("ORGANIZATION_ACCOUNT_TAG");

OrganizationTagType GetOrganizationTagTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ORGANIZATION_RESOURCE_TAG_HASH) {
    return OrganizationTagType::ORGANIZATION_RESOURCE_TAG;
  } else if (hashCode == ORGANIZATION_ACCOUNT_TAG_HASH) {
    return OrganizationTagType::ORGANIZATION_ACCOUNT_TAG;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OrganizationTagType>(hashCode);
  }

  return OrganizationTagType::NOT_SET;
}

Aws::String GetNameForOrganizationTagType(OrganizationTagType enumValue) {
  switch (enumValue) {
    case OrganizationTagType::NOT_SET:
      return {};
    case OrganizationTagType::ORGANIZATION_RESOURCE_TAG:
      return "ORGANIZATION_RESOURCE_TAG";
    case OrganizationTagType::ORGANIZATION_ACCOUNT_TAG:
      return "ORGANIZATION_ACCOUNT_TAG";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OrganizationTagTypeMapper
}  // namespace Model
}  // namespace Health
}  // namespace Aws
