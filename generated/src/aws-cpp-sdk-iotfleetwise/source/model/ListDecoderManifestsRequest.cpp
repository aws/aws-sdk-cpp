﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/ListDecoderManifestsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListDecoderManifestsRequest::ListDecoderManifestsRequest() : 
    m_modelManifestArnHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_listResponseScope(ListResponseScope::NOT_SET),
    m_listResponseScopeHasBeenSet(false)
{
}

Aws::String ListDecoderManifestsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_modelManifestArnHasBeenSet)
  {
   payload.WithString("modelManifestArn", m_modelManifestArn);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_listResponseScopeHasBeenSet)
  {
   payload.WithString("listResponseScope", ListResponseScopeMapper::GetNameForListResponseScope(m_listResponseScope));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListDecoderManifestsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTAutobahnControlPlane.ListDecoderManifests"));
  return headers;

}




