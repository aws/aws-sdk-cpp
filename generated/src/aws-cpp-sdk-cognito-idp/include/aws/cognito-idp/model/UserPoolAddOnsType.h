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
   * <p>Contains settings for activation of threat protection, including the
   * operating mode and additional authentication types. To log user security
   * information but take no action, set to <code>AUDIT</code>. To configure
   * automatic security responses to potentially unwanted traffic to your user pool,
   * set to <code>ENFORCED</code>.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-advanced-security.html">Adding
   * advanced security to a user pool</a>. To activate this setting, your user pool
   * must be on the <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/feature-plans-features-plus.html">
   * Plus tier</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UserPoolAddOnsType">AWS
   * API Reference</a></p>
   */
  class UserPoolAddOnsType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UserPoolAddOnsType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API UserPoolAddOnsType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API UserPoolAddOnsType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operating mode of threat protection for standard authentication types in
     * your user pool, including username-password and secure remote password (SRP)
     * authentication. </p>
     */
    inline AdvancedSecurityModeType GetAdvancedSecurityMode() const { return m_advancedSecurityMode; }
    inline bool AdvancedSecurityModeHasBeenSet() const { return m_advancedSecurityModeHasBeenSet; }
    inline void SetAdvancedSecurityMode(AdvancedSecurityModeType value) { m_advancedSecurityModeHasBeenSet = true; m_advancedSecurityMode = value; }
    inline UserPoolAddOnsType& WithAdvancedSecurityMode(AdvancedSecurityModeType value) { SetAdvancedSecurityMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Threat protection configuration options for additional authentication types
     * in your user pool, including custom authentication. </p>
     */
    inline const AdvancedSecurityAdditionalFlowsType& GetAdvancedSecurityAdditionalFlows() const { return m_advancedSecurityAdditionalFlows; }
    inline bool AdvancedSecurityAdditionalFlowsHasBeenSet() const { return m_advancedSecurityAdditionalFlowsHasBeenSet; }
    template<typename AdvancedSecurityAdditionalFlowsT = AdvancedSecurityAdditionalFlowsType>
    void SetAdvancedSecurityAdditionalFlows(AdvancedSecurityAdditionalFlowsT&& value) { m_advancedSecurityAdditionalFlowsHasBeenSet = true; m_advancedSecurityAdditionalFlows = std::forward<AdvancedSecurityAdditionalFlowsT>(value); }
    template<typename AdvancedSecurityAdditionalFlowsT = AdvancedSecurityAdditionalFlowsType>
    UserPoolAddOnsType& WithAdvancedSecurityAdditionalFlows(AdvancedSecurityAdditionalFlowsT&& value) { SetAdvancedSecurityAdditionalFlows(std::forward<AdvancedSecurityAdditionalFlowsT>(value)); return *this;}
    ///@}
  private:

    AdvancedSecurityModeType m_advancedSecurityMode{AdvancedSecurityModeType::NOT_SET};
    bool m_advancedSecurityModeHasBeenSet = false;

    AdvancedSecurityAdditionalFlowsType m_advancedSecurityAdditionalFlows;
    bool m_advancedSecurityAdditionalFlowsHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
