/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/ListStageSessionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ivsrealtime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListStageSessionsRequest::ListStageSessionsRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_stageArnHasBeenSet(false)
{
}

Aws::String ListStageSessionsRequest::SerializePayload() const
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

  if(m_stageArnHasBeenSet)
  {
   payload.WithString("stageArn", m_stageArn);

  }

  return payload.View().WriteReadable();
}




