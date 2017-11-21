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

#include <aws/workdocs/model/UpdateUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateUserRequest::UpdateUserRequest() : 
    m_authenticationTokenHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_givenNameHasBeenSet(false),
    m_surnameHasBeenSet(false),
    m_type(UserType::NOT_SET),
    m_typeHasBeenSet(false),
    m_storageRuleHasBeenSet(false),
    m_timeZoneIdHasBeenSet(false),
    m_locale(LocaleType::NOT_SET),
    m_localeHasBeenSet(false),
    m_grantPoweruserPrivileges(BooleanEnumType::NOT_SET),
    m_grantPoweruserPrivilegesHasBeenSet(false)
{
}

Aws::String UpdateUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_givenNameHasBeenSet)
  {
   payload.WithString("GivenName", m_givenName);

  }

  if(m_surnameHasBeenSet)
  {
   payload.WithString("Surname", m_surname);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", UserTypeMapper::GetNameForUserType(m_type));
  }

  if(m_storageRuleHasBeenSet)
  {
   payload.WithObject("StorageRule", m_storageRule.Jsonize());

  }

  if(m_timeZoneIdHasBeenSet)
  {
   payload.WithString("TimeZoneId", m_timeZoneId);

  }

  if(m_localeHasBeenSet)
  {
   payload.WithString("Locale", LocaleTypeMapper::GetNameForLocaleType(m_locale));
  }

  if(m_grantPoweruserPrivilegesHasBeenSet)
  {
   payload.WithString("GrantPoweruserPrivileges", BooleanEnumTypeMapper::GetNameForBooleanEnumType(m_grantPoweruserPrivileges));
  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateUserRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_authenticationTokenHasBeenSet)
  {
    ss << m_authenticationToken;
    headers.insert(Aws::Http::HeaderValuePair("authentication", ss.str()));
    ss.str("");
  }

  return headers;

}




