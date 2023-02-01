/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/SearchQuantumTasksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Braket::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchQuantumTasksResult::SearchQuantumTasksResult()
{
}

SearchQuantumTasksResult::SearchQuantumTasksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SearchQuantumTasksResult& SearchQuantumTasksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("quantumTasks"))
  {
    Aws::Utils::Array<JsonView> quantumTasksJsonList = jsonValue.GetArray("quantumTasks");
    for(unsigned quantumTasksIndex = 0; quantumTasksIndex < quantumTasksJsonList.GetLength(); ++quantumTasksIndex)
    {
      m_quantumTasks.push_back(quantumTasksJsonList[quantumTasksIndex].AsObject());
    }
  }



  return *this;
}
