/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> groupedResourceCountsJsonList = jsonValue.GetArray("GroupedResourceCounts");
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
