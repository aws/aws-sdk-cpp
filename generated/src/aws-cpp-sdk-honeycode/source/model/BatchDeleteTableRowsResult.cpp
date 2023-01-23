/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/BatchDeleteTableRowsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Honeycode::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDeleteTableRowsResult::BatchDeleteTableRowsResult() : 
    m_workbookCursor(0)
{
}

BatchDeleteTableRowsResult::BatchDeleteTableRowsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_workbookCursor(0)
{
  *this = result;
}

BatchDeleteTableRowsResult& BatchDeleteTableRowsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("workbookCursor"))
  {
    m_workbookCursor = jsonValue.GetInt64("workbookCursor");

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
