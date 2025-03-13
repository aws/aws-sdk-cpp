/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directory-service-data/model/User.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryServiceData
{
namespace Model
{

User::User(JsonView jsonValue)
{
  *this = jsonValue;
}

User& User::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DistinguishedName"))
  {
    m_distinguishedName = jsonValue.GetString("DistinguishedName");
    m_distinguishedNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EmailAddress"))
  {
    m_emailAddress = jsonValue.GetString("EmailAddress");
    m_emailAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GivenName"))
  {
    m_givenName = jsonValue.GetString("GivenName");
    m_givenNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OtherAttributes"))
  {
    Aws::Map<Aws::String, JsonView> otherAttributesJsonMap = jsonValue.GetObject("OtherAttributes").GetAllObjects();
    for(auto& otherAttributesItem : otherAttributesJsonMap)
    {
      m_otherAttributes[otherAttributesItem.first] = otherAttributesItem.second.AsObject();
    }
    m_otherAttributesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SAMAccountName"))
  {
    m_sAMAccountName = jsonValue.GetString("SAMAccountName");
    m_sAMAccountNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SID"))
  {
    m_sID = jsonValue.GetString("SID");
    m_sIDHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Surname"))
  {
    m_surname = jsonValue.GetString("Surname");
    m_surnameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserPrincipalName"))
  {
    m_userPrincipalName = jsonValue.GetString("UserPrincipalName");
    m_userPrincipalNameHasBeenSet = true;
  }
  return *this;
}

JsonValue User::Jsonize() const
{
  JsonValue payload;

  if(m_distinguishedNameHasBeenSet)
  {
   payload.WithString("DistinguishedName", m_distinguishedName);

  }

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("EmailAddress", m_emailAddress);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_givenNameHasBeenSet)
  {
   payload.WithString("GivenName", m_givenName);

  }

  if(m_otherAttributesHasBeenSet)
  {
   JsonValue otherAttributesJsonMap;
   for(auto& otherAttributesItem : m_otherAttributes)
   {
     otherAttributesJsonMap.WithObject(otherAttributesItem.first, otherAttributesItem.second.Jsonize());
   }
   payload.WithObject("OtherAttributes", std::move(otherAttributesJsonMap));

  }

  if(m_sAMAccountNameHasBeenSet)
  {
   payload.WithString("SAMAccountName", m_sAMAccountName);

  }

  if(m_sIDHasBeenSet)
  {
   payload.WithString("SID", m_sID);

  }

  if(m_surnameHasBeenSet)
  {
   payload.WithString("Surname", m_surname);

  }

  if(m_userPrincipalNameHasBeenSet)
  {
   payload.WithString("UserPrincipalName", m_userPrincipalName);

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
