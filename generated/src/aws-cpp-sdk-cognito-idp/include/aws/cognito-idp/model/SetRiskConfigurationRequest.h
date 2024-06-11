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
    AWS_COGNITOIDENTITYPROVIDER_API SetRiskConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetRiskConfiguration"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The user pool ID. </p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }
    inline SetRiskConfigurationRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline SetRiskConfigurationRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline SetRiskConfigurationRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app client ID. If <code>ClientId</code> is null, then the risk
     * configuration is mapped to <code>userPoolId</code>. When the client ID is null,
     * the same risk configuration is applied to all the clients in the userPool.</p>
     * <p>Otherwise, <code>ClientId</code> is mapped to the client. When the client ID
     * isn't null, the user pool configuration is overridden and the risk configuration
     * for the client is used instead.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline SetRiskConfigurationRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline SetRiskConfigurationRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline SetRiskConfigurationRequest& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compromised credentials risk configuration.</p>
     */
    inline const CompromisedCredentialsRiskConfigurationType& GetCompromisedCredentialsRiskConfiguration() const{ return m_compromisedCredentialsRiskConfiguration; }
    inline bool CompromisedCredentialsRiskConfigurationHasBeenSet() const { return m_compromisedCredentialsRiskConfigurationHasBeenSet; }
    inline void SetCompromisedCredentialsRiskConfiguration(const CompromisedCredentialsRiskConfigurationType& value) { m_compromisedCredentialsRiskConfigurationHasBeenSet = true; m_compromisedCredentialsRiskConfiguration = value; }
    inline void SetCompromisedCredentialsRiskConfiguration(CompromisedCredentialsRiskConfigurationType&& value) { m_compromisedCredentialsRiskConfigurationHasBeenSet = true; m_compromisedCredentialsRiskConfiguration = std::move(value); }
    inline SetRiskConfigurationRequest& WithCompromisedCredentialsRiskConfiguration(const CompromisedCredentialsRiskConfigurationType& value) { SetCompromisedCredentialsRiskConfiguration(value); return *this;}
    inline SetRiskConfigurationRequest& WithCompromisedCredentialsRiskConfiguration(CompromisedCredentialsRiskConfigurationType&& value) { SetCompromisedCredentialsRiskConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account takeover risk configuration.</p>
     */
    inline const AccountTakeoverRiskConfigurationType& GetAccountTakeoverRiskConfiguration() const{ return m_accountTakeoverRiskConfiguration; }
    inline bool AccountTakeoverRiskConfigurationHasBeenSet() const { return m_accountTakeoverRiskConfigurationHasBeenSet; }
    inline void SetAccountTakeoverRiskConfiguration(const AccountTakeoverRiskConfigurationType& value) { m_accountTakeoverRiskConfigurationHasBeenSet = true; m_accountTakeoverRiskConfiguration = value; }
    inline void SetAccountTakeoverRiskConfiguration(AccountTakeoverRiskConfigurationType&& value) { m_accountTakeoverRiskConfigurationHasBeenSet = true; m_accountTakeoverRiskConfiguration = std::move(value); }
    inline SetRiskConfigurationRequest& WithAccountTakeoverRiskConfiguration(const AccountTakeoverRiskConfigurationType& value) { SetAccountTakeoverRiskConfiguration(value); return *this;}
    inline SetRiskConfigurationRequest& WithAccountTakeoverRiskConfiguration(AccountTakeoverRiskConfigurationType&& value) { SetAccountTakeoverRiskConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration to override the risk decision.</p>
     */
    inline const RiskExceptionConfigurationType& GetRiskExceptionConfiguration() const{ return m_riskExceptionConfiguration; }
    inline bool RiskExceptionConfigurationHasBeenSet() const { return m_riskExceptionConfigurationHasBeenSet; }
    inline void SetRiskExceptionConfiguration(const RiskExceptionConfigurationType& value) { m_riskExceptionConfigurationHasBeenSet = true; m_riskExceptionConfiguration = value; }
    inline void SetRiskExceptionConfiguration(RiskExceptionConfigurationType&& value) { m_riskExceptionConfigurationHasBeenSet = true; m_riskExceptionConfiguration = std::move(value); }
    inline SetRiskConfigurationRequest& WithRiskExceptionConfiguration(const RiskExceptionConfigurationType& value) { SetRiskExceptionConfiguration(value); return *this;}
    inline SetRiskConfigurationRequest& WithRiskExceptionConfiguration(RiskExceptionConfigurationType&& value) { SetRiskExceptionConfiguration(std::move(value)); return *this;}
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
