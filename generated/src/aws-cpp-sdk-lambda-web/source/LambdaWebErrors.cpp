/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/lambda-web/LambdaWebErrors.h>
#include <aws/lambda-web/model/ThrottlingException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::LambdaWeb;
using namespace Aws::LambdaWeb::Model;

namespace Aws {
namespace LambdaWeb {
template <>
AWS_LAMBDAWEB_API ThrottlingException LambdaWebError::GetModeledError() {
  assert(this->GetErrorType() == LambdaWebErrors::THROTTLING);
  return ThrottlingException(this->GetJsonPayload().View());
}

namespace LambdaWebErrorMapper {

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");

AWSError<CoreErrors> GetErrorForName(const char* errorName) {
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH) {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(LambdaWebErrors::INTERNAL_SERVER), RetryableType::RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

}  // namespace LambdaWebErrorMapper
}  // namespace LambdaWeb
}  // namespace Aws
