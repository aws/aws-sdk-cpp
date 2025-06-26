/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspacesstreams/model/GetStreamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KeyspacesStreams::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetStreamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_streamArnHasBeenSet)
  {
   payload.WithString("streamArn", m_streamArn);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_shardFilterHasBeenSet)
  {
   payload.WithObject("shardFilter", m_shardFilter.Jsonize());

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetStreamRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "KeyspacesStreams.GetStream"));
  return headers;

}




