/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/identitystore/model/ResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace IdentityStore {
namespace Model {
namespace ResourceTypeMapper {

static const int GROUP_HASH = HashingUtils::HashString("GROUP");
static const int USER_HASH = HashingUtils::HashString("USER");
static const int IDENTITY_STORE_HASH = HashingUtils::HashString("IDENTITY_STORE");
static const int GROUP_MEMBERSHIP_HASH = HashingUtils::HashString("GROUP_MEMBERSHIP");
static const int RESOURCE_POLICY_HASH = HashingUtils::HashString("RESOURCE_POLICY");

ResourceType GetResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GROUP_HASH) {
    return ResourceType::GROUP;
  } else if (hashCode == USER_HASH) {
    return ResourceType::USER;
  } else if (hashCode == IDENTITY_STORE_HASH) {
    return ResourceType::IDENTITY_STORE;
  } else if (hashCode == GROUP_MEMBERSHIP_HASH) {
    return ResourceType::GROUP_MEMBERSHIP;
  } else if (hashCode == RESOURCE_POLICY_HASH) {
    return ResourceType::RESOURCE_POLICY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceType>(hashCode);
  }

  return ResourceType::NOT_SET;
}

Aws::String GetNameForResourceType(ResourceType enumValue) {
  switch (enumValue) {
    case ResourceType::NOT_SET:
      return {};
    case ResourceType::GROUP:
      return "GROUP";
    case ResourceType::USER:
      return "USER";
    case ResourceType::IDENTITY_STORE:
      return "IDENTITY_STORE";
    case ResourceType::GROUP_MEMBERSHIP:
      return "GROUP_MEMBERSHIP";
    case ResourceType::RESOURCE_POLICY:
      return "RESOURCE_POLICY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceTypeMapper
}  // namespace Model
}  // namespace IdentityStore
}  // namespace Aws
