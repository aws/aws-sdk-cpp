/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetRelationalDatabaseEventsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRelationalDatabaseEventsRequest::GetRelationalDatabaseEventsRequest() : 
    m_relationalDatabaseNameHasBeenSet(false),
    m_durationInMinutes(0),
    m_durationInMinutesHasBeenSet(false),
    m_pageTokenHasBeenSet(false)
{
}

Aws::String GetRelationalDatabaseEventsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_relationalDatabaseNameHasBeenSet)
  {
   payload.WithString("relationalDatabaseName", m_relationalDatabaseName);

  }

  if(m_durationInMinutesHasBeenSet)
  {
   payload.WithInteger("durationInMinutes", m_durationInMinutes);

  }

  if(m_pageTokenHasBeenSet)
  {
   payload.WithString("pageToken", m_pageToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetRelationalDatabaseEventsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.GetRelationalDatabaseEvents"));
  return headers;

}




