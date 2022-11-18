/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-roborunner/model/ListWorkersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTRoboRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWorkersResult::ListWorkersResult()
{
}

ListWorkersResult::ListWorkersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWorkersResult& ListWorkersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("workers"))
  {
    Aws::Utils::Array<JsonView> workersJsonList = jsonValue.GetArray("workers");
    for(unsigned workersIndex = 0; workersIndex < workersJsonList.GetLength(); ++workersIndex)
    {
      m_workers.push_back(workersJsonList[workersIndex].AsObject());
    }
  }



  return *this;
}
