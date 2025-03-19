/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cognito-idp/model/UserStatusType.h>
#include <aws/cognito-idp/model/AttributeType.h>
#include <aws/cognito-idp/model/MFAOptionType.h>
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
   * <p>A user profile in a Amazon Cognito user pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UserType">AWS
   * API Reference</a></p>
   */
  class UserType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UserType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API UserType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API UserType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user's username.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    UserType& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Names and values of a user's attributes, for example <code>email</code>.</p>
     */
    inline const Aws::Vector<AttributeType>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<AttributeType>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<AttributeType>>
    UserType& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = AttributeType>
    UserType& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was created. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetUserCreateDate() const { return m_userCreateDate; }
    inline bool UserCreateDateHasBeenSet() const { return m_userCreateDateHasBeenSet; }
    template<typename UserCreateDateT = Aws::Utils::DateTime>
    void SetUserCreateDate(UserCreateDateT&& value) { m_userCreateDateHasBeenSet = true; m_userCreateDate = std::forward<UserCreateDateT>(value); }
    template<typename UserCreateDateT = Aws::Utils::DateTime>
    UserType& WithUserCreateDate(UserCreateDateT&& value) { SetUserCreateDate(std::forward<UserCreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was modified. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetUserLastModifiedDate() const { return m_userLastModifiedDate; }
    inline bool UserLastModifiedDateHasBeenSet() const { return m_userLastModifiedDateHasBeenSet; }
    template<typename UserLastModifiedDateT = Aws::Utils::DateTime>
    void SetUserLastModifiedDate(UserLastModifiedDateT&& value) { m_userLastModifiedDateHasBeenSet = true; m_userLastModifiedDate = std::forward<UserLastModifiedDateT>(value); }
    template<typename UserLastModifiedDateT = Aws::Utils::DateTime>
    UserType& WithUserLastModifiedDate(UserLastModifiedDateT&& value) { SetUserLastModifiedDate(std::forward<UserLastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the user's account is enabled or disabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline UserType& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user status. This can be one of the following:</p> <ul> <li> <p>
     * <code>UNCONFIRMED</code>: User has been created but not confirmed.</p> </li>
     * <li> <p> <code>CONFIRMED</code>: User has been confirmed.</p> </li> <li> <p>
     * <code>EXTERNAL_PROVIDER</code>: User signed in with a third-party IdP.</p> </li>
     * <li> <p> <code>RESET_REQUIRED</code>: User is confirmed, but the user must
     * request a code and reset their password before they can sign in.</p> </li> <li>
     * <p> <code>FORCE_CHANGE_PASSWORD</code>: The user is confirmed and the user can
     * sign in using a temporary password, but on first sign-in, the user must change
     * their password to a new value before doing anything else. </p> </li> </ul>
     * <p>The statuses <code>ARCHIVED</code>, <code>UNKNOWN</code>, and
     * <code>COMPROMISED</code> are no longer used.</p>
     */
    inline UserStatusType GetUserStatus() const { return m_userStatus; }
    inline bool UserStatusHasBeenSet() const { return m_userStatusHasBeenSet; }
    inline void SetUserStatus(UserStatusType value) { m_userStatusHasBeenSet = true; m_userStatus = value; }
    inline UserType& WithUserStatus(UserStatusType value) { SetUserStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user's MFA configuration.</p>
     */
    inline const Aws::Vector<MFAOptionType>& GetMFAOptions() const { return m_mFAOptions; }
    inline bool MFAOptionsHasBeenSet() const { return m_mFAOptionsHasBeenSet; }
    template<typename MFAOptionsT = Aws::Vector<MFAOptionType>>
    void SetMFAOptions(MFAOptionsT&& value) { m_mFAOptionsHasBeenSet = true; m_mFAOptions = std::forward<MFAOptionsT>(value); }
    template<typename MFAOptionsT = Aws::Vector<MFAOptionType>>
    UserType& WithMFAOptions(MFAOptionsT&& value) { SetMFAOptions(std::forward<MFAOptionsT>(value)); return *this;}
    template<typename MFAOptionsT = MFAOptionType>
    UserType& AddMFAOptions(MFAOptionsT&& value) { m_mFAOptionsHasBeenSet = true; m_mFAOptions.emplace_back(std::forward<MFAOptionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::Vector<AttributeType> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Utils::DateTime m_userCreateDate{};
    bool m_userCreateDateHasBeenSet = false;

    Aws::Utils::DateTime m_userLastModifiedDate{};
    bool m_userLastModifiedDateHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    UserStatusType m_userStatus{UserStatusType::NOT_SET};
    bool m_userStatusHasBeenSet = false;

    Aws::Vector<MFAOptionType> m_mFAOptions;
    bool m_mFAOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
