﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ChannelBanSummary.h>
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

ChannelBanSummary::ChannelBanSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ChannelBanSummary& ChannelBanSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Member"))
  {
    m_member = jsonValue.GetObject("Member");
    m_memberHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelBanSummary::Jsonize() const
{
  JsonValue payload;

  if(m_memberHasBeenSet)
  {
   payload.WithObject("Member", m_member.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
