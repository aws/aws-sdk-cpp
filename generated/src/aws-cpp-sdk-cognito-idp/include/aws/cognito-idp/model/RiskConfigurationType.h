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
   * <p>The risk configuration type.</p><p><h3>See Also:</h3>   <a
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


    /**
     * <p>The user pool ID.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID.</p>
     */
    inline RiskConfigurationType& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline RiskConfigurationType& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline RiskConfigurationType& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The app client ID.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The app client ID.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>The app client ID.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The app client ID.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The app client ID.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The app client ID.</p>
     */
    inline RiskConfigurationType& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The app client ID.</p>
     */
    inline RiskConfigurationType& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The app client ID.</p>
     */
    inline RiskConfigurationType& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>The compromised credentials risk configuration object, including the
     * <code>EventFilter</code> and the <code>EventAction</code>.</p>
     */
    inline const CompromisedCredentialsRiskConfigurationType& GetCompromisedCredentialsRiskConfiguration() const{ return m_compromisedCredentialsRiskConfiguration; }

    /**
     * <p>The compromised credentials risk configuration object, including the
     * <code>EventFilter</code> and the <code>EventAction</code>.</p>
     */
    inline bool CompromisedCredentialsRiskConfigurationHasBeenSet() const { return m_compromisedCredentialsRiskConfigurationHasBeenSet; }

    /**
     * <p>The compromised credentials risk configuration object, including the
     * <code>EventFilter</code> and the <code>EventAction</code>.</p>
     */
    inline void SetCompromisedCredentialsRiskConfiguration(const CompromisedCredentialsRiskConfigurationType& value) { m_compromisedCredentialsRiskConfigurationHasBeenSet = true; m_compromisedCredentialsRiskConfiguration = value; }

    /**
     * <p>The compromised credentials risk configuration object, including the
     * <code>EventFilter</code> and the <code>EventAction</code>.</p>
     */
    inline void SetCompromisedCredentialsRiskConfiguration(CompromisedCredentialsRiskConfigurationType&& value) { m_compromisedCredentialsRiskConfigurationHasBeenSet = true; m_compromisedCredentialsRiskConfiguration = std::move(value); }

    /**
     * <p>The compromised credentials risk configuration object, including the
     * <code>EventFilter</code> and the <code>EventAction</code>.</p>
     */
    inline RiskConfigurationType& WithCompromisedCredentialsRiskConfiguration(const CompromisedCredentialsRiskConfigurationType& value) { SetCompromisedCredentialsRiskConfiguration(value); return *this;}

    /**
     * <p>The compromised credentials risk configuration object, including the
     * <code>EventFilter</code> and the <code>EventAction</code>.</p>
     */
    inline RiskConfigurationType& WithCompromisedCredentialsRiskConfiguration(CompromisedCredentialsRiskConfigurationType&& value) { SetCompromisedCredentialsRiskConfiguration(std::move(value)); return *this;}


    /**
     * <p>The account takeover risk configuration object, including the
     * <code>NotifyConfiguration</code> object and <code>Actions</code> to take if
     * there is an account takeover.</p>
     */
    inline const AccountTakeoverRiskConfigurationType& GetAccountTakeoverRiskConfiguration() const{ return m_accountTakeoverRiskConfiguration; }

    /**
     * <p>The account takeover risk configuration object, including the
     * <code>NotifyConfiguration</code> object and <code>Actions</code> to take if
     * there is an account takeover.</p>
     */
    inline bool AccountTakeoverRiskConfigurationHasBeenSet() const { return m_accountTakeoverRiskConfigurationHasBeenSet; }

    /**
     * <p>The account takeover risk configuration object, including the
     * <code>NotifyConfiguration</code> object and <code>Actions</code> to take if
     * there is an account takeover.</p>
     */
    inline void SetAccountTakeoverRiskConfiguration(const AccountTakeoverRiskConfigurationType& value) { m_accountTakeoverRiskConfigurationHasBeenSet = true; m_accountTakeoverRiskConfiguration = value; }

    /**
     * <p>The account takeover risk configuration object, including the
     * <code>NotifyConfiguration</code> object and <code>Actions</code> to take if
     * there is an account takeover.</p>
     */
    inline void SetAccountTakeoverRiskConfiguration(AccountTakeoverRiskConfigurationType&& value) { m_accountTakeoverRiskConfigurationHasBeenSet = true; m_accountTakeoverRiskConfiguration = std::move(value); }

    /**
     * <p>The account takeover risk configuration object, including the
     * <code>NotifyConfiguration</code> object and <code>Actions</code> to take if
     * there is an account takeover.</p>
     */
    inline RiskConfigurationType& WithAccountTakeoverRiskConfiguration(const AccountTakeoverRiskConfigurationType& value) { SetAccountTakeoverRiskConfiguration(value); return *this;}

    /**
     * <p>The account takeover risk configuration object, including the
     * <code>NotifyConfiguration</code> object and <code>Actions</code> to take if
     * there is an account takeover.</p>
     */
    inline RiskConfigurationType& WithAccountTakeoverRiskConfiguration(AccountTakeoverRiskConfigurationType&& value) { SetAccountTakeoverRiskConfiguration(std::move(value)); return *this;}


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
    inline RiskConfigurationType& WithRiskExceptionConfiguration(const RiskExceptionConfigurationType& value) { SetRiskExceptionConfiguration(value); return *this;}

    /**
     * <p>The configuration to override the risk decision.</p>
     */
    inline RiskConfigurationType& WithRiskExceptionConfiguration(RiskExceptionConfigurationType&& value) { SetRiskExceptionConfiguration(std::move(value)); return *this;}


    /**
     * <p>The date and time, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format, when the item was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date and time, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format, when the item was modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date and time, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format, when the item was modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date and time, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format, when the item was modified.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date and time, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format, when the item was modified.</p>
     */
    inline RiskConfigurationType& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date and time, in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html">ISO 8601</a>
     * format, when the item was modified.</p>
     */
    inline RiskConfigurationType& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}

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
