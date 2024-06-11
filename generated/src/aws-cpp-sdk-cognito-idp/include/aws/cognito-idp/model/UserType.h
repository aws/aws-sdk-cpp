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
    AWS_COGNITOIDENTITYPROVIDER_API UserType();
    AWS_COGNITOIDENTITYPROVIDER_API UserType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API UserType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user name of the user you want to describe.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline UserType& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline UserType& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline UserType& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container with information about the user type attributes.</p>
     */
    inline const Aws::Vector<AttributeType>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Vector<AttributeType>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Vector<AttributeType>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline UserType& WithAttributes(const Aws::Vector<AttributeType>& value) { SetAttributes(value); return *this;}
    inline UserType& WithAttributes(Aws::Vector<AttributeType>&& value) { SetAttributes(std::move(value)); return *this;}
    inline UserType& AddAttributes(const AttributeType& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }
    inline UserType& AddAttributes(AttributeType&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The creation date of the user.</p>
     */
    inline const Aws::Utils::DateTime& GetUserCreateDate() const{ return m_userCreateDate; }
    inline bool UserCreateDateHasBeenSet() const { return m_userCreateDateHasBeenSet; }
    inline void SetUserCreateDate(const Aws::Utils::DateTime& value) { m_userCreateDateHasBeenSet = true; m_userCreateDate = value; }
    inline void SetUserCreateDate(Aws::Utils::DateTime&& value) { m_userCreateDateHasBeenSet = true; m_userCreateDate = std::move(value); }
    inline UserType& WithUserCreateDate(const Aws::Utils::DateTime& value) { SetUserCreateDate(value); return *this;}
    inline UserType& WithUserCreateDate(Aws::Utils::DateTime&& value) { SetUserCreateDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was modified. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetUserLastModifiedDate() const{ return m_userLastModifiedDate; }
    inline bool UserLastModifiedDateHasBeenSet() const { return m_userLastModifiedDateHasBeenSet; }
    inline void SetUserLastModifiedDate(const Aws::Utils::DateTime& value) { m_userLastModifiedDateHasBeenSet = true; m_userLastModifiedDate = value; }
    inline void SetUserLastModifiedDate(Aws::Utils::DateTime&& value) { m_userLastModifiedDateHasBeenSet = true; m_userLastModifiedDate = std::move(value); }
    inline UserType& WithUserLastModifiedDate(const Aws::Utils::DateTime& value) { SetUserLastModifiedDate(value); return *this;}
    inline UserType& WithUserLastModifiedDate(Aws::Utils::DateTime&& value) { SetUserLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the user is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline UserType& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user status. This can be one of the following:</p> <ul> <li>
     * <p>UNCONFIRMED - User has been created but not confirmed.</p> </li> <li>
     * <p>CONFIRMED - User has been confirmed.</p> </li> <li> <p>EXTERNAL_PROVIDER -
     * User signed in with a third-party IdP.</p> </li> <li> <p>UNKNOWN - User status
     * isn't known.</p> </li> <li> <p>RESET_REQUIRED - User is confirmed, but the user
     * must request a code and reset their password before they can sign in.</p> </li>
     * <li> <p>FORCE_CHANGE_PASSWORD - The user is confirmed and the user can sign in
     * using a temporary password, but on first sign-in, the user must change their
     * password to a new value before doing anything else. </p> </li> </ul>
     */
    inline const UserStatusType& GetUserStatus() const{ return m_userStatus; }
    inline bool UserStatusHasBeenSet() const { return m_userStatusHasBeenSet; }
    inline void SetUserStatus(const UserStatusType& value) { m_userStatusHasBeenSet = true; m_userStatus = value; }
    inline void SetUserStatus(UserStatusType&& value) { m_userStatusHasBeenSet = true; m_userStatus = std::move(value); }
    inline UserType& WithUserStatus(const UserStatusType& value) { SetUserStatus(value); return *this;}
    inline UserType& WithUserStatus(UserStatusType&& value) { SetUserStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MFA options for the user.</p>
     */
    inline const Aws::Vector<MFAOptionType>& GetMFAOptions() const{ return m_mFAOptions; }
    inline bool MFAOptionsHasBeenSet() const { return m_mFAOptionsHasBeenSet; }
    inline void SetMFAOptions(const Aws::Vector<MFAOptionType>& value) { m_mFAOptionsHasBeenSet = true; m_mFAOptions = value; }
    inline void SetMFAOptions(Aws::Vector<MFAOptionType>&& value) { m_mFAOptionsHasBeenSet = true; m_mFAOptions = std::move(value); }
    inline UserType& WithMFAOptions(const Aws::Vector<MFAOptionType>& value) { SetMFAOptions(value); return *this;}
    inline UserType& WithMFAOptions(Aws::Vector<MFAOptionType>&& value) { SetMFAOptions(std::move(value)); return *this;}
    inline UserType& AddMFAOptions(const MFAOptionType& value) { m_mFAOptionsHasBeenSet = true; m_mFAOptions.push_back(value); return *this; }
    inline UserType& AddMFAOptions(MFAOptionType&& value) { m_mFAOptionsHasBeenSet = true; m_mFAOptions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::Vector<AttributeType> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Utils::DateTime m_userCreateDate;
    bool m_userCreateDateHasBeenSet = false;

    Aws::Utils::DateTime m_userLastModifiedDate;
    bool m_userLastModifiedDateHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    UserStatusType m_userStatus;
    bool m_userStatusHasBeenSet = false;

    Aws::Vector<MFAOptionType> m_mFAOptions;
    bool m_mFAOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
