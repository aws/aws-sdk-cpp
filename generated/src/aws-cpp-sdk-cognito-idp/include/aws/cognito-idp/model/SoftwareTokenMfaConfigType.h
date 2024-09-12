/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>

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
   * <p>Configures a user pool for time-based one-time password (TOTP) multi-factor
   * authentication (MFA). Enables or disables TOTP.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SoftwareTokenMfaConfigType">AWS
   * API Reference</a></p>
   */
  class SoftwareTokenMfaConfigType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API SoftwareTokenMfaConfigType();
    AWS_COGNITOIDENTITYPROVIDER_API SoftwareTokenMfaConfigType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API SoftwareTokenMfaConfigType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether software token MFA is activated.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline SoftwareTokenMfaConfigType& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
