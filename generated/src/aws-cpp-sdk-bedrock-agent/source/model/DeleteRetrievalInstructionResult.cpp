/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/DeleteRetrievalInstructionResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteRetrievalInstructionResult::DeleteRetrievalInstructionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

DeleteRetrievalInstructionResult& DeleteRetrievalInstructionResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("retrievalInstructionId")) {
    m_retrievalInstructionId = jsonValue.GetString("retrievalInstructionId");
    m_retrievalInstructionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("retrievalInstructionArn")) {
    m_retrievalInstructionArn = jsonValue.GetString("retrievalInstructionArn");
    m_retrievalInstructionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
