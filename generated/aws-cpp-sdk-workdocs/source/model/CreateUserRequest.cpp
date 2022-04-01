/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/CreateUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateUserRequest::CreateUserRequest() : 
    m_organizationIdHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_givenNameHasBeenSet(false),
    m_surnameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_timeZoneIdHasBeenSet(false),
    m_storageRuleHasBeenSet(false),
    m_authenticationTokenHasBeenSet(false)
{
}

Aws::String CreateUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationIdHasBeenSet)
  {
   payload.WithString("OrganizationId", m_organizationId);

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

  if(m_passwordHasBeenSet)
  {
   payload.WithString("Password", m_password);

  }

  if(m_timeZoneIdHasBeenSet)
  {
   payload.WithString("TimeZoneId", m_timeZoneId);

  }

  if(m_storageRuleHasBeenSet)
  {
   payload.WithObject("StorageRule", m_storageRule.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateUserRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_authenticationTokenHasBeenSet)
  {
    ss << m_authenticationToken;
    headers.emplace("authentication",  ss.str());
    ss.str("");
  }

  return headers;

}




