/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ecs/model/ListGatewayClusterAssociationsResult.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListGatewayClusterAssociationsResult::ListGatewayClusterAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListGatewayClusterAssociationsResult& ListGatewayClusterAssociationsResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("gatewayClusterAssociations")) {
    Aws::Utils::Array<JsonView> gatewayClusterAssociationsJsonList = jsonValue.GetArray("gatewayClusterAssociations");
    for (unsigned gatewayClusterAssociationsIndex = 0; gatewayClusterAssociationsIndex < gatewayClusterAssociationsJsonList.GetLength();
         ++gatewayClusterAssociationsIndex) {
      m_gatewayClusterAssociations.push_back(gatewayClusterAssociationsJsonList[gatewayClusterAssociationsIndex].AsObject());
    }
    m_gatewayClusterAssociationsHasBeenSet = true;
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
