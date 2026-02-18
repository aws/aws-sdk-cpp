/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/grafana/model/CreateWorkspaceApiKeyResult.h>

#include <utility>

using namespace Aws::ManagedGrafana::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateWorkspaceApiKeyResult::CreateWorkspaceApiKeyResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateWorkspaceApiKeyResult& CreateWorkspaceApiKeyResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("keyName")) {
    m_keyName = jsonValue.GetString("keyName");
    m_keyNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("key")) {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workspaceId")) {
    m_workspaceId = jsonValue.GetString("workspaceId");
    m_workspaceIdHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
