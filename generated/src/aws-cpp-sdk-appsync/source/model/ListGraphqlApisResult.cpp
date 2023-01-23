/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/ListGraphqlApisResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListGraphqlApisResult::ListGraphqlApisResult()
{
}

ListGraphqlApisResult::ListGraphqlApisResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListGraphqlApisResult& ListGraphqlApisResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("graphqlApis"))
  {
    Aws::Utils::Array<JsonView> graphqlApisJsonList = jsonValue.GetArray("graphqlApis");
    for(unsigned graphqlApisIndex = 0; graphqlApisIndex < graphqlApisJsonList.GetLength(); ++graphqlApisIndex)
    {
      m_graphqlApis.push_back(graphqlApisJsonList[graphqlApisIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
