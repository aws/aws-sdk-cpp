/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/ListWhatIfAnalysesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWhatIfAnalysesResult::ListWhatIfAnalysesResult()
{
}

ListWhatIfAnalysesResult::ListWhatIfAnalysesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWhatIfAnalysesResult& ListWhatIfAnalysesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WhatIfAnalyses"))
  {
    Aws::Utils::Array<JsonView> whatIfAnalysesJsonList = jsonValue.GetArray("WhatIfAnalyses");
    for(unsigned whatIfAnalysesIndex = 0; whatIfAnalysesIndex < whatIfAnalysesJsonList.GetLength(); ++whatIfAnalysesIndex)
    {
      m_whatIfAnalyses.push_back(whatIfAnalysesJsonList[whatIfAnalysesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
