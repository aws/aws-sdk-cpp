/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/OnBehalfOfClientAuthenticationMethod.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace OnBehalfOfClientAuthenticationMethodMapper {

static const int NO_CLIENT_HASH = HashingUtils::HashString("NO_CLIENT");

OnBehalfOfClientAuthenticationMethod GetOnBehalfOfClientAuthenticationMethodForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NO_CLIENT_HASH) {
    return OnBehalfOfClientAuthenticationMethod::NO_CLIENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OnBehalfOfClientAuthenticationMethod>(hashCode);
  }

  return OnBehalfOfClientAuthenticationMethod::NOT_SET;
}

Aws::String GetNameForOnBehalfOfClientAuthenticationMethod(OnBehalfOfClientAuthenticationMethod enumValue) {
  switch (enumValue) {
    case OnBehalfOfClientAuthenticationMethod::NOT_SET:
      return {};
    case OnBehalfOfClientAuthenticationMethod::NO_CLIENT:
      return "NO_CLIENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OnBehalfOfClientAuthenticationMethodMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
