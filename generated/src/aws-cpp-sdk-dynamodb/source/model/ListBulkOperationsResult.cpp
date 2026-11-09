/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/dynamodb/model/ListBulkOperationsResult.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBulkOperationsResult::ListBulkOperationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListBulkOperationsResult& ListBulkOperationsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("BulkOperationsSummaryList")) {
    Aws::Utils::Array<JsonView> bulkOperationsSummaryListJsonList = jsonValue.GetArray("BulkOperationsSummaryList");
    for (unsigned bulkOperationsSummaryListIndex = 0; bulkOperationsSummaryListIndex < bulkOperationsSummaryListJsonList.GetLength();
         ++bulkOperationsSummaryListIndex) {
      m_bulkOperationsSummaryList.push_back(bulkOperationsSummaryListJsonList[bulkOperationsSummaryListIndex].AsObject());
    }
    m_bulkOperationsSummaryListHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
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
