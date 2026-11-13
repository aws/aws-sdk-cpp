/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda-core/model/GetRuntimeResult.h>

#include <utility>

using namespace Aws::LambdaCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRuntimeResult::GetRuntimeResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetRuntimeResult& GetRuntimeResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LicenseInfo")) {
    m_licenseInfo = jsonValue.GetString("LicenseInfo");
    m_licenseInfoHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReleaseLifecycle")) {
    m_releaseLifecycle = jsonValue.GetObject("ReleaseLifecycle");
    m_releaseLifecycleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = RuntimeStateMapper::GetRuntimeStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PendingDeletionAt")) {
    m_pendingDeletionAt = jsonValue.GetString("PendingDeletionAt");
    m_pendingDeletionAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Created")) {
    m_created = jsonValue.GetString("Created");
    m_createdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModified")) {
    m_lastModified = jsonValue.GetString("LastModified");
    m_lastModifiedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
