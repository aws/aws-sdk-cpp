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
#include <aws/sso-oidc/SSOOIDCErrors.h>

using namespace Aws::Client;
using namespace Aws::SSOOIDC;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOOIDC
{
namespace SSOOIDCErrorMapper
{

static const int INVALID_GRANT_HASH = HashingUtils::HashString("InvalidGrantException");
static const int INVALID_SCOPE_HASH = HashingUtils::HashString("InvalidScopeException");
static const int INTERNAL_SERVER_HASH = HashingUtils::HashString("InternalServerException");
static const int AUTHORIZATION_PENDING_HASH = HashingUtils::HashString("AuthorizationPendingException");
static const int UNSUPPORTED_GRANT_TYPE_HASH = HashingUtils::HashString("UnsupportedGrantTypeException");
static const int EXPIRED_TOKEN_HASH = HashingUtils::HashString("ExpiredTokenException");
static const int UNAUTHORIZED_CLIENT_HASH = HashingUtils::HashString("UnauthorizedClientException");
static const int INVALID_CLIENT_HASH = HashingUtils::HashString("InvalidClientException");
static const int INVALID_CLIENT_METADATA_HASH = HashingUtils::HashString("InvalidClientMetadataException");
static const int INVALID_REQUEST_HASH = HashingUtils::HashString("InvalidRequestException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INVALID_GRANT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSOOIDCErrors::INVALID_GRANT), false);
  }
  else if (hashCode == INVALID_SCOPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSOOIDCErrors::INVALID_SCOPE), false);
  }
  else if (hashCode == INTERNAL_SERVER_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSOOIDCErrors::INTERNAL_SERVER), false);
  }
  else if (hashCode == AUTHORIZATION_PENDING_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSOOIDCErrors::AUTHORIZATION_PENDING), false);
  }
  else if (hashCode == UNSUPPORTED_GRANT_TYPE_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSOOIDCErrors::UNSUPPORTED_GRANT_TYPE), false);
  }
  else if (hashCode == EXPIRED_TOKEN_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSOOIDCErrors::EXPIRED_TOKEN), false);
  }
  else if (hashCode == UNAUTHORIZED_CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSOOIDCErrors::UNAUTHORIZED_CLIENT), false);
  }
  else if (hashCode == INVALID_CLIENT_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSOOIDCErrors::INVALID_CLIENT), false);
  }
  else if (hashCode == INVALID_CLIENT_METADATA_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSOOIDCErrors::INVALID_CLIENT_METADATA), false);
  }
  else if (hashCode == INVALID_REQUEST_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(SSOOIDCErrors::INVALID_REQUEST), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace SSOOIDCErrorMapper
} // namespace SSOOIDC
} // namespace Aws
