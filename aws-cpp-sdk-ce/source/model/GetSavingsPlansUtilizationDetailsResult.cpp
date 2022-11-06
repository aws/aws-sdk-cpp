/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetSavingsPlansUtilizationDetailsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSavingsPlansUtilizationDetailsResult::GetSavingsPlansUtilizationDetailsResult()
{
}

GetSavingsPlansUtilizationDetailsResult::GetSavingsPlansUtilizationDetailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSavingsPlansUtilizationDetailsResult& GetSavingsPlansUtilizationDetailsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SavingsPlansUtilizationDetails"))
  {
    Aws::Utils::Array<JsonView> savingsPlansUtilizationDetailsJsonList = jsonValue.GetArray("SavingsPlansUtilizationDetails");
    for(unsigned savingsPlansUtilizationDetailsIndex = 0; savingsPlansUtilizationDetailsIndex < savingsPlansUtilizationDetailsJsonList.GetLength(); ++savingsPlansUtilizationDetailsIndex)
    {
      m_savingsPlansUtilizationDetails.push_back(savingsPlansUtilizationDetailsJsonList[savingsPlansUtilizationDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Total"))
  {
    m_total = jsonValue.GetObject("Total");

  }

  if(jsonValue.ValueExists("TimePeriod"))
  {
    m_timePeriod = jsonValue.GetObject("TimePeriod");

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
