/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/CreateAutoScalingConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAutoScalingConfigurationRequest::CreateAutoScalingConfigurationRequest() : 
    m_autoScalingConfigurationNameHasBeenSet(false),
    m_maxConcurrency(0),
    m_maxConcurrencyHasBeenSet(false),
    m_minSize(0),
    m_minSizeHasBeenSet(false),
    m_maxSize(0),
    m_maxSizeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateAutoScalingConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_autoScalingConfigurationNameHasBeenSet)
  {
   payload.WithString("AutoScalingConfigurationName", m_autoScalingConfigurationName);

  }

  if(m_maxConcurrencyHasBeenSet)
  {
   payload.WithInteger("MaxConcurrency", m_maxConcurrency);

  }

  if(m_minSizeHasBeenSet)
  {
   payload.WithInteger("MinSize", m_minSize);

  }

  if(m_maxSizeHasBeenSet)
  {
   payload.WithInteger("MaxSize", m_maxSize);

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

Aws::Http::HeaderValueCollection CreateAutoScalingConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AppRunner.CreateAutoScalingConfiguration"));
  return headers;

}




