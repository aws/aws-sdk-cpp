/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ListAnalysisLogExportsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAnalysisLogExportsResult::ListAnalysisLogExportsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListAnalysisLogExportsResult& ListAnalysisLogExportsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("analysisLogExports")) {
    Aws::Utils::Array<JsonView> analysisLogExportsJsonList = jsonValue.GetArray("analysisLogExports");
    for (unsigned analysisLogExportsIndex = 0; analysisLogExportsIndex < analysisLogExportsJsonList.GetLength();
         ++analysisLogExportsIndex) {
      m_analysisLogExports.push_back(analysisLogExportsJsonList[analysisLogExportsIndex].AsObject());
    }
    m_analysisLogExportsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
