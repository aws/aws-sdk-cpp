/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/ListTagsForResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListTagsForResourceRequest::ListTagsForResourceRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_resourceARNHasBeenSet(false)
{
}

Aws::String ListTagsForResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_resourceARNHasBeenSet)
  {
   payload.WithString("resourceARN", m_resourceARN);

  }

  return payload.View().WriteReadable();
}




