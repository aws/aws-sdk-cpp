/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/DescribeClustersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DAX::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeClustersRequest::DescribeClustersRequest() : 
    m_clusterNamesHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeClustersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clusterNamesJsonList(m_clusterNames.size());
   for(unsigned clusterNamesIndex = 0; clusterNamesIndex < clusterNamesJsonList.GetLength(); ++clusterNamesIndex)
   {
     clusterNamesJsonList[clusterNamesIndex].AsString(m_clusterNames[clusterNamesIndex]);
   }
   payload.WithArray("ClusterNames", std::move(clusterNamesJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeClustersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDAXV3.DescribeClusters"));
  return headers;

}




