/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/CreateUsagePlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateUsagePlanRequest::CreateUsagePlanRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_apiStagesHasBeenSet(false),
    m_throttleHasBeenSet(false),
    m_quotaHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateUsagePlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_apiStagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> apiStagesJsonList(m_apiStages.size());
   for(unsigned apiStagesIndex = 0; apiStagesIndex < apiStagesJsonList.GetLength(); ++apiStagesIndex)
   {
     apiStagesJsonList[apiStagesIndex].AsObject(m_apiStages[apiStagesIndex].Jsonize());
   }
   payload.WithArray("apiStages", std::move(apiStagesJsonList));

  }

  if(m_throttleHasBeenSet)
  {
   payload.WithObject("throttle", m_throttle.Jsonize());

  }

  if(m_quotaHasBeenSet)
  {
   payload.WithObject("quota", m_quota.Jsonize());

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




