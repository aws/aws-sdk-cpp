﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_quotaHasBeenSet(false)
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
   Array<JsonValue> apiStagesJsonList(m_apiStages.size());
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

  return payload.View().WriteReadable();
}




