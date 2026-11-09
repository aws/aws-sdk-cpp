/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/query-compatible-rpcv2-protocol/QueryCompatibleRpcV2ProtocolErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::QueryCompatibleRpcV2Protocol;

namespace Aws {
namespace QueryCompatibleRpcV2Protocol {
namespace QueryCompatibleRpcV2ProtocolErrorMapper {

static const int CUSTOM_CODE_HASH = HashingUtils::HashString("Customized");
static const int NO_CUSTOM_CODE_HASH = HashingUtils::HashString("NoCustomCodeError");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CUSTOM_CODE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QueryCompatibleRpcV2ProtocolErrors::CUSTOM_CODE), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == NO_CUSTOM_CODE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QueryCompatibleRpcV2ProtocolErrors::NO_CUSTOM_CODE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace QueryCompatibleRpcV2ProtocolErrorMapper
}  // namespace QueryCompatibleRpcV2Protocol
}  // namespace Aws
