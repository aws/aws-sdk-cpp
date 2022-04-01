/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsApiGatewayV2ApiDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsApiGatewayV2ApiDetails::AwsApiGatewayV2ApiDetails() : 
    m_apiEndpointHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_apiKeySelectionExpressionHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_protocolTypeHasBeenSet(false),
    m_routeSelectionExpressionHasBeenSet(false),
    m_corsConfigurationHasBeenSet(false)
{
}

AwsApiGatewayV2ApiDetails::AwsApiGatewayV2ApiDetails(JsonView jsonValue) : 
    m_apiEndpointHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_apiKeySelectionExpressionHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_protocolTypeHasBeenSet(false),
    m_routeSelectionExpressionHasBeenSet(false),
    m_corsConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

AwsApiGatewayV2ApiDetails& AwsApiGatewayV2ApiDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApiEndpoint"))
  {
    m_apiEndpoint = jsonValue.GetString("ApiEndpoint");

    m_apiEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApiId"))
  {
    m_apiId = jsonValue.GetString("ApiId");

    m_apiIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApiKeySelectionExpression"))
  {
    m_apiKeySelectionExpression = jsonValue.GetString("ApiKeySelectionExpression");

    m_apiKeySelectionExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetString("CreatedDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProtocolType"))
  {
    m_protocolType = jsonValue.GetString("ProtocolType");

    m_protocolTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RouteSelectionExpression"))
  {
    m_routeSelectionExpression = jsonValue.GetString("RouteSelectionExpression");

    m_routeSelectionExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CorsConfiguration"))
  {
    m_corsConfiguration = jsonValue.GetObject("CorsConfiguration");

    m_corsConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsApiGatewayV2ApiDetails::Jsonize() const
{
  JsonValue payload;

  if(m_apiEndpointHasBeenSet)
  {
   payload.WithString("ApiEndpoint", m_apiEndpoint);

  }

  if(m_apiIdHasBeenSet)
  {
   payload.WithString("ApiId", m_apiId);

  }

  if(m_apiKeySelectionExpressionHasBeenSet)
  {
   payload.WithString("ApiKeySelectionExpression", m_apiKeySelectionExpression);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithString("CreatedDate", m_createdDate);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_protocolTypeHasBeenSet)
  {
   payload.WithString("ProtocolType", m_protocolType);

  }

  if(m_routeSelectionExpressionHasBeenSet)
  {
   payload.WithString("RouteSelectionExpression", m_routeSelectionExpression);

  }

  if(m_corsConfigurationHasBeenSet)
  {
   payload.WithObject("CorsConfiguration", m_corsConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
