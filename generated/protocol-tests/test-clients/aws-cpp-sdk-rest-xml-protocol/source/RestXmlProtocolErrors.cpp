/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/rest-xml-protocol/RestXmlProtocolErrors.h>
#include <aws/rest-xml-protocol/model/ComplexError.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::RestXmlProtocol;
using namespace Aws::RestXmlProtocol::Model;

namespace Aws {
namespace RestXmlProtocol {
template <>
AWS_RESTXMLPROTOCOL_API ComplexError RestXmlProtocolError::GetModeledError() {
  assert(this->GetErrorType() == RestXmlProtocolErrors::COMPLEX);
  return ComplexError(this->GetXmlPayload().GetRootElement());
}

namespace RestXmlProtocolErrorMapper {

static const int COMPLEX_HASH = HashingUtils::HashString("ComplexError");
static const int INVALID_GREETING_HASH = HashingUtils::HashString("InvalidGreeting");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == COMPLEX_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RestXmlProtocolErrors::COMPLEX), RetryableType::NOT_RETRYABLE);
  } else if (hashCode == INVALID_GREETING_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(RestXmlProtocolErrors::INVALID_GREETING), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace RestXmlProtocolErrorMapper
}  // namespace RestXmlProtocol
}  // namespace Aws
