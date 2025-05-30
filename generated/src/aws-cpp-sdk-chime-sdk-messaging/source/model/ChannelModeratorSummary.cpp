﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ChannelModeratorSummary.h>
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

ChannelModeratorSummary::ChannelModeratorSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ChannelModeratorSummary& ChannelModeratorSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Moderator"))
  {
    m_moderator = jsonValue.GetObject("Moderator");
    m_moderatorHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelModeratorSummary::Jsonize() const
{
  JsonValue payload;

  if(m_moderatorHasBeenSet)
  {
   payload.WithObject("Moderator", m_moderator.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
