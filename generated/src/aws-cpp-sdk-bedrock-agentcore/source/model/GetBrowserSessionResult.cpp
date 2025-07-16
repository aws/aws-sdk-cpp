/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GetBrowserSessionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetBrowserSessionResult::GetBrowserSessionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetBrowserSessionResult& GetBrowserSessionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("browserIdentifier"))
  {
    m_browserIdentifier = jsonValue.GetString("browserIdentifier");
    m_browserIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("viewPort"))
  {
    m_viewPort = jsonValue.GetObject("viewPort");
    m_viewPortHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionTimeoutSeconds"))
  {
    m_sessionTimeoutSeconds = jsonValue.GetInteger("sessionTimeoutSeconds");
    m_sessionTimeoutSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = BrowserSessionStatusMapper::GetBrowserSessionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("streams"))
  {
    m_streams = jsonValue.GetObject("streams");
    m_streamsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionReplayArtifact"))
  {
    m_sessionReplayArtifact = jsonValue.GetString("sessionReplayArtifact");
    m_sessionReplayArtifactHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
