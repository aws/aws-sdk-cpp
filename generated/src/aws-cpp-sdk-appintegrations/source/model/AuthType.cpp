/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/AuthType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AppIntegrationsService {
namespace Model {
namespace AuthTypeMapper {

static const int API_KEY_HASH = HashingUtils::HashString("API_KEY");

AuthType GetAuthTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == API_KEY_HASH) {
    return AuthType::API_KEY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AuthType>(hashCode);
  }

  return AuthType::NOT_SET;
}

Aws::String GetNameForAuthType(AuthType enumValue) {
  switch (enumValue) {
    case AuthType::NOT_SET:
      return {};
    case AuthType::API_KEY:
      return "API_KEY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AuthTypeMapper
}  // namespace Model
}  // namespace AppIntegrationsService
}  // namespace Aws
