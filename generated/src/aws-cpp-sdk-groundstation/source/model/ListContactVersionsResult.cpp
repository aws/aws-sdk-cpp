/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/groundstation/model/ListContactVersionsResult.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListContactVersionsResult::ListContactVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListContactVersionsResult& ListContactVersionsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contactVersionsList")) {
    Aws::Utils::Array<JsonView> contactVersionsListJsonList = jsonValue.GetArray("contactVersionsList");
    for (unsigned contactVersionsListIndex = 0; contactVersionsListIndex < contactVersionsListJsonList.GetLength();
         ++contactVersionsListIndex) {
      m_contactVersionsList.push_back(contactVersionsListJsonList[contactVersionsListIndex].AsObject());
    }
    m_contactVersionsListHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
