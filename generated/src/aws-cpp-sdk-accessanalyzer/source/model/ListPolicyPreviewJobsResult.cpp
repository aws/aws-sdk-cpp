/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/ListPolicyPreviewJobsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPolicyPreviewJobsResult::ListPolicyPreviewJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

ListPolicyPreviewJobsResult& ListPolicyPreviewJobsResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("analysisReports")) {
    Aws::Utils::Array<JsonView> analysisReportsJsonList = jsonValue.GetArray("analysisReports");
    for (unsigned analysisReportsIndex = 0; analysisReportsIndex < analysisReportsJsonList.GetLength(); ++analysisReportsIndex) {
      m_analysisReports.push_back(analysisReportsJsonList[analysisReportsIndex].AsObject());
    }
    m_analysisReportsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
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
