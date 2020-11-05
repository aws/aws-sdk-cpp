/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/CreateArchiveRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateArchiveRequest::CreateArchiveRequest() : 
    m_archiveNameHasBeenSet(false),
    m_eventSourceArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eventPatternHasBeenSet(false),
    m_retentionDays(0),
    m_retentionDaysHasBeenSet(false)
{
}

Aws::String CreateArchiveRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_archiveNameHasBeenSet)
  {
   payload.WithString("ArchiveName", m_archiveName);

  }

  if(m_eventSourceArnHasBeenSet)
  {
   payload.WithString("EventSourceArn", m_eventSourceArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_eventPatternHasBeenSet)
  {
   payload.WithString("EventPattern", m_eventPattern);

  }

  if(m_retentionDaysHasBeenSet)
  {
   payload.WithInteger("RetentionDays", m_retentionDays);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateArchiveRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSEvents.CreateArchive"));
  return headers;

}




