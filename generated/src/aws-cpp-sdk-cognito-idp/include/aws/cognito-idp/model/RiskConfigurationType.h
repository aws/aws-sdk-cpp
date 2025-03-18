/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/CompromisedCredentialsRiskConfigurationType.h>
#include <aws/cognito-idp/model/AccountTakeoverRiskConfigurationType.h>
#include <aws/cognito-idp/model/RiskExceptionConfigurationType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The settings of risk configuration for threat protection with threat
   * protection in a user pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/RiskConfigurationType">AWS
   * API Reference</a></p>
   */
  class RiskConfigurationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API RiskConfigurationType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API RiskConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API RiskConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the user pool that has the risk configuration applied.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    RiskConfigurationType& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app client where this configuration is applied. When this parameter isn't
     * present, the risk configuration applies to all user pool app clients that don't
     * have client-level settings.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    RiskConfigurationType& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for compromised-credentials actions and authentication types with
     * threat protection in full-function <code>ENFORCED</code> mode.</p>
     */
    inline const CompromisedCredentialsRiskConfigurationType& GetCompromisedCredentialsRiskConfiguration() const { return m_compromisedCredentialsRiskConfiguration; }
    inline bool CompromisedCredentialsRiskConfigurationHasBeenSet() const { return m_compromisedCredentialsRiskConfigurationHasBeenSet; }
    template<typename CompromisedCredentialsRiskConfigurationT = CompromisedCredentialsRiskConfigurationType>
    void SetCompromisedCredentialsRiskConfiguration(CompromisedCredentialsRiskConfigurationT&& value) { m_compromisedCredentialsRiskConfigurationHasBeenSet = true; m_compromisedCredentialsRiskConfiguration = std::forward<CompromisedCredentialsRiskConfigurationT>(value); }
    template<typename CompromisedCredentialsRiskConfigurationT = CompromisedCredentialsRiskConfigurationType>
    RiskConfigurationType& WithCompromisedCredentialsRiskConfiguration(CompromisedCredentialsRiskConfigurationT&& value) { SetCompromisedCredentialsRiskConfiguration(std::forward<CompromisedCredentialsRiskConfigurationT>(value)); return *this;}
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
    RiskConfigurationType& WithAccountTakeoverRiskConfiguration(AccountTakeoverRiskConfigurationT&& value) { SetAccountTakeoverRiskConfiguration(std::forward<AccountTakeoverRiskConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Exceptions to the risk evaluation configuration, including always-allow and
     * always-block IP address ranges. </p>
     */
    inline const RiskExceptionConfigurationType& GetRiskExceptionConfiguration() const { return m_riskExceptionConfiguration; }
    inline bool RiskExceptionConfigurationHasBeenSet() const { return m_riskExceptionConfigurationHasBeenSet; }
    template<typename RiskExceptionConfigurationT = RiskExceptionConfigurationType>
    void SetRiskExceptionConfiguration(RiskExceptionConfigurationT&& value) { m_riskExceptionConfigurationHasBeenSet = true; m_riskExceptionConfiguration = std::forward<RiskExceptionConfigurationT>(value); }
    template<typename RiskExceptionConfigurationT = RiskExceptionConfigurationType>
    RiskConfigurationType& WithRiskExceptionConfiguration(RiskExceptionConfigurationT&& value) { SetRiskExceptionConfiguration(std::forward<RiskExceptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was modified. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    RiskConfigurationType& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
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

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
