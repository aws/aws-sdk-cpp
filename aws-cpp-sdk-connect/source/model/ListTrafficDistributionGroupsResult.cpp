/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListTrafficDistributionGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTrafficDistributionGroupsResult::ListTrafficDistributionGroupsResult()
{
}

ListTrafficDistributionGroupsResult::ListTrafficDistributionGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTrafficDistributionGroupsResult& ListTrafficDistributionGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("TrafficDistributionGroupSummaryList"))
  {
    Aws::Utils::Array<JsonView> trafficDistributionGroupSummaryListJsonList = jsonValue.GetArray("TrafficDistributionGroupSummaryList");
    for(unsigned trafficDistributionGroupSummaryListIndex = 0; trafficDistributionGroupSummaryListIndex < trafficDistributionGroupSummaryListJsonList.GetLength(); ++trafficDistributionGroupSummaryListIndex)
    {
      m_trafficDistributionGroupSummaryList.push_back(trafficDistributionGroupSummaryListJsonList[trafficDistributionGroupSummaryListIndex].AsObject());
    }
  }



  return *this;
}
