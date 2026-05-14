/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GetAdvancedPromptOptimizationJobResult.h>
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

GetAdvancedPromptOptimizationJobResult::GetAdvancedPromptOptimizationJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetAdvancedPromptOptimizationJobResult& GetAdvancedPromptOptimizationJobResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("jobArn")) {
    m_jobArn = jsonValue.GetString("jobArn");
    m_jobArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobName")) {
    m_jobName = jsonValue.GetString("jobName");
    m_jobNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobDescription")) {
    m_jobDescription = jsonValue.GetString("jobDescription");
    m_jobDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobStatus")) {
    m_jobStatus =
        AdvancedPromptOptimizationJobStatusMapper::GetAdvancedPromptOptimizationJobStatusForName(jsonValue.GetString("jobStatus"));
    m_jobStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inputConfig")) {
    m_inputConfig = jsonValue.GetObject("inputConfig");
    m_inputConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputConfig")) {
    m_outputConfig = jsonValue.GetObject("outputConfig");
    m_outputConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("encryptionKeyArn")) {
    m_encryptionKeyArn = jsonValue.GetString("encryptionKeyArn");
    m_encryptionKeyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationTime")) {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastModifiedTime")) {
    m_lastModifiedTime = jsonValue.GetString("lastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureMessage")) {
    m_failureMessage = jsonValue.GetString("failureMessage");
    m_failureMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("modelConfigurations")) {
    Aws::Utils::Array<JsonView> modelConfigurationsJsonList = jsonValue.GetArray("modelConfigurations");
    for (unsigned modelConfigurationsIndex = 0; modelConfigurationsIndex < modelConfigurationsJsonList.GetLength();
         ++modelConfigurationsIndex) {
      m_modelConfigurations.push_back(modelConfigurationsJsonList[modelConfigurationsIndex].AsObject());
    }
    m_modelConfigurationsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
