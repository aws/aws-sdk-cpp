/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codedeploy/model/AddTagsToOnPremisesInstancesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::codedeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AddTagsToOnPremisesInstancesRequest::AddTagsToOnPremisesInstancesRequest()
{
}

Aws::String AddTagsToOnPremisesInstancesRequest::SerializePayload() const
{
  JsonValue payload;

  Array<JsonValue> tagsJsonList(m_tags.size());
  for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
  {
    tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
  }
  payload.WithArray("tags", std::move(tagsJsonList));

  Array<JsonValue> instanceNamesJsonList(m_instanceNames.size());
  for(unsigned instanceNamesIndex = 0; instanceNamesIndex < instanceNamesJsonList.GetLength(); ++instanceNamesIndex)
  {
    instanceNamesJsonList[instanceNamesIndex].AsString(m_instanceNames[instanceNamesIndex]);
  }
  payload.WithArray("instanceNames", std::move(instanceNamesJsonList));

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection AddTagsToOnPremisesInstancesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeDeploy_20141006.AddTagsToOnPremisesInstances"));
  return std::move(headers);

}



