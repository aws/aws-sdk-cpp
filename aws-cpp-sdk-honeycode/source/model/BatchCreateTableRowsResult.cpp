/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/BatchCreateTableRowsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Honeycode::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchCreateTableRowsResult::BatchCreateTableRowsResult() : 
    m_workbookCursor(0)
{
}

BatchCreateTableRowsResult::BatchCreateTableRowsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_workbookCursor(0)
{
  *this = result;
}

BatchCreateTableRowsResult& BatchCreateTableRowsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("workbookCursor"))
  {
    m_workbookCursor = jsonValue.GetInt64("workbookCursor");

  }

  if(jsonValue.ValueExists("createdRows"))
  {
    Aws::Map<Aws::String, JsonView> createdRowsJsonMap = jsonValue.GetObject("createdRows").GetAllObjects();
    for(auto& createdRowsItem : createdRowsJsonMap)
    {
      m_createdRows[createdRowsItem.first] = createdRowsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("failedBatchItems"))
  {
    Aws::Utils::Array<JsonView> failedBatchItemsJsonList = jsonValue.GetArray("failedBatchItems");
    for(unsigned failedBatchItemsIndex = 0; failedBatchItemsIndex < failedBatchItemsJsonList.GetLength(); ++failedBatchItemsIndex)
    {
      m_failedBatchItems.push_back(failedBatchItemsJsonList[failedBatchItemsIndex].AsObject());
    }
  }



  return *this;
}
