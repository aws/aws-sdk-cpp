/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/CreateSourceLocationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaTailor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSourceLocationRequest::CreateSourceLocationRequest() : 
    m_accessConfigurationHasBeenSet(false),
    m_defaultSegmentDeliveryConfigurationHasBeenSet(false),
    m_httpConfigurationHasBeenSet(false),
    m_segmentDeliveryConfigurationsHasBeenSet(false),
    m_sourceLocationNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateSourceLocationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accessConfigurationHasBeenSet)
  {
   payload.WithObject("AccessConfiguration", m_accessConfiguration.Jsonize());

  }

  if(m_defaultSegmentDeliveryConfigurationHasBeenSet)
  {
   payload.WithObject("DefaultSegmentDeliveryConfiguration", m_defaultSegmentDeliveryConfiguration.Jsonize());

  }

  if(m_httpConfigurationHasBeenSet)
  {
   payload.WithObject("HttpConfiguration", m_httpConfiguration.Jsonize());

  }

  if(m_segmentDeliveryConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> segmentDeliveryConfigurationsJsonList(m_segmentDeliveryConfigurations.size());
   for(unsigned segmentDeliveryConfigurationsIndex = 0; segmentDeliveryConfigurationsIndex < segmentDeliveryConfigurationsJsonList.GetLength(); ++segmentDeliveryConfigurationsIndex)
   {
     segmentDeliveryConfigurationsJsonList[segmentDeliveryConfigurationsIndex].AsObject(m_segmentDeliveryConfigurations[segmentDeliveryConfigurationsIndex].Jsonize());
   }
   payload.WithArray("SegmentDeliveryConfigurations", std::move(segmentDeliveryConfigurationsJsonList));

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




