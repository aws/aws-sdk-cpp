/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/ListCostCategoryResourceAssociationsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CostExplorer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCostCategoryResourceAssociationsResult::ListCostCategoryResourceAssociationsResult(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListCostCategoryResourceAssociationsResult& ListCostCategoryResourceAssociationsResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("CostCategoryResourceAssociations")) {
    Aws::Utils::Array<JsonView> costCategoryResourceAssociationsJsonList = jsonValue.GetArray("CostCategoryResourceAssociations");
    for (unsigned costCategoryResourceAssociationsIndex = 0;
         costCategoryResourceAssociationsIndex < costCategoryResourceAssociationsJsonList.GetLength();
         ++costCategoryResourceAssociationsIndex) {
      m_costCategoryResourceAssociations.push_back(
          costCategoryResourceAssociationsJsonList[costCategoryResourceAssociationsIndex].AsObject());
    }
    m_costCategoryResourceAssociationsHasBeenSet = true;
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
