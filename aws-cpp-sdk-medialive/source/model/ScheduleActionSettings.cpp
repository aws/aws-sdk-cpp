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

#include <aws/medialive/model/ScheduleActionSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

ScheduleActionSettings::ScheduleActionSettings() : 
    m_hlsId3SegmentTaggingSettingsHasBeenSet(false),
    m_hlsTimedMetadataSettingsHasBeenSet(false),
    m_inputSwitchSettingsHasBeenSet(false),
    m_pauseStateSettingsHasBeenSet(false),
    m_scte35ReturnToNetworkSettingsHasBeenSet(false),
    m_scte35SpliceInsertSettingsHasBeenSet(false),
    m_scte35TimeSignalSettingsHasBeenSet(false),
    m_staticImageActivateSettingsHasBeenSet(false),
    m_staticImageDeactivateSettingsHasBeenSet(false)
{
}

ScheduleActionSettings::ScheduleActionSettings(JsonView jsonValue) : 
    m_hlsId3SegmentTaggingSettingsHasBeenSet(false),
    m_hlsTimedMetadataSettingsHasBeenSet(false),
    m_inputSwitchSettingsHasBeenSet(false),
    m_pauseStateSettingsHasBeenSet(false),
    m_scte35ReturnToNetworkSettingsHasBeenSet(false),
    m_scte35SpliceInsertSettingsHasBeenSet(false),
    m_scte35TimeSignalSettingsHasBeenSet(false),
    m_staticImageActivateSettingsHasBeenSet(false),
    m_staticImageDeactivateSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduleActionSettings& ScheduleActionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hlsId3SegmentTaggingSettings"))
  {
    m_hlsId3SegmentTaggingSettings = jsonValue.GetObject("hlsId3SegmentTaggingSettings");

    m_hlsId3SegmentTaggingSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hlsTimedMetadataSettings"))
  {
    m_hlsTimedMetadataSettings = jsonValue.GetObject("hlsTimedMetadataSettings");

    m_hlsTimedMetadataSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputSwitchSettings"))
  {
    m_inputSwitchSettings = jsonValue.GetObject("inputSwitchSettings");

    m_inputSwitchSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pauseStateSettings"))
  {
    m_pauseStateSettings = jsonValue.GetObject("pauseStateSettings");

    m_pauseStateSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35ReturnToNetworkSettings"))
  {
    m_scte35ReturnToNetworkSettings = jsonValue.GetObject("scte35ReturnToNetworkSettings");

    m_scte35ReturnToNetworkSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35SpliceInsertSettings"))
  {
    m_scte35SpliceInsertSettings = jsonValue.GetObject("scte35SpliceInsertSettings");

    m_scte35SpliceInsertSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35TimeSignalSettings"))
  {
    m_scte35TimeSignalSettings = jsonValue.GetObject("scte35TimeSignalSettings");

    m_scte35TimeSignalSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("staticImageActivateSettings"))
  {
    m_staticImageActivateSettings = jsonValue.GetObject("staticImageActivateSettings");

    m_staticImageActivateSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("staticImageDeactivateSettings"))
  {
    m_staticImageDeactivateSettings = jsonValue.GetObject("staticImageDeactivateSettings");

    m_staticImageDeactivateSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduleActionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_hlsId3SegmentTaggingSettingsHasBeenSet)
  {
   payload.WithObject("hlsId3SegmentTaggingSettings", m_hlsId3SegmentTaggingSettings.Jsonize());

  }

  if(m_hlsTimedMetadataSettingsHasBeenSet)
  {
   payload.WithObject("hlsTimedMetadataSettings", m_hlsTimedMetadataSettings.Jsonize());

  }

  if(m_inputSwitchSettingsHasBeenSet)
  {
   payload.WithObject("inputSwitchSettings", m_inputSwitchSettings.Jsonize());

  }

  if(m_pauseStateSettingsHasBeenSet)
  {
   payload.WithObject("pauseStateSettings", m_pauseStateSettings.Jsonize());

  }

  if(m_scte35ReturnToNetworkSettingsHasBeenSet)
  {
   payload.WithObject("scte35ReturnToNetworkSettings", m_scte35ReturnToNetworkSettings.Jsonize());

  }

  if(m_scte35SpliceInsertSettingsHasBeenSet)
  {
   payload.WithObject("scte35SpliceInsertSettings", m_scte35SpliceInsertSettings.Jsonize());

  }

  if(m_scte35TimeSignalSettingsHasBeenSet)
  {
   payload.WithObject("scte35TimeSignalSettings", m_scte35TimeSignalSettings.Jsonize());

  }

  if(m_staticImageActivateSettingsHasBeenSet)
  {
   payload.WithObject("staticImageActivateSettings", m_staticImageActivateSettings.Jsonize());

  }

  if(m_staticImageDeactivateSettingsHasBeenSet)
  {
   payload.WithObject("staticImageDeactivateSettings", m_staticImageDeactivateSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
