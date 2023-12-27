/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/CreateConfiguredAudienceModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateConfiguredAudienceModelRequest::CreateConfiguredAudienceModelRequest() : 
    m_audienceModelArnHasBeenSet(false),
    m_audienceSizeConfigHasBeenSet(false),
    m_childResourceTagOnCreatePolicy(TagOnCreatePolicy::NOT_SET),
    m_childResourceTagOnCreatePolicyHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_minMatchingSeedSize(0),
    m_minMatchingSeedSizeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_sharedAudienceMetricsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateConfiguredAudienceModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_audienceModelArnHasBeenSet)
  {
   payload.WithString("audienceModelArn", m_audienceModelArn);

  }

  if(m_audienceSizeConfigHasBeenSet)
  {
   payload.WithObject("audienceSizeConfig", m_audienceSizeConfig.Jsonize());

  }

  if(m_childResourceTagOnCreatePolicyHasBeenSet)
  {
   payload.WithString("childResourceTagOnCreatePolicy", TagOnCreatePolicyMapper::GetNameForTagOnCreatePolicy(m_childResourceTagOnCreatePolicy));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_minMatchingSeedSizeHasBeenSet)
  {
   payload.WithInteger("minMatchingSeedSize", m_minMatchingSeedSize);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_outputConfigHasBeenSet)
  {
   payload.WithObject("outputConfig", m_outputConfig.Jsonize());

  }

  if(m_sharedAudienceMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sharedAudienceMetricsJsonList(m_sharedAudienceMetrics.size());
   for(unsigned sharedAudienceMetricsIndex = 0; sharedAudienceMetricsIndex < sharedAudienceMetricsJsonList.GetLength(); ++sharedAudienceMetricsIndex)
   {
     sharedAudienceMetricsJsonList[sharedAudienceMetricsIndex].AsString(SharedAudienceMetricsMapper::GetNameForSharedAudienceMetrics(m_sharedAudienceMetrics[sharedAudienceMetricsIndex]));
   }
   payload.WithArray("sharedAudienceMetrics", std::move(sharedAudienceMetricsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




