/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ExecuteTransactionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ExecuteTransactionResult::ExecuteTransactionResult()
{
}

ExecuteTransactionResult::ExecuteTransactionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ExecuteTransactionResult& ExecuteTransactionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Responses"))
  {
    Array<JsonView> responsesJsonList = jsonValue.GetArray("Responses");
    for(unsigned responsesIndex = 0; responsesIndex < responsesJsonList.GetLength(); ++responsesIndex)
    {
      m_responses.push_back(responsesJsonList[responsesIndex].AsObject());
    }
  }



  return *this;
}
