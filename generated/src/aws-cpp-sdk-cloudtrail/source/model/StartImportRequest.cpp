/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/StartImportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartImportRequest::StartImportRequest() : 
    m_destinationsHasBeenSet(false),
    m_importSourceHasBeenSet(false),
    m_startEventTimeHasBeenSet(false),
    m_endEventTimeHasBeenSet(false),
    m_importIdHasBeenSet(false)
{
}

Aws::String StartImportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_destinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationsJsonList(m_destinations.size());
   for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
   {
     destinationsJsonList[destinationsIndex].AsString(m_destinations[destinationsIndex]);
   }
   payload.WithArray("Destinations", std::move(destinationsJsonList));

  }

  if(m_importSourceHasBeenSet)
  {
   payload.WithObject("ImportSource", m_importSource.Jsonize());

  }

  if(m_startEventTimeHasBeenSet)
  {
   payload.WithDouble("StartEventTime", m_startEventTime.SecondsWithMSPrecision());
  }

  if(m_endEventTimeHasBeenSet)
  {
   payload.WithDouble("EndEventTime", m_endEventTime.SecondsWithMSPrecision());
  }

  if(m_importIdHasBeenSet)
  {
   payload.WithString("ImportId", m_importId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartImportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.StartImport"));
  return headers;

}




