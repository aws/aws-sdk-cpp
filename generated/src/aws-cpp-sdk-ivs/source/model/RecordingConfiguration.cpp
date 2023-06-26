/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/RecordingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IVS
{
namespace Model
{

RecordingConfiguration::RecordingConfiguration() : 
    m_arnHasBeenSet(false),
    m_destinationConfigurationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_recordingReconnectWindowSeconds(0),
    m_recordingReconnectWindowSecondsHasBeenSet(false),
    m_state(RecordingConfigurationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_thumbnailConfigurationHasBeenSet(false)
{
}

RecordingConfiguration::RecordingConfiguration(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_destinationConfigurationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_recordingReconnectWindowSeconds(0),
    m_recordingReconnectWindowSecondsHasBeenSet(false),
    m_state(RecordingConfigurationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_thumbnailConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

RecordingConfiguration& RecordingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationConfiguration"))
  {
    m_destinationConfiguration = jsonValue.GetObject("destinationConfiguration");

    m_destinationConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recordingReconnectWindowSeconds"))
  {
    m_recordingReconnectWindowSeconds = jsonValue.GetInteger("recordingReconnectWindowSeconds");

    m_recordingReconnectWindowSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = RecordingConfigurationStateMapper::GetRecordingConfigurationStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thumbnailConfiguration"))
  {
    m_thumbnailConfiguration = jsonValue.GetObject("thumbnailConfiguration");

    m_thumbnailConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue RecordingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_destinationConfigurationHasBeenSet)
  {
   payload.WithObject("destinationConfiguration", m_destinationConfiguration.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_recordingReconnectWindowSecondsHasBeenSet)
  {
   payload.WithInteger("recordingReconnectWindowSeconds", m_recordingReconnectWindowSeconds);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", RecordingConfigurationStateMapper::GetNameForRecordingConfigurationState(m_state));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_thumbnailConfigurationHasBeenSet)
  {
   payload.WithObject("thumbnailConfiguration", m_thumbnailConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IVS
} // namespace Aws
