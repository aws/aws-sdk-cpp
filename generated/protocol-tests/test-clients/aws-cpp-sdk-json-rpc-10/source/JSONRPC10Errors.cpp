/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/json-rpc-10/JSONRPC10Errors.h>
#include <aws/json-rpc-10/model/ComplexError.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::JSONRPC10;
using namespace Aws::JSONRPC10::Model;

namespace Aws {
namespace JSONRPC10 {
template <>
AWS_JSONRPC10_API ComplexError JSONRPC10Error::GetModeledError() {
  assert(this->GetErrorType() == JSONRPC10Errors::COMPLEX);
  return ComplexError(this->GetJsonPayload().View());
}

namespace JSONRPC10ErrorMapper {

static const int INVALID_GREETING_HASH = HashingUtils::HashString("InvalidGreeting");
static const int COMPLEX_HASH = HashingUtils::HashString("ComplexError");
static const int FOO_HASH = HashingUtils::HashString("FooError");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_GREETING_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(JSONRPC10Errors::INVALID_GREETING), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == COMPLEX_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(JSONRPC10Errors::COMPLEX), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == FOO_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(JSONRPC10Errors::FOO), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace JSONRPC10ErrorMapper
}  // namespace JSONRPC10
}  // namespace Aws
