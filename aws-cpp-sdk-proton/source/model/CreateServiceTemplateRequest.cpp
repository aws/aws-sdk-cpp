/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/CreateServiceTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateServiceTemplateRequest::CreateServiceTemplateRequest() : 
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_encryptionKeyHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_pipelineProvisioning(Provisioning::NOT_SET),
    m_pipelineProvisioningHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateServiceTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_encryptionKeyHasBeenSet)
  {
   payload.WithString("encryptionKey", m_encryptionKey);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_pipelineProvisioningHasBeenSet)
  {
   payload.WithString("pipelineProvisioning", ProvisioningMapper::GetNameForProvisioning(m_pipelineProvisioning));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateServiceTemplateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.CreateServiceTemplate"));
  return headers;

}




