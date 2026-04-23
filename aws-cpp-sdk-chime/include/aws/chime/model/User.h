/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/License.h>
#include <aws/chime/model/RegistrationStatus.h>
#include <aws/chime/model/InviteStatus.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The user on the Amazon Chime account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/User">AWS API
   * Reference</a></p>
   */
  class AWS_CHIME_API User
  {
  public:
    User();
    User(Aws::Utils::Json::JsonView jsonValue);
    User& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user ID.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The user ID.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The user ID.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The user ID.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The user ID.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The user ID.</p>
     */
    inline User& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The user ID.</p>
     */
    inline User& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The user ID.</p>
     */
    inline User& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline User& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline User& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline User& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The primary email address of the user.</p>
     */
    inline const Aws::String& GetPrimaryEmail() const{ return m_primaryEmail; }

    /**
     * <p>The primary email address of the user.</p>
     */
    inline bool PrimaryEmailHasBeenSet() const { return m_primaryEmailHasBeenSet; }

    /**
     * <p>The primary email address of the user.</p>
     */
    inline void SetPrimaryEmail(const Aws::String& value) { m_primaryEmailHasBeenSet = true; m_primaryEmail = value; }

    /**
     * <p>The primary email address of the user.</p>
     */
    inline void SetPrimaryEmail(Aws::String&& value) { m_primaryEmailHasBeenSet = true; m_primaryEmail = std::move(value); }

    /**
     * <p>The primary email address of the user.</p>
     */
    inline void SetPrimaryEmail(const char* value) { m_primaryEmailHasBeenSet = true; m_primaryEmail.assign(value); }

    /**
     * <p>The primary email address of the user.</p>
     */
    inline User& WithPrimaryEmail(const Aws::String& value) { SetPrimaryEmail(value); return *this;}

    /**
     * <p>The primary email address of the user.</p>
     */
    inline User& WithPrimaryEmail(Aws::String&& value) { SetPrimaryEmail(std::move(value)); return *this;}

    /**
     * <p>The primary email address of the user.</p>
     */
    inline User& WithPrimaryEmail(const char* value) { SetPrimaryEmail(value); return *this;}


    /**
     * <p>The primary phone number associated with the user.</p>
     */
    inline const Aws::String& GetPrimaryProvisionedNumber() const{ return m_primaryProvisionedNumber; }

    /**
     * <p>The primary phone number associated with the user.</p>
     */
    inline bool PrimaryProvisionedNumberHasBeenSet() const { return m_primaryProvisionedNumberHasBeenSet; }

    /**
     * <p>The primary phone number associated with the user.</p>
     */
    inline void SetPrimaryProvisionedNumber(const Aws::String& value) { m_primaryProvisionedNumberHasBeenSet = true; m_primaryProvisionedNumber = value; }

    /**
     * <p>The primary phone number associated with the user.</p>
     */
    inline void SetPrimaryProvisionedNumber(Aws::String&& value) { m_primaryProvisionedNumberHasBeenSet = true; m_primaryProvisionedNumber = std::move(value); }

    /**
     * <p>The primary phone number associated with the user.</p>
     */
    inline void SetPrimaryProvisionedNumber(const char* value) { m_primaryProvisionedNumberHasBeenSet = true; m_primaryProvisionedNumber.assign(value); }

    /**
     * <p>The primary phone number associated with the user.</p>
     */
    inline User& WithPrimaryProvisionedNumber(const Aws::String& value) { SetPrimaryProvisionedNumber(value); return *this;}

    /**
     * <p>The primary phone number associated with the user.</p>
     */
    inline User& WithPrimaryProvisionedNumber(Aws::String&& value) { SetPrimaryProvisionedNumber(std::move(value)); return *this;}

    /**
     * <p>The primary phone number associated with the user.</p>
     */
    inline User& WithPrimaryProvisionedNumber(const char* value) { SetPrimaryProvisionedNumber(value); return *this;}


    /**
     * <p>The display name of the user.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the user.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name of the user.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name of the user.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name of the user.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name of the user.</p>
     */
    inline User& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the user.</p>
     */
    inline User& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the user.</p>
     */
    inline User& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The license type for the user.</p>
     */
    inline const License& GetLicenseType() const{ return m_licenseType; }

    /**
     * <p>The license type for the user.</p>
     */
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }

    /**
     * <p>The license type for the user.</p>
     */
    inline void SetLicenseType(const License& value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }

    /**
     * <p>The license type for the user.</p>
     */
    inline void SetLicenseType(License&& value) { m_licenseTypeHasBeenSet = true; m_licenseType = std::move(value); }

    /**
     * <p>The license type for the user.</p>
     */
    inline User& WithLicenseType(const License& value) { SetLicenseType(value); return *this;}

    /**
     * <p>The license type for the user.</p>
     */
    inline User& WithLicenseType(License&& value) { SetLicenseType(std::move(value)); return *this;}


    /**
     * <p>The user registration status.</p>
     */
    inline const RegistrationStatus& GetUserRegistrationStatus() const{ return m_userRegistrationStatus; }

    /**
     * <p>The user registration status.</p>
     */
    inline bool UserRegistrationStatusHasBeenSet() const { return m_userRegistrationStatusHasBeenSet; }

    /**
     * <p>The user registration status.</p>
     */
    inline void SetUserRegistrationStatus(const RegistrationStatus& value) { m_userRegistrationStatusHasBeenSet = true; m_userRegistrationStatus = value; }

    /**
     * <p>The user registration status.</p>
     */
    inline void SetUserRegistrationStatus(RegistrationStatus&& value) { m_userRegistrationStatusHasBeenSet = true; m_userRegistrationStatus = std::move(value); }

    /**
     * <p>The user registration status.</p>
     */
    inline User& WithUserRegistrationStatus(const RegistrationStatus& value) { SetUserRegistrationStatus(value); return *this;}

    /**
     * <p>The user registration status.</p>
     */
    inline User& WithUserRegistrationStatus(RegistrationStatus&& value) { SetUserRegistrationStatus(std::move(value)); return *this;}


    /**
     * <p>The user invite status.</p>
     */
    inline const InviteStatus& GetUserInvitationStatus() const{ return m_userInvitationStatus; }

    /**
     * <p>The user invite status.</p>
     */
    inline bool UserInvitationStatusHasBeenSet() const { return m_userInvitationStatusHasBeenSet; }

    /**
     * <p>The user invite status.</p>
     */
    inline void SetUserInvitationStatus(const InviteStatus& value) { m_userInvitationStatusHasBeenSet = true; m_userInvitationStatus = value; }

    /**
     * <p>The user invite status.</p>
     */
    inline void SetUserInvitationStatus(InviteStatus&& value) { m_userInvitationStatusHasBeenSet = true; m_userInvitationStatus = std::move(value); }

    /**
     * <p>The user invite status.</p>
     */
    inline User& WithUserInvitationStatus(const InviteStatus& value) { SetUserInvitationStatus(value); return *this;}

    /**
     * <p>The user invite status.</p>
     */
    inline User& WithUserInvitationStatus(InviteStatus&& value) { SetUserInvitationStatus(std::move(value)); return *this;}


    /**
     * <p>Date and time when the user is registered, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetRegisteredOn() const{ return m_registeredOn; }

    /**
     * <p>Date and time when the user is registered, in ISO 8601 format.</p>
     */
    inline bool RegisteredOnHasBeenSet() const { return m_registeredOnHasBeenSet; }

    /**
     * <p>Date and time when the user is registered, in ISO 8601 format.</p>
     */
    inline void SetRegisteredOn(const Aws::Utils::DateTime& value) { m_registeredOnHasBeenSet = true; m_registeredOn = value; }

    /**
     * <p>Date and time when the user is registered, in ISO 8601 format.</p>
     */
    inline void SetRegisteredOn(Aws::Utils::DateTime&& value) { m_registeredOnHasBeenSet = true; m_registeredOn = std::move(value); }

    /**
     * <p>Date and time when the user is registered, in ISO 8601 format.</p>
     */
    inline User& WithRegisteredOn(const Aws::Utils::DateTime& value) { SetRegisteredOn(value); return *this;}

    /**
     * <p>Date and time when the user is registered, in ISO 8601 format.</p>
     */
    inline User& WithRegisteredOn(Aws::Utils::DateTime&& value) { SetRegisteredOn(std::move(value)); return *this;}


    /**
     * <p>Date and time when the user is invited to the Amazon Chime account, in ISO
     * 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetInvitedOn() const{ return m_invitedOn; }

    /**
     * <p>Date and time when the user is invited to the Amazon Chime account, in ISO
     * 8601 format.</p>
     */
    inline bool InvitedOnHasBeenSet() const { return m_invitedOnHasBeenSet; }

    /**
     * <p>Date and time when the user is invited to the Amazon Chime account, in ISO
     * 8601 format.</p>
     */
    inline void SetInvitedOn(const Aws::Utils::DateTime& value) { m_invitedOnHasBeenSet = true; m_invitedOn = value; }

    /**
     * <p>Date and time when the user is invited to the Amazon Chime account, in ISO
     * 8601 format.</p>
     */
    inline void SetInvitedOn(Aws::Utils::DateTime&& value) { m_invitedOnHasBeenSet = true; m_invitedOn = std::move(value); }

    /**
     * <p>Date and time when the user is invited to the Amazon Chime account, in ISO
     * 8601 format.</p>
     */
    inline User& WithInvitedOn(const Aws::Utils::DateTime& value) { SetInvitedOn(value); return *this;}

    /**
     * <p>Date and time when the user is invited to the Amazon Chime account, in ISO
     * 8601 format.</p>
     */
    inline User& WithInvitedOn(Aws::Utils::DateTime&& value) { SetInvitedOn(std::move(value)); return *this;}


    /**
     * <p>The user's personal meeting PIN.</p>
     */
    inline const Aws::String& GetPersonalPIN() const{ return m_personalPIN; }

    /**
     * <p>The user's personal meeting PIN.</p>
     */
    inline bool PersonalPINHasBeenSet() const { return m_personalPINHasBeenSet; }

    /**
     * <p>The user's personal meeting PIN.</p>
     */
    inline void SetPersonalPIN(const Aws::String& value) { m_personalPINHasBeenSet = true; m_personalPIN = value; }

    /**
     * <p>The user's personal meeting PIN.</p>
     */
    inline void SetPersonalPIN(Aws::String&& value) { m_personalPINHasBeenSet = true; m_personalPIN = std::move(value); }

    /**
     * <p>The user's personal meeting PIN.</p>
     */
    inline void SetPersonalPIN(const char* value) { m_personalPINHasBeenSet = true; m_personalPIN.assign(value); }

    /**
     * <p>The user's personal meeting PIN.</p>
     */
    inline User& WithPersonalPIN(const Aws::String& value) { SetPersonalPIN(value); return *this;}

    /**
     * <p>The user's personal meeting PIN.</p>
     */
    inline User& WithPersonalPIN(Aws::String&& value) { SetPersonalPIN(std::move(value)); return *this;}

    /**
     * <p>The user's personal meeting PIN.</p>
     */
    inline User& WithPersonalPIN(const char* value) { SetPersonalPIN(value); return *this;}

  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_primaryEmail;
    bool m_primaryEmailHasBeenSet;

    Aws::String m_primaryProvisionedNumber;
    bool m_primaryProvisionedNumberHasBeenSet;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;

    License m_licenseType;
    bool m_licenseTypeHasBeenSet;

    RegistrationStatus m_userRegistrationStatus;
    bool m_userRegistrationStatusHasBeenSet;

    InviteStatus m_userInvitationStatus;
    bool m_userInvitationStatusHasBeenSet;

    Aws::Utils::DateTime m_registeredOn;
    bool m_registeredOnHasBeenSet;

    Aws::Utils::DateTime m_invitedOn;
    bool m_invitedOnHasBeenSet;

    Aws::String m_personalPIN;
    bool m_personalPINHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
