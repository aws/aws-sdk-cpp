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
#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/cognito-idp/model/AuthFlowType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Initiates the authentication request.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API InitiateAuthRequest : public CognitoIdentityProviderRequest
  {
  public:
    InitiateAuthRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The authentication flow.</p>
     */
    inline const AuthFlowType& GetAuthFlow() const{ return m_authFlow; }

    /**
     * <p>The authentication flow.</p>
     */
    inline void SetAuthFlow(const AuthFlowType& value) { m_authFlowHasBeenSet = true; m_authFlow = value; }

    /**
     * <p>The authentication flow.</p>
     */
    inline void SetAuthFlow(AuthFlowType&& value) { m_authFlowHasBeenSet = true; m_authFlow = value; }

    /**
     * <p>The authentication flow.</p>
     */
    inline InitiateAuthRequest& WithAuthFlow(const AuthFlowType& value) { SetAuthFlow(value); return *this;}

    /**
     * <p>The authentication flow.</p>
     */
    inline InitiateAuthRequest& WithAuthFlow(AuthFlowType&& value) { SetAuthFlow(value); return *this;}

    /**
     * <p>The authentication parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAuthParameters() const{ return m_authParameters; }

    /**
     * <p>The authentication parameters.</p>
     */
    inline void SetAuthParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_authParametersHasBeenSet = true; m_authParameters = value; }

    /**
     * <p>The authentication parameters.</p>
     */
    inline void SetAuthParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_authParametersHasBeenSet = true; m_authParameters = value; }

    /**
     * <p>The authentication parameters.</p>
     */
    inline InitiateAuthRequest& WithAuthParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetAuthParameters(value); return *this;}

    /**
     * <p>The authentication parameters.</p>
     */
    inline InitiateAuthRequest& WithAuthParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetAuthParameters(value); return *this;}

    /**
     * <p>The authentication parameters.</p>
     */
    inline InitiateAuthRequest& AddAuthParameters(const Aws::String& key, const Aws::String& value) { m_authParametersHasBeenSet = true; m_authParameters[key] = value; return *this; }

    /**
     * <p>The authentication parameters.</p>
     */
    inline InitiateAuthRequest& AddAuthParameters(Aws::String&& key, const Aws::String& value) { m_authParametersHasBeenSet = true; m_authParameters[key] = value; return *this; }

    /**
     * <p>The authentication parameters.</p>
     */
    inline InitiateAuthRequest& AddAuthParameters(const Aws::String& key, Aws::String&& value) { m_authParametersHasBeenSet = true; m_authParameters[key] = value; return *this; }

    /**
     * <p>The authentication parameters.</p>
     */
    inline InitiateAuthRequest& AddAuthParameters(Aws::String&& key, Aws::String&& value) { m_authParametersHasBeenSet = true; m_authParameters[key] = value; return *this; }

    /**
     * <p>The authentication parameters.</p>
     */
    inline InitiateAuthRequest& AddAuthParameters(const char* key, Aws::String&& value) { m_authParametersHasBeenSet = true; m_authParameters[key] = value; return *this; }

    /**
     * <p>The authentication parameters.</p>
     */
    inline InitiateAuthRequest& AddAuthParameters(Aws::String&& key, const char* value) { m_authParametersHasBeenSet = true; m_authParameters[key] = value; return *this; }

    /**
     * <p>The authentication parameters.</p>
     */
    inline InitiateAuthRequest& AddAuthParameters(const char* key, const char* value) { m_authParametersHasBeenSet = true; m_authParameters[key] = value; return *this; }

    /**
     * <p>The client app's metadata.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetClientMetadata() const{ return m_clientMetadata; }

    /**
     * <p>The client app's metadata.</p>
     */
    inline void SetClientMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata = value; }

    /**
     * <p>The client app's metadata.</p>
     */
    inline void SetClientMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata = value; }

    /**
     * <p>The client app's metadata.</p>
     */
    inline InitiateAuthRequest& WithClientMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetClientMetadata(value); return *this;}

    /**
     * <p>The client app's metadata.</p>
     */
    inline InitiateAuthRequest& WithClientMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetClientMetadata(value); return *this;}

    /**
     * <p>The client app's metadata.</p>
     */
    inline InitiateAuthRequest& AddClientMetadata(const Aws::String& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata[key] = value; return *this; }

    /**
     * <p>The client app's metadata.</p>
     */
    inline InitiateAuthRequest& AddClientMetadata(Aws::String&& key, const Aws::String& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata[key] = value; return *this; }

    /**
     * <p>The client app's metadata.</p>
     */
    inline InitiateAuthRequest& AddClientMetadata(const Aws::String& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata[key] = value; return *this; }

    /**
     * <p>The client app's metadata.</p>
     */
    inline InitiateAuthRequest& AddClientMetadata(Aws::String&& key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata[key] = value; return *this; }

    /**
     * <p>The client app's metadata.</p>
     */
    inline InitiateAuthRequest& AddClientMetadata(const char* key, Aws::String&& value) { m_clientMetadataHasBeenSet = true; m_clientMetadata[key] = value; return *this; }

    /**
     * <p>The client app's metadata.</p>
     */
    inline InitiateAuthRequest& AddClientMetadata(Aws::String&& key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata[key] = value; return *this; }

    /**
     * <p>The client app's metadata.</p>
     */
    inline InitiateAuthRequest& AddClientMetadata(const char* key, const char* value) { m_clientMetadataHasBeenSet = true; m_clientMetadata[key] = value; return *this; }

    /**
     * <p>The client ID.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The client ID.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The client ID.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The client ID.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The client ID.</p>
     */
    inline InitiateAuthRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The client ID.</p>
     */
    inline InitiateAuthRequest& WithClientId(Aws::String&& value) { SetClientId(value); return *this;}

    /**
     * <p>The client ID.</p>
     */
    inline InitiateAuthRequest& WithClientId(const char* value) { SetClientId(value); return *this;}

  private:
    AuthFlowType m_authFlow;
    bool m_authFlowHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_authParameters;
    bool m_authParametersHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_clientMetadata;
    bool m_clientMetadataHasBeenSet;
    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
