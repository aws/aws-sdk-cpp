/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetCostAndUsageComparisonsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCostAndUsageComparisonsResult::GetCostAndUsageComparisonsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCostAndUsageComparisonsResult& GetCostAndUsageComparisonsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CostAndUsageComparisons"))
  {
    Aws::Utils::Array<JsonView> costAndUsageComparisonsJsonList = jsonValue.GetArray("CostAndUsageComparisons");
    for(unsigned costAndUsageComparisonsIndex = 0; costAndUsageComparisonsIndex < costAndUsageComparisonsJsonList.GetLength(); ++costAndUsageComparisonsIndex)
    {
      m_costAndUsageComparisons.push_back(costAndUsageComparisonsJsonList[costAndUsageComparisonsIndex].AsObject());
    }
    m_costAndUsageComparisonsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalCostAndUsage"))
  {
    Aws::Map<Aws::String, JsonView> totalCostAndUsageJsonMap = jsonValue.GetObject("TotalCostAndUsage").GetAllObjects();
    for(auto& totalCostAndUsageItem : totalCostAndUsageJsonMap)
    {
      m_totalCostAndUsage[totalCostAndUsageItem.first] = totalCostAndUsageItem.second.AsObject();
    }
    m_totalCostAndUsageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");
    m_nextPageTokenHasBeenSet = true;
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
