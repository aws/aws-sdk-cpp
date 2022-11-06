/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/SendBulkEmailResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SendBulkEmailResult::SendBulkEmailResult()
{
}

SendBulkEmailResult::SendBulkEmailResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SendBulkEmailResult& SendBulkEmailResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BulkEmailEntryResults"))
  {
    Aws::Utils::Array<JsonView> bulkEmailEntryResultsJsonList = jsonValue.GetArray("BulkEmailEntryResults");
    for(unsigned bulkEmailEntryResultsIndex = 0; bulkEmailEntryResultsIndex < bulkEmailEntryResultsJsonList.GetLength(); ++bulkEmailEntryResultsIndex)
    {
      m_bulkEmailEntryResults.push_back(bulkEmailEntryResultsJsonList[bulkEmailEntryResultsIndex].AsObject());
    }
  }



  return *this;
}
