/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/InvokeModelWithResponseStreamRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockRuntime::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

InvokeModelWithResponseStreamRequest::InvokeModelWithResponseStreamRequest() : 
    m_acceptHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_trace(Trace::NOT_SET),
    m_traceHasBeenSet(false),
    m_guardrailIdentifierHasBeenSet(false),
    m_guardrailVersionHasBeenSet(false),
    m_performanceConfigLatency(PerformanceConfigLatency::NOT_SET),
    m_performanceConfigLatencyHasBeenSet(false),
    m_handler(), m_decoder(Aws::Utils::Event::EventStreamDecoder(&m_handler))
{
    AmazonWebServiceRequest::SetHeadersReceivedEventHandler([this](const Http::HttpRequest*, Http::HttpResponse* response)
    {
        auto& initialResponseHandler = m_handler.GetInitialResponseCallbackEx();
        if (initialResponseHandler) {
            initialResponseHandler(InvokeModelWithResponseStreamInitialResponse(response->GetHeaders()), Utils::Event::InitialResponseType::ON_RESPONSE);
        }
    });
}



Aws::Http::HeaderValueCollection InvokeModelWithResponseStreamRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_acceptHasBeenSet)
  {
    ss << m_accept;
    headers.emplace("x-amzn-bedrock-accept",  ss.str());
    ss.str("");
  }

  if(m_traceHasBeenSet && m_trace != Trace::NOT_SET)
  {
    headers.emplace("x-amzn-bedrock-trace", TraceMapper::GetNameForTrace(m_trace));
  }

  if(m_guardrailIdentifierHasBeenSet)
  {
    ss << m_guardrailIdentifier;
    headers.emplace("x-amzn-bedrock-guardrailidentifier",  ss.str());
    ss.str("");
  }

  if(m_guardrailVersionHasBeenSet)
  {
    ss << m_guardrailVersion;
    headers.emplace("x-amzn-bedrock-guardrailversion",  ss.str());
    ss.str("");
  }

  if(m_performanceConfigLatencyHasBeenSet && m_performanceConfigLatency != PerformanceConfigLatency::NOT_SET)
  {
    headers.emplace("x-amzn-bedrock-performanceconfig-latency", PerformanceConfigLatencyMapper::GetNameForPerformanceConfigLatency(m_performanceConfigLatency));
  }

  return headers;

}
