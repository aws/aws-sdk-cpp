/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_acceptHasBeenSet(false)
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

  return headers;

}
