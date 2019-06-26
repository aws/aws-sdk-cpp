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

#include <aws/apigatewayv2/model/Api.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

Api::Api() : 
    m_apiEndpointHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_apiKeySelectionExpressionHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_disableSchemaValidation(false),
    m_disableSchemaValidationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_protocolType(ProtocolType::NOT_SET),
    m_protocolTypeHasBeenSet(false),
    m_routeSelectionExpressionHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_warningsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Api::Api(JsonView jsonValue) : 
    m_apiEndpointHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_apiKeySelectionExpressionHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_disableSchemaValidation(false),
    m_disableSchemaValidationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_protocolType(ProtocolType::NOT_SET),
    m_protocolTypeHasBeenSet(false),
    m_routeSelectionExpressionHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_warningsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Api& Api::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("apiEndpoint"))
  {
    m_apiEndpoint = jsonValue.GetString("apiEndpoint");

    m_apiEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiId"))
  {
    m_apiId = jsonValue.GetString("apiId");

    m_apiIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiKeySelectionExpression"))
  {
    m_apiKeySelectionExpression = jsonValue.GetString("apiKeySelectionExpression");

    m_apiKeySelectionExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetString("createdDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("disableSchemaValidation"))
  {
    m_disableSchemaValidation = jsonValue.GetBool("disableSchemaValidation");

    m_disableSchemaValidationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("protocolType"))
  {
    m_protocolType = ProtocolTypeMapper::GetProtocolTypeForName(jsonValue.GetString("protocolType"));

    m_protocolTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("routeSelectionExpression"))
  {
    m_routeSelectionExpression = jsonValue.GetString("routeSelectionExpression");

    m_routeSelectionExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("warnings"))
  {
    Array<JsonView> warningsJsonList = jsonValue.GetArray("warnings");
    for(unsigned warningsIndex = 0; warningsIndex < warningsJsonList.GetLength(); ++warningsIndex)
    {
      m_warnings.push_back(warningsJsonList[warningsIndex].AsString());
    }
    m_warningsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue Api::Jsonize() const
{
  JsonValue payload;

  if(m_apiEndpointHasBeenSet)
  {
   payload.WithString("apiEndpoint", m_apiEndpoint);

  }

  if(m_apiIdHasBeenSet)
  {
   payload.WithString("apiId", m_apiId);

  }

  if(m_apiKeySelectionExpressionHasBeenSet)
  {
   payload.WithString("apiKeySelectionExpression", m_apiKeySelectionExpression);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithString("createdDate", m_createdDate.ToGmtString(DateFormat::ISO_8601));
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

  if(m_warningsHasBeenSet)
  {
   Array<JsonValue> warningsJsonList(m_warnings.size());
   for(unsigned warningsIndex = 0; warningsIndex < warningsJsonList.GetLength(); ++warningsIndex)
   {
     warningsJsonList[warningsIndex].AsString(m_warnings[warningsIndex]);
   }
   payload.WithArray("warnings", std::move(warningsJsonList));

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

  return payload;
}

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
