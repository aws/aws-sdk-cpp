/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda-core/model/ListNetworkConnectorVersionsResult.h>

#include <utility>

using namespace Aws::LambdaCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListNetworkConnectorVersionsResult::ListNetworkConnectorVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListNetworkConnectorVersionsResult& ListNetworkConnectorVersionsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("NetworkConnectorVersions")) {
    Aws::Utils::Array<JsonView> networkConnectorVersionsJsonList = jsonValue.GetArray("NetworkConnectorVersions");
    for (unsigned networkConnectorVersionsIndex = 0; networkConnectorVersionsIndex < networkConnectorVersionsJsonList.GetLength();
         ++networkConnectorVersionsIndex) {
      m_networkConnectorVersions.push_back(networkConnectorVersionsJsonList[networkConnectorVersionsIndex].AsObject());
    }
    m_networkConnectorVersionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextMarker")) {
    m_nextMarker = jsonValue.GetString("NextMarker");
    m_nextMarkerHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
