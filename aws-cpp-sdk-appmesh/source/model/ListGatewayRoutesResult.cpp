/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/ListGatewayRoutesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppMesh::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListGatewayRoutesResult::ListGatewayRoutesResult()
{
}

ListGatewayRoutesResult::ListGatewayRoutesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListGatewayRoutesResult& ListGatewayRoutesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("gatewayRoutes"))
  {
    Aws::Utils::Array<JsonView> gatewayRoutesJsonList = jsonValue.GetArray("gatewayRoutes");
    for(unsigned gatewayRoutesIndex = 0; gatewayRoutesIndex < gatewayRoutesJsonList.GetLength(); ++gatewayRoutesIndex)
    {
      m_gatewayRoutes.push_back(gatewayRoutesJsonList[gatewayRoutesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
