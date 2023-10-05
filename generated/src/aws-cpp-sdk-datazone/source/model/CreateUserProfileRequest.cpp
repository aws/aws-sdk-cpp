/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateUserProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateUserProfileRequest::CreateUserProfileRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_domainIdentifierHasBeenSet(false),
    m_userIdentifierHasBeenSet(false),
    m_userType(UserType::NOT_SET),
    m_userTypeHasBeenSet(false)
{
}

Aws::String CreateUserProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_userIdentifierHasBeenSet)
  {
   payload.WithString("userIdentifier", m_userIdentifier);

  }

  if(m_userTypeHasBeenSet)
  {
   payload.WithString("userType", UserTypeMapper::GetNameForUserType(m_userType));
  }

  return payload.View().WriteReadable();
}




