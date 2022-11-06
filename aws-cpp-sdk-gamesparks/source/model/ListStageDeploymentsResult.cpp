/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/ListStageDeploymentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameSparks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListStageDeploymentsResult::ListStageDeploymentsResult()
{
}

ListStageDeploymentsResult::ListStageDeploymentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListStageDeploymentsResult& ListStageDeploymentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("StageDeployments"))
  {
    Aws::Utils::Array<JsonView> stageDeploymentsJsonList = jsonValue.GetArray("StageDeployments");
    for(unsigned stageDeploymentsIndex = 0; stageDeploymentsIndex < stageDeploymentsJsonList.GetLength(); ++stageDeploymentsIndex)
    {
      m_stageDeployments.push_back(stageDeploymentsJsonList[stageDeploymentsIndex].AsObject());
    }
  }



  return *this;
}
