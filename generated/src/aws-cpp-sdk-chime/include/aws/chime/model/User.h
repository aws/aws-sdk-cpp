/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/License.h>
#include <aws/chime/model/UserType.h>
#include <aws/chime/model/RegistrationStatus.h>
#include <aws/chime/model/InviteStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/chime/model/AlexaForBusinessMetadata.h>
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
  class User
  {
  public:
    AWS_CHIME_API User();
    AWS_CHIME_API User(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API User& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user ID.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline User& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline User& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline User& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline User& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline User& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline User& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary email address of the user.</p>
     */
    inline const Aws::String& GetPrimaryEmail() const{ return m_primaryEmail; }
    inline bool PrimaryEmailHasBeenSet() const { return m_primaryEmailHasBeenSet; }
    inline void SetPrimaryEmail(const Aws::String& value) { m_primaryEmailHasBeenSet = true; m_primaryEmail = value; }
    inline void SetPrimaryEmail(Aws::String&& value) { m_primaryEmailHasBeenSet = true; m_primaryEmail = std::move(value); }
    inline void SetPrimaryEmail(const char* value) { m_primaryEmailHasBeenSet = true; m_primaryEmail.assign(value); }
    inline User& WithPrimaryEmail(const Aws::String& value) { SetPrimaryEmail(value); return *this;}
    inline User& WithPrimaryEmail(Aws::String&& value) { SetPrimaryEmail(std::move(value)); return *this;}
    inline User& WithPrimaryEmail(const char* value) { SetPrimaryEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary phone number associated with the user.</p>
     */
    inline const Aws::String& GetPrimaryProvisionedNumber() const{ return m_primaryProvisionedNumber; }
    inline bool PrimaryProvisionedNumberHasBeenSet() const { return m_primaryProvisionedNumberHasBeenSet; }
    inline void SetPrimaryProvisionedNumber(const Aws::String& value) { m_primaryProvisionedNumberHasBeenSet = true; m_primaryProvisionedNumber = value; }
    inline void SetPrimaryProvisionedNumber(Aws::String&& value) { m_primaryProvisionedNumberHasBeenSet = true; m_primaryProvisionedNumber = std::move(value); }
    inline void SetPrimaryProvisionedNumber(const char* value) { m_primaryProvisionedNumberHasBeenSet = true; m_primaryProvisionedNumber.assign(value); }
    inline User& WithPrimaryProvisionedNumber(const Aws::String& value) { SetPrimaryProvisionedNumber(value); return *this;}
    inline User& WithPrimaryProvisionedNumber(Aws::String&& value) { SetPrimaryProvisionedNumber(std::move(value)); return *this;}
    inline User& WithPrimaryProvisionedNumber(const char* value) { SetPrimaryProvisionedNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the user.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline User& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline User& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline User& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license type for the user.</p>
     */
    inline const License& GetLicenseType() const{ return m_licenseType; }
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }
    inline void SetLicenseType(const License& value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }
    inline void SetLicenseType(License&& value) { m_licenseTypeHasBeenSet = true; m_licenseType = std::move(value); }
    inline User& WithLicenseType(const License& value) { SetLicenseType(value); return *this;}
    inline User& WithLicenseType(License&& value) { SetLicenseType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user type.</p>
     */
    inline const UserType& GetUserType() const{ return m_userType; }
    inline bool UserTypeHasBeenSet() const { return m_userTypeHasBeenSet; }
    inline void SetUserType(const UserType& value) { m_userTypeHasBeenSet = true; m_userType = value; }
    inline void SetUserType(UserType&& value) { m_userTypeHasBeenSet = true; m_userType = std::move(value); }
    inline User& WithUserType(const UserType& value) { SetUserType(value); return *this;}
    inline User& WithUserType(UserType&& value) { SetUserType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user registration status.</p>
     */
    inline const RegistrationStatus& GetUserRegistrationStatus() const{ return m_userRegistrationStatus; }
    inline bool UserRegistrationStatusHasBeenSet() const { return m_userRegistrationStatusHasBeenSet; }
    inline void SetUserRegistrationStatus(const RegistrationStatus& value) { m_userRegistrationStatusHasBeenSet = true; m_userRegistrationStatus = value; }
    inline void SetUserRegistrationStatus(RegistrationStatus&& value) { m_userRegistrationStatusHasBeenSet = true; m_userRegistrationStatus = std::move(value); }
    inline User& WithUserRegistrationStatus(const RegistrationStatus& value) { SetUserRegistrationStatus(value); return *this;}
    inline User& WithUserRegistrationStatus(RegistrationStatus&& value) { SetUserRegistrationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user invite status.</p>
     */
    inline const InviteStatus& GetUserInvitationStatus() const{ return m_userInvitationStatus; }
    inline bool UserInvitationStatusHasBeenSet() const { return m_userInvitationStatusHasBeenSet; }
    inline void SetUserInvitationStatus(const InviteStatus& value) { m_userInvitationStatusHasBeenSet = true; m_userInvitationStatus = value; }
    inline void SetUserInvitationStatus(InviteStatus&& value) { m_userInvitationStatusHasBeenSet = true; m_userInvitationStatus = std::move(value); }
    inline User& WithUserInvitationStatus(const InviteStatus& value) { SetUserInvitationStatus(value); return *this;}
    inline User& WithUserInvitationStatus(InviteStatus&& value) { SetUserInvitationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time when the user is registered, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetRegisteredOn() const{ return m_registeredOn; }
    inline bool RegisteredOnHasBeenSet() const { return m_registeredOnHasBeenSet; }
    inline void SetRegisteredOn(const Aws::Utils::DateTime& value) { m_registeredOnHasBeenSet = true; m_registeredOn = value; }
    inline void SetRegisteredOn(Aws::Utils::DateTime&& value) { m_registeredOnHasBeenSet = true; m_registeredOn = std::move(value); }
    inline User& WithRegisteredOn(const Aws::Utils::DateTime& value) { SetRegisteredOn(value); return *this;}
    inline User& WithRegisteredOn(Aws::Utils::DateTime&& value) { SetRegisteredOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time when the user is invited to the Amazon Chime account, in ISO
     * 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetInvitedOn() const{ return m_invitedOn; }
    inline bool InvitedOnHasBeenSet() const { return m_invitedOnHasBeenSet; }
    inline void SetInvitedOn(const Aws::Utils::DateTime& value) { m_invitedOnHasBeenSet = true; m_invitedOn = value; }
    inline void SetInvitedOn(Aws::Utils::DateTime&& value) { m_invitedOnHasBeenSet = true; m_invitedOn = std::move(value); }
    inline User& WithInvitedOn(const Aws::Utils::DateTime& value) { SetInvitedOn(value); return *this;}
    inline User& WithInvitedOn(Aws::Utils::DateTime&& value) { SetInvitedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Alexa for Business metadata.</p>
     */
    inline const AlexaForBusinessMetadata& GetAlexaForBusinessMetadata() const{ return m_alexaForBusinessMetadata; }
    inline bool AlexaForBusinessMetadataHasBeenSet() const { return m_alexaForBusinessMetadataHasBeenSet; }
    inline void SetAlexaForBusinessMetadata(const AlexaForBusinessMetadata& value) { m_alexaForBusinessMetadataHasBeenSet = true; m_alexaForBusinessMetadata = value; }
    inline void SetAlexaForBusinessMetadata(AlexaForBusinessMetadata&& value) { m_alexaForBusinessMetadataHasBeenSet = true; m_alexaForBusinessMetadata = std::move(value); }
    inline User& WithAlexaForBusinessMetadata(const AlexaForBusinessMetadata& value) { SetAlexaForBusinessMetadata(value); return *this;}
    inline User& WithAlexaForBusinessMetadata(AlexaForBusinessMetadata&& value) { SetAlexaForBusinessMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user's personal meeting PIN.</p>
     */
    inline const Aws::String& GetPersonalPIN() const{ return m_personalPIN; }
    inline bool PersonalPINHasBeenSet() const { return m_personalPINHasBeenSet; }
    inline void SetPersonalPIN(const Aws::String& value) { m_personalPINHasBeenSet = true; m_personalPIN = value; }
    inline void SetPersonalPIN(Aws::String&& value) { m_personalPINHasBeenSet = true; m_personalPIN = std::move(value); }
    inline void SetPersonalPIN(const char* value) { m_personalPINHasBeenSet = true; m_personalPIN.assign(value); }
    inline User& WithPersonalPIN(const Aws::String& value) { SetPersonalPIN(value); return *this;}
    inline User& WithPersonalPIN(Aws::String&& value) { SetPersonalPIN(std::move(value)); return *this;}
    inline User& WithPersonalPIN(const char* value) { SetPersonalPIN(value); return *this;}
    ///@}
  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_primaryEmail;
    bool m_primaryEmailHasBeenSet = false;

    Aws::String m_primaryProvisionedNumber;
    bool m_primaryProvisionedNumberHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    License m_licenseType;
    bool m_licenseTypeHasBeenSet = false;

    UserType m_userType;
    bool m_userTypeHasBeenSet = false;

    RegistrationStatus m_userRegistrationStatus;
    bool m_userRegistrationStatusHasBeenSet = false;

    InviteStatus m_userInvitationStatus;
    bool m_userInvitationStatusHasBeenSet = false;

    Aws::Utils::DateTime m_registeredOn;
    bool m_registeredOnHasBeenSet = false;

    Aws::Utils::DateTime m_invitedOn;
    bool m_invitedOnHasBeenSet = false;

    AlexaForBusinessMetadata m_alexaForBusinessMetadata;
    bool m_alexaForBusinessMetadataHasBeenSet = false;

    Aws::String m_personalPIN;
    bool m_personalPINHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
