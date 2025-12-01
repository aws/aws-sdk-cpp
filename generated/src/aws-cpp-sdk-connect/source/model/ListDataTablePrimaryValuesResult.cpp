/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListDataTablePrimaryValuesResult.h>
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

ListDataTablePrimaryValuesResult::ListDataTablePrimaryValuesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListDataTablePrimaryValuesResult& ListDataTablePrimaryValuesResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("NextToken")) {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrimaryValuesList")) {
    Aws::Utils::Array<JsonView> primaryValuesListJsonList = jsonValue.GetArray("PrimaryValuesList");
    for (unsigned primaryValuesListIndex = 0; primaryValuesListIndex < primaryValuesListJsonList.GetLength(); ++primaryValuesListIndex) {
      m_primaryValuesList.push_back(primaryValuesListJsonList[primaryValuesListIndex].AsObject());
    }
    m_primaryValuesListHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
