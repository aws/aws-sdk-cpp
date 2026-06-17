/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/AccessControlPrincipalType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {
namespace AccessControlPrincipalTypeMapper {

static const int USER_HASH = HashingUtils::HashString("USER");

AccessControlPrincipalType GetAccessControlPrincipalTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == USER_HASH) {
    return AccessControlPrincipalType::USER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccessControlPrincipalType>(hashCode);
  }

  return AccessControlPrincipalType::NOT_SET;
}

Aws::String GetNameForAccessControlPrincipalType(AccessControlPrincipalType enumValue) {
  switch (enumValue) {
    case AccessControlPrincipalType::NOT_SET:
      return {};
    case AccessControlPrincipalType::USER:
      return "USER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccessControlPrincipalTypeMapper
}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
