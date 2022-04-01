﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/CreateStudioRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateStudioRequest::CreateStudioRequest() : 
    m_adminRoleArnHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_displayNameHasBeenSet(false),
    m_studioEncryptionConfigurationHasBeenSet(false),
    m_studioNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_userRoleArnHasBeenSet(false)
{
}

Aws::String CreateStudioRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_adminRoleArnHasBeenSet)
  {
   payload.WithString("adminRoleArn", m_adminRoleArn);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_studioEncryptionConfigurationHasBeenSet)
  {
   payload.WithObject("studioEncryptionConfiguration", m_studioEncryptionConfiguration.Jsonize());

  }

  if(m_studioNameHasBeenSet)
  {
   payload.WithString("studioName", m_studioName);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_userRoleArnHasBeenSet)
  {
   payload.WithString("userRoleArn", m_userRoleArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateStudioRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_clientTokenHasBeenSet)
  {
    ss << m_clientToken;
    headers.emplace("x-amz-client-token",  ss.str());
    ss.str("");
  }

  return headers;

}




