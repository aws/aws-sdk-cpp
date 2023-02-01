/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateCustomMetricRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCustomMetricRequest::CreateCustomMetricRequest() : 
    m_metricNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_metricType(CustomMetricType::NOT_SET),
    m_metricTypeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true)
{
}

Aws::String CreateCustomMetricRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_metricTypeHasBeenSet)
  {
   payload.WithString("metricType", CustomMetricTypeMapper::GetNameForCustomMetricType(m_metricType));
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

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  return payload.View().WriteReadable();
}




