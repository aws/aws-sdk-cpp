/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListThingRegistrationTasksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListThingRegistrationTasksResult::ListThingRegistrationTasksResult()
{
}

ListThingRegistrationTasksResult::ListThingRegistrationTasksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListThingRegistrationTasksResult& ListThingRegistrationTasksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("taskIds"))
  {
    Aws::Utils::Array<JsonView> taskIdsJsonList = jsonValue.GetArray("taskIds");
    for(unsigned taskIdsIndex = 0; taskIdsIndex < taskIdsJsonList.GetLength(); ++taskIdsIndex)
    {
      m_taskIds.push_back(taskIdsJsonList[taskIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
