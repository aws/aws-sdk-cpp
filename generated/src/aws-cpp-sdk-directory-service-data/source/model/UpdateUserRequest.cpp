/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directory-service-data/model/UpdateUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DirectoryServiceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

UpdateUserRequest::UpdateUserRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_directoryIdHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_givenNameHasBeenSet(false),
    m_otherAttributesHasBeenSet(false),
    m_sAMAccountNameHasBeenSet(false),
    m_surnameHasBeenSet(false),
    m_updateType(UpdateType::NOT_SET),
    m_updateTypeHasBeenSet(false)
{
}

Aws::String UpdateUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("EmailAddress", m_emailAddress);

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

  if(m_surnameHasBeenSet)
  {
   payload.WithString("Surname", m_surname);

  }

  if(m_updateTypeHasBeenSet)
  {
   payload.WithString("UpdateType", UpdateTypeMapper::GetNameForUpdateType(m_updateType));
  }

  return payload.View().WriteReadable();
}

void UpdateUserRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_directoryIdHasBeenSet)
    {
      ss << m_directoryId;
      uri.AddQueryStringParameter("DirectoryId", ss.str());
      ss.str("");
    }

}



