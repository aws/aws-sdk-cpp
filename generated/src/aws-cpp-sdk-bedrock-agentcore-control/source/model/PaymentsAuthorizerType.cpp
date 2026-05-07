/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/PaymentsAuthorizerType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace PaymentsAuthorizerTypeMapper {

static const int CUSTOM_JWT_HASH = HashingUtils::HashString("CUSTOM_JWT");
static const int AWS_IAM_HASH = HashingUtils::HashString("AWS_IAM");

PaymentsAuthorizerType GetPaymentsAuthorizerTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CUSTOM_JWT_HASH) {
    return PaymentsAuthorizerType::CUSTOM_JWT;
  } else if (hashCode == AWS_IAM_HASH) {
    return PaymentsAuthorizerType::AWS_IAM;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PaymentsAuthorizerType>(hashCode);
  }

  return PaymentsAuthorizerType::NOT_SET;
}

Aws::String GetNameForPaymentsAuthorizerType(PaymentsAuthorizerType enumValue) {
  switch (enumValue) {
    case PaymentsAuthorizerType::NOT_SET:
      return {};
    case PaymentsAuthorizerType::CUSTOM_JWT:
      return "CUSTOM_JWT";
    case PaymentsAuthorizerType::AWS_IAM:
      return "AWS_IAM";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PaymentsAuthorizerTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
