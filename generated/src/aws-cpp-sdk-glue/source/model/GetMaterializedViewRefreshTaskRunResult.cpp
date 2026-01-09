/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/glue/model/GetMaterializedViewRefreshTaskRunResult.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMaterializedViewRefreshTaskRunResult::GetMaterializedViewRefreshTaskRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetMaterializedViewRefreshTaskRunResult& GetMaterializedViewRefreshTaskRunResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("MaterializedViewRefreshTaskRun")) {
    m_materializedViewRefreshTaskRun = jsonValue.GetObject("MaterializedViewRefreshTaskRun");
    m_materializedViewRefreshTaskRunHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
