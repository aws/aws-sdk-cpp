/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/ListCostCategoryDefinitionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCostCategoryDefinitionsResult::ListCostCategoryDefinitionsResult()
{
}

ListCostCategoryDefinitionsResult::ListCostCategoryDefinitionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCostCategoryDefinitionsResult& ListCostCategoryDefinitionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CostCategoryReferences"))
  {
    Aws::Utils::Array<JsonView> costCategoryReferencesJsonList = jsonValue.GetArray("CostCategoryReferences");
    for(unsigned costCategoryReferencesIndex = 0; costCategoryReferencesIndex < costCategoryReferencesJsonList.GetLength(); ++costCategoryReferencesIndex)
    {
      m_costCategoryReferences.push_back(costCategoryReferencesJsonList[costCategoryReferencesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
