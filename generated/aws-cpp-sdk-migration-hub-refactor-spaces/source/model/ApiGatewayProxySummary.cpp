/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/ApiGatewayProxySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubRefactorSpaces
{
namespace Model
{

ApiGatewayProxySummary::ApiGatewayProxySummary() : 
    m_apiGatewayIdHasBeenSet(false),
    m_endpointType(ApiGatewayEndpointType::NOT_SET),
    m_endpointTypeHasBeenSet(false),
    m_nlbArnHasBeenSet(false),
    m_nlbNameHasBeenSet(false),
    m_proxyUrlHasBeenSet(false),
    m_stageNameHasBeenSet(false),
    m_vpcLinkIdHasBeenSet(false)
{
}

ApiGatewayProxySummary::ApiGatewayProxySummary(JsonView jsonValue) : 
    m_apiGatewayIdHasBeenSet(false),
    m_endpointType(ApiGatewayEndpointType::NOT_SET),
    m_endpointTypeHasBeenSet(false),
    m_nlbArnHasBeenSet(false),
    m_nlbNameHasBeenSet(false),
    m_proxyUrlHasBeenSet(false),
    m_stageNameHasBeenSet(false),
    m_vpcLinkIdHasBeenSet(false)
{
  *this = jsonValue;
}

ApiGatewayProxySummary& ApiGatewayProxySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApiGatewayId"))
  {
    m_apiGatewayId = jsonValue.GetString("ApiGatewayId");

    m_apiGatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointType"))
  {
    m_endpointType = ApiGatewayEndpointTypeMapper::GetApiGatewayEndpointTypeForName(jsonValue.GetString("EndpointType"));

    m_endpointTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NlbArn"))
  {
    m_nlbArn = jsonValue.GetString("NlbArn");

    m_nlbArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NlbName"))
  {
    m_nlbName = jsonValue.GetString("NlbName");

    m_nlbNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProxyUrl"))
  {
    m_proxyUrl = jsonValue.GetString("ProxyUrl");

    m_proxyUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StageName"))
  {
    m_stageName = jsonValue.GetString("StageName");

    m_stageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcLinkId"))
  {
    m_vpcLinkId = jsonValue.GetString("VpcLinkId");

    m_vpcLinkIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ApiGatewayProxySummary::Jsonize() const
{
  JsonValue payload;

  if(m_apiGatewayIdHasBeenSet)
  {
   payload.WithString("ApiGatewayId", m_apiGatewayId);

  }

  if(m_endpointTypeHasBeenSet)
  {
   payload.WithString("EndpointType", ApiGatewayEndpointTypeMapper::GetNameForApiGatewayEndpointType(m_endpointType));
  }

  if(m_nlbArnHasBeenSet)
  {
   payload.WithString("NlbArn", m_nlbArn);

  }

  if(m_nlbNameHasBeenSet)
  {
   payload.WithString("NlbName", m_nlbName);

  }

  if(m_proxyUrlHasBeenSet)
  {
   payload.WithString("ProxyUrl", m_proxyUrl);

  }

  if(m_stageNameHasBeenSet)
  {
   payload.WithString("StageName", m_stageName);

  }

  if(m_vpcLinkIdHasBeenSet)
  {
   payload.WithString("VpcLinkId", m_vpcLinkId);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
