/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/evs/model/DeleteEnvironmentConnectorResult.h>

#include <utility>

using namespace Aws::EVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteEnvironmentConnectorResult::DeleteEnvironmentConnectorResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DeleteEnvironmentConnectorResult& DeleteEnvironmentConnectorResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("connector")) {
    m_connector = jsonValue.GetObject("connector");
    m_connectorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("environmentSummary")) {
    m_environmentSummary = jsonValue.GetObject("environmentSummary");
    m_environmentSummaryHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
