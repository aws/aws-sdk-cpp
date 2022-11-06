/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetMLTaskRunsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMLTaskRunsResult::GetMLTaskRunsResult()
{
}

GetMLTaskRunsResult::GetMLTaskRunsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMLTaskRunsResult& GetMLTaskRunsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TaskRuns"))
  {
    Aws::Utils::Array<JsonView> taskRunsJsonList = jsonValue.GetArray("TaskRuns");
    for(unsigned taskRunsIndex = 0; taskRunsIndex < taskRunsJsonList.GetLength(); ++taskRunsIndex)
    {
      m_taskRuns.push_back(taskRunsJsonList[taskRunsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
