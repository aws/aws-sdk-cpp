/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/CreateUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateUserRequest::CreateUserRequest() : 
    m_homeDirectoryHasBeenSet(false),
    m_homeDirectoryType(HomeDirectoryType::NOT_SET),
    m_homeDirectoryTypeHasBeenSet(false),
    m_homeDirectoryMappingsHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_posixProfileHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_serverIdHasBeenSet(false),
    m_sshPublicKeyBodyHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_userNameHasBeenSet(false)
{
}

Aws::String CreateUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_homeDirectoryHasBeenSet)
  {
   payload.WithString("HomeDirectory", m_homeDirectory);

  }

  if(m_homeDirectoryTypeHasBeenSet)
  {
   payload.WithString("HomeDirectoryType", HomeDirectoryTypeMapper::GetNameForHomeDirectoryType(m_homeDirectoryType));
  }

  if(m_homeDirectoryMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> homeDirectoryMappingsJsonList(m_homeDirectoryMappings.size());
   for(unsigned homeDirectoryMappingsIndex = 0; homeDirectoryMappingsIndex < homeDirectoryMappingsJsonList.GetLength(); ++homeDirectoryMappingsIndex)
   {
     homeDirectoryMappingsJsonList[homeDirectoryMappingsIndex].AsObject(m_homeDirectoryMappings[homeDirectoryMappingsIndex].Jsonize());
   }
   payload.WithArray("HomeDirectoryMappings", std::move(homeDirectoryMappingsJsonList));

  }

  if(m_policyHasBeenSet)
  {
   payload.WithString("Policy", m_policy);

  }

  if(m_posixProfileHasBeenSet)
  {
   payload.WithObject("PosixProfile", m_posixProfile.Jsonize());

  }

  if(m_roleHasBeenSet)
  {
   payload.WithString("Role", m_role);

  }

  if(m_serverIdHasBeenSet)
  {
   payload.WithString("ServerId", m_serverId);

  }

  if(m_sshPublicKeyBodyHasBeenSet)
  {
   payload.WithString("SshPublicKeyBody", m_sshPublicKeyBody);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_userNameHasBeenSet)
  {
   payload.WithString("UserName", m_userName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateUserRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.CreateUser"));
  return headers;

}




