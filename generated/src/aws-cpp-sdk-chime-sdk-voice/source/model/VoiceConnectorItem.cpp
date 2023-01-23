/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/VoiceConnectorItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

VoiceConnectorItem::VoiceConnectorItem() : 
    m_voiceConnectorIdHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false)
{
}

VoiceConnectorItem::VoiceConnectorItem(JsonView jsonValue) : 
    m_voiceConnectorIdHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false)
{
  *this = jsonValue;
}

VoiceConnectorItem& VoiceConnectorItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VoiceConnectorId"))
  {
    m_voiceConnectorId = jsonValue.GetString("VoiceConnectorId");

    m_voiceConnectorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Priority"))
  {
    m_priority = jsonValue.GetInteger("Priority");

    m_priorityHasBeenSet = true;
  }

  return *this;
}

JsonValue VoiceConnectorItem::Jsonize() const
{
  JsonValue payload;

  if(m_voiceConnectorIdHasBeenSet)
  {
   payload.WithString("VoiceConnectorId", m_voiceConnectorId);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
