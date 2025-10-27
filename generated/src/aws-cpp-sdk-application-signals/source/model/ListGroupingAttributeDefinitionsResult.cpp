/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ListGroupingAttributeDefinitionsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ApplicationSignals::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListGroupingAttributeDefinitionsResult::ListGroupingAttributeDefinitionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListGroupingAttributeDefinitionsResult& ListGroupingAttributeDefinitionsResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("GroupingAttributeDefinitions")) {
    Aws::Utils::Array<JsonView> groupingAttributeDefinitionsJsonList = jsonValue.GetArray("GroupingAttributeDefinitions");
    for (unsigned groupingAttributeDefinitionsIndex = 0;
         groupingAttributeDefinitionsIndex < groupingAttributeDefinitionsJsonList.GetLength(); ++groupingAttributeDefinitionsIndex) {
      m_groupingAttributeDefinitions.push_back(groupingAttributeDefinitionsJsonList[groupingAttributeDefinitionsIndex].AsObject());
    }
    m_groupingAttributeDefinitionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
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
