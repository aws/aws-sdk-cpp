/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/kafka/model/TokenEndpointAuthenticationMethod.h>

using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {
namespace TokenEndpointAuthenticationMethodMapper {

static const int POST_HASH = HashingUtils::HashString("POST");
static const int BASIC_HASH = HashingUtils::HashString("BASIC");
static const int NONE_HASH = HashingUtils::HashString("NONE");

TokenEndpointAuthenticationMethod GetTokenEndpointAuthenticationMethodForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == POST_HASH) {
    return TokenEndpointAuthenticationMethod::POST;
  } else if (hashCode == BASIC_HASH) {
    return TokenEndpointAuthenticationMethod::BASIC;
  } else if (hashCode == NONE_HASH) {
    return TokenEndpointAuthenticationMethod::NONE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TokenEndpointAuthenticationMethod>(hashCode);
  }

  return TokenEndpointAuthenticationMethod::NOT_SET;
}

Aws::String GetNameForTokenEndpointAuthenticationMethod(TokenEndpointAuthenticationMethod enumValue) {
  switch (enumValue) {
    case TokenEndpointAuthenticationMethod::NOT_SET:
      return {};
    case TokenEndpointAuthenticationMethod::POST:
      return "POST";
    case TokenEndpointAuthenticationMethod::BASIC:
      return "BASIC";
    case TokenEndpointAuthenticationMethod::NONE:
      return "NONE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TokenEndpointAuthenticationMethodMapper
}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
