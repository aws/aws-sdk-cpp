/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/DescribeSubnetGroupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DAX::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeSubnetGroupsRequest::DescribeSubnetGroupsRequest() : 
    m_subnetGroupNamesHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeSubnetGroupsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_subnetGroupNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetGroupNamesJsonList(m_subnetGroupNames.size());
   for(unsigned subnetGroupNamesIndex = 0; subnetGroupNamesIndex < subnetGroupNamesJsonList.GetLength(); ++subnetGroupNamesIndex)
   {
     subnetGroupNamesJsonList[subnetGroupNamesIndex].AsString(m_subnetGroupNames[subnetGroupNamesIndex]);
   }
   payload.WithArray("SubnetGroupNames", std::move(subnetGroupNamesJsonList));

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

Aws::Http::HeaderValueCollection DescribeSubnetGroupsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDAXV3.DescribeSubnetGroups"));
  return headers;

}




