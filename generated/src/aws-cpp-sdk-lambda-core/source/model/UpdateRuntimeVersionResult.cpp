/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda-core/model/UpdateRuntimeVersionResult.h>

#include <utility>

using namespace Aws::LambdaCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateRuntimeVersionResult::UpdateRuntimeVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateRuntimeVersionResult& UpdateRuntimeVersionResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResolvedUri")) {
    m_resolvedUri = jsonValue.GetString("ResolvedUri");
    m_resolvedUriHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = RuntimeVersionStateMapper::GetRuntimeVersionStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReleaseNotes")) {
    m_releaseNotes = jsonValue.GetString("ReleaseNotes");
    m_releaseNotesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Platforms")) {
    Aws::Utils::Array<JsonView> platformsJsonList = jsonValue.GetArray("Platforms");
    for (unsigned platformsIndex = 0; platformsIndex < platformsJsonList.GetLength(); ++platformsIndex) {
      m_platforms.push_back(platformsJsonList[platformsIndex].AsObject());
    }
    m_platformsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Compatibility")) {
    m_compatibility = jsonValue.GetObject("Compatibility");
    m_compatibilityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Created")) {
    m_created = jsonValue.GetString("Created");
    m_createdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModified")) {
    m_lastModified = jsonValue.GetString("LastModified");
    m_lastModifiedHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
