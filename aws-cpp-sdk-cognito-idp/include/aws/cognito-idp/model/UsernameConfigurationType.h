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
  class AWS_COGNITOIDENTITYPROVIDER_API UsernameConfigurationType
  {
  public:
    UsernameConfigurationType();
    UsernameConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    UsernameConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether username case sensitivity will be applied for all users in
     * the user pool through Cognito APIs.</p> <p>Valid values include:</p> <ul> <li>
     * <p> <b> <code>True</code> </b>: Enables case sensitivity for all username input.
     * When this option is set to <code>True</code>, users must sign in using the exact
     * capitalization of their given username. For example, ��UserName”. This is the
     * default value.</p> </li> <li> <p> <b> <code>False</code> </b>: Enables case
     * insensitivity for all username input. For example, when this option is set to
     * <code>False</code>, users will be able to sign in using either "username" or
     * "Username". This option also enables both <code>preferred_username</code> and
     * <code>email</code> alias to be case insensitive, in addition to the
     * <code>username</code> attribute.</p> </li> </ul>
     */
    inline bool GetCaseSensitive() const{ return m_caseSensitive; }

    /**
     * <p>Specifies whether username case sensitivity will be applied for all users in
     * the user pool through Cognito APIs.</p> <p>Valid values include:</p> <ul> <li>
     * <p> <b> <code>True</code> </b>: Enables case sensitivity for all username input.
     * When this option is set to <code>True</code>, users must sign in using the exact
     * capitalization of their given username. For example, ��UserName”. This is the
     * default value.</p> </li> <li> <p> <b> <code>False</code> </b>: Enables case
     * insensitivity for all username input. For example, when this option is set to
     * <code>False</code>, users will be able to sign in using either "username" or
     * "Username". This option also enables both <code>preferred_username</code> and
     * <code>email</code> alias to be case insensitive, in addition to the
     * <code>username</code> attribute.</p> </li> </ul>
     */
    inline bool CaseSensitiveHasBeenSet() const { return m_caseSensitiveHasBeenSet; }

    /**
     * <p>Specifies whether username case sensitivity will be applied for all users in
     * the user pool through Cognito APIs.</p> <p>Valid values include:</p> <ul> <li>
     * <p> <b> <code>True</code> </b>: Enables case sensitivity for all username input.
     * When this option is set to <code>True</code>, users must sign in using the exact
     * capitalization of their given username. For example, ��UserName”. This is the
     * default value.</p> </li> <li> <p> <b> <code>False</code> </b>: Enables case
     * insensitivity for all username input. For example, when this option is set to
     * <code>False</code>, users will be able to sign in using either "username" or
     * "Username". This option also enables both <code>preferred_username</code> and
     * <code>email</code> alias to be case insensitive, in addition to the
     * <code>username</code> attribute.</p> </li> </ul>
     */
    inline void SetCaseSensitive(bool value) { m_caseSensitiveHasBeenSet = true; m_caseSensitive = value; }

    /**
     * <p>Specifies whether username case sensitivity will be applied for all users in
     * the user pool through Cognito APIs.</p> <p>Valid values include:</p> <ul> <li>
     * <p> <b> <code>True</code> </b>: Enables case sensitivity for all username input.
     * When this option is set to <code>True</code>, users must sign in using the exact
     * capitalization of their given username. For example, ��UserName”. This is the
     * default value.</p> </li> <li> <p> <b> <code>False</code> </b>: Enables case
     * insensitivity for all username input. For example, when this option is set to
     * <code>False</code>, users will be able to sign in using either "username" or
     * "Username". This option also enables both <code>preferred_username</code> and
     * <code>email</code> alias to be case insensitive, in addition to the
     * <code>username</code> attribute.</p> </li> </ul>
     */
    inline UsernameConfigurationType& WithCaseSensitive(bool value) { SetCaseSensitive(value); return *this;}

  private:

    bool m_caseSensitive;
    bool m_caseSensitiveHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
