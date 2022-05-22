/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/VoiceSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

VoiceSettings::VoiceSettings() : 
    m_voiceIdHasBeenSet(false),
    m_engine(VoiceEngine::NOT_SET),
    m_engineHasBeenSet(false)
{
}

VoiceSettings::VoiceSettings(JsonView jsonValue) : 
    m_voiceIdHasBeenSet(false),
    m_engine(VoiceEngine::NOT_SET),
    m_engineHasBeenSet(false)
{
  *this = jsonValue;
}

VoiceSettings& VoiceSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("voiceId"))
  {
    m_voiceId = jsonValue.GetString("voiceId");

    m_voiceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("engine"))
  {
    m_engine = VoiceEngineMapper::GetVoiceEngineForName(jsonValue.GetString("engine"));

    m_engineHasBeenSet = true;
  }

  return *this;
}

JsonValue VoiceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_voiceIdHasBeenSet)
  {
   payload.WithString("voiceId", m_voiceId);

  }

  if(m_engineHasBeenSet)
  {
   payload.WithString("engine", VoiceEngineMapper::GetNameForVoiceEngine(m_engine));
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
