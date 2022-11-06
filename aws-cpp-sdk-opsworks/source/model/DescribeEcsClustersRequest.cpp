/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/DescribeEcsClustersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeEcsClustersRequest::DescribeEcsClustersRequest() : 
    m_ecsClusterArnsHasBeenSet(false),
    m_stackIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeEcsClustersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ecsClusterArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ecsClusterArnsJsonList(m_ecsClusterArns.size());
   for(unsigned ecsClusterArnsIndex = 0; ecsClusterArnsIndex < ecsClusterArnsJsonList.GetLength(); ++ecsClusterArnsIndex)
   {
     ecsClusterArnsJsonList[ecsClusterArnsIndex].AsString(m_ecsClusterArns[ecsClusterArnsIndex]);
   }
   payload.WithArray("EcsClusterArns", std::move(ecsClusterArnsJsonList));

  }

  if(m_stackIdHasBeenSet)
  {
   payload.WithString("StackId", m_stackId);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeEcsClustersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DescribeEcsClusters"));
  return headers;

}




