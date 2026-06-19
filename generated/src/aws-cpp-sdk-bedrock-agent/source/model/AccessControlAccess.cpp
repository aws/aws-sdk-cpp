/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/AccessControlAccess.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {
namespace AccessControlAccessMapper {

static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");
static const int DENY_HASH = HashingUtils::HashString("DENY");

AccessControlAccess GetAccessControlAccessForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALLOW_HASH) {
    return AccessControlAccess::ALLOW;
  } else if (hashCode == DENY_HASH) {
    return AccessControlAccess::DENY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccessControlAccess>(hashCode);
  }

  return AccessControlAccess::NOT_SET;
}

Aws::String GetNameForAccessControlAccess(AccessControlAccess enumValue) {
  switch (enumValue) {
    case AccessControlAccess::NOT_SET:
      return {};
    case AccessControlAccess::ALLOW:
      return "ALLOW";
    case AccessControlAccess::DENY:
      return "DENY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccessControlAccessMapper
}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
