/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/ListWhatIfForecastExportsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWhatIfForecastExportsResult::ListWhatIfForecastExportsResult()
{
}

ListWhatIfForecastExportsResult::ListWhatIfForecastExportsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWhatIfForecastExportsResult& ListWhatIfForecastExportsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WhatIfForecastExports"))
  {
    Aws::Utils::Array<JsonView> whatIfForecastExportsJsonList = jsonValue.GetArray("WhatIfForecastExports");
    for(unsigned whatIfForecastExportsIndex = 0; whatIfForecastExportsIndex < whatIfForecastExportsJsonList.GetLength(); ++whatIfForecastExportsIndex)
    {
      m_whatIfForecastExports.push_back(whatIfForecastExportsJsonList[whatIfForecastExportsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
