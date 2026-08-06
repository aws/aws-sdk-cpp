/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/OperatingSystem.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace OperatingSystemMapper {

static const int LINUX_X86_64_HASH = HashingUtils::HashString("LINUX_X86_64");
static const int LINUX_ARM64_HASH = HashingUtils::HashString("LINUX_ARM64");

OperatingSystem GetOperatingSystemForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LINUX_X86_64_HASH) {
    return OperatingSystem::LINUX_X86_64;
  } else if (hashCode == LINUX_ARM64_HASH) {
    return OperatingSystem::LINUX_ARM64;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OperatingSystem>(hashCode);
  }

  return OperatingSystem::NOT_SET;
}

Aws::String GetNameForOperatingSystem(OperatingSystem enumValue) {
  switch (enumValue) {
    case OperatingSystem::NOT_SET:
      return {};
    case OperatingSystem::LINUX_X86_64:
      return "LINUX_X86_64";
    case OperatingSystem::LINUX_ARM64:
      return "LINUX_ARM64";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OperatingSystemMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
