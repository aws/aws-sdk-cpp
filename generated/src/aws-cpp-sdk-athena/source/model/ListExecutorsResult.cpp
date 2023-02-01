/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ListExecutorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListExecutorsResult::ListExecutorsResult()
{
}

ListExecutorsResult::ListExecutorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListExecutorsResult& ListExecutorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SessionId"))
  {
    m_sessionId = jsonValue.GetString("SessionId");

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ExecutorsSummary"))
  {
    Aws::Utils::Array<JsonView> executorsSummaryJsonList = jsonValue.GetArray("ExecutorsSummary");
    for(unsigned executorsSummaryIndex = 0; executorsSummaryIndex < executorsSummaryJsonList.GetLength(); ++executorsSummaryIndex)
    {
      m_executorsSummary.push_back(executorsSummaryJsonList[executorsSummaryIndex].AsObject());
    }
  }



  return *this;
}
