/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/AdvancedSecurityModeType.h>
#include <aws/cognito-idp/model/AdvancedSecurityAdditionalFlowsType.h>
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
   * <p>User pool add-ons. Contains settings for activation of advanced security
   * features. To log user security information but take no action, set to
   * <code>AUDIT</code>. To configure automatic security responses to risky traffic
   * to your user pool, set to <code>ENFORCED</code>.</p> <p>For more information,
   * see <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-advanced-security.html">Adding
   * advanced security to a user pool</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UserPoolAddOnsType">AWS
   * API Reference</a></p>
   */
  class UserPoolAddOnsType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UserPoolAddOnsType();
    AWS_COGNITOIDENTITYPROVIDER_API UserPoolAddOnsType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API UserPoolAddOnsType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operating mode of advanced security features for standard authentication
     * types in your user pool, including username-password and secure remote password
     * (SRP) authentication. </p>
     */
    inline const AdvancedSecurityModeType& GetAdvancedSecurityMode() const{ return m_advancedSecurityMode; }
    inline bool AdvancedSecurityModeHasBeenSet() const { return m_advancedSecurityModeHasBeenSet; }
    inline void SetAdvancedSecurityMode(const AdvancedSecurityModeType& value) { m_advancedSecurityModeHasBeenSet = true; m_advancedSecurityMode = value; }
    inline void SetAdvancedSecurityMode(AdvancedSecurityModeType&& value) { m_advancedSecurityModeHasBeenSet = true; m_advancedSecurityMode = std::move(value); }
    inline UserPoolAddOnsType& WithAdvancedSecurityMode(const AdvancedSecurityModeType& value) { SetAdvancedSecurityMode(value); return *this;}
    inline UserPoolAddOnsType& WithAdvancedSecurityMode(AdvancedSecurityModeType&& value) { SetAdvancedSecurityMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Advanced security configuration options for additional authentication types
     * in your user pool, including custom authentication. </p>
     */
    inline const AdvancedSecurityAdditionalFlowsType& GetAdvancedSecurityAdditionalFlows() const{ return m_advancedSecurityAdditionalFlows; }
    inline bool AdvancedSecurityAdditionalFlowsHasBeenSet() const { return m_advancedSecurityAdditionalFlowsHasBeenSet; }
    inline void SetAdvancedSecurityAdditionalFlows(const AdvancedSecurityAdditionalFlowsType& value) { m_advancedSecurityAdditionalFlowsHasBeenSet = true; m_advancedSecurityAdditionalFlows = value; }
    inline void SetAdvancedSecurityAdditionalFlows(AdvancedSecurityAdditionalFlowsType&& value) { m_advancedSecurityAdditionalFlowsHasBeenSet = true; m_advancedSecurityAdditionalFlows = std::move(value); }
    inline UserPoolAddOnsType& WithAdvancedSecurityAdditionalFlows(const AdvancedSecurityAdditionalFlowsType& value) { SetAdvancedSecurityAdditionalFlows(value); return *this;}
    inline UserPoolAddOnsType& WithAdvancedSecurityAdditionalFlows(AdvancedSecurityAdditionalFlowsType&& value) { SetAdvancedSecurityAdditionalFlows(std::move(value)); return *this;}
    ///@}
  private:

    AdvancedSecurityModeType m_advancedSecurityMode;
    bool m_advancedSecurityModeHasBeenSet = false;

    AdvancedSecurityAdditionalFlowsType m_advancedSecurityAdditionalFlows;
    bool m_advancedSecurityAdditionalFlowsHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
