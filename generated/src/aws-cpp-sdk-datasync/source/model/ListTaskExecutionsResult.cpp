/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/ListTaskExecutionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTaskExecutionsResult::ListTaskExecutionsResult()
{
}

ListTaskExecutionsResult::ListTaskExecutionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTaskExecutionsResult& ListTaskExecutionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TaskExecutions"))
  {
    Aws::Utils::Array<JsonView> taskExecutionsJsonList = jsonValue.GetArray("TaskExecutions");
    for(unsigned taskExecutionsIndex = 0; taskExecutionsIndex < taskExecutionsJsonList.GetLength(); ++taskExecutionsIndex)
    {
      m_taskExecutions.push_back(taskExecutionsJsonList[taskExecutionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
