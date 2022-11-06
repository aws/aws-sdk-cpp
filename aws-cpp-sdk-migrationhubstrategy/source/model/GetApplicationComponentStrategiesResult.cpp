/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/GetApplicationComponentStrategiesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubStrategyRecommendations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetApplicationComponentStrategiesResult::GetApplicationComponentStrategiesResult()
{
}

GetApplicationComponentStrategiesResult::GetApplicationComponentStrategiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetApplicationComponentStrategiesResult& GetApplicationComponentStrategiesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationComponentStrategies"))
  {
    Aws::Utils::Array<JsonView> applicationComponentStrategiesJsonList = jsonValue.GetArray("applicationComponentStrategies");
    for(unsigned applicationComponentStrategiesIndex = 0; applicationComponentStrategiesIndex < applicationComponentStrategiesJsonList.GetLength(); ++applicationComponentStrategiesIndex)
    {
      m_applicationComponentStrategies.push_back(applicationComponentStrategiesJsonList[applicationComponentStrategiesIndex].AsObject());
    }
  }



  return *this;
}
