/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/UpdateLocationAzureBlobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateLocationAzureBlobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_locationArnHasBeenSet)
  {
   payload.WithString("LocationArn", m_locationArn);

  }

  if(m_subdirectoryHasBeenSet)
  {
   payload.WithString("Subdirectory", m_subdirectory);

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

  if(m_agentArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> agentArnsJsonList(m_agentArns.size());
   for(unsigned agentArnsIndex = 0; agentArnsIndex < agentArnsJsonList.GetLength(); ++agentArnsIndex)
   {
     agentArnsJsonList[agentArnsIndex].AsString(m_agentArns[agentArnsIndex]);
   }
   payload.WithArray("AgentArns", std::move(agentArnsJsonList));

  }

  if(m_cmkSecretConfigHasBeenSet)
  {
   payload.WithObject("CmkSecretConfig", m_cmkSecretConfig.Jsonize());

  }

  if(m_customSecretConfigHasBeenSet)
  {
   payload.WithObject("CustomSecretConfig", m_customSecretConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateLocationAzureBlobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.UpdateLocationAzureBlob"));
  return headers;

}




