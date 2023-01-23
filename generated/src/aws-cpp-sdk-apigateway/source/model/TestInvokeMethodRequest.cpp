/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/TestInvokeMethodRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TestInvokeMethodRequest::TestInvokeMethodRequest() : 
    m_restApiIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_httpMethodHasBeenSet(false),
    m_pathWithQueryStringHasBeenSet(false),
    m_multiValueHeadersHasBeenSet(false),
    m_clientCertificateIdHasBeenSet(false),
    m_stageVariablesHasBeenSet(false),
    m_requestBodyHasBeenSet(false),
    m_requestHeadersHasBeenSet(false)
{
}

Aws::String TestInvokeMethodRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pathWithQueryStringHasBeenSet)
  {
   payload.WithString("pathWithQueryString", m_pathWithQueryString);

  }

  if(m_multiValueHeadersHasBeenSet)
  {
   JsonValue multiValueHeadersJsonMap;
   for(auto& multiValueHeadersItem : m_multiValueHeaders)
   {
     Aws::Utils::Array<JsonValue> listOfStringJsonList(multiValueHeadersItem.second.size());
     for(unsigned listOfStringIndex = 0; listOfStringIndex < listOfStringJsonList.GetLength(); ++listOfStringIndex)
     {
       listOfStringJsonList[listOfStringIndex].AsString(multiValueHeadersItem.second[listOfStringIndex]);
     }
     multiValueHeadersJsonMap.WithArray(multiValueHeadersItem.first, std::move(listOfStringJsonList));
   }
   payload.WithObject("multiValueHeaders", std::move(multiValueHeadersJsonMap));

  }

  if(m_clientCertificateIdHasBeenSet)
  {
   payload.WithString("clientCertificateId", m_clientCertificateId);

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

  if(m_requestBodyHasBeenSet)
  {
   payload.WithString("body", m_requestBody);

  }

  if(m_requestHeadersHasBeenSet)
  {
   JsonValue headersJsonMap;
   for(auto& headersItem : m_requestHeaders)
   {
     headersJsonMap.WithString(headersItem.first, headersItem.second);
   }
   payload.WithObject("headers", std::move(headersJsonMap));

  }

  return payload.View().WriteReadable();
}




