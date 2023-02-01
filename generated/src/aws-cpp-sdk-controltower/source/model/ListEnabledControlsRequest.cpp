/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/ListEnabledControlsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ControlTower::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListEnabledControlsRequest::ListEnabledControlsRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_targetIdentifierHasBeenSet(false)
{
}

Aws::String ListEnabledControlsRequest::SerializePayload() const
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

  if(m_targetIdentifierHasBeenSet)
  {
   payload.WithString("targetIdentifier", m_targetIdentifier);

  }

  return payload.View().WriteReadable();
}




