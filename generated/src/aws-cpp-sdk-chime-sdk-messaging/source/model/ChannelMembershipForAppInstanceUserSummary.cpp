﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ChannelMembershipForAppInstanceUserSummary.h>
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

ChannelMembershipForAppInstanceUserSummary::ChannelMembershipForAppInstanceUserSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ChannelMembershipForAppInstanceUserSummary& ChannelMembershipForAppInstanceUserSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChannelSummary"))
  {
    m_channelSummary = jsonValue.GetObject("ChannelSummary");
    m_channelSummaryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AppInstanceUserMembershipSummary"))
  {
    m_appInstanceUserMembershipSummary = jsonValue.GetObject("AppInstanceUserMembershipSummary");
    m_appInstanceUserMembershipSummaryHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelMembershipForAppInstanceUserSummary::Jsonize() const
{
  JsonValue payload;

  if(m_channelSummaryHasBeenSet)
  {
   payload.WithObject("ChannelSummary", m_channelSummary.Jsonize());

  }

  if(m_appInstanceUserMembershipSummaryHasBeenSet)
  {
   payload.WithObject("AppInstanceUserMembershipSummary", m_appInstanceUserMembershipSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
