/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/acm-pca/ACMPCAErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::ACMPCA;

namespace Aws
{
namespace ACMPCA
{
namespace ACMPCAErrorMapper
{

static constexpr uint32_t REQUEST_ALREADY_PROCESSED_HASH = ConstExprHashingUtils::HashString("RequestAlreadyProcessedException");
static constexpr uint32_t PERMISSION_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("PermissionAlreadyExistsException");
static constexpr uint32_t REQUEST_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("RequestInProgressException");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceededException");
static constexpr uint32_t REQUEST_FAILED_HASH = ConstExprHashingUtils::HashString("RequestFailedException");
static constexpr uint32_t CONCURRENT_MODIFICATION_HASH = ConstExprHashingUtils::HashString("ConcurrentModificationException");
static constexpr uint32_t INVALID_TAG_HASH = ConstExprHashingUtils::HashString("InvalidTagException");
static constexpr uint32_t CERTIFICATE_MISMATCH_HASH = ConstExprHashingUtils::HashString("CertificateMismatchException");
static constexpr uint32_t INVALID_STATE_HASH = ConstExprHashingUtils::HashString("InvalidStateException");
static constexpr uint32_t LOCKOUT_PREVENTED_HASH = ConstExprHashingUtils::HashString("LockoutPreventedException");
static constexpr uint32_t INVALID_NEXT_TOKEN_HASH = ConstExprHashingUtils::HashString("InvalidNextTokenException");
static constexpr uint32_t INVALID_ARGS_HASH = ConstExprHashingUtils::HashString("InvalidArgsException");
static constexpr uint32_t MALFORMED_CERTIFICATE_HASH = ConstExprHashingUtils::HashString("MalformedCertificateException");
static constexpr uint32_t INVALID_ARN_HASH = ConstExprHashingUtils::HashString("InvalidArnException");
static constexpr uint32_t TOO_MANY_TAGS_HASH = ConstExprHashingUtils::HashString("TooManyTagsException");
static constexpr uint32_t MALFORMED_C_S_R_HASH = ConstExprHashingUtils::HashString("MalformedCSRException");
static constexpr uint32_t INVALID_POLICY_HASH = ConstExprHashingUtils::HashString("InvalidPolicyException");
static constexpr uint32_t INVALID_REQUEST_HASH = ConstExprHashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

  if (hashCode == REQUEST_ALREADY_PROCESSED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMPCAErrors::REQUEST_ALREADY_PROCESSED), false);
  }
  else if (hashCode == PERMISSION_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMPCAErrors::PERMISSION_ALREADY_EXISTS), false);
  }
  else if (hashCode == REQUEST_IN_PROGRESS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMPCAErrors::REQUEST_IN_PROGRESS), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMPCAErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == REQUEST_FAILED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMPCAErrors::REQUEST_FAILED), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMPCAErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == INVALID_TAG_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMPCAErrors::INVALID_TAG), false);
  }
  else if (hashCode == CERTIFICATE_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMPCAErrors::CERTIFICATE_MISMATCH), false);
  }
  else if (hashCode == INVALID_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMPCAErrors::INVALID_STATE), false);
  }
  else if (hashCode == LOCKOUT_PREVENTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMPCAErrors::LOCKOUT_PREVENTED), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMPCAErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == INVALID_ARGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMPCAErrors::INVALID_ARGS), false);
  }
  else if (hashCode == MALFORMED_CERTIFICATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMPCAErrors::MALFORMED_CERTIFICATE), false);
  }
  else if (hashCode == INVALID_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMPCAErrors::INVALID_ARN), false);
  }
  else if (hashCode == TOO_MANY_TAGS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMPCAErrors::TOO_MANY_TAGS), false);
  }
  else if (hashCode == MALFORMED_C_S_R_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMPCAErrors::MALFORMED_C_S_R), false);
  }
  else if (hashCode == INVALID_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMPCAErrors::INVALID_POLICY), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMPCAErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace ACMPCAErrorMapper
} // namespace ACMPCA
} // namespace Aws
