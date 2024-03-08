/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ListLifecycleExecutionResourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListLifecycleExecutionResourcesRequest::ListLifecycleExecutionResourcesRequest() : 
    m_lifecycleExecutionIdHasBeenSet(false),
    m_parentResourceIdHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListLifecycleExecutionResourcesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_lifecycleExecutionIdHasBeenSet)
  {
   payload.WithString("lifecycleExecutionId", m_lifecycleExecutionId);

  }

  if(m_parentResourceIdHasBeenSet)
  {
   payload.WithString("parentResourceId", m_parentResourceId);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




