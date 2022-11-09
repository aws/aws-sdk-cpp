/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/ListTestGridSessionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTestGridSessionsResult::ListTestGridSessionsResult()
{
}

ListTestGridSessionsResult::ListTestGridSessionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTestGridSessionsResult& ListTestGridSessionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("testGridSessions"))
  {
    Aws::Utils::Array<JsonView> testGridSessionsJsonList = jsonValue.GetArray("testGridSessions");
    for(unsigned testGridSessionsIndex = 0; testGridSessionsIndex < testGridSessionsJsonList.GetLength(); ++testGridSessionsIndex)
    {
      m_testGridSessions.push_back(testGridSessionsJsonList[testGridSessionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
