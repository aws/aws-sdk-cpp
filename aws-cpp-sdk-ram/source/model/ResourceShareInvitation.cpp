/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/ResourceShareInvitation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RAM
{
namespace Model
{

ResourceShareInvitation::ResourceShareInvitation() : 
    m_resourceShareInvitationArnHasBeenSet(false),
    m_resourceShareNameHasBeenSet(false),
    m_resourceShareArnHasBeenSet(false),
    m_senderAccountIdHasBeenSet(false),
    m_receiverAccountIdHasBeenSet(false),
    m_invitationTimestampHasBeenSet(false),
    m_status(ResourceShareInvitationStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ResourceShareInvitation::ResourceShareInvitation(JsonView jsonValue) : 
    m_resourceShareInvitationArnHasBeenSet(false),
    m_resourceShareNameHasBeenSet(false),
    m_resourceShareArnHasBeenSet(false),
    m_senderAccountIdHasBeenSet(false),
    m_receiverAccountIdHasBeenSet(false),
    m_invitationTimestampHasBeenSet(false),
    m_status(ResourceShareInvitationStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceShareInvitation& ResourceShareInvitation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceShareInvitationArn"))
  {
    m_resourceShareInvitationArn = jsonValue.GetString("resourceShareInvitationArn");

    m_resourceShareInvitationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceShareName"))
  {
    m_resourceShareName = jsonValue.GetString("resourceShareName");

    m_resourceShareNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceShareArn"))
  {
    m_resourceShareArn = jsonValue.GetString("resourceShareArn");

    m_resourceShareArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("senderAccountId"))
  {
    m_senderAccountId = jsonValue.GetString("senderAccountId");

    m_senderAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("receiverAccountId"))
  {
    m_receiverAccountId = jsonValue.GetString("receiverAccountId");

    m_receiverAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("invitationTimestamp"))
  {
    m_invitationTimestamp = jsonValue.GetDouble("invitationTimestamp");

    m_invitationTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ResourceShareInvitationStatusMapper::GetResourceShareInvitationStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceShareInvitation::Jsonize() const
{
  JsonValue payload;

  if(m_resourceShareInvitationArnHasBeenSet)
  {
   payload.WithString("resourceShareInvitationArn", m_resourceShareInvitationArn);

  }

  if(m_resourceShareNameHasBeenSet)
  {
   payload.WithString("resourceShareName", m_resourceShareName);

  }

  if(m_resourceShareArnHasBeenSet)
  {
   payload.WithString("resourceShareArn", m_resourceShareArn);

  }

  if(m_senderAccountIdHasBeenSet)
  {
   payload.WithString("senderAccountId", m_senderAccountId);

  }

  if(m_receiverAccountIdHasBeenSet)
  {
   payload.WithString("receiverAccountId", m_receiverAccountId);

  }

  if(m_invitationTimestampHasBeenSet)
  {
   payload.WithDouble("invitationTimestamp", m_invitationTimestamp.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ResourceShareInvitationStatusMapper::GetNameForResourceShareInvitationStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace RAM
} // namespace Aws
