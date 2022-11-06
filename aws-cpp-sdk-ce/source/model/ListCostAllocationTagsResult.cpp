/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/ListCostAllocationTagsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCostAllocationTagsResult::ListCostAllocationTagsResult()
{
}

ListCostAllocationTagsResult::ListCostAllocationTagsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCostAllocationTagsResult& ListCostAllocationTagsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CostAllocationTags"))
  {
    Aws::Utils::Array<JsonView> costAllocationTagsJsonList = jsonValue.GetArray("CostAllocationTags");
    for(unsigned costAllocationTagsIndex = 0; costAllocationTagsIndex < costAllocationTagsJsonList.GetLength(); ++costAllocationTagsIndex)
    {
      m_costAllocationTags.push_back(costAllocationTagsJsonList[costAllocationTagsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
