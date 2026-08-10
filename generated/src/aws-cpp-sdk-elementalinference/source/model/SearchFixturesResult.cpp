/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/elementalinference/model/SearchFixturesResult.h>

#include <utility>

using namespace Aws::ElementalInference::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchFixturesResult::SearchFixturesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

SearchFixturesResult& SearchFixturesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("fixtures")) {
    Aws::Utils::Array<JsonView> fixturesJsonList = jsonValue.GetArray("fixtures");
    for (unsigned fixturesIndex = 0; fixturesIndex < fixturesJsonList.GetLength(); ++fixturesIndex) {
      m_fixtures.push_back(fixturesJsonList[fixturesIndex].AsObject());
    }
    m_fixturesHasBeenSet = true;
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
