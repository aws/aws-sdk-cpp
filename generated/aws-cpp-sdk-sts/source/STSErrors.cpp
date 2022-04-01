/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sts/STSErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::STS;

namespace Aws
{
namespace STS
{
namespace STSErrorMapper
{

static const int MALFORMED_POLICY_DOCUMENT_HASH = HashingUtils::HashString("MalformedPolicyDocument");
static const int PACKED_POLICY_TOO_LARGE_HASH = HashingUtils::HashString("PackedPolicyTooLarge");
static const int I_D_P_COMMUNICATION_ERROR_HASH = HashingUtils::HashString("IDPCommunicationError");
static const int I_D_P_REJECTED_CLAIM_HASH = HashingUtils::HashString("IDPRejectedClaim");
static const int EXPIRED_TOKEN_HASH = HashingUtils::HashString("ExpiredTokenException");
static const int INVALID_IDENTITY_TOKEN_HASH = HashingUtils::HashString("InvalidIdentityToken");
static const int INVALID_AUTHORIZATION_MESSAGE_HASH = HashingUtils::HashString("InvalidAuthorizationMessageException");
static const int REGION_DISABLED_HASH = HashingUtils::HashString("RegionDisabledException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == MALFORMED_POLICY_DOCUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(STSErrors::MALFORMED_POLICY_DOCUMENT), false);
  }
  else if (hashCode == PACKED_POLICY_TOO_LARGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(STSErrors::PACKED_POLICY_TOO_LARGE), false);
  }
  else if (hashCode == I_D_P_COMMUNICATION_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(STSErrors::I_D_P_COMMUNICATION_ERROR), false);
  }
  else if (hashCode == I_D_P_REJECTED_CLAIM_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(STSErrors::I_D_P_REJECTED_CLAIM), false);
  }
  else if (hashCode == EXPIRED_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(STSErrors::EXPIRED_TOKEN), false);
  }
  else if (hashCode == INVALID_IDENTITY_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(STSErrors::INVALID_IDENTITY_TOKEN), false);
  }
  else if (hashCode == INVALID_AUTHORIZATION_MESSAGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(STSErrors::INVALID_AUTHORIZATION_MESSAGE), false);
  }
  else if (hashCode == REGION_DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(STSErrors::REGION_DISABLED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace STSErrorMapper
} // namespace STS
} // namespace Aws
