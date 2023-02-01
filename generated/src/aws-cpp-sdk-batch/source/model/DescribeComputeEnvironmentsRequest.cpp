/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/DescribeComputeEnvironmentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeComputeEnvironmentsRequest::DescribeComputeEnvironmentsRequest() : 
    m_computeEnvironmentsHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeComputeEnvironmentsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_computeEnvironmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> computeEnvironmentsJsonList(m_computeEnvironments.size());
   for(unsigned computeEnvironmentsIndex = 0; computeEnvironmentsIndex < computeEnvironmentsJsonList.GetLength(); ++computeEnvironmentsIndex)
   {
     computeEnvironmentsJsonList[computeEnvironmentsIndex].AsString(m_computeEnvironments[computeEnvironmentsIndex]);
   }
   payload.WithArray("computeEnvironments", std::move(computeEnvironmentsJsonList));

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




