/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lightsail/model/CreateInstancesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateInstancesRequest::CreateInstancesRequest() : 
    m_instanceNamesHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_customImageNameHasBeenSet(false),
    m_blueprintIdHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_keyPairNameHasBeenSet(false)
{
}

Aws::String CreateInstancesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceNamesHasBeenSet)
  {
   Array<JsonValue> instanceNamesJsonList(m_instanceNames.size());
   for(unsigned instanceNamesIndex = 0; instanceNamesIndex < instanceNamesJsonList.GetLength(); ++instanceNamesIndex)
   {
     instanceNamesJsonList[instanceNamesIndex].AsString(m_instanceNames[instanceNamesIndex]);
   }
   payload.WithArray("instanceNames", std::move(instanceNamesJsonList));

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_customImageNameHasBeenSet)
  {
   payload.WithString("customImageName", m_customImageName);

  }

  if(m_blueprintIdHasBeenSet)
  {
   payload.WithString("blueprintId", m_blueprintId);

  }

  if(m_bundleIdHasBeenSet)
  {
   payload.WithString("bundleId", m_bundleId);

  }

  if(m_userDataHasBeenSet)
  {
   payload.WithString("userData", m_userData);

  }

  if(m_keyPairNameHasBeenSet)
  {
   payload.WithString("keyPairName", m_keyPairName);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateInstancesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.CreateInstances"));
  return headers;

}




