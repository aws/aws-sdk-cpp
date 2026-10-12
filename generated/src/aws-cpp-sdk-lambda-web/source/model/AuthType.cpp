/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-web/model/AuthType.h>

using namespace Aws::Utils;

namespace Aws {
namespace LambdaWeb {
namespace Model {
namespace AuthTypeMapper {

static const int ApplicationManaged_HASH = HashingUtils::HashString("ApplicationManaged");
static const int IamAuth_HASH = HashingUtils::HashString("IamAuth");

AuthType GetAuthTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ApplicationManaged_HASH) {
    return AuthType::ApplicationManaged;
  } else if (hashCode == IamAuth_HASH) {
    return AuthType::IamAuth;
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
    case AuthType::ApplicationManaged:
      return "ApplicationManaged";
    case AuthType::IamAuth:
      return "IamAuth";
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
}  // namespace LambdaWeb
}  // namespace Aws
