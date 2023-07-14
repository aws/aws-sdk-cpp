/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/NielsenNonLinearWatermarkSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

NielsenNonLinearWatermarkSettings::NielsenNonLinearWatermarkSettings() : 
    m_activeWatermarkProcess(NielsenActiveWatermarkProcessType::NOT_SET),
    m_activeWatermarkProcessHasBeenSet(false),
    m_adiFilenameHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_cbetSourceIdHasBeenSet(false),
    m_episodeIdHasBeenSet(false),
    m_metadataDestinationHasBeenSet(false),
    m_sourceId(0),
    m_sourceIdHasBeenSet(false),
    m_sourceWatermarkStatus(NielsenSourceWatermarkStatusType::NOT_SET),
    m_sourceWatermarkStatusHasBeenSet(false),
    m_ticServerUrlHasBeenSet(false),
    m_uniqueTicPerAudioTrack(NielsenUniqueTicPerAudioTrackType::NOT_SET),
    m_uniqueTicPerAudioTrackHasBeenSet(false)
{
}

NielsenNonLinearWatermarkSettings::NielsenNonLinearWatermarkSettings(JsonView jsonValue) : 
    m_activeWatermarkProcess(NielsenActiveWatermarkProcessType::NOT_SET),
    m_activeWatermarkProcessHasBeenSet(false),
    m_adiFilenameHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_cbetSourceIdHasBeenSet(false),
    m_episodeIdHasBeenSet(false),
    m_metadataDestinationHasBeenSet(false),
    m_sourceId(0),
    m_sourceIdHasBeenSet(false),
    m_sourceWatermarkStatus(NielsenSourceWatermarkStatusType::NOT_SET),
    m_sourceWatermarkStatusHasBeenSet(false),
    m_ticServerUrlHasBeenSet(false),
    m_uniqueTicPerAudioTrack(NielsenUniqueTicPerAudioTrackType::NOT_SET),
    m_uniqueTicPerAudioTrackHasBeenSet(false)
{
  *this = jsonValue;
}

NielsenNonLinearWatermarkSettings& NielsenNonLinearWatermarkSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("activeWatermarkProcess"))
  {
    m_activeWatermarkProcess = NielsenActiveWatermarkProcessTypeMapper::GetNielsenActiveWatermarkProcessTypeForName(jsonValue.GetString("activeWatermarkProcess"));

    m_activeWatermarkProcessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("adiFilename"))
  {
    m_adiFilename = jsonValue.GetString("adiFilename");

    m_adiFilenameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assetId"))
  {
    m_assetId = jsonValue.GetString("assetId");

    m_assetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assetName"))
  {
    m_assetName = jsonValue.GetString("assetName");

    m_assetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cbetSourceId"))
  {
    m_cbetSourceId = jsonValue.GetString("cbetSourceId");

    m_cbetSourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("episodeId"))
  {
    m_episodeId = jsonValue.GetString("episodeId");

    m_episodeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadataDestination"))
  {
    m_metadataDestination = jsonValue.GetString("metadataDestination");

    m_metadataDestinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceId"))
  {
    m_sourceId = jsonValue.GetInteger("sourceId");

    m_sourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceWatermarkStatus"))
  {
    m_sourceWatermarkStatus = NielsenSourceWatermarkStatusTypeMapper::GetNielsenSourceWatermarkStatusTypeForName(jsonValue.GetString("sourceWatermarkStatus"));

    m_sourceWatermarkStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ticServerUrl"))
  {
    m_ticServerUrl = jsonValue.GetString("ticServerUrl");

    m_ticServerUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uniqueTicPerAudioTrack"))
  {
    m_uniqueTicPerAudioTrack = NielsenUniqueTicPerAudioTrackTypeMapper::GetNielsenUniqueTicPerAudioTrackTypeForName(jsonValue.GetString("uniqueTicPerAudioTrack"));

    m_uniqueTicPerAudioTrackHasBeenSet = true;
  }

  return *this;
}

JsonValue NielsenNonLinearWatermarkSettings::Jsonize() const
{
  JsonValue payload;

  if(m_activeWatermarkProcessHasBeenSet)
  {
   payload.WithString("activeWatermarkProcess", NielsenActiveWatermarkProcessTypeMapper::GetNameForNielsenActiveWatermarkProcessType(m_activeWatermarkProcess));
  }

  if(m_adiFilenameHasBeenSet)
  {
   payload.WithString("adiFilename", m_adiFilename);

  }

  if(m_assetIdHasBeenSet)
  {
   payload.WithString("assetId", m_assetId);

  }

  if(m_assetNameHasBeenSet)
  {
   payload.WithString("assetName", m_assetName);

  }

  if(m_cbetSourceIdHasBeenSet)
  {
   payload.WithString("cbetSourceId", m_cbetSourceId);

  }

  if(m_episodeIdHasBeenSet)
  {
   payload.WithString("episodeId", m_episodeId);

  }

  if(m_metadataDestinationHasBeenSet)
  {
   payload.WithString("metadataDestination", m_metadataDestination);

  }

  if(m_sourceIdHasBeenSet)
  {
   payload.WithInteger("sourceId", m_sourceId);

  }

  if(m_sourceWatermarkStatusHasBeenSet)
  {
   payload.WithString("sourceWatermarkStatus", NielsenSourceWatermarkStatusTypeMapper::GetNameForNielsenSourceWatermarkStatusType(m_sourceWatermarkStatus));
  }

  if(m_ticServerUrlHasBeenSet)
  {
   payload.WithString("ticServerUrl", m_ticServerUrl);

  }

  if(m_uniqueTicPerAudioTrackHasBeenSet)
  {
   payload.WithString("uniqueTicPerAudioTrack", NielsenUniqueTicPerAudioTrackTypeMapper::GetNameForNielsenUniqueTicPerAudioTrackType(m_uniqueTicPerAudioTrack));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
