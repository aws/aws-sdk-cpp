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
#include <aws/secretsmanager/SecretsManagerErrors.h>

using namespace Aws::Client;
using namespace Aws::SecretsManager;
using namespace Aws::Utils;

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
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecretsManagerErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == DECRYPTION_FAILURE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SecretsManagerErrors::DECRYPTION_FAILURE), false);
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
