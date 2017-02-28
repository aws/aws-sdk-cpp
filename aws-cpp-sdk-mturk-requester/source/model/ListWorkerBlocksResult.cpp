/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/mturk-requester/model/ListWorkerBlocksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
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

ListWorkerBlocksResult::ListWorkerBlocksResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_numResults(0)
{
  *this = result;
}

ListWorkerBlocksResult& ListWorkerBlocksResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
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
    Array<JsonValue> workerBlocksJsonList = jsonValue.GetArray("WorkerBlocks");
    for(unsigned workerBlocksIndex = 0; workerBlocksIndex < workerBlocksJsonList.GetLength(); ++workerBlocksIndex)
    {
      m_workerBlocks.push_back(workerBlocksJsonList[workerBlocksIndex].AsObject());
    }
  }



  return *this;
}
