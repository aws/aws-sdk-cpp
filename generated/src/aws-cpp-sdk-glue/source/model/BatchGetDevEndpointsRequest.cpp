/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchGetDevEndpointsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetDevEndpointsRequest::BatchGetDevEndpointsRequest() : 
    m_devEndpointNamesHasBeenSet(false)
{
}

Aws::String BatchGetDevEndpointsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_devEndpointNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> devEndpointNamesJsonList(m_devEndpointNames.size());
   for(unsigned devEndpointNamesIndex = 0; devEndpointNamesIndex < devEndpointNamesJsonList.GetLength(); ++devEndpointNamesIndex)
   {
     devEndpointNamesJsonList[devEndpointNamesIndex].AsString(m_devEndpointNames[devEndpointNamesIndex]);
   }
   payload.WithArray("DevEndpointNames", std::move(devEndpointNamesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetDevEndpointsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.BatchGetDevEndpoints"));
  return headers;

}




