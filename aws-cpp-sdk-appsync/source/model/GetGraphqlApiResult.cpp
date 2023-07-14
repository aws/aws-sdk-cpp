/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/GetGraphqlApiResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetGraphqlApiResult::GetGraphqlApiResult()
{
}

GetGraphqlApiResult::GetGraphqlApiResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetGraphqlApiResult& GetGraphqlApiResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("graphqlApi"))
  {
    m_graphqlApi = jsonValue.GetObject("graphqlApi");

  }



  return *this;
}
