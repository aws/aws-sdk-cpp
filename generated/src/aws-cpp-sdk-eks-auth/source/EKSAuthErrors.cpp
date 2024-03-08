/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eks-auth/EKSAuthErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::EKSAuth;

namespace Aws
{
namespace EKSAuth
{
namespace EKSAuthErrorMapper
{

static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int INVALID_TOKEN_HASH = HashingUtils::HashString("InvalidTokenException");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int EXPIRED_TOKEN_HASH = HashingUtils::HashString("ExpiredTokenException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSAuthErrors::INTERNAL_SERVER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSAuthErrors::INVALID_TOKEN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSAuthErrors::INVALID_PARAMETER), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == EXPIRED_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSAuthErrors::EXPIRED_TOKEN), RetryableType::NOT_RETRYABLE);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSAuthErrors::INVALID_REQUEST), RetryableType::NOT_RETRYABLE);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace EKSAuthErrorMapper
} // namespace EKSAuth
} // namespace Aws
