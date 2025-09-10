/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/protocol-mock/model/GetRequestsReceivedResult.h>

#include <utility>

using namespace Aws::ProtocolMock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRequestsReceivedResult::GetRequestsReceivedResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetRequestsReceivedResult& GetRequestsReceivedResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("StatusCode")) {
    m_statusCode = jsonValue.GetInteger("StatusCode");
    m_statusCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("requests")) {
    Aws::Utils::Array<JsonView> requestsJsonList = jsonValue.GetArray("requests");
    for (unsigned requestsIndex = 0; requestsIndex < requestsJsonList.GetLength(); ++requestsIndex) {
      m_requests.push_back(requestsJsonList[requestsIndex].AsObject());
    }
    m_requestsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
