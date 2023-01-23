/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ListNamedQueriesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListNamedQueriesResult::ListNamedQueriesResult()
{
}

ListNamedQueriesResult::ListNamedQueriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListNamedQueriesResult& ListNamedQueriesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NamedQueryIds"))
  {
    Aws::Utils::Array<JsonView> namedQueryIdsJsonList = jsonValue.GetArray("NamedQueryIds");
    for(unsigned namedQueryIdsIndex = 0; namedQueryIdsIndex < namedQueryIdsJsonList.GetLength(); ++namedQueryIdsIndex)
    {
      m_namedQueryIds.push_back(namedQueryIdsJsonList[namedQueryIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
