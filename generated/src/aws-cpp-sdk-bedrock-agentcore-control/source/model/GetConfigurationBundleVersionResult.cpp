/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/GetConfigurationBundleVersionResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetConfigurationBundleVersionResult::GetConfigurationBundleVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetConfigurationBundleVersionResult& GetConfigurationBundleVersionResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("bundleArn")) {
    m_bundleArn = jsonValue.GetString("bundleArn");
    m_bundleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bundleId")) {
    m_bundleId = jsonValue.GetString("bundleId");
    m_bundleIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bundleName")) {
    m_bundleName = jsonValue.GetString("bundleName");
    m_bundleNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("versionId")) {
    m_versionId = jsonValue.GetString("versionId");
    m_versionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("components")) {
    Aws::Map<Aws::String, JsonView> componentsJsonMap = jsonValue.GetObject("components").GetAllObjects();
    for (auto& componentsItem : componentsJsonMap) {
      m_components[componentsItem.first] = componentsItem.second.AsObject();
    }
    m_componentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lineageMetadata")) {
    m_lineageMetadata = jsonValue.GetObject("lineageMetadata");
    m_lineageMetadataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("versionCreatedAt")) {
    m_versionCreatedAt = jsonValue.GetDouble("versionCreatedAt");
    m_versionCreatedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
