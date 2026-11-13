/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda-core/model/GetRuntimeAliasResult.h>

#include <utility>

using namespace Aws::LambdaCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRuntimeAliasResult::GetRuntimeAliasResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetRuntimeAliasResult& GetRuntimeAliasResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
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
  if (jsonValue.ValueExists("RuntimeVersion")) {
    m_runtimeVersion = jsonValue.GetString("RuntimeVersion");
    m_runtimeVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RuntimeVersionArn")) {
    m_runtimeVersionArn = jsonValue.GetString("RuntimeVersionArn");
    m_runtimeVersionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = RuntimeAliasStateMapper::GetRuntimeAliasStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PendingDeletionAt")) {
    m_pendingDeletionAt = jsonValue.GetString("PendingDeletionAt");
    m_pendingDeletionAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Compatibility")) {
    m_compatibility = jsonValue.GetObject("Compatibility");
    m_compatibilityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReleaseLifecycle")) {
    m_releaseLifecycle = jsonValue.GetObject("ReleaseLifecycle");
    m_releaseLifecycleHasBeenSet = true;
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
