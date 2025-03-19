/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class SetRiskConfigurationRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API SetRiskConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetRiskConfiguration"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the user pool where you want to set a risk configuration. If you
     * include <code>UserPoolId</code> in your request, don't include
     * <code>ClientId</code>. When the client ID is null, the same risk configuration
     * is applied to all the clients in the userPool. When you include both
     * <code>ClientId</code> and <code>UserPoolId</code>, Amazon Cognito maps the
     * configuration to the app client only.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    SetRiskConfigurationRequest& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the app client where you want to set a risk configuration. If
     * <code>ClientId</code> is null, then the risk configuration is mapped to
     * <code>UserPoolId</code>. When the client ID is null, the same risk configuration
     * is applied to all the clients in the userPool.</p> <p>When you include a
     * <code>ClientId</code> parameter, Amazon Cognito maps the configuration to the
     * app client. When you include both <code>ClientId</code> and
     * <code>UserPoolId</code>, Amazon Cognito maps the configuration to the app client
     * only.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    SetRiskConfigurationRequest& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of automated reactions to detected compromised credentials.
     * Includes settings for blocking future sign-in requests and for the types of
     * password-submission events you want to monitor.</p>
     */
    inline const CompromisedCredentialsRiskConfigurationType& GetCompromisedCredentialsRiskConfiguration() const { return m_compromisedCredentialsRiskConfiguration; }
    inline bool CompromisedCredentialsRiskConfigurationHasBeenSet() const { return m_compromisedCredentialsRiskConfigurationHasBeenSet; }
    template<typename CompromisedCredentialsRiskConfigurationT = CompromisedCredentialsRiskConfigurationType>
    void SetCompromisedCredentialsRiskConfiguration(CompromisedCredentialsRiskConfigurationT&& value) { m_compromisedCredentialsRiskConfigurationHasBeenSet = true; m_compromisedCredentialsRiskConfiguration = std::forward<CompromisedCredentialsRiskConfigurationT>(value); }
    template<typename CompromisedCredentialsRiskConfigurationT = CompromisedCredentialsRiskConfigurationType>
    SetRiskConfigurationRequest& WithCompromisedCredentialsRiskConfiguration(CompromisedCredentialsRiskConfigurationT&& value) { SetCompromisedCredentialsRiskConfiguration(std::forward<CompromisedCredentialsRiskConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for automated responses and notification templates for adaptive
     * authentication with threat protection.</p>
     */
    inline const AccountTakeoverRiskConfigurationType& GetAccountTakeoverRiskConfiguration() const { return m_accountTakeoverRiskConfiguration; }
    inline bool AccountTakeoverRiskConfigurationHasBeenSet() const { return m_accountTakeoverRiskConfigurationHasBeenSet; }
    template<typename AccountTakeoverRiskConfigurationT = AccountTakeoverRiskConfigurationType>
    void SetAccountTakeoverRiskConfiguration(AccountTakeoverRiskConfigurationT&& value) { m_accountTakeoverRiskConfigurationHasBeenSet = true; m_accountTakeoverRiskConfiguration = std::forward<AccountTakeoverRiskConfigurationT>(value); }
    template<typename AccountTakeoverRiskConfigurationT = AccountTakeoverRiskConfigurationType>
    SetRiskConfigurationRequest& WithAccountTakeoverRiskConfiguration(AccountTakeoverRiskConfigurationT&& value) { SetAccountTakeoverRiskConfiguration(std::forward<AccountTakeoverRiskConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of IP-address overrides to threat protection. You can set up IP-address
     * always-block and always-allow lists.</p>
     */
    inline const RiskExceptionConfigurationType& GetRiskExceptionConfiguration() const { return m_riskExceptionConfiguration; }
    inline bool RiskExceptionConfigurationHasBeenSet() const { return m_riskExceptionConfigurationHasBeenSet; }
    template<typename RiskExceptionConfigurationT = RiskExceptionConfigurationType>
    void SetRiskExceptionConfiguration(RiskExceptionConfigurationT&& value) { m_riskExceptionConfigurationHasBeenSet = true; m_riskExceptionConfiguration = std::forward<RiskExceptionConfigurationT>(value); }
    template<typename RiskExceptionConfigurationT = RiskExceptionConfigurationType>
    SetRiskConfigurationRequest& WithRiskExceptionConfiguration(RiskExceptionConfigurationT&& value) { SetRiskExceptionConfiguration(std::forward<RiskExceptionConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    CompromisedCredentialsRiskConfigurationType m_compromisedCredentialsRiskConfiguration;
    bool m_compromisedCredentialsRiskConfigurationHasBeenSet = false;

    AccountTakeoverRiskConfigurationType m_accountTakeoverRiskConfiguration;
    bool m_accountTakeoverRiskConfigurationHasBeenSet = false;

    RiskExceptionConfigurationType m_riskExceptionConfiguration;
    bool m_riskExceptionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
