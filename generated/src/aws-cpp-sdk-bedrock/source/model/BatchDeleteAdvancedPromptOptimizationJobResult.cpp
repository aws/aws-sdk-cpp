/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/BatchDeleteAdvancedPromptOptimizationJobResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDeleteAdvancedPromptOptimizationJobResult::BatchDeleteAdvancedPromptOptimizationJobResult(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

BatchDeleteAdvancedPromptOptimizationJobResult& BatchDeleteAdvancedPromptOptimizationJobResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("errors")) {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("errors");
    for (unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex) {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
    m_errorsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("advancedPromptOptimizationJobs")) {
    Aws::Utils::Array<JsonView> advancedPromptOptimizationJobsJsonList = jsonValue.GetArray("advancedPromptOptimizationJobs");
    for (unsigned advancedPromptOptimizationJobsIndex = 0;
         advancedPromptOptimizationJobsIndex < advancedPromptOptimizationJobsJsonList.GetLength(); ++advancedPromptOptimizationJobsIndex) {
      m_advancedPromptOptimizationJobs.push_back(advancedPromptOptimizationJobsJsonList[advancedPromptOptimizationJobsIndex].AsObject());
    }
    m_advancedPromptOptimizationJobsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
