/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/kms/KMSErrors.h>

using namespace Aws::Client;
using namespace Aws::KMS;
using namespace Aws::Utils;

static const int DEPENDENCY_TIMEOUT_HASH = HashingUtils::HashString("DependencyTimeout");
static const int INVALID_ALIAS_NAME_HASH = HashingUtils::HashString("InvalidAliasName");
static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("UnsupportedOperation");
static const int DISABLED_HASH = HashingUtils::HashString("Disabled");
static const int MALFORMED_POLICY_DOCUMENT_HASH = HashingUtils::HashString("MalformedPolicyDocument");
static const int NOT_FOUND_HASH = HashingUtils::HashString("NotFound");
static const int INVALID_ARN_HASH = HashingUtils::HashString("InvalidArn");
static const int INVALID_CIPHERTEXT_HASH = HashingUtils::HashString("InvalidCiphertext");
static const int LIMIT_EXCEEDED_HASH = HashingUtils::HashString("LimitExceeded");
static const int INVALID_GRANT_TOKEN_HASH = HashingUtils::HashString("InvalidGrantToken");
static const int INVALID_MARKER_HASH = HashingUtils::HashString("InvalidMarker");
static const int INVALID_GRANT_ID_HASH = HashingUtils::HashString("InvalidGrantId");
static const int KEY_UNAVAILABLE_HASH = HashingUtils::HashString("KeyUnavailable");
static const int K_M_S_INVALID_STATE_HASH = HashingUtils::HashString("KMSInvalidStateException");
static const int K_M_S_INTERNAL_HASH = HashingUtils::HashString("KMSInternal");
static const int ALREADY_EXISTS_HASH = HashingUtils::HashString("AlreadyExists");
static const int INVALID_KEY_USAGE_HASH = HashingUtils::HashString("InvalidKeyUsage");

namespace Aws
{
namespace KMS
{
namespace KMSErrorMapper
{

AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == DEPENDENCY_TIMEOUT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::DEPENDENCY_TIMEOUT), true);
  }
  else if (hashCode == INVALID_ALIAS_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::INVALID_ALIAS_NAME), false);
  }
  else if (hashCode == UNSUPPORTED_OPERATION_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::UNSUPPORTED_OPERATION), false);
  }
  else if (hashCode == DISABLED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::DISABLED), false);
  }
  else if (hashCode == MALFORMED_POLICY_DOCUMENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::MALFORMED_POLICY_DOCUMENT), false);
  }
  else if (hashCode == NOT_FOUND_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::NOT_FOUND), false);
  }
  else if (hashCode == INVALID_ARN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::INVALID_ARN), false);
  }
  else if (hashCode == INVALID_CIPHERTEXT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::INVALID_CIPHERTEXT), false);
  }
  else if (hashCode == LIMIT_EXCEEDED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::LIMIT_EXCEEDED), false);
  }
  else if (hashCode == INVALID_GRANT_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::INVALID_GRANT_TOKEN), false);
  }
  else if (hashCode == INVALID_MARKER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::INVALID_MARKER), false);
  }
  else if (hashCode == INVALID_GRANT_ID_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::INVALID_GRANT_ID), false);
  }
  else if (hashCode == KEY_UNAVAILABLE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::KEY_UNAVAILABLE), true);
  }
  else if (hashCode == K_M_S_INVALID_STATE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::K_M_S_INVALID_STATE), false);
  }
  else if (hashCode == K_M_S_INTERNAL_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::K_M_S_INTERNAL), true);
  }
  else if (hashCode == ALREADY_EXISTS_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::ALREADY_EXISTS), false);
  }
  else if (hashCode == INVALID_KEY_USAGE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(KMSErrors::INVALID_KEY_USAGE), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace KMSErrorMapper
} // namespace KMS
} // namespace Aws
