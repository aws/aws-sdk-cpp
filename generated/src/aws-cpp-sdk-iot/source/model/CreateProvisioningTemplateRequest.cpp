/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateProvisioningTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateProvisioningTemplateRequest::CreateProvisioningTemplateRequest() : 
    m_templateNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_templateBodyHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_provisioningRoleArnHasBeenSet(false),
    m_preProvisioningHookHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_type(TemplateType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String CreateProvisioningTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("templateName", m_templateName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_templateBodyHasBeenSet)
  {
   payload.WithString("templateBody", m_templateBody);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_provisioningRoleArnHasBeenSet)
  {
   payload.WithString("provisioningRoleArn", m_provisioningRoleArn);

  }

  if(m_preProvisioningHookHasBeenSet)
  {
   payload.WithObject("preProvisioningHook", m_preProvisioningHook.Jsonize());

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

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TemplateTypeMapper::GetNameForTemplateType(m_type));
  }

  return payload.View().WriteReadable();
}




