/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/MsSmoothGroupSettings.h>
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

MsSmoothGroupSettings::MsSmoothGroupSettings() : 
    m_acquisitionPointIdHasBeenSet(false),
    m_audioOnlyTimecodeControl(SmoothGroupAudioOnlyTimecodeControl::NOT_SET),
    m_audioOnlyTimecodeControlHasBeenSet(false),
    m_certificateMode(SmoothGroupCertificateMode::NOT_SET),
    m_certificateModeHasBeenSet(false),
    m_connectionRetryInterval(0),
    m_connectionRetryIntervalHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_eventIdMode(SmoothGroupEventIdMode::NOT_SET),
    m_eventIdModeHasBeenSet(false),
    m_eventStopBehavior(SmoothGroupEventStopBehavior::NOT_SET),
    m_eventStopBehaviorHasBeenSet(false),
    m_filecacheDuration(0),
    m_filecacheDurationHasBeenSet(false),
    m_fragmentLength(0),
    m_fragmentLengthHasBeenSet(false),
    m_inputLossAction(InputLossActionForMsSmoothOut::NOT_SET),
    m_inputLossActionHasBeenSet(false),
    m_numRetries(0),
    m_numRetriesHasBeenSet(false),
    m_restartDelay(0),
    m_restartDelayHasBeenSet(false),
    m_segmentationMode(SmoothGroupSegmentationMode::NOT_SET),
    m_segmentationModeHasBeenSet(false),
    m_sendDelayMs(0),
    m_sendDelayMsHasBeenSet(false),
    m_sparseTrackType(SmoothGroupSparseTrackType::NOT_SET),
    m_sparseTrackTypeHasBeenSet(false),
    m_streamManifestBehavior(SmoothGroupStreamManifestBehavior::NOT_SET),
    m_streamManifestBehaviorHasBeenSet(false),
    m_timestampOffsetHasBeenSet(false),
    m_timestampOffsetMode(SmoothGroupTimestampOffsetMode::NOT_SET),
    m_timestampOffsetModeHasBeenSet(false)
{
}

MsSmoothGroupSettings::MsSmoothGroupSettings(JsonView jsonValue) : 
    m_acquisitionPointIdHasBeenSet(false),
    m_audioOnlyTimecodeControl(SmoothGroupAudioOnlyTimecodeControl::NOT_SET),
    m_audioOnlyTimecodeControlHasBeenSet(false),
    m_certificateMode(SmoothGroupCertificateMode::NOT_SET),
    m_certificateModeHasBeenSet(false),
    m_connectionRetryInterval(0),
    m_connectionRetryIntervalHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_eventIdMode(SmoothGroupEventIdMode::NOT_SET),
    m_eventIdModeHasBeenSet(false),
    m_eventStopBehavior(SmoothGroupEventStopBehavior::NOT_SET),
    m_eventStopBehaviorHasBeenSet(false),
    m_filecacheDuration(0),
    m_filecacheDurationHasBeenSet(false),
    m_fragmentLength(0),
    m_fragmentLengthHasBeenSet(false),
    m_inputLossAction(InputLossActionForMsSmoothOut::NOT_SET),
    m_inputLossActionHasBeenSet(false),
    m_numRetries(0),
    m_numRetriesHasBeenSet(false),
    m_restartDelay(0),
    m_restartDelayHasBeenSet(false),
    m_segmentationMode(SmoothGroupSegmentationMode::NOT_SET),
    m_segmentationModeHasBeenSet(false),
    m_sendDelayMs(0),
    m_sendDelayMsHasBeenSet(false),
    m_sparseTrackType(SmoothGroupSparseTrackType::NOT_SET),
    m_sparseTrackTypeHasBeenSet(false),
    m_streamManifestBehavior(SmoothGroupStreamManifestBehavior::NOT_SET),
    m_streamManifestBehaviorHasBeenSet(false),
    m_timestampOffsetHasBeenSet(false),
    m_timestampOffsetMode(SmoothGroupTimestampOffsetMode::NOT_SET),
    m_timestampOffsetModeHasBeenSet(false)
{
  *this = jsonValue;
}

