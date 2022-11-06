/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/ListResolversResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListResolversResult::ListResolversResult()
{
}

ListResolversResult::ListResolversResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListResolversResult& ListResolversResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("resolvers"))
  {
    Aws::Utils::Array<JsonView> resolversJsonList = jsonValue.GetArray("resolvers");
    for(unsigned resolversIndex = 0; resolversIndex < resolversJsonList.GetLength(); ++resolversIndex)
    {
      m_resolvers.push_back(resolversJsonList[resolversIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
