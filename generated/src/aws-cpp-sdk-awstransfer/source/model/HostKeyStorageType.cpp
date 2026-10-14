/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/HostKeyStorageType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Transfer {
namespace Model {
namespace HostKeyStorageTypeMapper {

static const int SERVICE_MANAGED_HASH = HashingUtils::HashString("SERVICE_MANAGED");
static const int SECRETS_MANAGER_HASH = HashingUtils::HashString("SECRETS_MANAGER");

HostKeyStorageType GetHostKeyStorageTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SERVICE_MANAGED_HASH) {
    return HostKeyStorageType::SERVICE_MANAGED;
  } else if (hashCode == SECRETS_MANAGER_HASH) {
    return HostKeyStorageType::SECRETS_MANAGER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HostKeyStorageType>(hashCode);
  }

  return HostKeyStorageType::NOT_SET;
}

Aws::String GetNameForHostKeyStorageType(HostKeyStorageType enumValue) {
  switch (enumValue) {
    case HostKeyStorageType::NOT_SET:
      return {};
    case HostKeyStorageType::SERVICE_MANAGED:
      return "SERVICE_MANAGED";
    case HostKeyStorageType::SECRETS_MANAGER:
      return "SECRETS_MANAGER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HostKeyStorageTypeMapper
}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
