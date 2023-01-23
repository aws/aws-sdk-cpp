/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/ListRoutesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppMesh::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRoutesResult::ListRoutesResult()
{
}

ListRoutesResult::ListRoutesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRoutesResult& ListRoutesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("routes"))
  {
    Aws::Utils::Array<JsonView> routesJsonList = jsonValue.GetArray("routes");
    for(unsigned routesIndex = 0; routesIndex < routesJsonList.GetLength(); ++routesIndex)
    {
      m_routes.push_back(routesJsonList[routesIndex].AsObject());
    }
  }



  return *this;
}
