/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/DescribeParameterGroupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DAX::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeParameterGroupsRequest::DescribeParameterGroupsRequest() : 
    m_parameterGroupNamesHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeParameterGroupsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_parameterGroupNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parameterGroupNamesJsonList(m_parameterGroupNames.size());
   for(unsigned parameterGroupNamesIndex = 0; parameterGroupNamesIndex < parameterGroupNamesJsonList.GetLength(); ++parameterGroupNamesIndex)
   {
     parameterGroupNamesJsonList[parameterGroupNamesIndex].AsString(m_parameterGroupNames[parameterGroupNamesIndex]);
   }
   payload.WithArray("ParameterGroupNames", std::move(parameterGroupNamesJsonList));

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

Aws::Http::HeaderValueCollection DescribeParameterGroupsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDAXV3.DescribeParameterGroups"));
  return headers;

}




