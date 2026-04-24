/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateAttachedFilesConfigurationResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateAttachedFilesConfigurationResult::UpdateAttachedFilesConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

UpdateAttachedFilesConfigurationResult& UpdateAttachedFilesConfigurationResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("InstanceId")) {
    m_instanceId = jsonValue.GetString("InstanceId");
    m_instanceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AttachmentScope")) {
    m_attachmentScope = AttachmentScopeMapper::GetAttachmentScopeForName(jsonValue.GetString("AttachmentScope"));
    m_attachmentScopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaximumSizeLimitInBytes")) {
    m_maximumSizeLimitInBytes = jsonValue.GetInt64("MaximumSizeLimitInBytes");
    m_maximumSizeLimitInBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExtensionConfiguration")) {
    m_extensionConfiguration = jsonValue.GetObject("ExtensionConfiguration");
    m_extensionConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedTime")) {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
