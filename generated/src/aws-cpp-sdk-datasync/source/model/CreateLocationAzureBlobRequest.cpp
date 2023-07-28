/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/CreateLocationAzureBlobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLocationAzureBlobRequest::CreateLocationAzureBlobRequest() : 
    m_containerUrlHasBeenSet(false),
    m_authenticationType(AzureBlobAuthenticationType::NOT_SET),
    m_authenticationTypeHasBeenSet(false),
    m_sasConfigurationHasBeenSet(false),
    m_blobType(AzureBlobType::NOT_SET),
    m_blobTypeHasBeenSet(false),
    m_accessTier(AzureAccessTier::NOT_SET),
    m_accessTierHasBeenSet(false),
    m_subdirectoryHasBeenSet(false),
    m_agentArnsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateLocationAzureBlobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_containerUrlHasBeenSet)
  {
   payload.WithString("ContainerUrl", m_containerUrl);

  }

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithString("AuthenticationType", AzureBlobAuthenticationTypeMapper::GetNameForAzureBlobAuthenticationType(m_authenticationType));
  }

  if(m_sasConfigurationHasBeenSet)
  {
   payload.WithObject("SasConfiguration", m_sasConfiguration.Jsonize());

  }

  if(m_blobTypeHasBeenSet)
  {
   payload.WithString("BlobType", AzureBlobTypeMapper::GetNameForAzureBlobType(m_blobType));
  }

  if(m_accessTierHasBeenSet)
  {
   payload.WithString("AccessTier", AzureAccessTierMapper::GetNameForAzureAccessTier(m_accessTier));
  }

  if(m_subdirectoryHasBeenSet)
  {
   payload.WithString("Subdirectory", m_subdirectory);

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

Aws::Http::HeaderValueCollection CreateLocationAzureBlobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.CreateLocationAzureBlob"));
  return headers;

}




