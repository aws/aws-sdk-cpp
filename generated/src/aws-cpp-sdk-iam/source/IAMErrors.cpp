/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/iam/IAMErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::IAM;

namespace Aws
{
namespace IAM
{
namespace IAMErrorMapper
{

static constexpr uint32_t ENTITY_ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("EntityAlreadyExists");
static constexpr uint32_t DELETE_CONFLICT_HASH = ConstExprHashingUtils::HashString("DeleteConflict");
static constexpr uint32_t LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("LimitExceeded");
static constexpr uint32_t CONCURRENT_MODIFICATION_HASH = ConstExprHashingUtils::HashString("ConcurrentModification");
static constexpr uint32_t INVALID_AUTHENTICATION_CODE_HASH = ConstExprHashingUtils::HashString("InvalidAuthenticationCode");
static constexpr uint32_t INVALID_USER_TYPE_HASH = ConstExprHashingUtils::HashString("InvalidUserType");
static constexpr uint32_t MALFORMED_POLICY_DOCUMENT_HASH = ConstExprHashingUtils::HashString("MalformedPolicyDocument");
static constexpr uint32_t SERVICE_NOT_SUPPORTED_HASH = ConstExprHashingUtils::HashString("NotSupportedService");
static constexpr uint32_t UNMODIFIABLE_ENTITY_HASH = ConstExprHashingUtils::HashString("UnmodifiableEntity");
static constexpr uint32_t NO_SUCH_ENTITY_HASH = ConstExprHashingUtils::HashString("NoSuchEntity");
static constexpr uint32_t DUPLICATE_S_S_H_PUBLIC_KEY_HASH = ConstExprHashingUtils::HashString("DuplicateSSHPublicKey");
static constexpr uint32_t INVALID_CERTIFICATE_HASH = ConstExprHashingUtils::HashString("InvalidCertificate");
static constexpr uint32_t INVALID_PUBLIC_KEY_HASH = ConstExprHashingUtils::HashString("InvalidPublicKey");
static constexpr uint32_t POLICY_NOT_ATTACHABLE_HASH = ConstExprHashingUtils::HashString("PolicyNotAttachable");
static constexpr uint32_t DUPLICATE_CERTIFICATE_HASH = ConstExprHashingUtils::HashString("DuplicateCertificate");
static constexpr uint32_t PASSWORD_POLICY_VIOLATION_HASH = ConstExprHashingUtils::HashString("PasswordPolicyViolation");
static constexpr uint32_t UNRECOGNIZED_PUBLIC_KEY_ENCODING_HASH = ConstExprHashingUtils::HashString("UnrecognizedPublicKeyEncoding");
static constexpr uint32_t INVALID_INPUT_HASH = ConstExprHashingUtils::HashString("InvalidInput");
static constexpr uint32_t CREDENTIAL_REPORT_NOT_READY_HASH = ConstExprHashingUtils::HashString("ReportInProgress");
static constexpr uint32_t CREDENTIAL_REPORT_NOT_PRESENT_HASH = ConstExprHashingUtils::HashString("ReportNotPresent");
static constexpr uint32_t CREDENTIAL_REPORT_EXPIRED_HASH = ConstExprHashingUtils::HashString("ReportExpired");
static constexpr uint32_t KEY_PAIR_MISMATCH_HASH = ConstExprHashingUtils::HashString("KeyPairMismatch");
static constexpr uint32_t MALFORMED_CERTIFICATE_HASH = ConstExprHashingUtils::HashString("MalformedCertificate");
static constexpr uint32_t SERVICE_FAILURE_HASH = ConstExprHashingUtils::HashString("ServiceFailure");
static constexpr uint32_t POLICY_EVALUATION_HASH = ConstExprHashingUtils::HashString("PolicyEvaluation");
static constexpr uint32_t ENTITY_TEMPORARILY_UNMODIFIABLE_HASH = ConstExprHashingUtils::HashString("EntityTemporarilyUnmodifiable");
static constexpr uint32_t REPORT_GENERATION_LIMIT_EXCEEDED_HASH = ConstExprHashingUtils::HashString("ReportGenerationLimitExceeded");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
    return AWSError<CoreErrors>(static_cast<CoreErrors>(IAMErrors::LIMIT_EXCEEDED), true);
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
