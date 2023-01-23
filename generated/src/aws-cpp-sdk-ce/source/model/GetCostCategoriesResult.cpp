/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetCostCategoriesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCostCategoriesResult::GetCostCategoriesResult() : 
    m_returnSize(0),
    m_totalSize(0)
{
}

GetCostCategoriesResult::GetCostCategoriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_returnSize(0),
    m_totalSize(0)
{
  *this = result;
}

GetCostCategoriesResult& GetCostCategoriesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }

  if(jsonValue.ValueExists("CostCategoryNames"))
  {
    Aws::Utils::Array<JsonView> costCategoryNamesJsonList = jsonValue.GetArray("CostCategoryNames");
    for(unsigned costCategoryNamesIndex = 0; costCategoryNamesIndex < costCategoryNamesJsonList.GetLength(); ++costCategoryNamesIndex)
    {
      m_costCategoryNames.push_back(costCategoryNamesJsonList[costCategoryNamesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("CostCategoryValues"))
  {
    Aws::Utils::Array<JsonView> costCategoryValuesJsonList = jsonValue.GetArray("CostCategoryValues");
    for(unsigned costCategoryValuesIndex = 0; costCategoryValuesIndex < costCategoryValuesJsonList.GetLength(); ++costCategoryValuesIndex)
    {
      m_costCategoryValues.push_back(costCategoryValuesJsonList[costCategoryValuesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("ReturnSize"))
  {
    m_returnSize = jsonValue.GetInteger("ReturnSize");

  }

  if(jsonValue.ValueExists("TotalSize"))
  {
    m_totalSize = jsonValue.GetInteger("TotalSize");

  }



  return *this;
}
