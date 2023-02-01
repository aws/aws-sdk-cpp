/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/CreateLocationSmbRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLocationSmbRequest::CreateLocationSmbRequest() : 
    m_subdirectoryHasBeenSet(false),
    m_serverHostnameHasBeenSet(false),
    m_userHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_agentArnsHasBeenSet(false),
    m_mountOptionsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateLocationSmbRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_subdirectoryHasBeenSet)
  {
   payload.WithString("Subdirectory", m_subdirectory);

  }

  if(m_serverHostnameHasBeenSet)
  {
   payload.WithString("ServerHostname", m_serverHostname);

  }

  if(m_userHasBeenSet)
  {
   payload.WithString("User", m_user);

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", m_domain);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("Password", m_password);

  }

  if(m_agentArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> agentArnsJsonList(m_agentArns.size());
   for(unsigned agentArnsIndex = 0; agentArnsIndex < agentArnsJsonList.GetLength(); ++agentArnsIndex)
   {
     agentArnsJsonList[agentArnsIndex].AsString(m_agentArns[agentArnsIndex]);
   }
   payload.WithArray("AgentArns", std::move(agentArnsJsonList));

  }

  if(m_mountOptionsHasBeenSet)
  {
   payload.WithObject("MountOptions", m_mountOptions.Jsonize());

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateLocationSmbRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.CreateLocationSmb"));
  return headers;

}




