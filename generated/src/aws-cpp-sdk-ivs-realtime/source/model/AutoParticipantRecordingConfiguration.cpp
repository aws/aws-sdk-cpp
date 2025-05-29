/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/AutoParticipantRecordingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

AutoParticipantRecordingConfiguration::AutoParticipantRecordingConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AutoParticipantRecordingConfiguration& AutoParticipantRecordingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("storageConfigurationArn"))
  {
    m_storageConfigurationArn = jsonValue.GetString("storageConfigurationArn");
    m_storageConfigurationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mediaTypes"))
  {
    Aws::Utils::Array<JsonView> mediaTypesJsonList = jsonValue.GetArray("mediaTypes");
    for(unsigned mediaTypesIndex = 0; mediaTypesIndex < mediaTypesJsonList.GetLength(); ++mediaTypesIndex)
    {
      m_mediaTypes.push_back(ParticipantRecordingMediaTypeMapper::GetParticipantRecordingMediaTypeForName(mediaTypesJsonList[mediaTypesIndex].AsString()));
    }
    m_mediaTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("thumbnailConfiguration"))
  {
    m_thumbnailConfiguration = jsonValue.GetObject("thumbnailConfiguration");
    m_thumbnailConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recordingReconnectWindowSeconds"))
  {
    m_recordingReconnectWindowSeconds = jsonValue.GetInteger("recordingReconnectWindowSeconds");
    m_recordingReconnectWindowSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hlsConfiguration"))
  {
    m_hlsConfiguration = jsonValue.GetObject("hlsConfiguration");
    m_hlsConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recordParticipantReplicas"))
  {
    m_recordParticipantReplicas = jsonValue.GetBool("recordParticipantReplicas");
    m_recordParticipantReplicasHasBeenSet = true;
  }
  return *this;
}

JsonValue AutoParticipantRecordingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_storageConfigurationArnHasBeenSet)
  {
   payload.WithString("storageConfigurationArn", m_storageConfigurationArn);

  }

  if(m_mediaTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mediaTypesJsonList(m_mediaTypes.size());
   for(unsigned mediaTypesIndex = 0; mediaTypesIndex < mediaTypesJsonList.GetLength(); ++mediaTypesIndex)
   {
     mediaTypesJsonList[mediaTypesIndex].AsString(ParticipantRecordingMediaTypeMapper::GetNameForParticipantRecordingMediaType(m_mediaTypes[mediaTypesIndex]));
   }
   payload.WithArray("mediaTypes", std::move(mediaTypesJsonList));

  }

  if(m_thumbnailConfigurationHasBeenSet)
  {
   payload.WithObject("thumbnailConfiguration", m_thumbnailConfiguration.Jsonize());

  }

  if(m_recordingReconnectWindowSecondsHasBeenSet)
  {
   payload.WithInteger("recordingReconnectWindowSeconds", m_recordingReconnectWindowSeconds);

  }

  if(m_hlsConfigurationHasBeenSet)
  {
   payload.WithObject("hlsConfiguration", m_hlsConfiguration.Jsonize());

  }

  if(m_recordParticipantReplicasHasBeenSet)
  {
   payload.WithBool("recordParticipantReplicas", m_recordParticipantReplicas);

  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
