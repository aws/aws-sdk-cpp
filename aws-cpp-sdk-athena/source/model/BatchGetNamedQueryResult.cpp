/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("NamedQueries"))
  {
    Array<JsonValue> namedQueriesJsonList = jsonValue.GetArray("NamedQueries");
    for(unsigned namedQueriesIndex = 0; namedQueriesIndex < namedQueriesJsonList.GetLength(); ++namedQueriesIndex)
    {
      m_namedQueries.push_back(namedQueriesJsonList[namedQueriesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UnprocessedNamedQueryIds"))
  {
    Array<JsonValue> unprocessedNamedQueryIdsJsonList = jsonValue.GetArray("UnprocessedNamedQueryIds");
    for(unsigned unprocessedNamedQueryIdsIndex = 0; unprocessedNamedQueryIdsIndex < unprocessedNamedQueryIdsJsonList.GetLength(); ++unprocessedNamedQueryIdsIndex)
    {
      m_unprocessedNamedQueryIds.push_back(unprocessedNamedQueryIdsJsonList[unprocessedNamedQueryIdsIndex].AsObject());
    }
  }



  return *this;
}
