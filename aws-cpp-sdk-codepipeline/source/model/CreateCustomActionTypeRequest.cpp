/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/CreateCustomActionTypeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCustomActionTypeRequest::CreateCustomActionTypeRequest() : 
    m_category(ActionCategory::NOT_SET),
    m_categoryHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_configurationPropertiesHasBeenSet(false),
    m_inputArtifactDetailsHasBeenSet(false),
    m_outputArtifactDetailsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateCustomActionTypeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_categoryHasBeenSet)
  {
   payload.WithString("category", ActionCategoryMapper::GetNameForActionCategory(m_category));
  }

  if(m_providerHasBeenSet)
  {
   payload.WithString("provider", m_provider);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_settingsHasBeenSet)
  {
   payload.WithObject("settings", m_settings.Jsonize());

  }

  if(m_configurationPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configurationPropertiesJsonList(m_configurationProperties.size());
   for(unsigned configurationPropertiesIndex = 0; configurationPropertiesIndex < configurationPropertiesJsonList.GetLength(); ++configurationPropertiesIndex)
   {
     configurationPropertiesJsonList[configurationPropertiesIndex].AsObject(m_configurationProperties[configurationPropertiesIndex].Jsonize());
   }
   payload.WithArray("configurationProperties", std::move(configurationPropertiesJsonList));

  }

  if(m_inputArtifactDetailsHasBeenSet)
  {
   payload.WithObject("inputArtifactDetails", m_inputArtifactDetails.Jsonize());

  }

  if(m_outputArtifactDetailsHasBeenSet)
  {
   payload.WithObject("outputArtifactDetails", m_outputArtifactDetails.Jsonize());

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

Aws::Http::HeaderValueCollection CreateCustomActionTypeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodePipeline_20150709.CreateCustomActionType"));
  return headers;

}




