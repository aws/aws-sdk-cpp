/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/TransitGatewayRouteTableAttachment.h>
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

TransitGatewayRouteTableAttachment::TransitGatewayRouteTableAttachment() : 
    m_attachmentHasBeenSet(false),
    m_peeringIdHasBeenSet(false),
    m_transitGatewayRouteTableArnHasBeenSet(false)
{
}

TransitGatewayRouteTableAttachment::TransitGatewayRouteTableAttachment(JsonView jsonValue) : 
    m_attachmentHasBeenSet(false),
    m_peeringIdHasBeenSet(false),
    m_transitGatewayRouteTableArnHasBeenSet(false)
{
  *this = jsonValue;
}

TransitGatewayRouteTableAttachment& TransitGatewayRouteTableAttachment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attachment"))
  {
    m_attachment = jsonValue.GetObject("Attachment");

    m_attachmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PeeringId"))
  {
    m_peeringId = jsonValue.GetString("PeeringId");

    m_peeringIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransitGatewayRouteTableArn"))
  {
    m_transitGatewayRouteTableArn = jsonValue.GetString("TransitGatewayRouteTableArn");

    m_transitGatewayRouteTableArnHasBeenSet = true;
  }

  return *this;
}

JsonValue TransitGatewayRouteTableAttachment::Jsonize() const
{
  JsonValue payload;

  if(m_attachmentHasBeenSet)
  {
   payload.WithObject("Attachment", m_attachment.Jsonize());

  }

  if(m_peeringIdHasBeenSet)
  {
   payload.WithString("PeeringId", m_peeringId);

  }

  if(m_transitGatewayRouteTableArnHasBeenSet)
  {
   payload.WithString("TransitGatewayRouteTableArn", m_transitGatewayRouteTableArn);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
