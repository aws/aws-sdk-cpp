﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ListConnectorEntitiesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Appflow::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListConnectorEntitiesResult::ListConnectorEntitiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListConnectorEntitiesResult& ListConnectorEntitiesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("connectorEntityMap"))
  {
    Aws::Map<Aws::String, JsonView> connectorEntityMapJsonMap = jsonValue.GetObject("connectorEntityMap").GetAllObjects();
    for(auto& connectorEntityMapItem : connectorEntityMapJsonMap)
    {
      Aws::Utils::Array<JsonView> connectorEntityListJsonList = connectorEntityMapItem.second.AsArray();
      Aws::Vector<ConnectorEntity> connectorEntityListList;
      connectorEntityListList.reserve((size_t)connectorEntityListJsonList.GetLength());
      for(unsigned connectorEntityListIndex = 0; connectorEntityListIndex < connectorEntityListJsonList.GetLength(); ++connectorEntityListIndex)
      {
        connectorEntityListList.push_back(connectorEntityListJsonList[connectorEntityListIndex].AsObject());
      }
      m_connectorEntityMap[connectorEntityMapItem.first] = std::move(connectorEntityListList);
    }
    m_connectorEntityMapHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
