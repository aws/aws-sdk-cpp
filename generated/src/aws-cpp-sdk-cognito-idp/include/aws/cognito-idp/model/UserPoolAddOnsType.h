/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/AdvancedSecurityModeType.h>
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


    /**
     * <p>The operating mode of advanced security features in your user pool.</p>
     */
    inline const AdvancedSecurityModeType& GetAdvancedSecurityMode() const{ return m_advancedSecurityMode; }

    /**
     * <p>The operating mode of advanced security features in your user pool.</p>
     */
    inline bool AdvancedSecurityModeHasBeenSet() const { return m_advancedSecurityModeHasBeenSet; }

    /**
     * <p>The operating mode of advanced security features in your user pool.</p>
     */
    inline void SetAdvancedSecurityMode(const AdvancedSecurityModeType& value) { m_advancedSecurityModeHasBeenSet = true; m_advancedSecurityMode = value; }

    /**
     * <p>The operating mode of advanced security features in your user pool.</p>
     */
    inline void SetAdvancedSecurityMode(AdvancedSecurityModeType&& value) { m_advancedSecurityModeHasBeenSet = true; m_advancedSecurityMode = std::move(value); }

    /**
     * <p>The operating mode of advanced security features in your user pool.</p>
     */
    inline UserPoolAddOnsType& WithAdvancedSecurityMode(const AdvancedSecurityModeType& value) { SetAdvancedSecurityMode(value); return *this;}

    /**
     * <p>The operating mode of advanced security features in your user pool.</p>
     */
    inline UserPoolAddOnsType& WithAdvancedSecurityMode(AdvancedSecurityModeType&& value) { SetAdvancedSecurityMode(std::move(value)); return *this;}

  private:

    AdvancedSecurityModeType m_advancedSecurityMode;
    bool m_advancedSecurityModeHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
