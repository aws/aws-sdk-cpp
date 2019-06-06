/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/ssm/model/DescribeOpsItemsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeOpsItemsRequest::DescribeOpsItemsRequest() : 
    m_opsItemFiltersHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeOpsItemsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_opsItemFiltersHasBeenSet)
  {
   Array<JsonValue> opsItemFiltersJsonList(m_opsItemFilters.size());
   for(unsigned opsItemFiltersIndex = 0; opsItemFiltersIndex < opsItemFiltersJsonList.GetLength(); ++opsItemFiltersIndex)
   {
     opsItemFiltersJsonList[opsItemFiltersIndex].AsObject(m_opsItemFilters[opsItemFiltersIndex].Jsonize());
   }
   payload.WithArray("OpsItemFilters", std::move(opsItemFiltersJsonList));

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

Aws::Http::HeaderValueCollection DescribeOpsItemsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.DescribeOpsItems"));
  return headers;

}




