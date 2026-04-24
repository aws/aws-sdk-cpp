/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/BrowserEnterprisePolicyType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace BrowserEnterprisePolicyTypeMapper {

static const int MANAGED_HASH = HashingUtils::HashString("MANAGED");
static const int RECOMMENDED_HASH = HashingUtils::HashString("RECOMMENDED");

BrowserEnterprisePolicyType GetBrowserEnterprisePolicyTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MANAGED_HASH) {
    return BrowserEnterprisePolicyType::MANAGED;
  } else if (hashCode == RECOMMENDED_HASH) {
    return BrowserEnterprisePolicyType::RECOMMENDED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BrowserEnterprisePolicyType>(hashCode);
  }

  return BrowserEnterprisePolicyType::NOT_SET;
}

Aws::String GetNameForBrowserEnterprisePolicyType(BrowserEnterprisePolicyType enumValue) {
  switch (enumValue) {
    case BrowserEnterprisePolicyType::NOT_SET:
      return {};
    case BrowserEnterprisePolicyType::MANAGED:
      return "MANAGED";
    case BrowserEnterprisePolicyType::RECOMMENDED:
      return "RECOMMENDED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BrowserEnterprisePolicyTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
