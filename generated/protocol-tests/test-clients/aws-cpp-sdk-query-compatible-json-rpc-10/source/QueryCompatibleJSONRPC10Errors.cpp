/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/query-compatible-json-rpc-10/QueryCompatibleJSONRPC10Errors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::QueryCompatibleJSONRPC10;

namespace Aws {
namespace QueryCompatibleJSONRPC10 {
namespace QueryCompatibleJSONRPC10ErrorMapper {

static const int CUSTOM_CODE_HASH = HashingUtils::HashString("Customized");
static const int NO_CUSTOM_CODE_HASH = HashingUtils::HashString("NoCustomCodeError");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == CUSTOM_CODE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QueryCompatibleJSONRPC10Errors::CUSTOM_CODE), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == NO_CUSTOM_CODE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QueryCompatibleJSONRPC10Errors::NO_CUSTOM_CODE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace QueryCompatibleJSONRPC10ErrorMapper
}  // namespace QueryCompatibleJSONRPC10
}  // namespace Aws
