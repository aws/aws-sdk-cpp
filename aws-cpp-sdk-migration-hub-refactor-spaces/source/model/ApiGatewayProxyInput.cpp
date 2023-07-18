/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/ApiGatewayProxyInput.h>
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

ApiGatewayProxyInput::ApiGatewayProxyInput() : 
    m_endpointType(ApiGatewayEndpointType::NOT_SET),
    m_endpointTypeHasBeenSet(false),
    m_stageNameHasBeenSet(false)
{
}

ApiGatewayProxyInput::ApiGatewayProxyInput(JsonView jsonValue) : 
    m_endpointType(ApiGatewayEndpointType::NOT_SET),
    m_endpointTypeHasBeenSet(false),
    m_stageNameHasBeenSet(false)
{
  *this = jsonValue;
}

ApiGatewayProxyInput& ApiGatewayProxyInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndpointType"))
  {
    m_endpointType = ApiGatewayEndpointTypeMapper::GetApiGatewayEndpointTypeForName(jsonValue.GetString("EndpointType"));

    m_endpointTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StageName"))
  {
    m_stageName = jsonValue.GetString("StageName");

    m_stageNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ApiGatewayProxyInput::Jsonize() const
{
  JsonValue payload;

  if(m_endpointTypeHasBeenSet)
  {
   payload.WithString("EndpointType", ApiGatewayEndpointTypeMapper::GetNameForApiGatewayEndpointType(m_endpointType));
  }

  if(m_stageNameHasBeenSet)
  {
   payload.WithString("StageName", m_stageName);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
