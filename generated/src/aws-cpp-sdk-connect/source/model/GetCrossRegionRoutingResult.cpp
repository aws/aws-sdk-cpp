/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/GetCrossRegionRoutingResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCrossRegionRoutingResult::GetCrossRegionRoutingResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetCrossRegionRoutingResult& GetCrossRegionRoutingResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("IsolatedRegions")) {
    Aws::Utils::Array<JsonView> isolatedRegionsJsonList = jsonValue.GetArray("IsolatedRegions");
    for (unsigned isolatedRegionsIndex = 0; isolatedRegionsIndex < isolatedRegionsJsonList.GetLength(); ++isolatedRegionsIndex) {
      m_isolatedRegions.push_back(isolatedRegionsJsonList[isolatedRegionsIndex].AsString());
    }
    m_isolatedRegionsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
