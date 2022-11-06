/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/ListSimulationJobBatchesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSimulationJobBatchesResult::ListSimulationJobBatchesResult()
{
}

ListSimulationJobBatchesResult::ListSimulationJobBatchesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSimulationJobBatchesResult& ListSimulationJobBatchesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("simulationJobBatchSummaries"))
  {
    Aws::Utils::Array<JsonView> simulationJobBatchSummariesJsonList = jsonValue.GetArray("simulationJobBatchSummaries");
    for(unsigned simulationJobBatchSummariesIndex = 0; simulationJobBatchSummariesIndex < simulationJobBatchSummariesJsonList.GetLength(); ++simulationJobBatchSummariesIndex)
    {
      m_simulationJobBatchSummaries.push_back(simulationJobBatchSummariesJsonList[simulationJobBatchSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
