/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_apiGatewayManaged(false),
    m_apiGatewayManagedHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_apiKeySelectionExpressionHasBeenSet(false),
    m_corsConfigurationHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_disableSchemaValidation(false),
    m_disableSchemaValidationHasBeenSet(false),
    m_disableExecuteApiEndpoint(false),
    m_disableExecuteApiEndpointHasBeenSet(false),
    m_importInfoHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_protocolType(ProtocolType::NOT_SET),
    m_protocolTypeHasBeenSet(false),
    m_routeSelectionExpressionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_warningsHasBeenSet(false)
{
}

Api::Api(JsonView jsonValue) : 
    m_apiEndpointHasBeenSet(false),
    m_apiGatewayManaged(false),
    m_apiGatewayManagedHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_apiKeySelectionExpressionHasBeenSet(false),
    m_corsConfigurationHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_disableSchemaValidation(false),
    m_disableSchemaValidationHasBeenSet(false),
    m_disableExecuteApiEndpoint(false),
    m_disableExecuteApiEndpointHasBeenSet(false),
    m_importInfoHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_protocolType(ProtocolType::NOT_SET),
    m_protocolTypeHasBeenSet(false),
    m_routeSelectionExpressionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_warningsHasBeenSet(false)
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

  if(jsonValue.ValueExists("apiGatewayManaged"))
  {
    m_apiGatewayManaged = jsonValue.GetBool("apiGatewayManaged");

    m_apiGatewayManagedHasBeenSet = true;
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

  if(jsonValue.ValueExists("corsConfiguration"))
  {
    m_corsConfiguration = jsonValue.GetObject("corsConfiguration");

    m_corsConfigurationHasBeenSet = true;
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

  if(jsonValue.ValueExists("disableExecuteApiEndpoint"))
  {
    m_disableExecuteApiEndpoint = jsonValue.GetBool("disableExecuteApiEndpoint");

    m_disableExecuteApiEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("importInfo"))
  {
    Aws::Utils::Array<JsonView> importInfoJsonList = jsonValue.GetArray("importInfo");
    for(unsigned importInfoIndex = 0; importInfoIndex < importInfoJsonList.GetLength(); ++importInfoIndex)
    {
      m_importInfo.push_back(importInfoJsonList[importInfoIndex].AsString());
    }
    m_importInfoHasBeenSet = true;
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

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("warnings"))
  {
    Aws::Utils::Array<JsonView> warningsJsonList = jsonValue.GetArray("warnings");
    for(unsigned warningsIndex = 0; warningsIndex < warningsJsonList.GetLength(); ++warningsIndex)
    {
      m_warnings.push_back(warningsJsonList[warningsIndex].AsString());
    }
    m_warningsHasBeenSet = true;
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

  if(m_apiGatewayManagedHasBeenSet)
  {
   payload.WithBool("apiGatewayManaged", m_apiGatewayManaged);

  }

  if(m_apiIdHasBeenSet)
  {
   payload.WithString("apiId", m_apiId);

  }

  if(m_apiKeySelectionExpressionHasBeenSet)
  {
   payload.WithString("apiKeySelectionExpression", m_apiKeySelectionExpression);

  }

  if(m_corsConfigurationHasBeenSet)
  {
   payload.WithObject("corsConfiguration", m_corsConfiguration.Jsonize());

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithString("createdDate", m_createdDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_disableSchemaValidationHasBeenSet)
  {
   payload.WithBool("disableSchemaValidation", m_disableSchemaValidation);

  }

  if(m_disableExecuteApiEndpointHasBeenSet)
  {
   payload.WithBool("disableExecuteApiEndpoint", m_disableExecuteApiEndpoint);

  }

  if(m_importInfoHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> importInfoJsonList(m_importInfo.size());
   for(unsigned importInfoIndex = 0; importInfoIndex < importInfoJsonList.GetLength(); ++importInfoIndex)
   {
     importInfoJsonList[importInfoIndex].AsString(m_importInfo[importInfoIndex]);
   }
   payload.WithArray("importInfo", std::move(importInfoJsonList));

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

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_warningsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> warningsJsonList(m_warnings.size());
   for(unsigned warningsIndex = 0; warningsIndex < warningsJsonList.GetLength(); ++warningsIndex)
   {
     warningsJsonList[warningsIndex].AsString(m_warnings[warningsIndex]);
   }
   payload.WithArray("warnings", std::move(warningsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
