﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/ChannelRetentionSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKIdentity
{
namespace Model
{

ChannelRetentionSettings::ChannelRetentionSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

ChannelRetentionSettings& ChannelRetentionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RetentionDays"))
  {
    m_retentionDays = jsonValue.GetInteger("RetentionDays");
    m_retentionDaysHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelRetentionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_retentionDaysHasBeenSet)
  {
   payload.WithInteger("RetentionDays", m_retentionDays);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
