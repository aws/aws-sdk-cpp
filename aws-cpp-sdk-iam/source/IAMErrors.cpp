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
#include <aws/iam/IAMErrors.h>

using namespace Aws::Client;
using namespace Aws::IAM;
using namespace Aws::Utils;

namespace Aws
{
namespace IAM
{
namespace IAMErrorMapper
{

static const int ENTITY_ALREADY_EXISTS_HASH = HashingUtils::HashString("EntityAlreadyExists");
static const int DELETE_CONFLICT_HASH = HashingUtils::HashString("DeleteConflict");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceeded");
static const int CONCURRENT_MODIFICATION_HASH = HashingUtils::HashString("ConcurrentModification");
static const int INVALID_AUTHENTICATION_CODE_HASH = HashingUtils::HashString("InvalidAuthenticationCode");
static const int INVALID_USER_TYPE_HASH = HashingUtils::HashString("InvalidUserType");
static const int MALFORMED_POLICY_DOCUMENT_HASH = HashingUtils::HashString("MalformedPolicyDocument");
static const int SERVICE_NOT_SUPPORTED_HASH = HashingUtils::HashString("NotSupportedService");
static const int UNMODIFIABLE_ENTITY_HASH = HashingUtils::HashString("UnmodifiableEntity");
static const int NO_SUCH_ENTITY_HASH = HashingUtils::HashString("NoSuchEntity");
static const int DUPLICATE_S_S_H_PUBLIC_KEY_HASH = HashingUtils::HashString("DuplicateSSHPublicKey");
static const int INVALID_CERTIFICATE_HASH = HashingUtils::HashString("InvalidCertificate");
static const int INVALID_PUBLIC_KEY_HASH = HashingUtils::HashString("InvalidPublicKey");
static const int POLICY_NOT_ATTACHABLE_HASH = HashingUtils::HashString("PolicyNotAttachable");
static const int DUPLICATE_CERTIFICATE_HASH = HashingUtils::HashString("DuplicateCertificate");
static const int PASSWORD_POLICY_VIOLATION_HASH = HashingUtils::HashString("PasswordPolicyViolation");
static const int UNRECOGNIZED_PUBLIC_KEY_ENCODING_HASH = HashingUtils::HashString("UnrecognizedPublicKeyEncoding");
static const int INVALID_INPUT_HASH = HashingUtils::HashString("InvalidInput");
static const int CREDENTIAL_REPORT_NOT_READY_HASH = HashingUtils::HashString("ReportInProgress");
static const int CREDENTIAL_REPORT_NOT_PRESENT_HASH = HashingUtils::HashString("ReportNotPresent");
static const int CREDENTIAL_REPORT_EXPIRED_HASH = HashingUtils::HashString("ReportExpired");
static const int KEY_PAIR_MISMATCH_HASH = HashingUtils::HashString("KeyPairMismatch");
static const int MALFORMED_CERTIFICATE_HASH = HashingUtils::HashString("MalformedCertificate");
static const int SERVICE_FAILURE_HASH = HashingUtils::HashString("ServiceFailure");
static const int POLICY_EVALUATION_HASH = HashingUtils::HashString("PolicyEvaluation");
static const int ENTITY_TEMPORARILY_UNMODIFIABLE_HASH = HashingUtils::HashString("EntityTemporarilyUnmodifiable");
static const int REPORT_GENERATION_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ReportGenerationLimitExceeded");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == ENTITY_ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::ENTITY_ALREADY_EXISTS), false);
  }
  else if (hashCode == DELETE_CONFLICT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::DELETE_CONFLICT), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == CONCURRENT_MODIFICATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::CONCURRENT_MODIFICATION), false);
  }
  else if (hashCode == INVALID_AUTHENTICATION_CODE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::INVALID_AUTHENTICATION_CODE), false);
  }
  else if (hashCode == INVALID_USER_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::INVALID_USER_TYPE), false);
  }
  else if (hashCode == MALFORMED_POLICY_DOCUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::MALFORMED_POLICY_DOCUMENT), false);
  }
  else if (hashCode == SERVICE_NOT_SUPPORTED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::SERVICE_NOT_SUPPORTED), false);
  }
  else if (hashCode == UNMODIFIABLE_ENTITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::UNMODIFIABLE_ENTITY), false);
  }
  else if (hashCode == NO_SUCH_ENTITY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::NO_SUCH_ENTITY), false);
  }
  else if (hashCode == DUPLICATE_S_S_H_PUBLIC_KEY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::DUPLICATE_S_S_H_PUBLIC_KEY), false);
  }
  else if (hashCode == INVALID_CERTIFICATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::INVALID_CERTIFICATE), false);
  }
  else if (hashCode == INVALID_PUBLIC_KEY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::INVALID_PUBLIC_KEY), false);
  }
  else if (hashCode == POLICY_NOT_ATTACHABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::POLICY_NOT_ATTACHABLE), false);
  }
  else if (hashCode == DUPLICATE_CERTIFICATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::DUPLICATE_CERTIFICATE), false);
  }
  else if (hashCode == PASSWORD_POLICY_VIOLATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::PASSWORD_POLICY_VIOLATION), false);
  }
  else if (hashCode == UNRECOGNIZED_PUBLIC_KEY_ENCODING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::UNRECOGNIZED_PUBLIC_KEY_ENCODING), false);
  }
  else if (hashCode == INVALID_INPUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::INVALID_INPUT), false);
  }
  else if (hashCode == CREDENTIAL_REPORT_NOT_READY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::CREDENTIAL_REPORT_NOT_READY), false);
  }
  else if (hashCode == CREDENTIAL_REPORT_NOT_PRESENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::CREDENTIAL_REPORT_NOT_PRESENT), false);
  }
  else if (hashCode == CREDENTIAL_REPORT_EXPIRED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::CREDENTIAL_REPORT_EXPIRED), false);
  }
  else if (hashCode == KEY_PAIR_MISMATCH_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::KEY_PAIR_MISMATCH), false);
  }
  else if (hashCode == MALFORMED_CERTIFICATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::MALFORMED_CERTIFICATE), false);
  }
  else if (hashCode == SERVICE_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::SERVICE_FAILURE), true);
  }
  else if (hashCode == POLICY_EVALUATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::POLICY_EVALUATION), true);
  }
  else if (hashCode == ENTITY_TEMPORARILY_UNMODIFIABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::ENTITY_TEMPORARILY_UNMODIFIABLE), false);
  }
  else if (hashCode == REPORT_GENERATION_LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::REPORT_GENERATION_LIMIT_EXCEEDED), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace IAMErrorMapper
} // namespace IAM
} // namespace Aws
