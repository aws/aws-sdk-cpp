/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/json-protocol/JsonProtocolErrors.h>
#include <aws/json-protocol/model/ComplexError.h>
#include <aws/json-protocol/model/ErrorWithMembers.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::JsonProtocol;
using namespace Aws::JsonProtocol::Model;

namespace Aws {
namespace JsonProtocol {
template <>
AWS_JSONPROTOCOL_API ErrorWithMembers JsonProtocolError::GetModeledError() {
  assert(this->GetErrorType() == JsonProtocolErrors::ERROR_WITH_MEMBERS);
  return ErrorWithMembers(this->GetJsonPayload().View());
}

template <>
AWS_JSONPROTOCOL_API ComplexError JsonProtocolError::GetModeledError() {
  assert(this->GetErrorType() == JsonProtocolErrors::COMPLEX);
  return ComplexError(this->GetJsonPayload().View());
}

namespace JsonProtocolErrorMapper {

static const int ERROR_WITH_MEMBERS_HASH = HashingUtils::HashString("ErrorWithMembers");
static const int INVALID_GREETING_HASH = HashingUtils::HashString("InvalidGreeting");
static const int COMPLEX_HASH = HashingUtils::HashString("ComplexError");
static const int ERROR_WITHOUT_MEMBERS_HASH = HashingUtils::HashString("ErrorWithoutMembers");
static const int FOO_HASH = HashingUtils::HashString("FooError");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == ERROR_WITH_MEMBERS_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(JsonProtocolErrors::ERROR_WITH_MEMBERS), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INVALID_GREETING_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(JsonProtocolErrors::INVALID_GREETING), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == COMPLEX_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(JsonProtocolErrors::COMPLEX), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == ERROR_WITHOUT_MEMBERS_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(JsonProtocolErrors::ERROR_WITHOUT_MEMBERS), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == FOO_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(JsonProtocolErrors::FOO), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace JsonProtocolErrorMapper
}  // namespace JsonProtocol
}  // namespace Aws
