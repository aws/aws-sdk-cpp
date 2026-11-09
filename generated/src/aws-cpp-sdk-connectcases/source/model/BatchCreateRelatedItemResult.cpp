/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/BatchCreateRelatedItemResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchCreateRelatedItemResult::BatchCreateRelatedItemResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

BatchCreateRelatedItemResult& BatchCreateRelatedItemResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("successfulItems")) {
    Aws::Utils::Array<JsonView> successfulItemsJsonList = jsonValue.GetArray("successfulItems");
    for (unsigned successfulItemsIndex = 0; successfulItemsIndex < successfulItemsJsonList.GetLength(); ++successfulItemsIndex) {
      m_successfulItems.push_back(successfulItemsJsonList[successfulItemsIndex].AsObject());
    }
    m_successfulItemsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failedItems")) {
    Aws::Utils::Array<JsonView> failedItemsJsonList = jsonValue.GetArray("failedItems");
    for (unsigned failedItemsIndex = 0; failedItemsIndex < failedItemsJsonList.GetLength(); ++failedItemsIndex) {
      m_failedItems.push_back(failedItemsJsonList[failedItemsIndex].AsObject());
    }
    m_failedItemsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
