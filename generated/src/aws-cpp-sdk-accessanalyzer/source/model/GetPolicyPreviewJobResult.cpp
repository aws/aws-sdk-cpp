/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/GetPolicyPreviewJobResult.h>
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

GetPolicyPreviewJobResult::GetPolicyPreviewJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetPolicyPreviewJobResult& GetPolicyPreviewJobResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("jobId")) {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobParameters")) {
    m_jobParameters = jsonValue.GetObject("jobParameters");
    m_jobParametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobDetails")) {
    m_jobDetails = jsonValue.GetObject("jobDetails");
    m_jobDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputS3Uri")) {
    m_outputS3Uri = jsonValue.GetString("outputS3Uri");
    m_outputS3UriHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
