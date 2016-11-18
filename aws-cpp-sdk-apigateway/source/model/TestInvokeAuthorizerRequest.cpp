/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/apigateway/model/TestInvokeAuthorizerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TestInvokeAuthorizerRequest::TestInvokeAuthorizerRequest() : 
    m_restApiIdHasBeenSet(false),
    m_authorizerIdHasBeenSet(false),
    m_pathWithQueryStringHasBeenSet(false),
    m_stageVariablesHasBeenSet(false),
    m_additionalContextHasBeenSet(false),
    m_requestBodyHasBeenSet(false),
    m_requestHeadersHasBeenSet(false)
{
}

Aws::String TestInvokeAuthorizerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pathWithQueryStringHasBeenSet)
  {
   payload.WithString("pathWithQueryString", m_pathWithQueryString);

  }

  if(m_stageVariablesHasBeenSet)
  {
   JsonValue stageVariablesJsonMap;
   for(auto& stageVariablesItem : m_stageVariables)
   {
     stageVariablesJsonMap.WithString(stageVariablesItem.first, stageVariablesItem.second);
   }
   payload.WithObject("stageVariables", std::move(stageVariablesJsonMap));

  }

  if(m_additionalContextHasBeenSet)
  {
   JsonValue additionalContextJsonMap;
   for(auto& additionalContextItem : m_additionalContext)
   {
     additionalContextJsonMap.WithString(additionalContextItem.first, additionalContextItem.second);
   }
   payload.WithObject("additionalContext", std::move(additionalContextJsonMap));

  }

  if(m_requestBodyHasBeenSet)
  {
   payload.WithString("requestBody", m_requestBody);

  }

  if(m_requestHeadersHasBeenSet)
  {
   JsonValue requestHeadersJsonMap;
   for(auto& requestHeadersItem : m_requestHeaders)
   {
     requestHeadersJsonMap.WithString(requestHeadersItem.first, requestHeadersItem.second);
   }
   payload.WithObject("requestHeaders", std::move(requestHeadersJsonMap));

  }

  return payload.WriteReadable();
}



