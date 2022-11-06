/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateFeatureGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFeatureGroupRequest::CreateFeatureGroupRequest() : 
    m_featureGroupNameHasBeenSet(false),
    m_recordIdentifierFeatureNameHasBeenSet(false),
    m_eventTimeFeatureNameHasBeenSet(false),
    m_featureDefinitionsHasBeenSet(false),
    m_onlineStoreConfigHasBeenSet(false),
    m_offlineStoreConfigHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateFeatureGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_featureGroupNameHasBeenSet)
  {
   payload.WithString("FeatureGroupName", m_featureGroupName);

  }

  if(m_recordIdentifierFeatureNameHasBeenSet)
  {
   payload.WithString("RecordIdentifierFeatureName", m_recordIdentifierFeatureName);

  }

  if(m_eventTimeFeatureNameHasBeenSet)
  {
   payload.WithString("EventTimeFeatureName", m_eventTimeFeatureName);

  }

  if(m_featureDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> featureDefinitionsJsonList(m_featureDefinitions.size());
   for(unsigned featureDefinitionsIndex = 0; featureDefinitionsIndex < featureDefinitionsJsonList.GetLength(); ++featureDefinitionsIndex)
   {
     featureDefinitionsJsonList[featureDefinitionsIndex].AsObject(m_featureDefinitions[featureDefinitionsIndex].Jsonize());
   }
   payload.WithArray("FeatureDefinitions", std::move(featureDefinitionsJsonList));

  }

  if(m_onlineStoreConfigHasBeenSet)
  {
   payload.WithObject("OnlineStoreConfig", m_onlineStoreConfig.Jsonize());

  }

  if(m_offlineStoreConfigHasBeenSet)
  {
   payload.WithObject("OfflineStoreConfig", m_offlineStoreConfig.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

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

Aws::Http::HeaderValueCollection CreateFeatureGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateFeatureGroup"));
  return headers;

}




