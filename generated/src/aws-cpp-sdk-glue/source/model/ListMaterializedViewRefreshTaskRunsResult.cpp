/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/glue/model/ListMaterializedViewRefreshTaskRunsResult.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMaterializedViewRefreshTaskRunsResult::ListMaterializedViewRefreshTaskRunsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

ListMaterializedViewRefreshTaskRunsResult& ListMaterializedViewRefreshTaskRunsResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("MaterializedViewRefreshTaskRuns")) {
    Aws::Utils::Array<JsonView> materializedViewRefreshTaskRunsJsonList = jsonValue.GetArray("MaterializedViewRefreshTaskRuns");
    for (unsigned materializedViewRefreshTaskRunsIndex = 0;
         materializedViewRefreshTaskRunsIndex < materializedViewRefreshTaskRunsJsonList.GetLength();
         ++materializedViewRefreshTaskRunsIndex) {
      m_materializedViewRefreshTaskRuns.push_back(materializedViewRefreshTaskRunsJsonList[materializedViewRefreshTaskRunsIndex].AsObject());
    }
    m_materializedViewRefreshTaskRunsHasBeenSet = true;
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
