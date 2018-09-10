﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Array<JsonView> dimensionValuesJsonList = jsonValue.GetArray("DimensionValues");
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
