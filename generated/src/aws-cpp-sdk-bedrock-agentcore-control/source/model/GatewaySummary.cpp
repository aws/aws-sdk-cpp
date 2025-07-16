/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/GatewaySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

GatewaySummary::GatewaySummary(JsonView jsonValue)
{
  *this = jsonValue;
}

GatewaySummary& GatewaySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("gatewayId"))
  {
    m_gatewayId = jsonValue.GetString("gatewayId");
    m_gatewayIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = GatewayStatusMapper::GetGatewayStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authorizerType"))
  {
    m_authorizerType = AuthorizerTypeMapper::GetAuthorizerTypeForName(jsonValue.GetString("authorizerType"));
    m_authorizerTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("protocolType"))
  {
    m_protocolType = GatewayProtocolTypeMapper::GetGatewayProtocolTypeForName(jsonValue.GetString("protocolType"));
    m_protocolTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue GatewaySummary::Jsonize() const
{
  JsonValue payload;

  if(m_gatewayIdHasBeenSet)
  {
   payload.WithString("gatewayId", m_gatewayId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", GatewayStatusMapper::GetNameForGatewayStatus(m_status));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_authorizerTypeHasBeenSet)
  {
   payload.WithString("authorizerType", AuthorizerTypeMapper::GetNameForAuthorizerType(m_authorizerType));
  }

  if(m_protocolTypeHasBeenSet)
  {
   payload.WithString("protocolType", GatewayProtocolTypeMapper::GetNameForGatewayProtocolType(m_protocolType));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
