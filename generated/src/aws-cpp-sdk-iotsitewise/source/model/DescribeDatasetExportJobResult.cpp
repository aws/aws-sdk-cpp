/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/iotsitewise/model/DescribeDatasetExportJobResult.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDatasetExportJobResult::DescribeDatasetExportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DescribeDatasetExportJobResult& DescribeDatasetExportJobResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("jobId")) {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workspaceName")) {
    m_workspaceName = jsonValue.GetString("workspaceName");
    m_workspaceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = DatasetExportJobStatusMapper::GetDatasetExportJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetDouble("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("completedAt")) {
    m_completedAt = jsonValue.GetDouble("completedAt");
    m_completedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationS3Uri")) {
    m_destinationS3Uri = jsonValue.GetString("destinationS3Uri");
    m_destinationS3UriHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorReportLocation")) {
    m_errorReportLocation = jsonValue.GetObject("errorReportLocation");
    m_errorReportLocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("input")) {
    m_input = jsonValue.GetObject("input");
    m_inputHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
