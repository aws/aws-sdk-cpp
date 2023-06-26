/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/UpdateDiscoveryJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDiscoveryJobRequest::UpdateDiscoveryJobRequest() : 
    m_discoveryJobArnHasBeenSet(false),
    m_collectionDurationMinutes(0),
    m_collectionDurationMinutesHasBeenSet(false)
{
}

Aws::String UpdateDiscoveryJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_discoveryJobArnHasBeenSet)
  {
   payload.WithString("DiscoveryJobArn", m_discoveryJobArn);

  }

  if(m_collectionDurationMinutesHasBeenSet)
  {
   payload.WithInteger("CollectionDurationMinutes", m_collectionDurationMinutes);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDiscoveryJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.UpdateDiscoveryJob"));
  return headers;

}




