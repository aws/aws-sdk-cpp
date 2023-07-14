/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sso-oidc/SSOOIDCErrors.h>
#include <aws/sso-oidc/model/InvalidGrantException.h>
#include <aws/sso-oidc/model/InvalidScopeException.h>
#include <aws/sso-oidc/model/InternalServerException.h>
#include <aws/sso-oidc/model/AuthorizationPendingException.h>
#include <aws/sso-oidc/model/UnsupportedGrantTypeException.h>
#include <aws/sso-oidc/model/AccessDeniedException.h>
#include <aws/sso-oidc/model/ExpiredTokenException.h>
#include <aws/sso-oidc/model/SlowDownException.h>
#include <aws/sso-oidc/model/UnauthorizedClientException.h>
#include <aws/sso-oidc/model/InvalidClientException.h>
#include <aws/sso-oidc/model/InvalidClientMetadataException.h>
#include <aws/sso-oidc/model/InvalidRequestException.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::SSOOIDC;
using namespace Aws::SSOOIDC::Model;

namespace Aws
{
namespace SSOOIDC
{
template<> AWS_SSOOIDC_API InvalidGrantException SSOOIDCError::GetModeledError()
{
  assert(this->GetErrorType() == SSOOIDCErrors::INVALID_GRANT);
  return InvalidGrantException(this->GetJsonPayload().View());
}

template<> AWS_SSOOIDC_API InvalidScopeException SSOOIDCError::GetModeledError()
{
  assert(this->GetErrorType() == SSOOIDCErrors::INVALID_SCOPE);
  return InvalidScopeException(this->GetJsonPayload().View());
}

template<> AWS_SSOOIDC_API InternalServerException SSOOIDCError::GetModeledError()
{
  assert(this->GetErrorType() == SSOOIDCErrors::INTERNAL_SERVER);
  return InternalServerException(this->GetJsonPayload().View());
}

template<> AWS_SSOOIDC_API AuthorizationPendingException SSOOIDCError::GetModeledError()
{
  assert(this->GetErrorType() == SSOOIDCErrors::AUTHORIZATION_PENDING);
  return AuthorizationPendingException(this->GetJsonPayload().View());
}

template<> AWS_SSOOIDC_API UnsupportedGrantTypeException SSOOIDCError::GetModeledError()
{
  assert(this->GetErrorType() == SSOOIDCErrors::UNSUPPORTED_GRANT_TYPE);
  return UnsupportedGrantTypeException(this->GetJsonPayload().View());
}

template<> AWS_SSOOIDC_API AccessDeniedException SSOOIDCError::GetModeledError()
{
  assert(this->GetErrorType() == SSOOIDCErrors::ACCESS_DENIED);
  return AccessDeniedException(this->GetJsonPayload().View());
}

template<> AWS_SSOOIDC_API ExpiredTokenException SSOOIDCError::GetModeledError()
{
  assert(this->GetErrorType() == SSOOIDCErrors::EXPIRED_TOKEN);
  return ExpiredTokenException(this->GetJsonPayload().View());
}

template<> AWS_SSOOIDC_API SlowDownException SSOOIDCError::GetModeledError()
{
  assert(this->GetErrorType() == SSOOIDCErrors::SLOW_DOWN);
  return SlowDownException(this->GetJsonPayload().View());
}

template<> AWS_SSOOIDC_API UnauthorizedClientException SSOOIDCError::GetModeledError()
{
  assert(this->GetErrorType() == SSOOIDCErrors::UNAUTHORIZED_CLIENT);
  return UnauthorizedClientException(this->GetJsonPayload().View());
}

template<> AWS_SSOOIDC_API InvalidClientException SSOOIDCError::GetModeledError()
{
  assert(this->GetErrorType() == SSOOIDCErrors::INVALID_CLIENT);
  return InvalidClientException(this->GetJsonPayload().View());
}

template<> AWS_SSOOIDC_API InvalidClientMetadataException SSOOIDCError::GetModeledError()
{
  assert(this->GetErrorType() == SSOOIDCErrors::INVALID_CLIENT_METADATA);
  return InvalidClientMetadataException(this->GetJsonPayload().View());
}

template<> AWS_SSOOIDC_API InvalidRequestException SSOOIDCError::GetModeledError()
{
  assert(this->GetErrorType() == SSOOIDCErrors::INVALID_REQUEST);
  return InvalidRequestException(this->GetJsonPayload().View());
}

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
