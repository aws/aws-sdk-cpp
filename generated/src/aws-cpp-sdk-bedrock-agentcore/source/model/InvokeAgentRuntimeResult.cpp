/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/InvokeAgentRuntimeResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

InvokeAgentRuntimeResult::InvokeAgentRuntimeResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

InvokeAgentRuntimeResult& InvokeAgentRuntimeResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_response = result.TakeOwnershipOfPayload();
  m_responseHasBeenSet = true;

  const auto& headers = result.GetHeaderValueCollection();
  const auto& runtimeSessionIdIter = headers.find("x-amzn-bedrock-agentcore-runtime-session-id");
  if(runtimeSessionIdIter != headers.end())
  {
    m_runtimeSessionId = runtimeSessionIdIter->second;
    m_runtimeSessionIdHasBeenSet = true;
  }

  const auto& mcpSessionIdIter = headers.find("mcp-session-id");
  if(mcpSessionIdIter != headers.end())
  {
    m_mcpSessionId = mcpSessionIdIter->second;
    m_mcpSessionIdHasBeenSet = true;
  }

  const auto& mcpProtocolVersionIter = headers.find("mcp-protocol-version");
  if(mcpProtocolVersionIter != headers.end())
  {
    m_mcpProtocolVersion = mcpProtocolVersionIter->second;
    m_mcpProtocolVersionHasBeenSet = true;
  }

  const auto& traceIdIter = headers.find("x-amzn-trace-id");
  if(traceIdIter != headers.end())
  {
    m_traceId = traceIdIter->second;
    m_traceIdHasBeenSet = true;
  }

  const auto& traceParentIter = headers.find("traceparent");
  if(traceParentIter != headers.end())
  {
    m_traceParent = traceParentIter->second;
    m_traceParentHasBeenSet = true;
  }

  const auto& traceStateIter = headers.find("tracestate");
  if(traceStateIter != headers.end())
  {
    m_traceState = traceStateIter->second;
    m_traceStateHasBeenSet = true;
  }

  const auto& baggageIter = headers.find("baggage");
  if(baggageIter != headers.end())
  {
    m_baggage = baggageIter->second;
    m_baggageHasBeenSet = true;
  }

  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
    m_contentTypeHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  m_statusCode = static_cast<int>(result.GetResponseCode());
  m_statusCodeHasBeenSet = true;
   return *this;
}
