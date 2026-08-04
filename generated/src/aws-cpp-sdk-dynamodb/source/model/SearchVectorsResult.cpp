/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/dynamodb/model/SearchVectorsResult.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchVectorsResult::SearchVectorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

SearchVectorsResult& SearchVectorsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ConsumedCapacity")) {
    m_consumedCapacity = jsonValue.GetObject("ConsumedCapacity");
    m_consumedCapacityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SearchResults")) {
    Aws::Utils::Array<JsonView> searchResultsJsonList = jsonValue.GetArray("SearchResults");
    for (unsigned searchResultsIndex = 0; searchResultsIndex < searchResultsJsonList.GetLength(); ++searchResultsIndex) {
      m_searchResults.push_back(searchResultsJsonList[searchResultsIndex].AsObject());
    }
    m_searchResultsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
