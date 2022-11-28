/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateJobRequest::CreateJobRequest() : 
    m_jobIdHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_documentSourceHasBeenSet(false),
    m_documentHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_presignedUrlConfigHasBeenSet(false),
    m_targetSelection(TargetSelection::NOT_SET),
    m_targetSelectionHasBeenSet(false),
    m_jobExecutionsRolloutConfigHasBeenSet(false),
    m_abortConfigHasBeenSet(false),
    m_timeoutConfigHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_jobTemplateArnHasBeenSet(false),
    m_jobExecutionsRetryConfigHasBeenSet(false),
    m_documentParametersHasBeenSet(false),
    m_schedulingConfigHasBeenSet(false)
{
}

Aws::String CreateJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsString(m_targets[targetsIndex]);
   }
   payload.WithArray("targets", std::move(targetsJsonList));

  }

  if(m_documentSourceHasBeenSet)
  {
   payload.WithString("documentSource", m_documentSource);

  }

  if(m_documentHasBeenSet)
  {
   payload.WithString("document", m_document);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_presignedUrlConfigHasBeenSet)
  {
   payload.WithObject("presignedUrlConfig", m_presignedUrlConfig.Jsonize());

  }

  if(m_targetSelectionHasBeenSet)
  {
   payload.WithString("targetSelection", TargetSelectionMapper::GetNameForTargetSelection(m_targetSelection));
  }

  if(m_jobExecutionsRolloutConfigHasBeenSet)
  {
   payload.WithObject("jobExecutionsRolloutConfig", m_jobExecutionsRolloutConfig.Jsonize());

  }

  if(m_abortConfigHasBeenSet)
  {
   payload.WithObject("abortConfig", m_abortConfig.Jsonize());

  }

  if(m_timeoutConfigHasBeenSet)
  {
   payload.WithObject("timeoutConfig", m_timeoutConfig.Jsonize());

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

  if(m_namespaceIdHasBeenSet)
  {
   payload.WithString("namespaceId", m_namespaceId);

  }

  if(m_jobTemplateArnHasBeenSet)
  {
   payload.WithString("jobTemplateArn", m_jobTemplateArn);

  }

  if(m_jobExecutionsRetryConfigHasBeenSet)
  {
   payload.WithObject("jobExecutionsRetryConfig", m_jobExecutionsRetryConfig.Jsonize());

  }

  if(m_documentParametersHasBeenSet)
  {
   JsonValue documentParametersJsonMap;
   for(auto& documentParametersItem : m_documentParameters)
   {
     documentParametersJsonMap.WithString(documentParametersItem.first, documentParametersItem.second);
   }
   payload.WithObject("documentParameters", std::move(documentParametersJsonMap));

  }

  if(m_schedulingConfigHasBeenSet)
  {
   payload.WithObject("schedulingConfig", m_schedulingConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




