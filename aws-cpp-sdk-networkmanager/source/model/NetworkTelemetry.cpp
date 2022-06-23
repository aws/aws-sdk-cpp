/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/NetworkTelemetry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

NetworkTelemetry::NetworkTelemetry() : 
    m_registeredGatewayArnHasBeenSet(false),
    m_coreNetworkIdHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_healthHasBeenSet(false)
{
}

NetworkTelemetry::NetworkTelemetry(JsonView jsonValue) : 
    m_registeredGatewayArnHasBeenSet(false),
    m_coreNetworkIdHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_healthHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkTelemetry& NetworkTelemetry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegisteredGatewayArn"))
  {
    m_registeredGatewayArn = jsonValue.GetString("RegisteredGatewayArn");

    m_registeredGatewayArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CoreNetworkId"))
  {
    m_coreNetworkId = jsonValue.GetString("CoreNetworkId");

    m_coreNetworkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsRegion"))
  {
    m_awsRegion = jsonValue.GetString("AwsRegion");

    m_awsRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetString("Address");

    m_addressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Health"))
  {
    m_health = jsonValue.GetObject("Health");

    m_healthHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkTelemetry::Jsonize() const
{
  JsonValue payload;

  if(m_registeredGatewayArnHasBeenSet)
  {
   payload.WithString("RegisteredGatewayArn", m_registeredGatewayArn);

  }

  if(m_coreNetworkIdHasBeenSet)
  {
   payload.WithString("CoreNetworkId", m_coreNetworkId);

  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("AwsRegion", m_awsRegion);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_addressHasBeenSet)
  {
   payload.WithString("Address", m_address);

  }

  if(m_healthHasBeenSet)
  {
   payload.WithObject("Health", m_health.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
