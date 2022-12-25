/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/CreateDedicatedIpPoolRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDedicatedIpPoolRequest::CreateDedicatedIpPoolRequest() : 
    m_poolNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_scalingMode(ScalingMode::NOT_SET),
    m_scalingModeHasBeenSet(false)
{
}

Aws::String CreateDedicatedIpPoolRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_poolNameHasBeenSet)
  {
   payload.WithString("PoolName", m_poolName);

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

  if(m_scalingModeHasBeenSet)
  {
   payload.WithString("ScalingMode", ScalingModeMapper::GetNameForScalingMode(m_scalingMode));
  }

  return payload.View().WriteReadable();
}




