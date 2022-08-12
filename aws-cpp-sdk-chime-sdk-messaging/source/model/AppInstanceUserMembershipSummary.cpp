/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/AppInstanceUserMembershipSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

AppInstanceUserMembershipSummary::AppInstanceUserMembershipSummary() : 
    m_type(ChannelMembershipType::NOT_SET),
    m_typeHasBeenSet(false),
    m_readMarkerTimestampHasBeenSet(false),
    m_subChannelIdHasBeenSet(false)
{
}

AppInstanceUserMembershipSummary::AppInstanceUserMembershipSummary(JsonView jsonValue) : 
    m_type(ChannelMembershipType::NOT_SET),
    m_typeHasBeenSet(false),
    m_readMarkerTimestampHasBeenSet(false),
    m_subChannelIdHasBeenSet(false)
{
  *this = jsonValue;
}

AppInstanceUserMembershipSummary& AppInstanceUserMembershipSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = ChannelMembershipTypeMapper::GetChannelMembershipTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadMarkerTimestamp"))
  {
    m_readMarkerTimestamp = jsonValue.GetDouble("ReadMarkerTimestamp");

    m_readMarkerTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubChannelId"))
  {
    m_subChannelId = jsonValue.GetString("SubChannelId");

    m_subChannelIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AppInstanceUserMembershipSummary::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ChannelMembershipTypeMapper::GetNameForChannelMembershipType(m_type));
  }

  if(m_readMarkerTimestampHasBeenSet)
  {
   payload.WithDouble("ReadMarkerTimestamp", m_readMarkerTimestamp.SecondsWithMSPrecision());
  }

  if(m_subChannelIdHasBeenSet)
  {
   payload.WithString("SubChannelId", m_subChannelId);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
