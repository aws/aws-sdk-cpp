/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DescribeDataRepositoryTasksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDataRepositoryTasksResult::DescribeDataRepositoryTasksResult()
{
}

DescribeDataRepositoryTasksResult::DescribeDataRepositoryTasksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeDataRepositoryTasksResult& DescribeDataRepositoryTasksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DataRepositoryTasks"))
  {
    Aws::Utils::Array<JsonView> dataRepositoryTasksJsonList = jsonValue.GetArray("DataRepositoryTasks");
    for(unsigned dataRepositoryTasksIndex = 0; dataRepositoryTasksIndex < dataRepositoryTasksJsonList.GetLength(); ++dataRepositoryTasksIndex)
    {
      m_dataRepositoryTasks.push_back(dataRepositoryTasksJsonList[dataRepositoryTasksIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
