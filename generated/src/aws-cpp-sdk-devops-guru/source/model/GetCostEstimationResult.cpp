/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/GetCostEstimationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCostEstimationResult::GetCostEstimationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCostEstimationResult& GetCostEstimationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceCollection"))
  {
    m_resourceCollection = jsonValue.GetObject("ResourceCollection");
    m_resourceCollectionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = CostEstimationStatusMapper::GetCostEstimationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Costs"))
  {
    Aws::Utils::Array<JsonView> costsJsonList = jsonValue.GetArray("Costs");
    for(unsigned costsIndex = 0; costsIndex < costsJsonList.GetLength(); ++costsIndex)
    {
      m_costs.push_back(costsJsonList[costsIndex].AsObject());
    }
    m_costsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeRange"))
  {
    m_timeRange = jsonValue.GetObject("TimeRange");
    m_timeRangeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalCost"))
  {
    m_totalCost = jsonValue.GetDouble("TotalCost");
    m_totalCostHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
