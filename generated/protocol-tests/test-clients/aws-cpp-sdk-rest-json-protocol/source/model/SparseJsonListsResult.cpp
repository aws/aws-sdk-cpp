/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/SparseJsonListsResult.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SparseJsonListsResult::SparseJsonListsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

SparseJsonListsResult& SparseJsonListsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("sparseStringList")) {
    Aws::Utils::Array<JsonView> sparseStringListJsonList = jsonValue.GetArray("sparseStringList");
    for (unsigned sparseStringListIndex = 0; sparseStringListIndex < sparseStringListJsonList.GetLength(); ++sparseStringListIndex) {
      if (sparseStringListJsonList[sparseStringListIndex].IsNull()) {
        m_sparseStringList.emplace_back();
        continue;
      }
      m_sparseStringList.emplace_back(sparseStringListJsonList[sparseStringListIndex].AsString());
    }
    m_sparseStringListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sparseShortList")) {
    Aws::Utils::Array<JsonView> sparseShortListJsonList = jsonValue.GetArray("sparseShortList");
    for (unsigned sparseShortListIndex = 0; sparseShortListIndex < sparseShortListJsonList.GetLength(); ++sparseShortListIndex) {
      if (sparseShortListJsonList[sparseShortListIndex].IsNull()) {
        m_sparseShortList.emplace_back();
        continue;
      }
      m_sparseShortList.emplace_back(sparseShortListJsonList[sparseShortListIndex].AsInteger());
    }
    m_sparseShortListHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
