/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ListConnectorEntitiesResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Appflow::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListConnectorEntitiesResult::ListConnectorEntitiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListConnectorEntitiesResult& ListConnectorEntitiesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("connectorEntityMap")) {
    Aws::Map<Aws::String, JsonView> connectorEntityMapJsonMap = jsonValue.GetObject("connectorEntityMap").GetAllObjects();
    for (auto& connectorEntityMapItem : connectorEntityMapJsonMap) {
      Aws::Utils::Array<JsonView> connectorEntityList2JsonList = connectorEntityMapItem.second.AsArray();
      Aws::Vector<ConnectorEntity> connectorEntityList2List;
      connectorEntityList2List.reserve((size_t)connectorEntityList2JsonList.GetLength());
      for (unsigned connectorEntityList2Index = 0; connectorEntityList2Index < connectorEntityList2JsonList.GetLength();
           ++connectorEntityList2Index) {
        connectorEntityList2List.push_back(connectorEntityList2JsonList[connectorEntityList2Index].AsObject());
      }
      m_connectorEntityMap[connectorEntityMapItem.first] = std::move(connectorEntityList2List);
    }
    m_connectorEntityMapHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
