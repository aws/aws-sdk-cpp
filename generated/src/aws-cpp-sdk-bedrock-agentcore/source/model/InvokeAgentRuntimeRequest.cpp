/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/InvokeAgentRuntimeRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws::Http;
using namespace Aws;


void InvokeAgentRuntimeRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_qualifierHasBeenSet)
    {
      ss << m_qualifier;
      uri.AddQueryStringParameter("qualifier", ss.str());
      ss.str("");
    }

}

Aws::Http::HeaderValueCollection InvokeAgentRuntimeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_acceptHasBeenSet)
  {
    ss << m_accept;
    headers.emplace("accept",  ss.str());
    ss.str("");
  }

  if(m_mcpSessionIdHasBeenSet)
  {
    ss << m_mcpSessionId;
    headers.emplace("mcp-session-id",  ss.str());
    ss.str("");
  }

  if(m_runtimeSessionIdHasBeenSet)
  {
    ss << m_runtimeSessionId;
    headers.emplace("x-amzn-bedrock-agentcore-runtime-session-id",  ss.str());
    ss.str("");
  }

  if(m_mcpProtocolVersionHasBeenSet)
  {
    ss << m_mcpProtocolVersion;
    headers.emplace("mcp-protocol-version",  ss.str());
    ss.str("");
  }

  if(m_runtimeUserIdHasBeenSet)
  {
    ss << m_runtimeUserId;
    headers.emplace("x-amzn-bedrock-agentcore-runtime-user-id",  ss.str());
    ss.str("");
  }

  if(m_traceIdHasBeenSet)
  {
    ss << m_traceId;
    headers.emplace("x-amzn-trace-id",  ss.str());
    ss.str("");
  }

  if(m_traceParentHasBeenSet)
  {
    ss << m_traceParent;
    headers.emplace("traceparent",  ss.str());
    ss.str("");
  }

  if(m_traceStateHasBeenSet)
  {
    ss << m_traceState;
    headers.emplace("tracestate",  ss.str());
    ss.str("");
  }

  if(m_baggageHasBeenSet)
  {
    ss << m_baggage;
    headers.emplace("baggage",  ss.str());
    ss.str("");
  }

  return headers;

}
