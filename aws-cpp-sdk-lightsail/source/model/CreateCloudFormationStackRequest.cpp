/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/CreateCloudFormationStackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCloudFormationStackRequest::CreateCloudFormationStackRequest() : 
    m_instancesHasBeenSet(false)
{
}

Aws::String CreateCloudFormationStackRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instancesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instancesJsonList(m_instances.size());
   for(unsigned instancesIndex = 0; instancesIndex < instancesJsonList.GetLength(); ++instancesIndex)
   {
     instancesJsonList[instancesIndex].AsObject(m_instances[instancesIndex].Jsonize());
   }
   payload.WithArray("instances", std::move(instancesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateCloudFormationStackRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.CreateCloudFormationStack"));
  return headers;

}




