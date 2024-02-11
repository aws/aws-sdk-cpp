/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/BatchStartViewerSessionRevocationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchStartViewerSessionRevocationRequest::BatchStartViewerSessionRevocationRequest() : 
    m_viewerSessionsHasBeenSet(false)
{
}

Aws::String BatchStartViewerSessionRevocationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_viewerSessionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> viewerSessionsJsonList(m_viewerSessions.size());
   for(unsigned viewerSessionsIndex = 0; viewerSessionsIndex < viewerSessionsJsonList.GetLength(); ++viewerSessionsIndex)
   {
     viewerSessionsJsonList[viewerSessionsIndex].AsObject(m_viewerSessions[viewerSessionsIndex].Jsonize());
   }
   payload.WithArray("viewerSessions", std::move(viewerSessionsJsonList));

  }

  return payload.View().WriteReadable();
}




