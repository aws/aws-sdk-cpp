﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetCostAndUsageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCostAndUsageResult::GetCostAndUsageResult()
{
}

GetCostAndUsageResult::GetCostAndUsageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCostAndUsageResult& GetCostAndUsageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }

  if(jsonValue.ValueExists("GroupDefinitions"))
  {
    Array<JsonView> groupDefinitionsJsonList = jsonValue.GetArray("GroupDefinitions");
    for(unsigned groupDefinitionsIndex = 0; groupDefinitionsIndex < groupDefinitionsJsonList.GetLength(); ++groupDefinitionsIndex)
    {
      m_groupDefinitions.push_back(groupDefinitionsJsonList[groupDefinitionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ResultsByTime"))
  {
    Array<JsonView> resultsByTimeJsonList = jsonValue.GetArray("ResultsByTime");
    for(unsigned resultsByTimeIndex = 0; resultsByTimeIndex < resultsByTimeJsonList.GetLength(); ++resultsByTimeIndex)
    {
      m_resultsByTime.push_back(resultsByTimeJsonList[resultsByTimeIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("DimensionValueAttributes"))
  {
    Array<JsonView> dimensionValueAttributesJsonList = jsonValue.GetArray("DimensionValueAttributes");
    for(unsigned dimensionValueAttributesIndex = 0; dimensionValueAttributesIndex < dimensionValueAttributesJsonList.GetLength(); ++dimensionValueAttributesIndex)
    {
      m_dimensionValueAttributes.push_back(dimensionValueAttributesJsonList[dimensionValueAttributesIndex].AsObject());
    }
  }



  return *this;
}
