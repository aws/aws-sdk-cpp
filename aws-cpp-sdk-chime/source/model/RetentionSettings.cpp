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
