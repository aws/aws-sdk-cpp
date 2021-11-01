/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/NetworkRouteDestination.h>
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

NetworkRouteDestination::NetworkRouteDestination() : 
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
}

NetworkRouteDestination::NetworkRouteDestination(JsonView jsonValue) : 
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkRouteDestination& NetworkRouteDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TransitGatewayAttachmentId"))
  {
    m_transitGatewayAttachmentId = jsonValue.GetString("TransitGatewayAttachmentId");

    m_transitGatewayAttachmentIdHasBeenSet = true;
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

  return *this;
}

JsonValue NetworkRouteDestination::Jsonize() const
{
  JsonValue payload;

  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
   payload.WithString("TransitGatewayAttachmentId", m_transitGatewayAttachmentId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
