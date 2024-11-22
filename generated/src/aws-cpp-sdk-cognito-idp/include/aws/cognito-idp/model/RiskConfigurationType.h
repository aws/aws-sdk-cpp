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
   * <p>The settings of risk configuration for threat protection with advanced
   * security features in a user pool.</p> <p>This data type is a response parameter
   * of <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_DescribeRiskConfiguration.html">DescribeRiskConfiguration</a>
   * and <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_SetRiskConfiguration.html">SetRiskConfiguration</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/RiskConfigurationType">AWS
   * API Reference</a></p>
   */
  class RiskConfigurationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API RiskConfigurationType();
    AWS_COGNITOIDENTITYPROVIDER_API RiskConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API RiskConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the user pool that has the risk configuration applied.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }
    inline RiskConfigurationType& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline RiskConfigurationType& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline RiskConfigurationType& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app client where this configuration is applied. When this parameter isn't
     * present, the risk configuration applies to all user pool app clients that don't
     * have client-level settings.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline RiskConfigurationType& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline RiskConfigurationType& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline RiskConfigurationType& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for compromised-credentials actions and authentication types with
     * advanced security features in full-function <code>ENFORCED</code> mode.</p>
     */
    inline const CompromisedCredentialsRiskConfigurationType& GetCompromisedCredentialsRiskConfiguration() const{ return m_compromisedCredentialsRiskConfiguration; }
    inline bool CompromisedCredentialsRiskConfigurationHasBeenSet() const { return m_compromisedCredentialsRiskConfigurationHasBeenSet; }
    inline void SetCompromisedCredentialsRiskConfiguration(const CompromisedCredentialsRiskConfigurationType& value) { m_compromisedCredentialsRiskConfigurationHasBeenSet = true; m_compromisedCredentialsRiskConfiguration = value; }
    inline void SetCompromisedCredentialsRiskConfiguration(CompromisedCredentialsRiskConfigurationType&& value) { m_compromisedCredentialsRiskConfigurationHasBeenSet = true; m_compromisedCredentialsRiskConfiguration = std::move(value); }
    inline RiskConfigurationType& WithCompromisedCredentialsRiskConfiguration(const CompromisedCredentialsRiskConfigurationType& value) { SetCompromisedCredentialsRiskConfiguration(value); return *this;}
    inline RiskConfigurationType& WithCompromisedCredentialsRiskConfiguration(CompromisedCredentialsRiskConfigurationType&& value) { SetCompromisedCredentialsRiskConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for automated responses and notification templates for adaptive
     * authentication with advanced security features.</p>
     */
    inline const AccountTakeoverRiskConfigurationType& GetAccountTakeoverRiskConfiguration() const{ return m_accountTakeoverRiskConfiguration; }
    inline bool AccountTakeoverRiskConfigurationHasBeenSet() const { return m_accountTakeoverRiskConfigurationHasBeenSet; }
    inline void SetAccountTakeoverRiskConfiguration(const AccountTakeoverRiskConfigurationType& value) { m_accountTakeoverRiskConfigurationHasBeenSet = true; m_accountTakeoverRiskConfiguration = value; }
    inline void SetAccountTakeoverRiskConfiguration(AccountTakeoverRiskConfigurationType&& value) { m_accountTakeoverRiskConfigurationHasBeenSet = true; m_accountTakeoverRiskConfiguration = std::move(value); }
    inline RiskConfigurationType& WithAccountTakeoverRiskConfiguration(const AccountTakeoverRiskConfigurationType& value) { SetAccountTakeoverRiskConfiguration(value); return *this;}
    inline RiskConfigurationType& WithAccountTakeoverRiskConfiguration(AccountTakeoverRiskConfigurationType&& value) { SetAccountTakeoverRiskConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Exceptions to the risk evaluation configuration, including always-allow and
     * always-block IP address ranges. </p>
     */
    inline const RiskExceptionConfigurationType& GetRiskExceptionConfiguration() const{ return m_riskExceptionConfiguration; }
    inline bool RiskExceptionConfigurationHasBeenSet() const { return m_riskExceptionConfigurationHasBeenSet; }
    inline void SetRiskExceptionConfiguration(const RiskExceptionConfigurationType& value) { m_riskExceptionConfigurationHasBeenSet = true; m_riskExceptionConfiguration = value; }
    inline void SetRiskExceptionConfiguration(RiskExceptionConfigurationType&& value) { m_riskExceptionConfigurationHasBeenSet = true; m_riskExceptionConfiguration = std::move(value); }
    inline RiskConfigurationType& WithRiskExceptionConfiguration(const RiskExceptionConfigurationType& value) { SetRiskExceptionConfiguration(value); return *this;}
    inline RiskConfigurationType& WithRiskExceptionConfiguration(RiskExceptionConfigurationType&& value) { SetRiskExceptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was modified. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline RiskConfigurationType& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline RiskConfigurationType& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
