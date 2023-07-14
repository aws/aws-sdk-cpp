/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/StartRouteAnalysisRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartRouteAnalysisRequest::StartRouteAnalysisRequest() : 
    m_globalNetworkIdHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_includeReturnPath(false),
    m_includeReturnPathHasBeenSet(false),
    m_useMiddleboxes(false),
    m_useMiddleboxesHasBeenSet(false)
{
}

Aws::String StartRouteAnalysisRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("Source", m_source.Jsonize());

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("Destination", m_destination.Jsonize());

  }

  if(m_includeReturnPathHasBeenSet)
  {
   payload.WithBool("IncludeReturnPath", m_includeReturnPath);

  }

  if(m_useMiddleboxesHasBeenSet)
  {
   payload.WithBool("UseMiddleboxes", m_useMiddleboxes);

  }

  return payload.View().WriteReadable();
}




