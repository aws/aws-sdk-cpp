/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/ListApplicationComponentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubStrategyRecommendations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListApplicationComponentsResult::ListApplicationComponentsResult()
{
}

ListApplicationComponentsResult::ListApplicationComponentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListApplicationComponentsResult& ListApplicationComponentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationComponentInfos"))
  {
    Aws::Utils::Array<JsonView> applicationComponentInfosJsonList = jsonValue.GetArray("applicationComponentInfos");
    for(unsigned applicationComponentInfosIndex = 0; applicationComponentInfosIndex < applicationComponentInfosJsonList.GetLength(); ++applicationComponentInfosIndex)
    {
      m_applicationComponentInfos.push_back(applicationComponentInfosJsonList[applicationComponentInfosIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
