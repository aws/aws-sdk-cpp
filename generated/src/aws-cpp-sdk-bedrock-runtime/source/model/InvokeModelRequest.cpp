/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/InvokeModelRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockRuntime::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

InvokeModelRequest::InvokeModelRequest() : 
    m_acceptHasBeenSet(false),
    m_modelIdHasBeenSet(false),
    m_trace(Trace::NOT_SET),
    m_traceHasBeenSet(false),
    m_guardrailIdentifierHasBeenSet(false),
    m_guardrailVersionHasBeenSet(false)
{
}



Aws::Http::HeaderValueCollection InvokeModelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_acceptHasBeenSet)
  {
    ss << m_accept;
    headers.emplace("accept",  ss.str());
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

  return headers;

}
