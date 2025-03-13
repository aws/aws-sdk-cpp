/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/IdentityProviderType.h>
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
  class GetIdentityProviderByIdentifierResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API GetIdentityProviderByIdentifierResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API GetIdentityProviderByIdentifierResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API GetIdentityProviderByIdentifierResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configuration of the IdP in your user pool. Includes additional
     * identifiers, the IdP name and type, and trust-relationship details like the
     * issuer URL.</p>
     */
    inline const IdentityProviderType& GetIdentityProvider() const { return m_identityProvider; }
    template<typename IdentityProviderT = IdentityProviderType>
    void SetIdentityProvider(IdentityProviderT&& value) { m_identityProviderHasBeenSet = true; m_identityProvider = std::forward<IdentityProviderT>(value); }
    template<typename IdentityProviderT = IdentityProviderType>
    GetIdentityProviderByIdentifierResult& WithIdentityProvider(IdentityProviderT&& value) { SetIdentityProvider(std::forward<IdentityProviderT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIdentityProviderByIdentifierResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    IdentityProviderType m_identityProvider;
    bool m_identityProviderHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
