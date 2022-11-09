/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/ListOperationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListOperationsResult::ListOperationsResult()
{
}

ListOperationsResult::ListOperationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListOperationsResult& ListOperationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OperationSummaryList"))
  {
    Aws::Utils::Array<JsonView> operationSummaryListJsonList = jsonValue.GetArray("OperationSummaryList");
    for(unsigned operationSummaryListIndex = 0; operationSummaryListIndex < operationSummaryListJsonList.GetLength(); ++operationSummaryListIndex)
    {
      m_operationSummaryList.push_back(operationSummaryListJsonList[operationSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
