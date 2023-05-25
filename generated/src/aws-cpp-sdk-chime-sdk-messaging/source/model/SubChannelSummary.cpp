/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/SubChannelSummary.h>
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

SubChannelSummary::SubChannelSummary() : 
    m_subChannelIdHasBeenSet(false),
    m_membershipCount(0),
    m_membershipCountHasBeenSet(false)
{
}

SubChannelSummary::SubChannelSummary(JsonView jsonValue) : 
    m_subChannelIdHasBeenSet(false),
    m_membershipCount(0),
    m_membershipCountHasBeenSet(false)
{
  *this = jsonValue;
}

SubChannelSummary& SubChannelSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SubChannelId"))
  {
    m_subChannelId = jsonValue.GetString("SubChannelId");

    m_subChannelIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MembershipCount"))
  {
    m_membershipCount = jsonValue.GetInteger("MembershipCount");

    m_membershipCountHasBeenSet = true;
  }

  return *this;
}

JsonValue SubChannelSummary::Jsonize() const
{
  JsonValue payload;

  if(m_subChannelIdHasBeenSet)
  {
   payload.WithString("SubChannelId", m_subChannelId);

  }

  if(m_membershipCountHasBeenSet)
  {
   payload.WithInteger("MembershipCount", m_membershipCount);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
