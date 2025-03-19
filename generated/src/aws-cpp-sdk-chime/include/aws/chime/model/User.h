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
    AWS_CHIME_API User() = default;
    AWS_CHIME_API User(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API User& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The user ID.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    User& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    User& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary email address of the user.</p>
     */
    inline const Aws::String& GetPrimaryEmail() const { return m_primaryEmail; }
    inline bool PrimaryEmailHasBeenSet() const { return m_primaryEmailHasBeenSet; }
    template<typename PrimaryEmailT = Aws::String>
    void SetPrimaryEmail(PrimaryEmailT&& value) { m_primaryEmailHasBeenSet = true; m_primaryEmail = std::forward<PrimaryEmailT>(value); }
    template<typename PrimaryEmailT = Aws::String>
    User& WithPrimaryEmail(PrimaryEmailT&& value) { SetPrimaryEmail(std::forward<PrimaryEmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary phone number associated with the user.</p>
     */
    inline const Aws::String& GetPrimaryProvisionedNumber() const { return m_primaryProvisionedNumber; }
    inline bool PrimaryProvisionedNumberHasBeenSet() const { return m_primaryProvisionedNumberHasBeenSet; }
    template<typename PrimaryProvisionedNumberT = Aws::String>
    void SetPrimaryProvisionedNumber(PrimaryProvisionedNumberT&& value) { m_primaryProvisionedNumberHasBeenSet = true; m_primaryProvisionedNumber = std::forward<PrimaryProvisionedNumberT>(value); }
    template<typename PrimaryProvisionedNumberT = Aws::String>
    User& WithPrimaryProvisionedNumber(PrimaryProvisionedNumberT&& value) { SetPrimaryProvisionedNumber(std::forward<PrimaryProvisionedNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the user.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    User& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license type for the user.</p>
     */
    inline License GetLicenseType() const { return m_licenseType; }
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }
    inline void SetLicenseType(License value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }
    inline User& WithLicenseType(License value) { SetLicenseType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user type.</p>
     */
    inline UserType GetUserType() const { return m_userType; }
    inline bool UserTypeHasBeenSet() const { return m_userTypeHasBeenSet; }
    inline void SetUserType(UserType value) { m_userTypeHasBeenSet = true; m_userType = value; }
    inline User& WithUserType(UserType value) { SetUserType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user registration status.</p>
     */
    inline RegistrationStatus GetUserRegistrationStatus() const { return m_userRegistrationStatus; }
    inline bool UserRegistrationStatusHasBeenSet() const { return m_userRegistrationStatusHasBeenSet; }
    inline void SetUserRegistrationStatus(RegistrationStatus value) { m_userRegistrationStatusHasBeenSet = true; m_userRegistrationStatus = value; }
    inline User& WithUserRegistrationStatus(RegistrationStatus value) { SetUserRegistrationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user invite status.</p>
     */
    inline InviteStatus GetUserInvitationStatus() const { return m_userInvitationStatus; }
    inline bool UserInvitationStatusHasBeenSet() const { return m_userInvitationStatusHasBeenSet; }
    inline void SetUserInvitationStatus(InviteStatus value) { m_userInvitationStatusHasBeenSet = true; m_userInvitationStatus = value; }
    inline User& WithUserInvitationStatus(InviteStatus value) { SetUserInvitationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time when the user is registered, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetRegisteredOn() const { return m_registeredOn; }
    inline bool RegisteredOnHasBeenSet() const { return m_registeredOnHasBeenSet; }
    template<typename RegisteredOnT = Aws::Utils::DateTime>
    void SetRegisteredOn(RegisteredOnT&& value) { m_registeredOnHasBeenSet = true; m_registeredOn = std::forward<RegisteredOnT>(value); }
    template<typename RegisteredOnT = Aws::Utils::DateTime>
    User& WithRegisteredOn(RegisteredOnT&& value) { SetRegisteredOn(std::forward<RegisteredOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time when the user is invited to the Amazon Chime account, in ISO
     * 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetInvitedOn() const { return m_invitedOn; }
    inline bool InvitedOnHasBeenSet() const { return m_invitedOnHasBeenSet; }
    template<typename InvitedOnT = Aws::Utils::DateTime>
    void SetInvitedOn(InvitedOnT&& value) { m_invitedOnHasBeenSet = true; m_invitedOn = std::forward<InvitedOnT>(value); }
    template<typename InvitedOnT = Aws::Utils::DateTime>
    User& WithInvitedOn(InvitedOnT&& value) { SetInvitedOn(std::forward<InvitedOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Alexa for Business metadata.</p>
     */
    inline const AlexaForBusinessMetadata& GetAlexaForBusinessMetadata() const { return m_alexaForBusinessMetadata; }
    inline bool AlexaForBusinessMetadataHasBeenSet() const { return m_alexaForBusinessMetadataHasBeenSet; }
    template<typename AlexaForBusinessMetadataT = AlexaForBusinessMetadata>
    void SetAlexaForBusinessMetadata(AlexaForBusinessMetadataT&& value) { m_alexaForBusinessMetadataHasBeenSet = true; m_alexaForBusinessMetadata = std::forward<AlexaForBusinessMetadataT>(value); }
    template<typename AlexaForBusinessMetadataT = AlexaForBusinessMetadata>
    User& WithAlexaForBusinessMetadata(AlexaForBusinessMetadataT&& value) { SetAlexaForBusinessMetadata(std::forward<AlexaForBusinessMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user's personal meeting PIN.</p>
     */
    inline const Aws::String& GetPersonalPIN() const { return m_personalPIN; }
    inline bool PersonalPINHasBeenSet() const { return m_personalPINHasBeenSet; }
    template<typename PersonalPINT = Aws::String>
    void SetPersonalPIN(PersonalPINT&& value) { m_personalPINHasBeenSet = true; m_personalPIN = std::forward<PersonalPINT>(value); }
    template<typename PersonalPINT = Aws::String>
    User& WithPersonalPIN(PersonalPINT&& value) { SetPersonalPIN(std::forward<PersonalPINT>(value)); return *this;}
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

    License m_licenseType{License::NOT_SET};
    bool m_licenseTypeHasBeenSet = false;

    UserType m_userType{UserType::NOT_SET};
    bool m_userTypeHasBeenSet = false;

    RegistrationStatus m_userRegistrationStatus{RegistrationStatus::NOT_SET};
    bool m_userRegistrationStatusHasBeenSet = false;

    InviteStatus m_userInvitationStatus{InviteStatus::NOT_SET};
    bool m_userInvitationStatusHasBeenSet = false;

    Aws::Utils::DateTime m_registeredOn{};
    bool m_registeredOnHasBeenSet = false;

    Aws::Utils::DateTime m_invitedOn{};
    bool m_invitedOnHasBeenSet = false;

    AlexaForBusinessMetadata m_alexaForBusinessMetadata;
    bool m_alexaForBusinessMetadataHasBeenSet = false;

    Aws::String m_personalPIN;
    bool m_personalPINHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
