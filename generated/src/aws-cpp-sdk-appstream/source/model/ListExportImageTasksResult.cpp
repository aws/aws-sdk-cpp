/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ListExportImageTasksResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListExportImageTasksResult::ListExportImageTasksResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListExportImageTasksResult& ListExportImageTasksResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("ExportImageTasks")) {
    Aws::Utils::Array<JsonView> exportImageTasksJsonList = jsonValue.GetArray("ExportImageTasks");
    for (unsigned exportImageTasksIndex = 0; exportImageTasksIndex < exportImageTasksJsonList.GetLength(); ++exportImageTasksIndex) {
      m_exportImageTasks.push_back(exportImageTasksJsonList[exportImageTasksIndex].AsObject());
    }
    m_exportImageTasksHasBeenSet = true;
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
