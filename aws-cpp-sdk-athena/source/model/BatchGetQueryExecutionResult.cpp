/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/BatchGetQueryExecutionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetQueryExecutionResult::BatchGetQueryExecutionResult()
{
}

BatchGetQueryExecutionResult::BatchGetQueryExecutionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetQueryExecutionResult& BatchGetQueryExecutionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("QueryExecutions"))
  {
    Aws::Utils::Array<JsonView> queryExecutionsJsonList = jsonValue.GetArray("QueryExecutions");
    for(unsigned queryExecutionsIndex = 0; queryExecutionsIndex < queryExecutionsJsonList.GetLength(); ++queryExecutionsIndex)
    {
      m_queryExecutions.push_back(queryExecutionsJsonList[queryExecutionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnprocessedQueryExecutionIds"))
  {
    Aws::Utils::Array<JsonView> unprocessedQueryExecutionIdsJsonList = jsonValue.GetArray("UnprocessedQueryExecutionIds");
    for(unsigned unprocessedQueryExecutionIdsIndex = 0; unprocessedQueryExecutionIdsIndex < unprocessedQueryExecutionIdsJsonList.GetLength(); ++unprocessedQueryExecutionIdsIndex)
    {
      m_unprocessedQueryExecutionIds.push_back(unprocessedQueryExecutionIdsJsonList[unprocessedQueryExecutionIdsIndex].AsObject());
    }
  }



  return *this;
}
