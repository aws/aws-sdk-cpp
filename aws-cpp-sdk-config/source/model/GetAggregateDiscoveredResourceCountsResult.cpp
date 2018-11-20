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

#include <aws/config/model/GetAggregateDiscoveredResourceCountsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAggregateDiscoveredResourceCountsResult::GetAggregateDiscoveredResourceCountsResult() : 
    m_totalDiscoveredResources(0)
{
}

GetAggregateDiscoveredResourceCountsResult::GetAggregateDiscoveredResourceCountsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_totalDiscoveredResources(0)
{
  *this = result;
}

GetAggregateDiscoveredResourceCountsResult& GetAggregateDiscoveredResourceCountsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TotalDiscoveredResources"))
  {
    m_totalDiscoveredResources = jsonValue.GetInt64("TotalDiscoveredResources");

  }

  if(jsonValue.ValueExists("GroupByKey"))
  {
    m_groupByKey = jsonValue.GetString("GroupByKey");

  }

  if(jsonValue.ValueExists("GroupedResourceCounts"))
  {
    Array<JsonView> groupedResourceCountsJsonList = jsonValue.GetArray("GroupedResourceCounts");
    for(unsigned groupedResourceCountsIndex = 0; groupedResourceCountsIndex < groupedResourceCountsJsonList.GetLength(); ++groupedResourceCountsIndex)
    {
      m_groupedResourceCounts.push_back(groupedResourceCountsJsonList[groupedResourceCountsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
