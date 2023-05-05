/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/CreateUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FinSpaceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateUserRequest::CreateUserRequest() : 
    m_emailAddressHasBeenSet(false),
    m_type(UserType::NOT_SET),
    m_typeHasBeenSet(false),
    m_firstNameHasBeenSet(false),
    m_lastNameHasBeenSet(false),
    m_apiAccess(ApiAccess::NOT_SET),
    m_apiAccessHasBeenSet(false),
    m_apiAccessPrincipalArnHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CreateUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("emailAddress", m_emailAddress);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", UserTypeMapper::GetNameForUserType(m_type));
  }

  if(m_firstNameHasBeenSet)
  {
   payload.WithString("firstName", m_firstName);

  }

  if(m_lastNameHasBeenSet)
  {
   payload.WithString("lastName", m_lastName);

  }

  if(m_apiAccessHasBeenSet)
  {
   payload.WithString("ApiAccess", ApiAccessMapper::GetNameForApiAccess(m_apiAccess));
  }

  if(m_apiAccessPrincipalArnHasBeenSet)
  {
   payload.WithString("apiAccessPrincipalArn", m_apiAccessPrincipalArn);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




