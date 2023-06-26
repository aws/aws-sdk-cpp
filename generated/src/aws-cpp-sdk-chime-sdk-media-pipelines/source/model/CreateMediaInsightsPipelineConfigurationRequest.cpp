/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/CreateMediaInsightsPipelineConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKMediaPipelines::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMediaInsightsPipelineConfigurationRequest::CreateMediaInsightsPipelineConfigurationRequest() : 
    m_mediaInsightsPipelineConfigurationNameHasBeenSet(false),
    m_resourceAccessRoleArnHasBeenSet(false),
    m_realTimeAlertConfigurationHasBeenSet(false),
    m_elementsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true)
{
}

Aws::String CreateMediaInsightsPipelineConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_mediaInsightsPipelineConfigurationNameHasBeenSet)
  {
   payload.WithString("MediaInsightsPipelineConfigurationName", m_mediaInsightsPipelineConfigurationName);

  }

  if(m_resourceAccessRoleArnHasBeenSet)
  {
   payload.WithString("ResourceAccessRoleArn", m_resourceAccessRoleArn);

  }

  if(m_realTimeAlertConfigurationHasBeenSet)
  {
   payload.WithObject("RealTimeAlertConfiguration", m_realTimeAlertConfiguration.Jsonize());

  }

  if(m_elementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> elementsJsonList(m_elements.size());
   for(unsigned elementsIndex = 0; elementsIndex < elementsJsonList.GetLength(); ++elementsIndex)
   {
     elementsJsonList[elementsIndex].AsObject(m_elements[elementsIndex].Jsonize());
   }
   payload.WithArray("Elements", std::move(elementsJsonList));

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

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




