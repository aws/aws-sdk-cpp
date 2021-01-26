/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/GetResourceConfigHistoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetResourceConfigHistoryRequest::GetResourceConfigHistoryRequest() : 
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_laterTimeHasBeenSet(false),
    m_earlierTimeHasBeenSet(false),
    m_chronologicalOrder(ChronologicalOrder::NOT_SET),
    m_chronologicalOrderHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String GetResourceConfigHistoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("resourceId", m_resourceId);

  }

  if(m_laterTimeHasBeenSet)
  {
   payload.WithDouble("laterTime", m_laterTime.SecondsWithMSPrecision());
  }

  if(m_earlierTimeHasBeenSet)
  {
   payload.WithDouble("earlierTime", m_earlierTime.SecondsWithMSPrecision());
  }

  if(m_chronologicalOrderHasBeenSet)
  {
   payload.WithString("chronologicalOrder", ChronologicalOrderMapper::GetNameForChronologicalOrder(m_chronologicalOrder));
  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("limit", m_limit);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetResourceConfigHistoryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.GetResourceConfigHistory"));
  return headers;

}




