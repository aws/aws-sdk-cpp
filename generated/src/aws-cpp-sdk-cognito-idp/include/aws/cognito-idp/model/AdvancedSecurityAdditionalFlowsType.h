/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/AdvancedSecurityEnabledModeType.h>
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
   * <p>Advanced security configuration options for additional authentication types
   * in your user pool, including custom authentication. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdvancedSecurityAdditionalFlowsType">AWS
   * API Reference</a></p>
   */
  class AdvancedSecurityAdditionalFlowsType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AdvancedSecurityAdditionalFlowsType();
    AWS_COGNITOIDENTITYPROVIDER_API AdvancedSecurityAdditionalFlowsType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API AdvancedSecurityAdditionalFlowsType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operating mode of advanced security features in custom authentication
     * with <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-lambda-challenge.html">
     * Custom authentication challenge Lambda triggers</a>. </p>
     */
    inline const AdvancedSecurityEnabledModeType& GetCustomAuthMode() const{ return m_customAuthMode; }
    inline bool CustomAuthModeHasBeenSet() const { return m_customAuthModeHasBeenSet; }
    inline void SetCustomAuthMode(const AdvancedSecurityEnabledModeType& value) { m_customAuthModeHasBeenSet = true; m_customAuthMode = value; }
    inline void SetCustomAuthMode(AdvancedSecurityEnabledModeType&& value) { m_customAuthModeHasBeenSet = true; m_customAuthMode = std::move(value); }
    inline AdvancedSecurityAdditionalFlowsType& WithCustomAuthMode(const AdvancedSecurityEnabledModeType& value) { SetCustomAuthMode(value); return *this;}
    inline AdvancedSecurityAdditionalFlowsType& WithCustomAuthMode(AdvancedSecurityEnabledModeType&& value) { SetCustomAuthMode(std::move(value)); return *this;}
    ///@}
  private:

    AdvancedSecurityEnabledModeType m_customAuthMode;
    bool m_customAuthModeHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
