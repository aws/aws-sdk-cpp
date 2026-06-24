/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/GetDocumentContentResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDocumentContentResult::GetDocumentContentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetDocumentContentResult& GetDocumentContentResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("documentContentLength")) {
    m_documentContentLength = jsonValue.GetInt64("documentContentLength");
    m_documentContentLengthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mimeType")) {
    m_mimeType = jsonValue.GetString("mimeType");
    m_mimeTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("presignedUrl")) {
    m_presignedUrl = jsonValue.GetString("presignedUrl");
    m_presignedUrlHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
