/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lightsail/model/GetSubdomainsResult.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSubdomainsResult::GetSubdomainsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetSubdomainsResult& GetSubdomainsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("subdomains")) {
    Aws::Utils::Array<JsonView> subdomainsJsonList = jsonValue.GetArray("subdomains");
    for (unsigned subdomainsIndex = 0; subdomainsIndex < subdomainsJsonList.GetLength(); ++subdomainsIndex) {
      m_subdomains.push_back(subdomainsJsonList[subdomainsIndex].AsObject());
    }
    m_subdomainsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextPageToken")) {
    m_nextPageToken = jsonValue.GetString("nextPageToken");
    m_nextPageTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
