/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/StorageConnectorAuthentication.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {
namespace StorageConnectorAuthenticationMapper {

static const int FORCE_REAUTHENTICATION_HASH = HashingUtils::HashString("FORCE_REAUTHENTICATION");
static const int REUSE_CREDENTIALS_HASH = HashingUtils::HashString("REUSE_CREDENTIALS");

StorageConnectorAuthentication GetStorageConnectorAuthenticationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == FORCE_REAUTHENTICATION_HASH) {
    return StorageConnectorAuthentication::FORCE_REAUTHENTICATION;
  } else if (hashCode == REUSE_CREDENTIALS_HASH) {
    return StorageConnectorAuthentication::REUSE_CREDENTIALS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StorageConnectorAuthentication>(hashCode);
  }

  return StorageConnectorAuthentication::NOT_SET;
}

Aws::String GetNameForStorageConnectorAuthentication(StorageConnectorAuthentication enumValue) {
  switch (enumValue) {
    case StorageConnectorAuthentication::NOT_SET:
      return {};
    case StorageConnectorAuthentication::FORCE_REAUTHENTICATION:
      return "FORCE_REAUTHENTICATION";
    case StorageConnectorAuthentication::REUSE_CREDENTIALS:
      return "REUSE_CREDENTIALS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StorageConnectorAuthenticationMapper
}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
