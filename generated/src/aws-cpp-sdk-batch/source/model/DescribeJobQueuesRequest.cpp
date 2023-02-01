/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/DescribeJobQueuesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeJobQueuesRequest::DescribeJobQueuesRequest() : 
    m_jobQueuesHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeJobQueuesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobQueuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> jobQueuesJsonList(m_jobQueues.size());
   for(unsigned jobQueuesIndex = 0; jobQueuesIndex < jobQueuesJsonList.GetLength(); ++jobQueuesIndex)
   {
     jobQueuesJsonList[jobQueuesIndex].AsString(m_jobQueues[jobQueuesIndex]);
   }
   payload.WithArray("jobQueues", std::move(jobQueuesJsonList));

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




