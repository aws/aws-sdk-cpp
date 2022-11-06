/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/ListFuotaTasksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFuotaTasksResult::ListFuotaTasksResult()
{
}

ListFuotaTasksResult::ListFuotaTasksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFuotaTasksResult& ListFuotaTasksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("FuotaTaskList"))
  {
    Aws::Utils::Array<JsonView> fuotaTaskListJsonList = jsonValue.GetArray("FuotaTaskList");
    for(unsigned fuotaTaskListIndex = 0; fuotaTaskListIndex < fuotaTaskListJsonList.GetLength(); ++fuotaTaskListIndex)
    {
      m_fuotaTaskList.push_back(fuotaTaskListJsonList[fuotaTaskListIndex].AsObject());
    }
  }



  return *this;
}
