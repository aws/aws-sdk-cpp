/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/grafana/model/ListVersionsResult.h>

#include <utility>

using namespace Aws::ManagedGrafana::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVersionsResult::ListVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListVersionsResult& ListVersionsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("grafanaVersions")) {
    Aws::Utils::Array<JsonView> grafanaVersionsJsonList = jsonValue.GetArray("grafanaVersions");
    for (unsigned grafanaVersionsIndex = 0; grafanaVersionsIndex < grafanaVersionsJsonList.GetLength(); ++grafanaVersionsIndex) {
      m_grafanaVersions.push_back(grafanaVersionsJsonList[grafanaVersionsIndex].AsString());
    }
    m_grafanaVersionsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
