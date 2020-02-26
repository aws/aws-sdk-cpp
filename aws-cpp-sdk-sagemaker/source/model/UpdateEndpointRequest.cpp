/*
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

#include <aws/sagemaker/model/UpdateEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEndpointRequest::UpdateEndpointRequest() : 
    m_endpointNameHasBeenSet(false),
    m_endpointConfigNameHasBeenSet(false),
    m_retainAllVariantProperties(false),
    m_retainAllVariantPropertiesHasBeenSet(false),
    m_excludeRetainedVariantPropertiesHasBeenSet(false)
{
}

Aws::String UpdateEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endpointNameHasBeenSet)
  {
   payload.WithString("EndpointName", m_endpointName);

  }

  if(m_endpointConfigNameHasBeenSet)
  {
   payload.WithString("EndpointConfigName", m_endpointConfigName);

  }

  if(m_retainAllVariantPropertiesHasBeenSet)
  {
   payload.WithBool("RetainAllVariantProperties", m_retainAllVariantProperties);

  }

  if(m_excludeRetainedVariantPropertiesHasBeenSet)
  {
   Array<JsonValue> excludeRetainedVariantPropertiesJsonList(m_excludeRetainedVariantProperties.size());
   for(unsigned excludeRetainedVariantPropertiesIndex = 0; excludeRetainedVariantPropertiesIndex < excludeRetainedVariantPropertiesJsonList.GetLength(); ++excludeRetainedVariantPropertiesIndex)
   {
     excludeRetainedVariantPropertiesJsonList[excludeRetainedVariantPropertiesIndex].AsObject(m_excludeRetainedVariantProperties[excludeRetainedVariantPropertiesIndex].Jsonize());
   }
   payload.WithArray("ExcludeRetainedVariantProperties", std::move(excludeRetainedVariantPropertiesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateEndpointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateEndpoint"));
  return headers;

}




