/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ListConnectorsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListConnectorsResult::ListConnectorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListConnectorsResult& ListConnectorsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ConnectorSummaries")) {
    Aws::Utils::Array<JsonView> connectorSummariesJsonList = jsonValue.GetArray("ConnectorSummaries");
    for (unsigned connectorSummariesIndex = 0; connectorSummariesIndex < connectorSummariesJsonList.GetLength();
         ++connectorSummariesIndex) {
      m_connectorSummaries.push_back(connectorSummariesJsonList[connectorSummariesIndex].AsObject());
    }
    m_connectorSummariesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
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
