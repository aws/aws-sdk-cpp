/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/JwkKeyType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace JwkKeyTypeMapper {

static const int EC_HASH = HashingUtils::HashString("EC");

JwkKeyType GetJwkKeyTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EC_HASH) {
    return JwkKeyType::EC;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<JwkKeyType>(hashCode);
  }

  return JwkKeyType::NOT_SET;
}

Aws::String GetNameForJwkKeyType(JwkKeyType enumValue) {
  switch (enumValue) {
    case JwkKeyType::NOT_SET:
      return {};
    case JwkKeyType::EC:
      return "EC";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace JwkKeyTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
