/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/ListSimulationJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSimulationJobsResult::ListSimulationJobsResult()
{
}

ListSimulationJobsResult::ListSimulationJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSimulationJobsResult& ListSimulationJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("simulationJobSummaries"))
  {
    Aws::Utils::Array<JsonView> simulationJobSummariesJsonList = jsonValue.GetArray("simulationJobSummaries");
    for(unsigned simulationJobSummariesIndex = 0; simulationJobSummariesIndex < simulationJobSummariesJsonList.GetLength(); ++simulationJobSummariesIndex)
    {
      m_simulationJobSummaries.push_back(simulationJobSummariesJsonList[simulationJobSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
