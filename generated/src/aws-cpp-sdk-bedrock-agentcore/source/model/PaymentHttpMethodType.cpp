/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/PaymentHttpMethodType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace PaymentHttpMethodTypeMapper {

static const int GET__HASH = HashingUtils::HashString("GET");
static const int POST_HASH = HashingUtils::HashString("POST");
static const int PUT_HASH = HashingUtils::HashString("PUT");
static const int DELETE__HASH = HashingUtils::HashString("DELETE");
static const int PATCH_HASH = HashingUtils::HashString("PATCH");

PaymentHttpMethodType GetPaymentHttpMethodTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GET__HASH) {
    return PaymentHttpMethodType::GET_;
  } else if (hashCode == POST_HASH) {
    return PaymentHttpMethodType::POST;
  } else if (hashCode == PUT_HASH) {
    return PaymentHttpMethodType::PUT;
  } else if (hashCode == DELETE__HASH) {
    return PaymentHttpMethodType::DELETE_;
  } else if (hashCode == PATCH_HASH) {
    return PaymentHttpMethodType::PATCH;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PaymentHttpMethodType>(hashCode);
  }

  return PaymentHttpMethodType::NOT_SET;
}

Aws::String GetNameForPaymentHttpMethodType(PaymentHttpMethodType enumValue) {
  switch (enumValue) {
    case PaymentHttpMethodType::NOT_SET:
      return {};
    case PaymentHttpMethodType::GET_:
      return "GET";
    case PaymentHttpMethodType::POST:
      return "POST";
    case PaymentHttpMethodType::PUT:
      return "PUT";
    case PaymentHttpMethodType::DELETE_:
      return "DELETE";
    case PaymentHttpMethodType::PATCH:
      return "PATCH";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PaymentHttpMethodTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
