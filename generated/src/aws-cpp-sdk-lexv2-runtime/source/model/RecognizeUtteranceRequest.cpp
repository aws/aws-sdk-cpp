/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/RecognizeUtteranceRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::LexRuntimeV2::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

RecognizeUtteranceRequest::RecognizeUtteranceRequest() : 
    m_botIdHasBeenSet(false),
    m_botAliasIdHasBeenSet(false),
    m_localeIdHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_sessionStateHasBeenSet(false),
    m_requestAttributesHasBeenSet(false),
    m_requestContentTypeHasBeenSet(false),
    m_responseContentTypeHasBeenSet(false)
{
}



Aws::Http::HeaderValueCollection RecognizeUtteranceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_sessionStateHasBeenSet)
  {
    ss << m_sessionState;
    headers.emplace("x-amz-lex-session-state",  ss.str());
    ss.str("");
  }

  if(m_requestAttributesHasBeenSet)
  {
    ss << m_requestAttributes;
    headers.emplace("x-amz-lex-request-attributes",  ss.str());
    ss.str("");
  }

  if(m_requestContentTypeHasBeenSet)
  {
    ss << m_requestContentType;
    headers.emplace("content-type",  ss.str());
    ss.str("");
  }

  if(m_responseContentTypeHasBeenSet)
  {
    ss << m_responseContentType;
    headers.emplace("response-content-type",  ss.str());
    ss.str("");
  }

  return headers;

}
