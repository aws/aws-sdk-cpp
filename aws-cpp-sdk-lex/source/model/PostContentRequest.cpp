/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex/model/PostContentRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::LexRuntimeService::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

PostContentRequest::PostContentRequest() : 
    m_botNameHasBeenSet(false),
    m_botAliasHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_sessionAttributesHasBeenSet(false),
    m_requestAttributesHasBeenSet(false),
    m_acceptHasBeenSet(false),
    m_activeContextsHasBeenSet(false)
{
}



Aws::Http::HeaderValueCollection PostContentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_sessionAttributesHasBeenSet)
  {
    ss << m_sessionAttributes;
    headers.emplace("x-amz-lex-session-attributes",  ss.str());
    ss.str("");
  }

  if(m_requestAttributesHasBeenSet)
  {
    ss << m_requestAttributes;
    headers.emplace("x-amz-lex-request-attributes",  ss.str());
    ss.str("");
  }

  if(m_acceptHasBeenSet)
  {
    ss << m_accept;
    headers.emplace("accept",  ss.str());
    ss.str("");
  }

  if(m_activeContextsHasBeenSet)
  {
    ss << m_activeContexts;
    headers.emplace("x-amz-lex-active-contexts",  ss.str());
    ss.str("");
  }

  return headers;

}
