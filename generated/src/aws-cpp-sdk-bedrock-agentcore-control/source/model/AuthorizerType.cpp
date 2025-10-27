/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/AuthorizerType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace AuthorizerTypeMapper {

static const int CUSTOM_JWT_HASH = HashingUtils::HashString("CUSTOM_JWT");
static const int AWS_IAM_HASH = HashingUtils::HashString("AWS_IAM");

AuthorizerType GetAuthorizerTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CUSTOM_JWT_HASH) {
    return AuthorizerType::CUSTOM_JWT;
  } else if (hashCode == AWS_IAM_HASH) {
    return AuthorizerType::AWS_IAM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AuthorizerType>(hashCode);
  }

  return AuthorizerType::NOT_SET;
}

Aws::String GetNameForAuthorizerType(AuthorizerType enumValue) {
  switch (enumValue) {
    case AuthorizerType::NOT_SET:
      return {};
    case AuthorizerType::CUSTOM_JWT:
      return "CUSTOM_JWT";
    case AuthorizerType::AWS_IAM:
      return "AWS_IAM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AuthorizerTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
