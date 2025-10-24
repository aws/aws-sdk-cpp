﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GetResourceOauth2TokenResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetResourceOauth2TokenResult::GetResourceOauth2TokenResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetResourceOauth2TokenResult& GetResourceOauth2TokenResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("authorizationUrl")) {
    m_authorizationUrl = jsonValue.GetString("authorizationUrl");
    m_authorizationUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accessToken")) {
    m_accessToken = jsonValue.GetString("accessToken");
    m_accessTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sessionUri")) {
    m_sessionUri = jsonValue.GetString("sessionUri");
    m_sessionUriHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sessionStatus")) {
    m_sessionStatus = SessionStatusMapper::GetSessionStatusForName(jsonValue.GetString("sessionStatus"));
    m_sessionStatusHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
