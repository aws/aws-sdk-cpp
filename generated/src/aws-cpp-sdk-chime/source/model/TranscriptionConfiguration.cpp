/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/TranscriptionConfiguration.h>
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

TranscriptionConfiguration::TranscriptionConfiguration() : 
    m_engineTranscribeSettingsHasBeenSet(false),
    m_engineTranscribeMedicalSettingsHasBeenSet(false)
{
}

TranscriptionConfiguration::TranscriptionConfiguration(JsonView jsonValue) : 
    m_engineTranscribeSettingsHasBeenSet(false),
    m_engineTranscribeMedicalSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

TranscriptionConfiguration& TranscriptionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EngineTranscribeSettings"))
  {
    m_engineTranscribeSettings = jsonValue.GetObject("EngineTranscribeSettings");

    m_engineTranscribeSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineTranscribeMedicalSettings"))
  {
    m_engineTranscribeMedicalSettings = jsonValue.GetObject("EngineTranscribeMedicalSettings");

    m_engineTranscribeMedicalSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue TranscriptionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_engineTranscribeSettingsHasBeenSet)
  {
   payload.WithObject("EngineTranscribeSettings", m_engineTranscribeSettings.Jsonize());

  }

  if(m_engineTranscribeMedicalSettingsHasBeenSet)
  {
   payload.WithObject("EngineTranscribeMedicalSettings", m_engineTranscribeMedicalSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