MsSmoothGroupSettings& MsSmoothGroupSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("acquisitionPointId"))
  {
    m_acquisitionPointId = jsonValue.GetString("acquisitionPointId");

    m_acquisitionPointIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioOnlyTimecodeControl"))
  {
    m_audioOnlyTimecodeControl = SmoothGroupAudioOnlyTimecodeControlMapper::GetSmoothGroupAudioOnlyTimecodeControlForName(jsonValue.GetString("audioOnlyTimecodeControl"));

    m_audioOnlyTimecodeControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("certificateMode"))
  {
    m_certificateMode = SmoothGroupCertificateModeMapper::GetSmoothGroupCertificateModeForName(jsonValue.GetString("certificateMode"));

    m_certificateModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectionRetryInterval"))
  {
    m_connectionRetryInterval = jsonValue.GetInteger("connectionRetryInterval");

    m_connectionRetryIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetObject("destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventId"))
  {
    m_eventId = jsonValue.GetString("eventId");

    m_eventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventIdMode"))
  {
    m_eventIdMode = SmoothGroupEventIdModeMapper::GetSmoothGroupEventIdModeForName(jsonValue.GetString("eventIdMode"));

    m_eventIdModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventStopBehavior"))
  {
    m_eventStopBehavior = SmoothGroupEventStopBehaviorMapper::GetSmoothGroupEventStopBehaviorForName(jsonValue.GetString("eventStopBehavior"));

    m_eventStopBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filecacheDuration"))
  {
    m_filecacheDuration = jsonValue.GetInteger("filecacheDuration");

    m_filecacheDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fragmentLength"))
  {
    m_fragmentLength = jsonValue.GetInteger("fragmentLength");

    m_fragmentLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputLossAction"))
  {
    m_inputLossAction = InputLossActionForMsSmoothOutMapper::GetInputLossActionForMsSmoothOutForName(jsonValue.GetString("inputLossAction"));

    m_inputLossActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numRetries"))
  {
    m_numRetries = jsonValue.GetInteger("numRetries");

    m_numRetriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("restartDelay"))
  {
    m_restartDelay = jsonValue.GetInteger("restartDelay");

    m_restartDelayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentationMode"))
  {
    m_segmentationMode = SmoothGroupSegmentationModeMapper::GetSmoothGroupSegmentationModeForName(jsonValue.GetString("segmentationMode"));

    m_segmentationModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sendDelayMs"))
  {
    m_sendDelayMs = jsonValue.GetInteger("sendDelayMs");

    m_sendDelayMsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sparseTrackType"))
  {
    m_sparseTrackType = SmoothGroupSparseTrackTypeMapper::GetSmoothGroupSparseTrackTypeForName(jsonValue.GetString("sparseTrackType"));

    m_sparseTrackTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamManifestBehavior"))
  {
    m_streamManifestBehavior = SmoothGroupStreamManifestBehaviorMapper::GetSmoothGroupStreamManifestBehaviorForName(jsonValue.GetString("streamManifestBehavior"));

    m_streamManifestBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestampOffset"))
  {
    m_timestampOffset = jsonValue.GetString("timestampOffset");

    m_timestampOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestampOffsetMode"))
  {
    m_timestampOffsetMode = SmoothGroupTimestampOffsetModeMapper::GetSmoothGroupTimestampOffsetModeForName(jsonValue.GetString("timestampOffsetMode"));

    m_timestampOffsetModeHasBeenSet = true;
  }

  return *this;
}

JsonValue MsSmoothGroupSettings::Jsonize() const
{
  JsonValue payload;

  if(m_acquisitionPointIdHasBeenSet)
  {
   payload.WithString("acquisitionPointId", m_acquisitionPointId);

  }

  if(m_audioOnlyTimecodeControlHasBeenSet)
  {
   payload.WithString("audioOnlyTimecodeControl", SmoothGroupAudioOnlyTimecodeControlMapper::GetNameForSmoothGroupAudioOnlyTimecodeControl(m_audioOnlyTimecodeControl));
  }

  if(m_certificateModeHasBeenSet)
  {
   payload.WithString("certificateMode", SmoothGroupCertificateModeMapper::GetNameForSmoothGroupCertificateMode(m_certificateMode));
  }

  if(m_connectionRetryIntervalHasBeenSet)
  {
   payload.WithInteger("connectionRetryInterval", m_connectionRetryInterval);

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithObject("destination", m_destination.Jsonize());

  }

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("eventId", m_eventId);

  }

  if(m_eventIdModeHasBeenSet)
  {
   payload.WithString("eventIdMode", SmoothGroupEventIdModeMapper::GetNameForSmoothGroupEventIdMode(m_eventIdMode));
  }

  if(m_eventStopBehaviorHasBeenSet)
  {
   payload.WithString("eventStopBehavior", SmoothGroupEventStopBehaviorMapper::GetNameForSmoothGroupEventStopBehavior(m_eventStopBehavior));
  }

  if(m_filecacheDurationHasBeenSet)
  {
   payload.WithInteger("filecacheDuration", m_filecacheDuration);

  }

  if(m_fragmentLengthHasBeenSet)
  {
   payload.WithInteger("fragmentLength", m_fragmentLength);

  }

  if(m_inputLossActionHasBeenSet)
  {
   payload.WithString("inputLossAction", InputLossActionForMsSmoothOutMapper::GetNameForInputLossActionForMsSmoothOut(m_inputLossAction));
  }

  if(m_numRetriesHasBeenSet)
  {
   payload.WithInteger("numRetries", m_numRetries);

  }

  if(m_restartDelayHasBeenSet)
  {
   payload.WithInteger("restartDelay", m_restartDelay);

  }

  if(m_segmentationModeHasBeenSet)
  {
   payload.WithString("segmentationMode", SmoothGroupSegmentationModeMapper::GetNameForSmoothGroupSegmentationMode(m_segmentationMode));
  }

  if(m_sendDelayMsHasBeenSet)
  {
   payload.WithInteger("sendDelayMs", m_sendDelayMs);

  }

  if(m_sparseTrackTypeHasBeenSet)
  {
   payload.WithString("sparseTrackType", SmoothGroupSparseTrackTypeMapper::GetNameForSmoothGroupSparseTrackType(m_sparseTrackType));
  }

  if(m_streamManifestBehaviorHasBeenSet)
  {
   payload.WithString("streamManifestBehavior", SmoothGroupStreamManifestBehaviorMapper::GetNameForSmoothGroupStreamManifestBehavior(m_streamManifestBehavior));
  }

  if(m_timestampOffsetHasBeenSet)
  {
   payload.WithString("timestampOffset", m_timestampOffset);

  }

  if(m_timestampOffsetModeHasBeenSet)
  {
   payload.WithString("timestampOffsetMode", SmoothGroupTimestampOffsetModeMapper::GetNameForSmoothGroupTimestampOffsetMode(m_timestampOffsetMode));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
