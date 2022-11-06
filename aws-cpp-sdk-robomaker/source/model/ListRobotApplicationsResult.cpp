/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/ListRobotApplicationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RoboMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRobotApplicationsResult::ListRobotApplicationsResult()
{
}

ListRobotApplicationsResult::ListRobotApplicationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRobotApplicationsResult& ListRobotApplicationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("robotApplicationSummaries"))
  {
    Aws::Utils::Array<JsonView> robotApplicationSummariesJsonList = jsonValue.GetArray("robotApplicationSummaries");
    for(unsigned robotApplicationSummariesIndex = 0; robotApplicationSummariesIndex < robotApplicationSummariesJsonList.GetLength(); ++robotApplicationSummariesIndex)
    {
      m_robotApplicationSummaries.push_back(robotApplicationSummariesJsonList[robotApplicationSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
