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
   * <p>The username configuration type. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UsernameConfigurationType">AWS
   * API Reference</a></p>
   */
  class UsernameConfigurationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UsernameConfigurationType();
    AWS_COGNITOIDENTITYPROVIDER_API UsernameConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API UsernameConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether user name case sensitivity will be applied for all users in
     * the user pool through Amazon Cognito APIs. For most use cases, set case
     * sensitivity to <code>False</code> (case insensitive) as a best practice. When
     * usernames and email addresses are case insensitive, users can sign in as the
     * same user when they enter a different capitalization of their user name.</p>
     * <p>Valid values include:</p> <dl> <dt>True</dt> <dd> <p>Enables case sensitivity
     * for all username input. When this option is set to <code>True</code>, users must
     * sign in using the exact capitalization of their given username, such as
     * “UserName”. This is the default value.</p> </dd> <dt>False</dt> <dd> <p>Enables
     * case insensitivity for all username input. For example, when this option is set
     * to <code>False</code>, users can sign in using <code>username</code>,
     * <code>USERNAME</code>, or <code>UserName</code>. This option also enables both
     * <code>preferred_username</code> and <code>email</code> alias to be case
     * insensitive, in addition to the <code>username</code> attribute.</p> </dd> </dl>
     */
    inline bool GetCaseSensitive() const{ return m_caseSensitive; }
    inline bool CaseSensitiveHasBeenSet() const { return m_caseSensitiveHasBeenSet; }
    inline void SetCaseSensitive(bool value) { m_caseSensitiveHasBeenSet = true; m_caseSensitive = value; }
    inline UsernameConfigurationType& WithCaseSensitive(bool value) { SetCaseSensitive(value); return *this;}
    ///@}
  private:

    bool m_caseSensitive;
    bool m_caseSensitiveHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
