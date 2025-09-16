/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/query-protocol/QueryProtocolErrors.h>
#include <aws/query-protocol/model/ComplexError.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::QueryProtocol;
using namespace Aws::QueryProtocol::Model;

namespace Aws {
namespace QueryProtocol {
template <>
AWS_QUERYPROTOCOL_API ComplexError QueryProtocolError::GetModeledError() {
  assert(this->GetErrorType() == QueryProtocolErrors::COMPLEX);
  return ComplexError(this->GetXmlPayload().GetRootElement());
}

namespace QueryProtocolErrorMapper {

static const int INVALID_GREETING_HASH = HashingUtils::HashString("InvalidGreeting");
static const int COMPLEX_HASH = HashingUtils::HashString("ComplexError");
static const int CUSTOM_CODE_HASH = HashingUtils::HashString("Customized");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_GREETING_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QueryProtocolErrors::INVALID_GREETING), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == COMPLEX_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QueryProtocolErrors::COMPLEX), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == CUSTOM_CODE_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(QueryProtocolErrors::CUSTOM_CODE), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace QueryProtocolErrorMapper
}  // namespace QueryProtocol
}  // namespace Aws
