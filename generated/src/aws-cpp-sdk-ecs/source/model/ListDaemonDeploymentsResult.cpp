/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ecs/model/ListDaemonDeploymentsResult.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDaemonDeploymentsResult::ListDaemonDeploymentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListDaemonDeploymentsResult& ListDaemonDeploymentsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("daemonDeployments")) {
    Aws::Utils::Array<JsonView> daemonDeploymentsJsonList = jsonValue.GetArray("daemonDeployments");
    for (unsigned daemonDeploymentsIndex = 0; daemonDeploymentsIndex < daemonDeploymentsJsonList.GetLength(); ++daemonDeploymentsIndex) {
      m_daemonDeployments.push_back(daemonDeploymentsJsonList[daemonDeploymentsIndex].AsObject());
    }
    m_daemonDeploymentsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
