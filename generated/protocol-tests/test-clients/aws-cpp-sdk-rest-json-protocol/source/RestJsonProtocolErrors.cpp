/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rest-json-protocol/RestJsonProtocolErrors.h>
#include <aws/rest-json-protocol/model/ComplexError.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::RestJsonProtocol;
using namespace Aws::RestJsonProtocol::Model;

namespace Aws {
namespace RestJsonProtocol {
template <>
AWS_RESTJSONPROTOCOL_API ComplexError RestJsonProtocolError::GetModeledError() {
  assert(this->GetErrorType() == RestJsonProtocolErrors::COMPLEX);
  return ComplexError(this->GetJsonPayload().View());
}

namespace RestJsonProtocolErrorMapper {

static const int INVALID_GREETING_HASH = HashingUtils::HashString("InvalidGreeting");
static const int COMPLEX_HASH = HashingUtils::HashString("ComplexError");
static const int FOO_HASH = HashingUtils::HashString("FooError");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_GREETING_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RestJsonProtocolErrors::INVALID_GREETING), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == COMPLEX_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RestJsonProtocolErrors::COMPLEX), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == FOO_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RestJsonProtocolErrors::FOO), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace RestJsonProtocolErrorMapper
}  // namespace RestJsonProtocol
}  // namespace Aws
