/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/SipMediaApplicationAlexaSkillConfiguration.h>
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

SipMediaApplicationAlexaSkillConfiguration::SipMediaApplicationAlexaSkillConfiguration() : 
    m_alexaSkillStatus(AlexaSkillStatus::NOT_SET),
    m_alexaSkillStatusHasBeenSet(false),
    m_alexaSkillIdsHasBeenSet(false)
{
}

SipMediaApplicationAlexaSkillConfiguration::SipMediaApplicationAlexaSkillConfiguration(JsonView jsonValue) : 
    m_alexaSkillStatus(AlexaSkillStatus::NOT_SET),
    m_alexaSkillStatusHasBeenSet(false),
    m_alexaSkillIdsHasBeenSet(false)
{
  *this = jsonValue;
}

SipMediaApplicationAlexaSkillConfiguration& SipMediaApplicationAlexaSkillConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AlexaSkillStatus"))
  {
    m_alexaSkillStatus = AlexaSkillStatusMapper::GetAlexaSkillStatusForName(jsonValue.GetString("AlexaSkillStatus"));

    m_alexaSkillStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlexaSkillIds"))
  {
    Aws::Utils::Array<JsonView> alexaSkillIdsJsonList = jsonValue.GetArray("AlexaSkillIds");
    for(unsigned alexaSkillIdsIndex = 0; alexaSkillIdsIndex < alexaSkillIdsJsonList.GetLength(); ++alexaSkillIdsIndex)
    {
      m_alexaSkillIds.push_back(alexaSkillIdsJsonList[alexaSkillIdsIndex].AsString());
    }
    m_alexaSkillIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue SipMediaApplicationAlexaSkillConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_alexaSkillStatusHasBeenSet)
  {
   payload.WithString("AlexaSkillStatus", AlexaSkillStatusMapper::GetNameForAlexaSkillStatus(m_alexaSkillStatus));
  }

  if(m_alexaSkillIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> alexaSkillIdsJsonList(m_alexaSkillIds.size());
   for(unsigned alexaSkillIdsIndex = 0; alexaSkillIdsIndex < alexaSkillIdsJsonList.GetLength(); ++alexaSkillIdsIndex)
   {
     alexaSkillIdsJsonList[alexaSkillIdsIndex].AsString(m_alexaSkillIds[alexaSkillIdsIndex]);
   }
   payload.WithArray("AlexaSkillIds", std::move(alexaSkillIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
