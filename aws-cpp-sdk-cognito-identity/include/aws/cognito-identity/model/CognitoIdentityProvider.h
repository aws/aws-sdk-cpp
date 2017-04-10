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
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoIdentity
{
namespace Model
{

  /**
   * <p>A provider representing an Amazon Cognito Identity User Pool and its client
   * ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/CognitoIdentityProvider">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITY_API CognitoIdentityProvider
  {
  public:
    CognitoIdentityProvider();
    CognitoIdentityProvider(const Aws::Utils::Json::JsonValue& jsonValue);
    CognitoIdentityProvider& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The provider name for an Amazon Cognito Identity User Pool. For example,
     * <code>cognito-idp.us-east-1.amazonaws.com/us-east-1_123456789</code>.</p>
     */
    inline const Aws::String& GetProviderName() const{ return m_providerName; }

    /**
     * <p>The provider name for an Amazon Cognito Identity User Pool. For example,
     * <code>cognito-idp.us-east-1.amazonaws.com/us-east-1_123456789</code>.</p>
     */
    inline void SetProviderName(const Aws::String& value) { m_providerNameHasBeenSet = true; m_providerName = value; }

    /**
     * <p>The provider name for an Amazon Cognito Identity User Pool. For example,
     * <code>cognito-idp.us-east-1.amazonaws.com/us-east-1_123456789</code>.</p>
     */
    inline void SetProviderName(Aws::String&& value) { m_providerNameHasBeenSet = true; m_providerName = std::move(value); }

    /**
     * <p>The provider name for an Amazon Cognito Identity User Pool. For example,
     * <code>cognito-idp.us-east-1.amazonaws.com/us-east-1_123456789</code>.</p>
     */
    inline void SetProviderName(const char* value) { m_providerNameHasBeenSet = true; m_providerName.assign(value); }

    /**
     * <p>The provider name for an Amazon Cognito Identity User Pool. For example,
     * <code>cognito-idp.us-east-1.amazonaws.com/us-east-1_123456789</code>.</p>
     */
    inline CognitoIdentityProvider& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}

    /**
     * <p>The provider name for an Amazon Cognito Identity User Pool. For example,
     * <code>cognito-idp.us-east-1.amazonaws.com/us-east-1_123456789</code>.</p>
     */
    inline CognitoIdentityProvider& WithProviderName(Aws::String&& value) { SetProviderName(std::move(value)); return *this;}

    /**
     * <p>The provider name for an Amazon Cognito Identity User Pool. For example,
     * <code>cognito-idp.us-east-1.amazonaws.com/us-east-1_123456789</code>.</p>
     */
    inline CognitoIdentityProvider& WithProviderName(const char* value) { SetProviderName(value); return *this;}

    /**
     * <p>The client ID for the Amazon Cognito Identity User Pool.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The client ID for the Amazon Cognito Identity User Pool.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The client ID for the Amazon Cognito Identity User Pool.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The client ID for the Amazon Cognito Identity User Pool.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The client ID for the Amazon Cognito Identity User Pool.</p>
     */
    inline CognitoIdentityProvider& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The client ID for the Amazon Cognito Identity User Pool.</p>
     */
    inline CognitoIdentityProvider& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The client ID for the Amazon Cognito Identity User Pool.</p>
     */
    inline CognitoIdentityProvider& WithClientId(const char* value) { SetClientId(value); return *this;}

    /**
     * <p>TRUE if server-side token validation is enabled for the identity provider’s
     * token.</p>
     */
    inline bool GetServerSideTokenCheck() const{ return m_serverSideTokenCheck; }

    /**
     * <p>TRUE if server-side token validation is enabled for the identity provider’s
     * token.</p>
     */
    inline void SetServerSideTokenCheck(bool value) { m_serverSideTokenCheckHasBeenSet = true; m_serverSideTokenCheck = value; }

    /**
     * <p>TRUE if server-side token validation is enabled for the identity provider’s
     * token.</p>
     */
    inline CognitoIdentityProvider& WithServerSideTokenCheck(bool value) { SetServerSideTokenCheck(value); return *this;}

  private:
    Aws::String m_providerName;
    bool m_providerNameHasBeenSet;
    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;
    bool m_serverSideTokenCheck;
    bool m_serverSideTokenCheckHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
