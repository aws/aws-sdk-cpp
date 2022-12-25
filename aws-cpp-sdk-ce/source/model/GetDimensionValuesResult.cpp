/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GetDimensionValuesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDimensionValuesResult::GetDimensionValuesResult() : 
    m_returnSize(0),
    m_totalSize(0)
{
}

GetDimensionValuesResult::GetDimensionValuesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_returnSize(0),
    m_totalSize(0)
{
  *this = result;
}

GetDimensionValuesResult& GetDimensionValuesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DimensionValues"))
  {
    Aws::Utils::Array<JsonView> dimensionValuesJsonList = jsonValue.GetArray("DimensionValues");
    for(unsigned dimensionValuesIndex = 0; dimensionValuesIndex < dimensionValuesJsonList.GetLength(); ++dimensionValuesIndex)
    {
      m_dimensionValues.push_back(dimensionValuesJsonList[dimensionValuesIndex].AsObject());
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

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }



  return *this;
}
