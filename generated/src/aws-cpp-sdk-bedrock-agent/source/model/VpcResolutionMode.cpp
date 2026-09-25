/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/VpcResolutionMode.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgent {
namespace Model {
namespace VpcResolutionModeMapper {

static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");
static const int IN_VPC_HASH = HashingUtils::HashString("IN_VPC");

VpcResolutionMode GetVpcResolutionModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PUBLIC__HASH) {
    return VpcResolutionMode::PUBLIC_;
  } else if (hashCode == IN_VPC_HASH) {
    return VpcResolutionMode::IN_VPC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VpcResolutionMode>(hashCode);
  }

  return VpcResolutionMode::NOT_SET;
}

Aws::String GetNameForVpcResolutionMode(VpcResolutionMode enumValue) {
  switch (enumValue) {
    case VpcResolutionMode::NOT_SET:
      return {};
    case VpcResolutionMode::PUBLIC_:
      return "PUBLIC";
    case VpcResolutionMode::IN_VPC:
      return "IN_VPC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VpcResolutionModeMapper
}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
