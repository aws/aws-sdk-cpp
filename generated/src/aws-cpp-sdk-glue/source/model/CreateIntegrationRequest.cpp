/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CreateIntegrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateIntegrationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_integrationNameHasBeenSet)
  {
   payload.WithString("IntegrationName", m_integrationName);

  }

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("SourceArn", m_sourceArn);

  }

  if(m_targetArnHasBeenSet)
  {
   payload.WithString("TargetArn", m_targetArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_dataFilterHasBeenSet)
  {
   payload.WithString("DataFilter", m_dataFilter);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_additionalEncryptionContextHasBeenSet)
  {
   JsonValue additionalEncryptionContextJsonMap;
   for(auto& additionalEncryptionContextItem : m_additionalEncryptionContext)
   {
     additionalEncryptionContextJsonMap.WithString(additionalEncryptionContextItem.first, additionalEncryptionContextItem.second);
   }
   payload.WithObject("AdditionalEncryptionContext", std::move(additionalEncryptionContextJsonMap));

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

  if(m_integrationConfigHasBeenSet)
  {
   payload.WithObject("IntegrationConfig", m_integrationConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateIntegrationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.CreateIntegration"));
  return headers;

}




