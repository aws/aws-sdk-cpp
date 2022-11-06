/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetMappingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMappingRequest::GetMappingRequest() : 
    m_sourceHasBeenSet(false),
    m_sinksHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

Aws::String GetMappingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("Source", m_source.Jsonize());

  }

  if(m_sinksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sinksJsonList(m_sinks.size());
   for(unsigned sinksIndex = 0; sinksIndex < sinksJsonList.GetLength(); ++sinksIndex)
   {
     sinksJsonList[sinksIndex].AsObject(m_sinks[sinksIndex].Jsonize());
   }
   payload.WithArray("Sinks", std::move(sinksJsonList));

  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("Location", m_location.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetMappingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetMapping"));
  return headers;

}




