/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-roborunner/model/ListWorkerFleetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTRoboRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWorkerFleetsResult::ListWorkerFleetsResult()
{
}

ListWorkerFleetsResult::ListWorkerFleetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWorkerFleetsResult& ListWorkerFleetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("workerFleets"))
  {
    Aws::Utils::Array<JsonView> workerFleetsJsonList = jsonValue.GetArray("workerFleets");
    for(unsigned workerFleetsIndex = 0; workerFleetsIndex < workerFleetsJsonList.GetLength(); ++workerFleetsIndex)
    {
      m_workerFleets.push_back(workerFleetsJsonList[workerFleetsIndex].AsObject());
    }
  }



  return *this;
}
