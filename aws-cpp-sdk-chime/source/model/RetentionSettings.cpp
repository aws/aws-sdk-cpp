/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/RetentionSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

RetentionSettings::RetentionSettings() : 
    m_roomRetentionSettingsHasBeenSet(false),
    m_conversationRetentionSettingsHasBeenSet(false)
{
}

RetentionSettings::RetentionSettings(JsonView jsonValue) : 
    m_roomRetentionSettingsHasBeenSet(false),
    m_conversationRetentionSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

RetentionSettings& RetentionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoomRetentionSettings"))
  {
    m_roomRetentionSettings = jsonValue.GetObject("RoomRetentionSettings");

    m_roomRetentionSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConversationRetentionSettings"))
  {
    m_conversationRetentionSettings = jsonValue.GetObject("ConversationRetentionSettings");

    m_conversationRetentionSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue RetentionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_roomRetentionSettingsHasBeenSet)
  {
   payload.WithObject("RoomRetentionSettings", m_roomRetentionSettings.Jsonize());

  }

  if(m_conversationRetentionSettingsHasBeenSet)
  {
   payload.WithObject("ConversationRetentionSettings", m_conversationRetentionSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
