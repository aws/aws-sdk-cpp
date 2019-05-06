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

#include <aws/lambda/model/InvokeRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws::Http;
using namespace Aws;

InvokeRequest::InvokeRequest() : 
    m_functionNameHasBeenSet(false),
    m_invocationType(InvocationType::NOT_SET),
    m_invocationTypeHasBeenSet(false),
    m_logType(LogType::NOT_SET),
    m_logTypeHasBeenSet(false),
    m_clientContextHasBeenSet(false),
    m_qualifierHasBeenSet(false)
{
}


void InvokeRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_qualifierHasBeenSet)
    {
      ss << m_qualifier;
      uri.AddQueryStringParameter("Qualifier", ss.str());
      ss.str("");
    }

}
Aws::Http::HeaderValueCollection InvokeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_invocationTypeHasBeenSet)
  {
    headers.emplace("x-amz-invocation-type", InvocationTypeMapper::GetNameForInvocationType(m_invocationType));
  }

  if(m_logTypeHasBeenSet)
  {
    headers.emplace("x-amz-log-type", LogTypeMapper::GetNameForLogType(m_logType));
  }

  if(m_clientContextHasBeenSet)
  {
    ss << m_clientContext;
    headers.emplace("x-amz-client-context",  ss.str());
    ss.str("");
  }

  return headers;

}
