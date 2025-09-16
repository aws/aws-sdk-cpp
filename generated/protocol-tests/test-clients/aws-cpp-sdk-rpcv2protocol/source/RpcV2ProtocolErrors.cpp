/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rpcv2protocol/RpcV2ProtocolErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::RpcV2Protocol;

namespace Aws {
namespace RpcV2Protocol {
namespace RpcV2ProtocolErrorMapper {

static const int COMPLEX_HASH = HashingUtils::HashString("ComplexError");
static const int INVALID_GREETING_HASH = HashingUtils::HashString("InvalidGreeting");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == COMPLEX_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RpcV2ProtocolErrors::COMPLEX), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INVALID_GREETING_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RpcV2ProtocolErrors::INVALID_GREETING), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace RpcV2ProtocolErrorMapper
}  // namespace RpcV2Protocol
}  // namespace Aws
