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

#include <aws/apigatewayv2/model/CreateApiRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateApiRequest::CreateApiRequest() : 
    m_apiKeySelectionExpressionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_disableSchemaValidation(false),
    m_disableSchemaValidationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_protocolType(ProtocolType::NOT_SET),
    m_protocolTypeHasBeenSet(false),
    m_routeSelectionExpressionHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateApiRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_apiKeySelectionExpressionHasBeenSet)
  {
   payload.WithString("apiKeySelectionExpression", m_apiKeySelectionExpression);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_disableSchemaValidationHasBeenSet)
  {
   payload.WithBool("disableSchemaValidation", m_disableSchemaValidation);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_protocolTypeHasBeenSet)
  {
   payload.WithString("protocolType", ProtocolTypeMapper::GetNameForProtocolType(m_protocolType));
  }

  if(m_routeSelectionExpressionHasBeenSet)
  {
   payload.WithString("routeSelectionExpression", m_routeSelectionExpression);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




