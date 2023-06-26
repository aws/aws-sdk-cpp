/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/User.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

User::User() : 
    m_userIdHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_primaryEmailHasBeenSet(false),
    m_primaryProvisionedNumberHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_licenseType(License::NOT_SET),
    m_licenseTypeHasBeenSet(false),
    m_userType(UserType::NOT_SET),
    m_userTypeHasBeenSet(false),
    m_userRegistrationStatus(RegistrationStatus::NOT_SET),
    m_userRegistrationStatusHasBeenSet(false),
    m_userInvitationStatus(InviteStatus::NOT_SET),
    m_userInvitationStatusHasBeenSet(false),
    m_registeredOnHasBeenSet(false),
    m_invitedOnHasBeenSet(false),
    m_alexaForBusinessMetadataHasBeenSet(false),
    m_personalPINHasBeenSet(false)
{
}

User::User(JsonView jsonValue) : 
    m_userIdHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_primaryEmailHasBeenSet(false),
    m_primaryProvisionedNumberHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_licenseType(License::NOT_SET),
    m_licenseTypeHasBeenSet(false),
    m_userType(UserType::NOT_SET),
    m_userTypeHasBeenSet(false),
    m_userRegistrationStatus(RegistrationStatus::NOT_SET),
    m_userRegistrationStatusHasBeenSet(false),
    m_userInvitationStatus(InviteStatus::NOT_SET),
    m_userInvitationStatusHasBeenSet(false),
    m_registeredOnHasBeenSet(false),
    m_invitedOnHasBeenSet(false),
    m_alexaForBusinessMetadataHasBeenSet(false),
    m_personalPINHasBeenSet(false)
{
  *this = jsonValue;
}

User& User::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");

    m_userIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrimaryEmail"))
  {
    m_primaryEmail = jsonValue.GetString("PrimaryEmail");

    m_primaryEmailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrimaryProvisionedNumber"))
  {
    m_primaryProvisionedNumber = jsonValue.GetString("PrimaryProvisionedNumber");

    m_primaryProvisionedNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LicenseType"))
  {
    m_licenseType = LicenseMapper::GetLicenseForName(jsonValue.GetString("LicenseType"));

    m_licenseTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserType"))
  {
    m_userType = UserTypeMapper::GetUserTypeForName(jsonValue.GetString("UserType"));

    m_userTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserRegistrationStatus"))
  {
    m_userRegistrationStatus = RegistrationStatusMapper::GetRegistrationStatusForName(jsonValue.GetString("UserRegistrationStatus"));

    m_userRegistrationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserInvitationStatus"))
  {
    m_userInvitationStatus = InviteStatusMapper::GetInviteStatusForName(jsonValue.GetString("UserInvitationStatus"));

    m_userInvitationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegisteredOn"))
  {
    m_registeredOn = jsonValue.GetString("RegisteredOn");

    m_registeredOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvitedOn"))
  {
    m_invitedOn = jsonValue.GetString("InvitedOn");

    m_invitedOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlexaForBusinessMetadata"))
  {
    m_alexaForBusinessMetadata = jsonValue.GetObject("AlexaForBusinessMetadata");

    m_alexaForBusinessMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PersonalPIN"))
  {
    m_personalPIN = jsonValue.GetString("PersonalPIN");

    m_personalPINHasBeenSet = true;
  }

  return *this;
}

JsonValue User::Jsonize() const
{
  JsonValue payload;

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_primaryEmailHasBeenSet)
  {
   payload.WithString("PrimaryEmail", m_primaryEmail);

  }

  if(m_primaryProvisionedNumberHasBeenSet)
  {
   payload.WithString("PrimaryProvisionedNumber", m_primaryProvisionedNumber);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_licenseTypeHasBeenSet)
  {
   payload.WithString("LicenseType", LicenseMapper::GetNameForLicense(m_licenseType));
  }

  if(m_userTypeHasBeenSet)
  {
   payload.WithString("UserType", UserTypeMapper::GetNameForUserType(m_userType));
  }

  if(m_userRegistrationStatusHasBeenSet)
  {
   payload.WithString("UserRegistrationStatus", RegistrationStatusMapper::GetNameForRegistrationStatus(m_userRegistrationStatus));
  }

  if(m_userInvitationStatusHasBeenSet)
  {
   payload.WithString("UserInvitationStatus", InviteStatusMapper::GetNameForInviteStatus(m_userInvitationStatus));
  }

  if(m_registeredOnHasBeenSet)
  {
   payload.WithString("RegisteredOn", m_registeredOn.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_invitedOnHasBeenSet)
  {
   payload.WithString("InvitedOn", m_invitedOn.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_alexaForBusinessMetadataHasBeenSet)
  {
   payload.WithObject("AlexaForBusinessMetadata", m_alexaForBusinessMetadata.Jsonize());

  }

  if(m_personalPINHasBeenSet)
  {
   payload.WithString("PersonalPIN", m_personalPIN);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
