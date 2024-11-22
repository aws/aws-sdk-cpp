/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/WebAuthnCredentialDescription.h>
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
  class ListWebAuthnCredentialsResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ListWebAuthnCredentialsResult();
    AWS_COGNITOIDENTITYPROVIDER_API ListWebAuthnCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API ListWebAuthnCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of registered passkeys for a user.</p>
     */
    inline const Aws::Vector<WebAuthnCredentialDescription>& GetCredentials() const{ return m_credentials; }
    inline void SetCredentials(const Aws::Vector<WebAuthnCredentialDescription>& value) { m_credentials = value; }
    inline void SetCredentials(Aws::Vector<WebAuthnCredentialDescription>&& value) { m_credentials = std::move(value); }
    inline ListWebAuthnCredentialsResult& WithCredentials(const Aws::Vector<WebAuthnCredentialDescription>& value) { SetCredentials(value); return *this;}
    inline ListWebAuthnCredentialsResult& WithCredentials(Aws::Vector<WebAuthnCredentialDescription>&& value) { SetCredentials(std::move(value)); return *this;}
    inline ListWebAuthnCredentialsResult& AddCredentials(const WebAuthnCredentialDescription& value) { m_credentials.push_back(value); return *this; }
    inline ListWebAuthnCredentialsResult& AddCredentials(WebAuthnCredentialDescription&& value) { m_credentials.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An identifier that you can use in a later request to return the next set of
     * items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListWebAuthnCredentialsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListWebAuthnCredentialsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListWebAuthnCredentialsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListWebAuthnCredentialsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListWebAuthnCredentialsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListWebAuthnCredentialsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<WebAuthnCredentialDescription> m_credentials;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
