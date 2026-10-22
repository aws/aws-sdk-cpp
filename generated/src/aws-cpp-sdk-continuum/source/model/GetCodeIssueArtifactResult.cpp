/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/GetCodeIssueArtifactResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Continuum::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCodeIssueArtifactResult::GetCodeIssueArtifactResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetCodeIssueArtifactResult& GetCodeIssueArtifactResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("artifactId")) {
    m_artifactId = jsonValue.GetString("artifactId");
    m_artifactIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("artifactType")) {
    m_artifactType = IssueArtifactTypeMapper::GetIssueArtifactTypeForName(jsonValue.GetString("artifactType"));
    m_artifactTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mediaType")) {
    m_mediaType = jsonValue.GetString("mediaType");
    m_mediaTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("body")) {
    m_body = jsonValue.GetObject("body");
    m_bodyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("metadata")) {
    m_metadata = jsonValue.GetObject("metadata");
    m_metadataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("producer")) {
    m_producer = jsonValue.GetObject("producer");
    m_producerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
