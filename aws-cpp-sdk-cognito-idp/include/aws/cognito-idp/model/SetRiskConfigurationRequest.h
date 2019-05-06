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

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/CompromisedCredentialsRiskConfigurationType.h>
#include <aws/cognito-idp/model/AccountTakeoverRiskConfigurationType.h>
#include <aws/cognito-idp/model/RiskExceptionConfigurationType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   */
  class AWS_COGNITOIDENTITYPROVIDER_API SetRiskConfigurationRequest : public CognitoIdentityProviderRequest
  {
  public:
    SetRiskConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetRiskConfiguration"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The user pool ID. </p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID. </p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The user pool ID. </p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID. </p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The user pool ID. </p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID. </p>
     */
    inline SetRiskConfigurationRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID. </p>
     */
    inline SetRiskConfigurationRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID. </p>
     */
    inline SetRiskConfigurationRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The app client ID. If <code>ClientId</code> is null, then the risk
     * configuration is mapped to <code>userPoolId</code>. When the client ID is null,
     * the same risk configuration is applied to all the clients in the userPool.</p>
     * <p>Otherwise, <code>ClientId</code> is mapped to the client. When the client ID
     * is not null, the user pool configuration is overridden and the risk
     * configuration for the client is used instead.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The app client ID. If <code>ClientId</code> is null, then the risk
     * configuration is mapped to <code>userPoolId</code>. When the client ID is null,
     * the same risk configuration is applied to all the clients in the userPool.</p>
     * <p>Otherwise, <code>ClientId</code> is mapped to the client. When the client ID
     * is not null, the user pool configuration is overridden and the risk
     * configuration for the client is used instead.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>The app client ID. If <code>ClientId</code> is null, then the risk
     * configuration is mapped to <code>userPoolId</code>. When the client ID is null,
     * the same risk configuration is applied to all the clients in the userPool.</p>
     * <p>Otherwise, <code>ClientId</code> is mapped to the client. When the client ID
     * is not null, the user pool configuration is overridden and the risk
     * configuration for the client is used instead.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The app client ID. If <code>ClientId</code> is null, then the risk
     * configuration is mapped to <code>userPoolId</code>. When the client ID is null,
     * the same risk configuration is applied to all the clients in the userPool.</p>
     * <p>Otherwise, <code>ClientId</code> is mapped to the client. When the client ID
     * is not null, the user pool configuration is overridden and the risk
     * configuration for the client is used instead.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The app client ID. If <code>ClientId</code> is null, then the risk
     * configuration is mapped to <code>userPoolId</code>. When the client ID is null,
     * the same risk configuration is applied to all the clients in the userPool.</p>
     * <p>Otherwise, <code>ClientId</code> is mapped to the client. When the client ID
     * is not null, the user pool configuration is overridden and the risk
     * configuration for the client is used instead.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The app client ID. If <code>ClientId</code> is null, then the risk
     * configuration is mapped to <code>userPoolId</code>. When the client ID is null,
     * the same risk configuration is applied to all the clients in the userPool.</p>
     * <p>Otherwise, <code>ClientId</code> is mapped to the client. When the client ID
     * is not null, the user pool configuration is overridden and the risk
     * configuration for the client is used instead.</p>
     */
    inline SetRiskConfigurationRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The app client ID. If <code>ClientId</code> is null, then the risk
     * configuration is mapped to <code>userPoolId</code>. When the client ID is null,
     * the same risk configuration is applied to all the clients in the userPool.</p>
     * <p>Otherwise, <code>ClientId</code> is mapped to the client. When the client ID
     * is not null, the user pool configuration is overridden and the risk
     * configuration for the client is used instead.</p>
     */
    inline SetRiskConfigurationRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The app client ID. If <code>ClientId</code> is null, then the risk
     * configuration is mapped to <code>userPoolId</code>. When the client ID is null,
     * the same risk configuration is applied to all the clients in the userPool.</p>
     * <p>Otherwise, <code>ClientId</code> is mapped to the client. When the client ID
     * is not null, the user pool configuration is overridden and the risk
     * configuration for the client is used instead.</p>
     */
    inline SetRiskConfigurationRequest& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>The compromised credentials risk configuration.</p>
     */
    inline const CompromisedCredentialsRiskConfigurationType& GetCompromisedCredentialsRiskConfiguration() const{ return m_compromisedCredentialsRiskConfiguration; }

    /**
     * <p>The compromised credentials risk configuration.</p>
     */
    inline bool CompromisedCredentialsRiskConfigurationHasBeenSet() const { return m_compromisedCredentialsRiskConfigurationHasBeenSet; }

    /**
     * <p>The compromised credentials risk configuration.</p>
     */
    inline void SetCompromisedCredentialsRiskConfiguration(const CompromisedCredentialsRiskConfigurationType& value) { m_compromisedCredentialsRiskConfigurationHasBeenSet = true; m_compromisedCredentialsRiskConfiguration = value; }

    /**
     * <p>The compromised credentials risk configuration.</p>
     */
    inline void SetCompromisedCredentialsRiskConfiguration(CompromisedCredentialsRiskConfigurationType&& value) { m_compromisedCredentialsRiskConfigurationHasBeenSet = true; m_compromisedCredentialsRiskConfiguration = std::move(value); }

    /**
     * <p>The compromised credentials risk configuration.</p>
     */
    inline SetRiskConfigurationRequest& WithCompromisedCredentialsRiskConfiguration(const CompromisedCredentialsRiskConfigurationType& value) { SetCompromisedCredentialsRiskConfiguration(value); return *this;}

    /**
     * <p>The compromised credentials risk configuration.</p>
     */
    inline SetRiskConfigurationRequest& WithCompromisedCredentialsRiskConfiguration(CompromisedCredentialsRiskConfigurationType&& value) { SetCompromisedCredentialsRiskConfiguration(std::move(value)); return *this;}


    /**
     * <p>The account takeover risk configuration.</p>
     */
    inline const AccountTakeoverRiskConfigurationType& GetAccountTakeoverRiskConfiguration() const{ return m_accountTakeoverRiskConfiguration; }

    /**
     * <p>The account takeover risk configuration.</p>
     */
    inline bool AccountTakeoverRiskConfigurationHasBeenSet() const { return m_accountTakeoverRiskConfigurationHasBeenSet; }

    /**
     * <p>The account takeover risk configuration.</p>
     */
    inline void SetAccountTakeoverRiskConfiguration(const AccountTakeoverRiskConfigurationType& value) { m_accountTakeoverRiskConfigurationHasBeenSet = true; m_accountTakeoverRiskConfiguration = value; }

    /**
     * <p>The account takeover risk configuration.</p>
     */
    inline void SetAccountTakeoverRiskConfiguration(AccountTakeoverRiskConfigurationType&& value) { m_accountTakeoverRiskConfigurationHasBeenSet = true; m_accountTakeoverRiskConfiguration = std::move(value); }

    /**
     * <p>The account takeover risk configuration.</p>
     */
    inline SetRiskConfigurationRequest& WithAccountTakeoverRiskConfiguration(const AccountTakeoverRiskConfigurationType& value) { SetAccountTakeoverRiskConfiguration(value); return *this;}

    /**
     * <p>The account takeover risk configuration.</p>
     */
    inline SetRiskConfigurationRequest& WithAccountTakeoverRiskConfiguration(AccountTakeoverRiskConfigurationType&& value) { SetAccountTakeoverRiskConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration to override the risk decision.</p>
     */
    inline const RiskExceptionConfigurationType& GetRiskExceptionConfiguration() const{ return m_riskExceptionConfiguration; }

    /**
     * <p>The configuration to override the risk decision.</p>
     */
    inline bool RiskExceptionConfigurationHasBeenSet() const { return m_riskExceptionConfigurationHasBeenSet; }

    /**
     * <p>The configuration to override the risk decision.</p>
     */
    inline void SetRiskExceptionConfiguration(const RiskExceptionConfigurationType& value) { m_riskExceptionConfigurationHasBeenSet = true; m_riskExceptionConfiguration = value; }

    /**
     * <p>The configuration to override the risk decision.</p>
     */
    inline void SetRiskExceptionConfiguration(RiskExceptionConfigurationType&& value) { m_riskExceptionConfigurationHasBeenSet = true; m_riskExceptionConfiguration = std::move(value); }

    /**
     * <p>The configuration to override the risk decision.</p>
     */
    inline SetRiskConfigurationRequest& WithRiskExceptionConfiguration(const RiskExceptionConfigurationType& value) { SetRiskExceptionConfiguration(value); return *this;}

    /**
     * <p>The configuration to override the risk decision.</p>
     */
    inline SetRiskConfigurationRequest& WithRiskExceptionConfiguration(RiskExceptionConfigurationType&& value) { SetRiskExceptionConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;

    CompromisedCredentialsRiskConfigurationType m_compromisedCredentialsRiskConfiguration;
    bool m_compromisedCredentialsRiskConfigurationHasBeenSet;

    AccountTakeoverRiskConfigurationType m_accountTakeoverRiskConfiguration;
    bool m_accountTakeoverRiskConfigurationHasBeenSet;

    RiskExceptionConfigurationType m_riskExceptionConfiguration;
    bool m_riskExceptionConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
