/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/ListPredictorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPredictorsResult::ListPredictorsResult()
{
}

ListPredictorsResult::ListPredictorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPredictorsResult& ListPredictorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Predictors"))
  {
    Aws::Utils::Array<JsonView> predictorsJsonList = jsonValue.GetArray("Predictors");
    for(unsigned predictorsIndex = 0; predictorsIndex < predictorsJsonList.GetLength(); ++predictorsIndex)
    {
      m_predictors.push_back(predictorsJsonList[predictorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
