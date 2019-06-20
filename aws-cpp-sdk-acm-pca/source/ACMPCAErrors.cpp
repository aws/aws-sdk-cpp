/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/acm-pca/ACMPCAErrors.h>

using namespace Aws::Client;
using namespace Aws::ACMPCA;
using namespace Aws::Utils;

namespace Aws
{
namespace ACMPCA
{
namespace ACMPCAErrorMapper
{

static const int REQUEST_ALREADY_PROCESSED_HASH = HashingUtils::HashString("RequestAlreadyProcessedException");
static const int PERMISSION_ALREADY_EXISTS_HASH = HashingUtils::HashString("PermissionAlreadyExistsException");
static const int REQUEST_IN_PROGRESS_HASH = HashingUtils::HashString("RequestInProgressException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int REQUEST_FAILED_HASH = HashingUtils::HashString("RequestFailedException");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModificationException");
static const int INVALID_TAG_HASH = HashingUtils::HashString("InvalidTagException");
static const int CERTIFICATE_MISMATCH_HASH = HashingUtils::HashString("CertificateMismatchException");
static const int INVALID_STATE_HASH = HashingUtils::HashString("InvalidStateException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int INVALID_ARGS_HASH = HashingUtils::HashString("InvalidArgsException");
static const int MALFORMED_CERTIFICATE_HASH = HashingUtils::HashString("MalformedCertificateException");
static const int INVALID_ARN_HASH = HashingUtils::HashString("InvalidArnException");
static const int TOO_MANY_TAGS_HASH = HashingUtils::HashString("TooManyTagsException");
static const int MALFORMED_C_S_R_HASH = HashingUtils::HashString("MalformedCSRException");
static const int INVALID_POLICY_HASH = HashingUtils::HashString("InvalidPolicyException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

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
    return AWSError<CoreErrors>(static_cast<CoreErrors>(ACMPCAErrors::LIMIT_EXCEEDED), false);
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
