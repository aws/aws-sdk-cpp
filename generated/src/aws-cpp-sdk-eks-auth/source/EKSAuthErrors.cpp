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
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSAuthErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == INVALID_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSAuthErrors::INVALID_TOKEN), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSAuthErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == EXPIRED_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSAuthErrors::EXPIRED_TOKEN), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(EKSAuthErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace EKSAuthErrorMapper
} // namespace EKSAuth
} // namespace Aws
