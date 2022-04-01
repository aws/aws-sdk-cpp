/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/User.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

User::User() : 
    m_idHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_givenNameHasBeenSet(false),
    m_surnameHasBeenSet(false),
    m_organizationIdHasBeenSet(false),
    m_rootFolderIdHasBeenSet(false),
    m_recycleBinFolderIdHasBeenSet(false),
    m_status(UserStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(UserType::NOT_SET),
    m_typeHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_modifiedTimestampHasBeenSet(false),
    m_timeZoneIdHasBeenSet(false),
    m_locale(LocaleType::NOT_SET),
    m_localeHasBeenSet(false),
    m_storageHasBeenSet(false)
{
}

User::User(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_givenNameHasBeenSet(false),
    m_surnameHasBeenSet(false),
    m_organizationIdHasBeenSet(false),
    m_rootFolderIdHasBeenSet(false),
    m_recycleBinFolderIdHasBeenSet(false),
    m_status(UserStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(UserType::NOT_SET),
    m_typeHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_modifiedTimestampHasBeenSet(false),
    m_timeZoneIdHasBeenSet(false),
    m_locale(LocaleType::NOT_SET),
    m_localeHasBeenSet(false),
    m_storageHasBeenSet(false)
{
  *this = jsonValue;
}

User& User::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

    m_usernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmailAddress"))
  {
    m_emailAddress = jsonValue.GetString("EmailAddress");

    m_emailAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GivenName"))
  {
    m_givenName = jsonValue.GetString("GivenName");

    m_givenNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Surname"))
  {
    m_surname = jsonValue.GetString("Surname");

    m_surnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrganizationId"))
  {
    m_organizationId = jsonValue.GetString("OrganizationId");

    m_organizationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RootFolderId"))
  {
    m_rootFolderId = jsonValue.GetString("RootFolderId");

    m_rootFolderIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecycleBinFolderId"))
  {
    m_recycleBinFolderId = jsonValue.GetString("RecycleBinFolderId");

    m_recycleBinFolderIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = UserStatusTypeMapper::GetUserStatusTypeForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = UserTypeMapper::GetUserTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModifiedTimestamp"))
  {
    m_modifiedTimestamp = jsonValue.GetDouble("ModifiedTimestamp");

    m_modifiedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeZoneId"))
  {
    m_timeZoneId = jsonValue.GetString("TimeZoneId");

    m_timeZoneIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Locale"))
  {
    m_locale = LocaleTypeMapper::GetLocaleTypeForName(jsonValue.GetString("Locale"));

    m_localeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Storage"))
  {
    m_storage = jsonValue.GetObject("Storage");

    m_storageHasBeenSet = true;
  }

  return *this;
}

JsonValue User::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("EmailAddress", m_emailAddress);

  }

  if(m_givenNameHasBeenSet)
  {
   payload.WithString("GivenName", m_givenName);

  }

  if(m_surnameHasBeenSet)
  {
   payload.WithString("Surname", m_surname);

  }

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

  }

  if(m_rootFolderIdHasBeenSet)
  {
   payload.WithString("RootFolderId", m_rootFolderId);

  }

  if(m_recycleBinFolderIdHasBeenSet)
  {
   payload.WithString("RecycleBinFolderId", m_recycleBinFolderId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", UserStatusTypeMapper::GetNameForUserStatusType(m_status));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", UserTypeMapper::GetNameForUserType(m_type));
  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_modifiedTimestampHasBeenSet)
  {
   payload.WithDouble("ModifiedTimestamp", m_modifiedTimestamp.SecondsWithMSPrecision());
  }

  if(m_timeZoneIdHasBeenSet)
  {
   payload.WithString("TimeZoneId", m_timeZoneId);

  }

  if(m_localeHasBeenSet)
  {
   payload.WithString("Locale", LocaleTypeMapper::GetNameForLocaleType(m_locale));
  }

  if(m_storageHasBeenSet)
  {
   payload.WithObject("Storage", m_storage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
