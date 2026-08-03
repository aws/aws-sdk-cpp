/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/directconnect/model/ListVirtualInterfaceRoutesResult.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVirtualInterfaceRoutesResult::ListVirtualInterfaceRoutesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListVirtualInterfaceRoutesResult& ListVirtualInterfaceRoutesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("virtualInterfaceId")) {
    m_virtualInterfaceId = jsonValue.GetString("virtualInterfaceId");
    m_virtualInterfaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("routes")) {
    Aws::Utils::Array<JsonView> routesJsonList = jsonValue.GetArray("routes");
    for (unsigned routesIndex = 0; routesIndex < routesJsonList.GetLength(); ++routesIndex) {
      m_routes.push_back(routesJsonList[routesIndex].AsObject());
    }
    m_routesHasBeenSet = true;
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
