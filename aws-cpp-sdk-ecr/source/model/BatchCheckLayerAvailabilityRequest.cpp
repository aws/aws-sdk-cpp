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
#include <aws/ecr/model/BatchCheckLayerAvailabilityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchCheckLayerAvailabilityRequest::BatchCheckLayerAvailabilityRequest() : 
    m_registryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_layerDigestsHasBeenSet(false)
{
}

Aws::String BatchCheckLayerAvailabilityRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_registryIdHasBeenSet)
  {
   payload.WithString("registryId", m_registryId);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_layerDigestsHasBeenSet)
  {
   Array<JsonValue> layerDigestsJsonList(m_layerDigests.size());
   for(unsigned layerDigestsIndex = 0; layerDigestsIndex < layerDigestsJsonList.GetLength(); ++layerDigestsIndex)
   {
     layerDigestsJsonList[layerDigestsIndex].AsString(m_layerDigests[layerDigestsIndex]);
   }
   payload.WithArray("layerDigests", std::move(layerDigestsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection BatchCheckLayerAvailabilityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerRegistry_V20150921.BatchCheckLayerAvailability"));
  return headers;

}



