/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/ListWorldExportJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWorldExportJobsResult::ListWorldExportJobsResult()
{
}

ListWorldExportJobsResult::ListWorldExportJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWorldExportJobsResult& ListWorldExportJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("worldExportJobSummaries"))
  {
    Aws::Utils::Array<JsonView> worldExportJobSummariesJsonList = jsonValue.GetArray("worldExportJobSummaries");
    for(unsigned worldExportJobSummariesIndex = 0; worldExportJobSummariesIndex < worldExportJobSummariesJsonList.GetLength(); ++worldExportJobSummariesIndex)
    {
      m_worldExportJobSummaries.push_back(worldExportJobSummariesJsonList[worldExportJobSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
