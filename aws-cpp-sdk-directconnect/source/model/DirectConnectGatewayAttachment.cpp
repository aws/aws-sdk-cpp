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

#include <aws/directconnect/model/DirectConnectGatewayAttachment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

DirectConnectGatewayAttachment::DirectConnectGatewayAttachment() : 
    m_directConnectGatewayIdHasBeenSet(false),
    m_virtualInterfaceIdHasBeenSet(false),
    m_virtualInterfaceRegionHasBeenSet(false),
    m_virtualInterfaceOwnerAccountHasBeenSet(false),
    m_attachmentState(DirectConnectGatewayAttachmentState::NOT_SET),
    m_attachmentStateHasBeenSet(false),
    m_attachmentType(DirectConnectGatewayAttachmentType::NOT_SET),
    m_attachmentTypeHasBeenSet(false),
    m_stateChangeErrorHasBeenSet(false)
{
}

DirectConnectGatewayAttachment::DirectConnectGatewayAttachment(JsonView jsonValue) : 
    m_directConnectGatewayIdHasBeenSet(false),
    m_virtualInterfaceIdHasBeenSet(false),
    m_virtualInterfaceRegionHasBeenSet(false),
    m_virtualInterfaceOwnerAccountHasBeenSet(false),
    m_attachmentState(DirectConnectGatewayAttachmentState::NOT_SET),
    m_attachmentStateHasBeenSet(false),
    m_attachmentType(DirectConnectGatewayAttachmentType::NOT_SET),
    m_attachmentTypeHasBeenSet(false),
    m_stateChangeErrorHasBeenSet(false)
{
  *this = jsonValue;
}

DirectConnectGatewayAttachment& DirectConnectGatewayAttachment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("directConnectGatewayId"))
  {
    m_directConnectGatewayId = jsonValue.GetString("directConnectGatewayId");

    m_directConnectGatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("virtualInterfaceId"))
  {
    m_virtualInterfaceId = jsonValue.GetString("virtualInterfaceId");

    m_virtualInterfaceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("virtualInterfaceRegion"))
  {
    m_virtualInterfaceRegion = jsonValue.GetString("virtualInterfaceRegion");

    m_virtualInterfaceRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("virtualInterfaceOwnerAccount"))
  {
    m_virtualInterfaceOwnerAccount = jsonValue.GetString("virtualInterfaceOwnerAccount");

    m_virtualInterfaceOwnerAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attachmentState"))
  {
    m_attachmentState = DirectConnectGatewayAttachmentStateMapper::GetDirectConnectGatewayAttachmentStateForName(jsonValue.GetString("attachmentState"));

    m_attachmentStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attachmentType"))
  {
    m_attachmentType = DirectConnectGatewayAttachmentTypeMapper::GetDirectConnectGatewayAttachmentTypeForName(jsonValue.GetString("attachmentType"));

    m_attachmentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateChangeError"))
  {
    m_stateChangeError = jsonValue.GetString("stateChangeError");

    m_stateChangeErrorHasBeenSet = true;
  }

  return *this;
}

JsonValue DirectConnectGatewayAttachment::Jsonize() const
{
  JsonValue payload;

  if(m_directConnectGatewayIdHasBeenSet)
  {
   payload.WithString("directConnectGatewayId", m_directConnectGatewayId);

  }

  if(m_virtualInterfaceIdHasBeenSet)
  {
   payload.WithString("virtualInterfaceId", m_virtualInterfaceId);

  }

  if(m_virtualInterfaceRegionHasBeenSet)
  {
   payload.WithString("virtualInterfaceRegion", m_virtualInterfaceRegion);

  }

  if(m_virtualInterfaceOwnerAccountHasBeenSet)
  {
   payload.WithString("virtualInterfaceOwnerAccount", m_virtualInterfaceOwnerAccount);

  }

  if(m_attachmentStateHasBeenSet)
  {
   payload.WithString("attachmentState", DirectConnectGatewayAttachmentStateMapper::GetNameForDirectConnectGatewayAttachmentState(m_attachmentState));
  }

  if(m_attachmentTypeHasBeenSet)
  {
   payload.WithString("attachmentType", DirectConnectGatewayAttachmentTypeMapper::GetNameForDirectConnectGatewayAttachmentType(m_attachmentType));
  }

  if(m_stateChangeErrorHasBeenSet)
  {
   payload.WithString("stateChangeError", m_stateChangeError);

  }

  return payload;
}

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
