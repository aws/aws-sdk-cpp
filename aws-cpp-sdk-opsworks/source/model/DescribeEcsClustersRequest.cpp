/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> ecsClusterArnsJsonList(m_ecsClusterArns.size());
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeEcsClustersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.DescribeEcsClusters"));
  return headers;

}



