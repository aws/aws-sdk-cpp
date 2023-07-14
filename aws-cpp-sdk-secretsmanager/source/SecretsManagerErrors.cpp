/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/secretsmanager/SecretsManagerErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SecretsManager;

namespace Aws
{
namespace SecretsManager
{
namespace SecretsManagerErrorMapper
{

static const int RESOURCE_EXISTS_HASH = HashingUtils::HashString("ResourceExistsException");
static const int MALFORMED_POLICY_DOCUMENT_HASH = HashingUtils::HashString("MalformedPolicyDocumentException");
static const int INTERNAL_SERVICE_HASH = HashingUtils::HashString("InternalServiceError");
static const int INVALID_PARAMETER_HASH = HashingUtils::HashString("InvalidParameterException");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceededException");
static const int DECRYPTION_FAILURE_HASH = HashingUtils::HashString("DecryptionFailure");
static const int PUBLIC_POLICY_HASH = HashingUtils::HashString("PublicPolicyException");
static const int PRECONDITION_NOT_MET_HASH = HashingUtils::HashString("PreconditionNotMetException");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("InvalidNextTokenException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");
static const int ENCRYPTION_FAILURE_HASH = HashingUtils::HashString("EncryptionFailure");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == RESOURCE_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecretsManagerErrors::RESOURCE_EXISTS), false);
  }
  else if (hashCode == MALFORMED_POLICY_DOCUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecretsManagerErrors::MALFORMED_POLICY_DOCUMENT), false);
  }
  else if (hashCode == INTERNAL_SERVICE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecretsManagerErrors::INTERNAL_SERVICE), false);
  }
  else if (hashCode == INVALID_PARAMETER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecretsManagerErrors::INVALID_PARAMETER), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecretsManagerErrors::LIMIT_EXCEEDED), true);
  }
  else if (hashCode == DECRYPTION_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecretsManagerErrors::DECRYPTION_FAILURE), false);
  }
  else if (hashCode == PUBLIC_POLICY_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecretsManagerErrors::PUBLIC_POLICY), false);
  }
  else if (hashCode == PRECONDITION_NOT_MET_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecretsManagerErrors::PRECONDITION_NOT_MET), false);
  }
  else if (hashCode == INVALID_NEXT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecretsManagerErrors::INVALID_NEXT_TOKEN), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecretsManagerErrors::INVALID_REQUEST), false);
  }
  else if (hashCode == ENCRYPTION_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecretsManagerErrors::ENCRYPTION_FAILURE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SecretsManagerErrorMapper
} // namespace SecretsManager
} // namespace Aws
