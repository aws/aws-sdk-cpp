/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/CreatePersistentAppUIRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreatePersistentAppUIRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetResourceArnHasBeenSet)
  {
   payload.WithString("TargetResourceArn", m_targetResourceArn);

  }

  if(m_eMRContainersConfigHasBeenSet)
  {
   payload.WithObject("EMRContainersConfig", m_eMRContainersConfig.Jsonize());

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

  if(m_xRefererHasBeenSet)
  {
   payload.WithString("XReferer", m_xReferer);

  }

  if(m_profilerTypeHasBeenSet)
  {
   payload.WithString("ProfilerType", ProfilerTypeMapper::GetNameForProfilerType(m_profilerType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreatePersistentAppUIRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.CreatePersistentAppUI"));
  return headers;

}




