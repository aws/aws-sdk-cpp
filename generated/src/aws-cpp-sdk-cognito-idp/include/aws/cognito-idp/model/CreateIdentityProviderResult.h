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
  class CreateIdentityProviderResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API CreateIdentityProviderResult();
    AWS_COGNITOIDENTITYPROVIDER_API CreateIdentityProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API CreateIdentityProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The newly created IdP object.</p>
     */
    inline const IdentityProviderType& GetIdentityProvider() const{ return m_identityProvider; }
    inline void SetIdentityProvider(const IdentityProviderType& value) { m_identityProvider = value; }
    inline void SetIdentityProvider(IdentityProviderType&& value) { m_identityProvider = std::move(value); }
    inline CreateIdentityProviderResult& WithIdentityProvider(const IdentityProviderType& value) { SetIdentityProvider(value); return *this;}
    inline CreateIdentityProviderResult& WithIdentityProvider(IdentityProviderType&& value) { SetIdentityProvider(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateIdentityProviderResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateIdentityProviderResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateIdentityProviderResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    IdentityProviderType m_identityProvider;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
