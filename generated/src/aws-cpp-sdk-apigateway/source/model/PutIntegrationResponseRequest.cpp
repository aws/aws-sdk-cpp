/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_responseTemplatesHasBeenSet(false),
    m_contentHandling(ContentHandlingStrategy::NOT_SET),
    m_contentHandlingHasBeenSet(false)
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

  if(m_contentHandlingHasBeenSet)
  {
   payload.WithString("contentHandling", ContentHandlingStrategyMapper::GetNameForContentHandlingStrategy(m_contentHandling));
  }

  return payload.View().WriteReadable();
}




