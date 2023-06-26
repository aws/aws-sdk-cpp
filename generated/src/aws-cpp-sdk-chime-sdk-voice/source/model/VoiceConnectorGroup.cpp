/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/VoiceConnectorGroup.h>
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

VoiceConnectorGroup::VoiceConnectorGroup() : 
    m_voiceConnectorGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_voiceConnectorItemsHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false),
    m_voiceConnectorGroupArnHasBeenSet(false)
{
}

VoiceConnectorGroup::VoiceConnectorGroup(JsonView jsonValue) : 
    m_voiceConnectorGroupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_voiceConnectorItemsHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_updatedTimestampHasBeenSet(false),
    m_voiceConnectorGroupArnHasBeenSet(false)
{
  *this = jsonValue;
}

VoiceConnectorGroup& VoiceConnectorGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VoiceConnectorGroupId"))
  {
    m_voiceConnectorGroupId = jsonValue.GetString("VoiceConnectorGroupId");

    m_voiceConnectorGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VoiceConnectorItems"))
  {
    Aws::Utils::Array<JsonView> voiceConnectorItemsJsonList = jsonValue.GetArray("VoiceConnectorItems");
    for(unsigned voiceConnectorItemsIndex = 0; voiceConnectorItemsIndex < voiceConnectorItemsJsonList.GetLength(); ++voiceConnectorItemsIndex)
    {
      m_voiceConnectorItems.push_back(voiceConnectorItemsJsonList[voiceConnectorItemsIndex].AsObject());
    }
    m_voiceConnectorItemsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetString("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedTimestamp"))
  {
    m_updatedTimestamp = jsonValue.GetString("UpdatedTimestamp");

    m_updatedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VoiceConnectorGroupArn"))
  {
    m_voiceConnectorGroupArn = jsonValue.GetString("VoiceConnectorGroupArn");

    m_voiceConnectorGroupArnHasBeenSet = true;
  }

  return *this;
}

JsonValue VoiceConnectorGroup::Jsonize() const
{
  JsonValue payload;

  if(m_voiceConnectorGroupIdHasBeenSet)
  {
   payload.WithString("VoiceConnectorGroupId", m_voiceConnectorGroupId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_voiceConnectorItemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> voiceConnectorItemsJsonList(m_voiceConnectorItems.size());
   for(unsigned voiceConnectorItemsIndex = 0; voiceConnectorItemsIndex < voiceConnectorItemsJsonList.GetLength(); ++voiceConnectorItemsIndex)
   {
     voiceConnectorItemsJsonList[voiceConnectorItemsIndex].AsObject(m_voiceConnectorItems[voiceConnectorItemsIndex].Jsonize());
   }
   payload.WithArray("VoiceConnectorItems", std::move(voiceConnectorItemsJsonList));

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithString("CreatedTimestamp", m_createdTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedTimestampHasBeenSet)
  {
   payload.WithString("UpdatedTimestamp", m_updatedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_voiceConnectorGroupArnHasBeenSet)
  {
   payload.WithString("VoiceConnectorGroupArn", m_voiceConnectorGroupArn);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
