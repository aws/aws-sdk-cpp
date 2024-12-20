/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/BatchWriteItemResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchWriteItemResult::BatchWriteItemResult()
{
}

BatchWriteItemResult::BatchWriteItemResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchWriteItemResult& BatchWriteItemResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Responses"))
  {
    Aws::Map<Aws::String, JsonView> responsesJsonMap = jsonValue.GetObject("Responses").GetAllObjects();
    for(auto& responsesItem : responsesJsonMap)
    {
      m_responses[responsesItem.first] = responsesItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("UnprocessedItems"))
  {
    Aws::Map<Aws::String, JsonView> unprocessedItemsJsonMap = jsonValue.GetObject("UnprocessedItems").GetAllObjects();
    for(auto& unprocessedItemsItem : unprocessedItemsJsonMap)
    {
      Aws::Utils::Array<JsonView> writeRequestsJsonList = unprocessedItemsItem.second.AsArray();
      Aws::Vector<WriteRequest> writeRequestsList;
      writeRequestsList.reserve((size_t)writeRequestsJsonList.GetLength());
      for(unsigned writeRequestsIndex = 0; writeRequestsIndex < writeRequestsJsonList.GetLength(); ++writeRequestsIndex)
      {
        writeRequestsList.push_back(writeRequestsJsonList[writeRequestsIndex].AsObject());
      }
      m_unprocessedItems[unprocessedItemsItem.first] = std::move(writeRequestsList);
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
