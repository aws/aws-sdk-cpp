/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ListQueryExecutionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListQueryExecutionsResult::ListQueryExecutionsResult()
{
}

ListQueryExecutionsResult::ListQueryExecutionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListQueryExecutionsResult& ListQueryExecutionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("QueryExecutionIds"))
  {
    Aws::Utils::Array<JsonView> queryExecutionIdsJsonList = jsonValue.GetArray("QueryExecutionIds");
    for(unsigned queryExecutionIdsIndex = 0; queryExecutionIdsIndex < queryExecutionIdsJsonList.GetLength(); ++queryExecutionIdsIndex)
    {
      m_queryExecutionIds.push_back(queryExecutionIdsJsonList[queryExecutionIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
