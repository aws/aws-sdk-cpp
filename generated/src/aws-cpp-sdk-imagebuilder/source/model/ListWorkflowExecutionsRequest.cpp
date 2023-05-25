/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ListWorkflowExecutionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListWorkflowExecutionsRequest::ListWorkflowExecutionsRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_imageBuildVersionArnHasBeenSet(false)
{
}

Aws::String ListWorkflowExecutionsRequest::SerializePayload() const
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

  if(m_imageBuildVersionArnHasBeenSet)
  {
   payload.WithString("imageBuildVersionArn", m_imageBuildVersionArn);

  }

  return payload.View().WriteReadable();
}




