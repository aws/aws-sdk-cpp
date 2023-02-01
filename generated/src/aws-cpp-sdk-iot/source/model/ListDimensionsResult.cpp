/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListDimensionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDimensionsResult::ListDimensionsResult()
{
}

ListDimensionsResult::ListDimensionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDimensionsResult& ListDimensionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("dimensionNames"))
  {
    Aws::Utils::Array<JsonView> dimensionNamesJsonList = jsonValue.GetArray("dimensionNames");
    for(unsigned dimensionNamesIndex = 0; dimensionNamesIndex < dimensionNamesJsonList.GetLength(); ++dimensionNamesIndex)
    {
      m_dimensionNames.push_back(dimensionNamesJsonList[dimensionNamesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
