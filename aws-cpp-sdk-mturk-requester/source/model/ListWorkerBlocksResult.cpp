/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/ListWorkerBlocksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWorkerBlocksResult::ListWorkerBlocksResult() : 
    m_numResults(0)
{
}

ListWorkerBlocksResult::ListWorkerBlocksResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_numResults(0)
{
  *this = result;
}

ListWorkerBlocksResult& ListWorkerBlocksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("NumResults"))
  {
    m_numResults = jsonValue.GetInteger("NumResults");

  }

  if(jsonValue.ValueExists("WorkerBlocks"))
  {
    Aws::Utils::Array<JsonView> workerBlocksJsonList = jsonValue.GetArray("WorkerBlocks");
    for(unsigned workerBlocksIndex = 0; workerBlocksIndex < workerBlocksJsonList.GetLength(); ++workerBlocksIndex)
    {
      m_workerBlocks.push_back(workerBlocksJsonList[workerBlocksIndex].AsObject());
    }
  }



  return *this;
}
