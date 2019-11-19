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

#include <aws/config/model/DescribeOrganizationConformancePacksRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeOrganizationConformancePacksRequest::DescribeOrganizationConformancePacksRequest() : 
    m_organizationConformancePackNamesHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String DescribeOrganizationConformancePacksRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_organizationConformancePackNamesHasBeenSet)
  {
   Array<JsonValue> organizationConformancePackNamesJsonList(m_organizationConformancePackNames.size());
   for(unsigned organizationConformancePackNamesIndex = 0; organizationConformancePackNamesIndex < organizationConformancePackNamesJsonList.GetLength(); ++organizationConformancePackNamesIndex)
   {
     organizationConformancePackNamesJsonList[organizationConformancePackNamesIndex].AsString(m_organizationConformancePackNames[organizationConformancePackNamesIndex]);
   }
   payload.WithArray("OrganizationConformancePackNames", std::move(organizationConformancePackNamesJsonList));

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeOrganizationConformancePacksRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.DescribeOrganizationConformancePacks"));
  return headers;

}




