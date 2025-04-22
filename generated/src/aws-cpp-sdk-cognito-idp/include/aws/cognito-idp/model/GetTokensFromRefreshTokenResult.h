/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/AuthenticationResultType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{
  class GetTokensFromRefreshTokenResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API GetTokensFromRefreshTokenResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API GetTokensFromRefreshTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API GetTokensFromRefreshTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const AuthenticationResultType& GetAuthenticationResult() const { return m_authenticationResult; }
    template<typename AuthenticationResultT = AuthenticationResultType>
    void SetAuthenticationResult(AuthenticationResultT&& value) { m_authenticationResultHasBeenSet = true; m_authenticationResult = std::forward<AuthenticationResultT>(value); }
    template<typename AuthenticationResultT = AuthenticationResultType>
    GetTokensFromRefreshTokenResult& WithAuthenticationResult(AuthenticationResultT&& value) { SetAuthenticationResult(std::forward<AuthenticationResultT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTokensFromRefreshTokenResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AuthenticationResultType m_authenticationResult;
    bool m_authenticationResultHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
