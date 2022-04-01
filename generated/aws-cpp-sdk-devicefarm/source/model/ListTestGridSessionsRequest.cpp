/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/ListTestGridSessionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListTestGridSessionsRequest::ListTestGridSessionsRequest() : 
    m_projectArnHasBeenSet(false),
    m_status(TestGridSessionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationTimeAfterHasBeenSet(false),
    m_creationTimeBeforeHasBeenSet(false),
    m_endTimeAfterHasBeenSet(false),
    m_endTimeBeforeHasBeenSet(false),
    m_maxResult(0),
    m_maxResultHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListTestGridSessionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectArnHasBeenSet)
  {
   payload.WithString("projectArn", m_projectArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TestGridSessionStatusMapper::GetNameForTestGridSessionStatus(m_status));
  }

  if(m_creationTimeAfterHasBeenSet)
  {
   payload.WithDouble("creationTimeAfter", m_creationTimeAfter.SecondsWithMSPrecision());
  }

  if(m_creationTimeBeforeHasBeenSet)
  {
   payload.WithDouble("creationTimeBefore", m_creationTimeBefore.SecondsWithMSPrecision());
  }

  if(m_endTimeAfterHasBeenSet)
  {
   payload.WithDouble("endTimeAfter", m_endTimeAfter.SecondsWithMSPrecision());
  }

  if(m_endTimeBeforeHasBeenSet)
  {
   payload.WithDouble("endTimeBefore", m_endTimeBefore.SecondsWithMSPrecision());
  }

  if(m_maxResultHasBeenSet)
  {
   payload.WithInteger("maxResult", m_maxResult);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListTestGridSessionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DeviceFarm_20150623.ListTestGridSessions"));
  return headers;

}




