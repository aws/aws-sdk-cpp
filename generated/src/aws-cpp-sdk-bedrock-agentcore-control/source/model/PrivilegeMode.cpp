/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PrivilegeMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace PrivilegeModeMapper {

static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
static const int PRIVILEGED_HASH = HashingUtils::HashString("PRIVILEGED");

PrivilegeMode GetPrivilegeModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STANDARD_HASH) {
    return PrivilegeMode::STANDARD;
  } else if (hashCode == PRIVILEGED_HASH) {
    return PrivilegeMode::PRIVILEGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PrivilegeMode>(hashCode);
  }

  return PrivilegeMode::NOT_SET;
}

Aws::String GetNameForPrivilegeMode(PrivilegeMode enumValue) {
  switch (enumValue) {
    case PrivilegeMode::NOT_SET:
      return {};
    case PrivilegeMode::STANDARD:
      return "STANDARD";
    case PrivilegeMode::PRIVILEGED:
      return "PRIVILEGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PrivilegeModeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
