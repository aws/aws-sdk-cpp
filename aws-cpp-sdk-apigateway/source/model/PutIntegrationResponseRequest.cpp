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
#include <aws/apigateway/model/PutIntegrationResponseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutIntegrationResponseRequest::PutIntegrationResponseRequest() : 
    m_restApiIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_httpMethodHasBeenSet(false),
    m_statusCodeHasBeenSet(false),
    m_selectionPatternHasBeenSet(false),
    m_responseParametersHasBeenSet(false),
    m_responseTemplatesHasBeenSet(false)
{
}

Aws::String PutIntegrationResponseRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_selectionPatternHasBeenSet)
  {
   payload.WithString("selectionPattern", m_selectionPattern);

  }

  if(m_responseParametersHasBeenSet)
  {
   JsonValue responseParametersJsonMap;
   for(auto& responseParametersItem : m_responseParameters)
   {
     responseParametersJsonMap.WithString(responseParametersItem.first, responseParametersItem.second);
   }
   payload.WithObject("responseParameters", std::move(responseParametersJsonMap));

  }

  if(m_responseTemplatesHasBeenSet)
  {
   JsonValue responseTemplatesJsonMap;
   for(auto& responseTemplatesItem : m_responseTemplates)
   {
     responseTemplatesJsonMap.WithString(responseTemplatesItem.first, responseTemplatesItem.second);
   }
   payload.WithObject("responseTemplates", std::move(responseTemplatesJsonMap));

  }

  return payload.WriteReadable();
}



