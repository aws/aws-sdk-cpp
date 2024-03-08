/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/RecordingMode.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

RecordingMode::RecordingMode() : 
    m_recordingFrequency(RecordingFrequency::NOT_SET),
    m_recordingFrequencyHasBeenSet(false),
    m_recordingModeOverridesHasBeenSet(false)
{
}

RecordingMode::RecordingMode(JsonView jsonValue) : 
    m_recordingFrequency(RecordingFrequency::NOT_SET),
    m_recordingFrequencyHasBeenSet(false),
    m_recordingModeOverridesHasBeenSet(false)
{
  *this = jsonValue;
}

RecordingMode& RecordingMode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("recordingFrequency"))
  {
    m_recordingFrequency = RecordingFrequencyMapper::GetRecordingFrequencyForName(jsonValue.GetString("recordingFrequency"));

    m_recordingFrequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recordingModeOverrides"))
  {
    Aws::Utils::Array<JsonView> recordingModeOverridesJsonList = jsonValue.GetArray("recordingModeOverrides");
    for(unsigned recordingModeOverridesIndex = 0; recordingModeOverridesIndex < recordingModeOverridesJsonList.GetLength(); ++recordingModeOverridesIndex)
    {
      m_recordingModeOverrides.push_back(recordingModeOverridesJsonList[recordingModeOverridesIndex].AsObject());
    }
    m_recordingModeOverridesHasBeenSet = true;
  }

  return *this;
}

JsonValue RecordingMode::Jsonize() const
{
  JsonValue payload;

  if(m_recordingFrequencyHasBeenSet)
  {
   payload.WithString("recordingFrequency", RecordingFrequencyMapper::GetNameForRecordingFrequency(m_recordingFrequency));
  }

  if(m_recordingModeOverridesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recordingModeOverridesJsonList(m_recordingModeOverrides.size());
   for(unsigned recordingModeOverridesIndex = 0; recordingModeOverridesIndex < recordingModeOverridesJsonList.GetLength(); ++recordingModeOverridesIndex)
   {
     recordingModeOverridesJsonList[recordingModeOverridesIndex].AsObject(m_recordingModeOverrides[recordingModeOverridesIndex].Jsonize());
   }
   payload.WithArray("recordingModeOverrides", std::move(recordingModeOverridesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
