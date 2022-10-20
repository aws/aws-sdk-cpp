/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/BatchGetNamedQueryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetNamedQueryResult::BatchGetNamedQueryResult()
{
}

BatchGetNamedQueryResult::BatchGetNamedQueryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetNamedQueryResult& BatchGetNamedQueryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NamedQueries"))
  {
    Aws::Utils::Array<JsonView> namedQueriesJsonList = jsonValue.GetArray("NamedQueries");
    for(unsigned namedQueriesIndex = 0; namedQueriesIndex < namedQueriesJsonList.GetLength(); ++namedQueriesIndex)
    {
      m_namedQueries.push_back(namedQueriesJsonList[namedQueriesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnprocessedNamedQueryIds"))
  {
    Aws::Utils::Array<JsonView> unprocessedNamedQueryIdsJsonList = jsonValue.GetArray("UnprocessedNamedQueryIds");
    for(unsigned unprocessedNamedQueryIdsIndex = 0; unprocessedNamedQueryIdsIndex < unprocessedNamedQueryIdsJsonList.GetLength(); ++unprocessedNamedQueryIdsIndex)
    {
      m_unprocessedNamedQueryIds.push_back(unprocessedNamedQueryIdsJsonList[unprocessedNamedQueryIdsIndex].AsObject());
    }
  }



  return *this;
}
