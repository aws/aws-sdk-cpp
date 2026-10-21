/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ecs/model/DisassociateGatewayFromClusterResult.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisassociateGatewayFromClusterResult::DisassociateGatewayFromClusterResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

DisassociateGatewayFromClusterResult& DisassociateGatewayFromClusterResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("gatewayArn")) {
    m_gatewayArn = jsonValue.GetString("gatewayArn");
    m_gatewayArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clusterArn")) {
    m_clusterArn = jsonValue.GetString("clusterArn");
    m_clusterArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = GatewayClusterAssociationStatusMapper::GetGatewayClusterAssociationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
