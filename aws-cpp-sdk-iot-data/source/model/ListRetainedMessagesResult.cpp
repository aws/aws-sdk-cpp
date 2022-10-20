/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-data/model/ListRetainedMessagesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTDataPlane::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRetainedMessagesResult::ListRetainedMessagesResult()
{
}

ListRetainedMessagesResult::ListRetainedMessagesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRetainedMessagesResult& ListRetainedMessagesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("retainedTopics"))
  {
    Aws::Utils::Array<JsonView> retainedTopicsJsonList = jsonValue.GetArray("retainedTopics");
    for(unsigned retainedTopicsIndex = 0; retainedTopicsIndex < retainedTopicsJsonList.GetLength(); ++retainedTopicsIndex)
    {
      m_retainedTopics.push_back(retainedTopicsJsonList[retainedTopicsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
