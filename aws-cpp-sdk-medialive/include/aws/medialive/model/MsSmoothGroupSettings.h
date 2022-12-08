/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/SmoothGroupAudioOnlyTimecodeControl.h>
#include <aws/medialive/model/SmoothGroupCertificateMode.h>
#include <aws/medialive/model/OutputLocationRef.h>
#include <aws/medialive/model/SmoothGroupEventIdMode.h>
#include <aws/medialive/model/SmoothGroupEventStopBehavior.h>
#include <aws/medialive/model/InputLossActionForMsSmoothOut.h>
#include <aws/medialive/model/SmoothGroupSegmentationMode.h>
#include <aws/medialive/model/SmoothGroupSparseTrackType.h>
#include <aws/medialive/model/SmoothGroupStreamManifestBehavior.h>
#include <aws/medialive/model/SmoothGroupTimestampOffsetMode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{

  /**
   * Ms Smooth Group Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MsSmoothGroupSettings">AWS
   * API Reference</a></p>
   */
  class MsSmoothGroupSettings
  {
  public:
    AWS_MEDIALIVE_API MsSmoothGroupSettings();
    AWS_MEDIALIVE_API MsSmoothGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MsSmoothGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The ID to include in each message in the sparse track. Ignored if
     * sparseTrackType is NONE.
     */
    inline const Aws::String& GetAcquisitionPointId() const{ return m_acquisitionPointId; }

    /**
     * The ID to include in each message in the sparse track. Ignored if
     * sparseTrackType is NONE.
     */
    inline bool AcquisitionPointIdHasBeenSet() const { return m_acquisitionPointIdHasBeenSet; }

    /**
     * The ID to include in each message in the sparse track. Ignored if
     * sparseTrackType is NONE.
     */
    inline void SetAcquisitionPointId(const Aws::String& value) { m_acquisitionPointIdHasBeenSet = true; m_acquisitionPointId = value; }

    /**
     * The ID to include in each message in the sparse track. Ignored if
     * sparseTrackType is NONE.
     */
    inline void SetAcquisitionPointId(Aws::String&& value) { m_acquisitionPointIdHasBeenSet = true; m_acquisitionPointId = std::move(value); }

    /**
     * The ID to include in each message in the sparse track. Ignored if
     * sparseTrackType is NONE.
     */
    inline void SetAcquisitionPointId(const char* value) { m_acquisitionPointIdHasBeenSet = true; m_acquisitionPointId.assign(value); }

    /**
     * The ID to include in each message in the sparse track. Ignored if
     * sparseTrackType is NONE.
     */
    inline MsSmoothGroupSettings& WithAcquisitionPointId(const Aws::String& value) { SetAcquisitionPointId(value); return *this;}

    /**
     * The ID to include in each message in the sparse track. Ignored if
     * sparseTrackType is NONE.
     */
    inline MsSmoothGroupSettings& WithAcquisitionPointId(Aws::String&& value) { SetAcquisitionPointId(std::move(value)); return *this;}

    /**
     * The ID to include in each message in the sparse track. Ignored if
     * sparseTrackType is NONE.
     */
    inline MsSmoothGroupSettings& WithAcquisitionPointId(const char* value) { SetAcquisitionPointId(value); return *this;}


    /**
     * If set to passthrough for an audio-only MS Smooth output, the fragment absolute
     * time will be set to the current timecode. This option does not write timecodes
     * to the audio elementary stream.
     */
    inline const SmoothGroupAudioOnlyTimecodeControl& GetAudioOnlyTimecodeControl() const{ return m_audioOnlyTimecodeControl; }

    /**
     * If set to passthrough for an audio-only MS Smooth output, the fragment absolute
     * time will be set to the current timecode. This option does not write timecodes
     * to the audio elementary stream.
     */
    inline bool AudioOnlyTimecodeControlHasBeenSet() const { return m_audioOnlyTimecodeControlHasBeenSet; }

    /**
     * If set to passthrough for an audio-only MS Smooth output, the fragment absolute
     * time will be set to the current timecode. This option does not write timecodes
     * to the audio elementary stream.
     */
    inline void SetAudioOnlyTimecodeControl(const SmoothGroupAudioOnlyTimecodeControl& value) { m_audioOnlyTimecodeControlHasBeenSet = true; m_audioOnlyTimecodeControl = value; }

    /**
     * If set to passthrough for an audio-only MS Smooth output, the fragment absolute
     * time will be set to the current timecode. This option does not write timecodes
     * to the audio elementary stream.
     */
    inline void SetAudioOnlyTimecodeControl(SmoothGroupAudioOnlyTimecodeControl&& value) { m_audioOnlyTimecodeControlHasBeenSet = true; m_audioOnlyTimecodeControl = std::move(value); }

    /**
     * If set to passthrough for an audio-only MS Smooth output, the fragment absolute
     * time will be set to the current timecode. This option does not write timecodes
     * to the audio elementary stream.
     */
    inline MsSmoothGroupSettings& WithAudioOnlyTimecodeControl(const SmoothGroupAudioOnlyTimecodeControl& value) { SetAudioOnlyTimecodeControl(value); return *this;}

    /**
     * If set to passthrough for an audio-only MS Smooth output, the fragment absolute
     * time will be set to the current timecode. This option does not write timecodes
     * to the audio elementary stream.
     */
    inline MsSmoothGroupSettings& WithAudioOnlyTimecodeControl(SmoothGroupAudioOnlyTimecodeControl&& value) { SetAudioOnlyTimecodeControl(std::move(value)); return *this;}


    /**
     * If set to verifyAuthenticity, verify the https certificate chain to a trusted
     * Certificate Authority (CA).  This will cause https outputs to self-signed
     * certificates to fail.
     */
    inline const SmoothGroupCertificateMode& GetCertificateMode() const{ return m_certificateMode; }

    /**
     * If set to verifyAuthenticity, verify the https certificate chain to a trusted
     * Certificate Authority (CA).  This will cause https outputs to self-signed
     * certificates to fail.
     */
    inline bool CertificateModeHasBeenSet() const { return m_certificateModeHasBeenSet; }

    /**
     * If set to verifyAuthenticity, verify the https certificate chain to a trusted
     * Certificate Authority (CA).  This will cause https outputs to self-signed
     * certificates to fail.
     */
    inline void SetCertificateMode(const SmoothGroupCertificateMode& value) { m_certificateModeHasBeenSet = true; m_certificateMode = value; }

    /**
     * If set to verifyAuthenticity, verify the https certificate chain to a trusted
     * Certificate Authority (CA).  This will cause https outputs to self-signed
     * certificates to fail.
     */
    inline void SetCertificateMode(SmoothGroupCertificateMode&& value) { m_certificateModeHasBeenSet = true; m_certificateMode = std::move(value); }

    /**
     * If set to verifyAuthenticity, verify the https certificate chain to a trusted
     * Certificate Authority (CA).  This will cause https outputs to self-signed
     * certificates to fail.
     */
    inline MsSmoothGroupSettings& WithCertificateMode(const SmoothGroupCertificateMode& value) { SetCertificateMode(value); return *this;}

    /**
     * If set to verifyAuthenticity, verify the https certificate chain to a trusted
     * Certificate Authority (CA).  This will cause https outputs to self-signed
     * certificates to fail.
     */
    inline MsSmoothGroupSettings& WithCertificateMode(SmoothGroupCertificateMode&& value) { SetCertificateMode(std::move(value)); return *this;}


    /**
     * Number of seconds to wait before retrying connection to the IIS server if the
     * connection is lost. Content will be cached during this time and the cache will
     * be be delivered to the IIS server once the connection is re-established.
     */
    inline int GetConnectionRetryInterval() const{ return m_connectionRetryInterval; }

    /**
     * Number of seconds to wait before retrying connection to the IIS server if the
     * connection is lost. Content will be cached during this time and the cache will
     * be be delivered to the IIS server once the connection is re-established.
     */
    inline bool ConnectionRetryIntervalHasBeenSet() const { return m_connectionRetryIntervalHasBeenSet; }

    /**
     * Number of seconds to wait before retrying connection to the IIS server if the
     * connection is lost. Content will be cached during this time and the cache will
     * be be delivered to the IIS server once the connection is re-established.
     */
    inline void SetConnectionRetryInterval(int value) { m_connectionRetryIntervalHasBeenSet = true; m_connectionRetryInterval = value; }

    /**
     * Number of seconds to wait before retrying connection to the IIS server if the
     * connection is lost. Content will be cached during this time and the cache will
     * be be delivered to the IIS server once the connection is re-established.
     */
    inline MsSmoothGroupSettings& WithConnectionRetryInterval(int value) { SetConnectionRetryInterval(value); return *this;}


    /**
     * Smooth Streaming publish point on an IIS server. Elemental Live acts as a "Push"
     * encoder to IIS.
     */
    inline const OutputLocationRef& GetDestination() const{ return m_destination; }

    /**
     * Smooth Streaming publish point on an IIS server. Elemental Live acts as a "Push"
     * encoder to IIS.
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * Smooth Streaming publish point on an IIS server. Elemental Live acts as a "Push"
     * encoder to IIS.
     */
    inline void SetDestination(const OutputLocationRef& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * Smooth Streaming publish point on an IIS server. Elemental Live acts as a "Push"
     * encoder to IIS.
     */
    inline void SetDestination(OutputLocationRef&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * Smooth Streaming publish point on an IIS server. Elemental Live acts as a "Push"
     * encoder to IIS.
     */
    inline MsSmoothGroupSettings& WithDestination(const OutputLocationRef& value) { SetDestination(value); return *this;}

    /**
     * Smooth Streaming publish point on an IIS server. Elemental Live acts as a "Push"
     * encoder to IIS.
     */
    inline MsSmoothGroupSettings& WithDestination(OutputLocationRef&& value) { SetDestination(std::move(value)); return *this;}


    /**
     * MS Smooth event ID to be sent to the IIS server.

Should only be specified if
     * eventIdMode is set to useConfigured.
     */
    inline const Aws::String& GetEventId() const{ return m_eventId; }

    /**
     * MS Smooth event ID to be sent to the IIS server.

Should only be specified if
     * eventIdMode is set to useConfigured.
     */
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }

    /**
     * MS Smooth event ID to be sent to the IIS server.

Should only be specified if
     * eventIdMode is set to useConfigured.
     */
    inline void SetEventId(const Aws::String& value) { m_eventIdHasBeenSet = true; m_eventId = value; }

    /**
     * MS Smooth event ID to be sent to the IIS server.

Should only be specified if
     * eventIdMode is set to useConfigured.
     */
    inline void SetEventId(Aws::String&& value) { m_eventIdHasBeenSet = true; m_eventId = std::move(value); }

    /**
     * MS Smooth event ID to be sent to the IIS server.

Should only be specified if
     * eventIdMode is set to useConfigured.
     */
    inline void SetEventId(const char* value) { m_eventIdHasBeenSet = true; m_eventId.assign(value); }

    /**
     * MS Smooth event ID to be sent to the IIS server.

Should only be specified if
     * eventIdMode is set to useConfigured.
     */
    inline MsSmoothGroupSettings& WithEventId(const Aws::String& value) { SetEventId(value); return *this;}

    /**
     * MS Smooth event ID to be sent to the IIS server.

Should only be specified if
     * eventIdMode is set to useConfigured.
     */
    inline MsSmoothGroupSettings& WithEventId(Aws::String&& value) { SetEventId(std::move(value)); return *this;}

    /**
     * MS Smooth event ID to be sent to the IIS server.

Should only be specified if
     * eventIdMode is set to useConfigured.
     */
    inline MsSmoothGroupSettings& WithEventId(const char* value) { SetEventId(value); return *this;}


    /**
     * Specifies whether or not to send an event ID to the IIS server. If no event ID
     * is sent and the same Live Event is used without changing the publishing point,
     * clients might see cached video from the previous run.

Options:
-
     * "useConfigured" - use the value provided in eventId
- "useTimestamp" - generate
     * and send an event ID based on the current timestamp
- "noEventId" - do not send
     * an event ID to the IIS server.
     */
    inline const SmoothGroupEventIdMode& GetEventIdMode() const{ return m_eventIdMode; }

    /**
     * Specifies whether or not to send an event ID to the IIS server. If no event ID
     * is sent and the same Live Event is used without changing the publishing point,
     * clients might see cached video from the previous run.

Options:
-
     * "useConfigured" - use the value provided in eventId
- "useTimestamp" - generate
     * and send an event ID based on the current timestamp
- "noEventId" - do not send
     * an event ID to the IIS server.
     */
    inline bool EventIdModeHasBeenSet() const { return m_eventIdModeHasBeenSet; }

    /**
     * Specifies whether or not to send an event ID to the IIS server. If no event ID
     * is sent and the same Live Event is used without changing the publishing point,
     * clients might see cached video from the previous run.

Options:
-
     * "useConfigured" - use the value provided in eventId
- "useTimestamp" - generate
     * and send an event ID based on the current timestamp
- "noEventId" - do not send
     * an event ID to the IIS server.
     */
    inline void SetEventIdMode(const SmoothGroupEventIdMode& value) { m_eventIdModeHasBeenSet = true; m_eventIdMode = value; }

    /**
     * Specifies whether or not to send an event ID to the IIS server. If no event ID
     * is sent and the same Live Event is used without changing the publishing point,
     * clients might see cached video from the previous run.

Options:
-
     * "useConfigured" - use the value provided in eventId
- "useTimestamp" - generate
     * and send an event ID based on the current timestamp
- "noEventId" - do not send
     * an event ID to the IIS server.
     */
    inline void SetEventIdMode(SmoothGroupEventIdMode&& value) { m_eventIdModeHasBeenSet = true; m_eventIdMode = std::move(value); }

    /**
     * Specifies whether or not to send an event ID to the IIS server. If no event ID
     * is sent and the same Live Event is used without changing the publishing point,
     * clients might see cached video from the previous run.

Options:
-
     * "useConfigured" - use the value provided in eventId
- "useTimestamp" - generate
     * and send an event ID based on the current timestamp
- "noEventId" - do not send
     * an event ID to the IIS server.
     */
    inline MsSmoothGroupSettings& WithEventIdMode(const SmoothGroupEventIdMode& value) { SetEventIdMode(value); return *this;}

    /**
     * Specifies whether or not to send an event ID to the IIS server. If no event ID
     * is sent and the same Live Event is used without changing the publishing point,
     * clients might see cached video from the previous run.

Options:
-
     * "useConfigured" - use the value provided in eventId
- "useTimestamp" - generate
     * and send an event ID based on the current timestamp
- "noEventId" - do not send
     * an event ID to the IIS server.
     */
    inline MsSmoothGroupSettings& WithEventIdMode(SmoothGroupEventIdMode&& value) { SetEventIdMode(std::move(value)); return *this;}


    /**
     * When set to sendEos, send EOS signal to IIS server when stopping the event
     */
    inline const SmoothGroupEventStopBehavior& GetEventStopBehavior() const{ return m_eventStopBehavior; }

    /**
     * When set to sendEos, send EOS signal to IIS server when stopping the event
     */
    inline bool EventStopBehaviorHasBeenSet() const { return m_eventStopBehaviorHasBeenSet; }

    /**
     * When set to sendEos, send EOS signal to IIS server when stopping the event
     */
    inline void SetEventStopBehavior(const SmoothGroupEventStopBehavior& value) { m_eventStopBehaviorHasBeenSet = true; m_eventStopBehavior = value; }

    /**
     * When set to sendEos, send EOS signal to IIS server when stopping the event
     */
    inline void SetEventStopBehavior(SmoothGroupEventStopBehavior&& value) { m_eventStopBehaviorHasBeenSet = true; m_eventStopBehavior = std::move(value); }

    /**
     * When set to sendEos, send EOS signal to IIS server when stopping the event
     */
    inline MsSmoothGroupSettings& WithEventStopBehavior(const SmoothGroupEventStopBehavior& value) { SetEventStopBehavior(value); return *this;}

    /**
     * When set to sendEos, send EOS signal to IIS server when stopping the event
     */
    inline MsSmoothGroupSettings& WithEventStopBehavior(SmoothGroupEventStopBehavior&& value) { SetEventStopBehavior(std::move(value)); return *this;}


    /**
     * Size in seconds of file cache for streaming outputs.
     */
    inline int GetFilecacheDuration() const{ return m_filecacheDuration; }

    /**
     * Size in seconds of file cache for streaming outputs.
     */
    inline bool FilecacheDurationHasBeenSet() const { return m_filecacheDurationHasBeenSet; }

    /**
     * Size in seconds of file cache for streaming outputs.
     */
    inline void SetFilecacheDuration(int value) { m_filecacheDurationHasBeenSet = true; m_filecacheDuration = value; }

    /**
     * Size in seconds of file cache for streaming outputs.
     */
    inline MsSmoothGroupSettings& WithFilecacheDuration(int value) { SetFilecacheDuration(value); return *this;}


    /**
     * Length of mp4 fragments to generate (in seconds). Fragment length must be
     * compatible with GOP size and framerate.
     */
    inline int GetFragmentLength() const{ return m_fragmentLength; }

    /**
     * Length of mp4 fragments to generate (in seconds). Fragment length must be
     * compatible with GOP size and framerate.
     */
    inline bool FragmentLengthHasBeenSet() const { return m_fragmentLengthHasBeenSet; }

    /**
     * Length of mp4 fragments to generate (in seconds). Fragment length must be
     * compatible with GOP size and framerate.
     */
    inline void SetFragmentLength(int value) { m_fragmentLengthHasBeenSet = true; m_fragmentLength = value; }

    /**
     * Length of mp4 fragments to generate (in seconds). Fragment length must be
     * compatible with GOP size and framerate.
     */
    inline MsSmoothGroupSettings& WithFragmentLength(int value) { SetFragmentLength(value); return *this;}


    /**
     * Parameter that control output group behavior on input loss.
     */
    inline const InputLossActionForMsSmoothOut& GetInputLossAction() const{ return m_inputLossAction; }

    /**
     * Parameter that control output group behavior on input loss.
     */
    inline bool InputLossActionHasBeenSet() const { return m_inputLossActionHasBeenSet; }

    /**
     * Parameter that control output group behavior on input loss.
     */
    inline void SetInputLossAction(const InputLossActionForMsSmoothOut& value) { m_inputLossActionHasBeenSet = true; m_inputLossAction = value; }

    /**
     * Parameter that control output group behavior on input loss.
     */
    inline void SetInputLossAction(InputLossActionForMsSmoothOut&& value) { m_inputLossActionHasBeenSet = true; m_inputLossAction = std::move(value); }

    /**
     * Parameter that control output group behavior on input loss.
     */
    inline MsSmoothGroupSettings& WithInputLossAction(const InputLossActionForMsSmoothOut& value) { SetInputLossAction(value); return *this;}

    /**
     * Parameter that control output group behavior on input loss.
     */
    inline MsSmoothGroupSettings& WithInputLossAction(InputLossActionForMsSmoothOut&& value) { SetInputLossAction(std::move(value)); return *this;}


    /**
     * Number of retry attempts.
     */
    inline int GetNumRetries() const{ return m_numRetries; }

    /**
     * Number of retry attempts.
     */
    inline bool NumRetriesHasBeenSet() const { return m_numRetriesHasBeenSet; }

    /**
     * Number of retry attempts.
     */
    inline void SetNumRetries(int value) { m_numRetriesHasBeenSet = true; m_numRetries = value; }

    /**
     * Number of retry attempts.
     */
    inline MsSmoothGroupSettings& WithNumRetries(int value) { SetNumRetries(value); return *this;}


    /**
     * Number of seconds before initiating a restart due to output failure, due to
     * exhausting the numRetries on one segment, or exceeding filecacheDuration.
     */
    inline int GetRestartDelay() const{ return m_restartDelay; }

    /**
     * Number of seconds before initiating a restart due to output failure, due to
     * exhausting the numRetries on one segment, or exceeding filecacheDuration.
     */
    inline bool RestartDelayHasBeenSet() const { return m_restartDelayHasBeenSet; }

    /**
     * Number of seconds before initiating a restart due to output failure, due to
     * exhausting the numRetries on one segment, or exceeding filecacheDuration.
     */
    inline void SetRestartDelay(int value) { m_restartDelayHasBeenSet = true; m_restartDelay = value; }

    /**
     * Number of seconds before initiating a restart due to output failure, due to
     * exhausting the numRetries on one segment, or exceeding filecacheDuration.
     */
    inline MsSmoothGroupSettings& WithRestartDelay(int value) { SetRestartDelay(value); return *this;}


    /**
     * useInputSegmentation has been deprecated. The configured segment size is always
     * used.
     */
    inline const SmoothGroupSegmentationMode& GetSegmentationMode() const{ return m_segmentationMode; }

    /**
     * useInputSegmentation has been deprecated. The configured segment size is always
     * used.
     */
    inline bool SegmentationModeHasBeenSet() const { return m_segmentationModeHasBeenSet; }

    /**
     * useInputSegmentation has been deprecated. The configured segment size is always
     * used.
     */
    inline void SetSegmentationMode(const SmoothGroupSegmentationMode& value) { m_segmentationModeHasBeenSet = true; m_segmentationMode = value; }

    /**
     * useInputSegmentation has been deprecated. The configured segment size is always
     * used.
     */
    inline void SetSegmentationMode(SmoothGroupSegmentationMode&& value) { m_segmentationModeHasBeenSet = true; m_segmentationMode = std::move(value); }

    /**
     * useInputSegmentation has been deprecated. The configured segment size is always
     * used.
     */
    inline MsSmoothGroupSettings& WithSegmentationMode(const SmoothGroupSegmentationMode& value) { SetSegmentationMode(value); return *this;}

    /**
     * useInputSegmentation has been deprecated. The configured segment size is always
     * used.
     */
    inline MsSmoothGroupSettings& WithSegmentationMode(SmoothGroupSegmentationMode&& value) { SetSegmentationMode(std::move(value)); return *this;}


    /**
     * Number of milliseconds to delay the output from the second pipeline.
     */
    inline int GetSendDelayMs() const{ return m_sendDelayMs; }

    /**
     * Number of milliseconds to delay the output from the second pipeline.
     */
    inline bool SendDelayMsHasBeenSet() const { return m_sendDelayMsHasBeenSet; }

    /**
     * Number of milliseconds to delay the output from the second pipeline.
     */
    inline void SetSendDelayMs(int value) { m_sendDelayMsHasBeenSet = true; m_sendDelayMs = value; }

    /**
     * Number of milliseconds to delay the output from the second pipeline.
     */
    inline MsSmoothGroupSettings& WithSendDelayMs(int value) { SetSendDelayMs(value); return *this;}


    /**
     * Identifies the type of data to place in the sparse track:
- SCTE35: Insert
     * SCTE-35 messages from the source content. With each message, insert an IDR frame
     * to start a new segment.
- SCTE35_WITHOUT_SEGMENTATION: Insert SCTE-35 messages
     * from the source content. With each message, insert an IDR frame but don't start
     * a new segment.
- NONE: Don't generate a sparse track for any outputs in this
     * output group.
     */
    inline const SmoothGroupSparseTrackType& GetSparseTrackType() const{ return m_sparseTrackType; }

    /**
     * Identifies the type of data to place in the sparse track:
- SCTE35: Insert
     * SCTE-35 messages from the source content. With each message, insert an IDR frame
     * to start a new segment.
- SCTE35_WITHOUT_SEGMENTATION: Insert SCTE-35 messages
     * from the source content. With each message, insert an IDR frame but don't start
     * a new segment.
- NONE: Don't generate a sparse track for any outputs in this
     * output group.
     */
    inline bool SparseTrackTypeHasBeenSet() const { return m_sparseTrackTypeHasBeenSet; }

    /**
     * Identifies the type of data to place in the sparse track:
- SCTE35: Insert
     * SCTE-35 messages from the source content. With each message, insert an IDR frame
     * to start a new segment.
- SCTE35_WITHOUT_SEGMENTATION: Insert SCTE-35 messages
     * from the source content. With each message, insert an IDR frame but don't start
     * a new segment.
- NONE: Don't generate a sparse track for any outputs in this
     * output group.
     */
    inline void SetSparseTrackType(const SmoothGroupSparseTrackType& value) { m_sparseTrackTypeHasBeenSet = true; m_sparseTrackType = value; }

    /**
     * Identifies the type of data to place in the sparse track:
- SCTE35: Insert
     * SCTE-35 messages from the source content. With each message, insert an IDR frame
     * to start a new segment.
- SCTE35_WITHOUT_SEGMENTATION: Insert SCTE-35 messages
     * from the source content. With each message, insert an IDR frame but don't start
     * a new segment.
- NONE: Don't generate a sparse track for any outputs in this
     * output group.
     */
    inline void SetSparseTrackType(SmoothGroupSparseTrackType&& value) { m_sparseTrackTypeHasBeenSet = true; m_sparseTrackType = std::move(value); }

    /**
     * Identifies the type of data to place in the sparse track:
- SCTE35: Insert
     * SCTE-35 messages from the source content. With each message, insert an IDR frame
     * to start a new segment.
- SCTE35_WITHOUT_SEGMENTATION: Insert SCTE-35 messages
     * from the source content. With each message, insert an IDR frame but don't start
     * a new segment.
- NONE: Don't generate a sparse track for any outputs in this
     * output group.
     */
    inline MsSmoothGroupSettings& WithSparseTrackType(const SmoothGroupSparseTrackType& value) { SetSparseTrackType(value); return *this;}

    /**
     * Identifies the type of data to place in the sparse track:
- SCTE35: Insert
     * SCTE-35 messages from the source content. With each message, insert an IDR frame
     * to start a new segment.
- SCTE35_WITHOUT_SEGMENTATION: Insert SCTE-35 messages
     * from the source content. With each message, insert an IDR frame but don't start
     * a new segment.
- NONE: Don't generate a sparse track for any outputs in this
     * output group.
     */
    inline MsSmoothGroupSettings& WithSparseTrackType(SmoothGroupSparseTrackType&& value) { SetSparseTrackType(std::move(value)); return *this;}


    /**
     * When set to send, send stream manifest so publishing point doesn't start until
     * all streams start.
     */
    inline const SmoothGroupStreamManifestBehavior& GetStreamManifestBehavior() const{ return m_streamManifestBehavior; }

    /**
     * When set to send, send stream manifest so publishing point doesn't start until
     * all streams start.
     */
    inline bool StreamManifestBehaviorHasBeenSet() const { return m_streamManifestBehaviorHasBeenSet; }

    /**
     * When set to send, send stream manifest so publishing point doesn't start until
     * all streams start.
     */
    inline void SetStreamManifestBehavior(const SmoothGroupStreamManifestBehavior& value) { m_streamManifestBehaviorHasBeenSet = true; m_streamManifestBehavior = value; }

    /**
     * When set to send, send stream manifest so publishing point doesn't start until
     * all streams start.
     */
    inline void SetStreamManifestBehavior(SmoothGroupStreamManifestBehavior&& value) { m_streamManifestBehaviorHasBeenSet = true; m_streamManifestBehavior = std::move(value); }

    /**
     * When set to send, send stream manifest so publishing point doesn't start until
     * all streams start.
     */
    inline MsSmoothGroupSettings& WithStreamManifestBehavior(const SmoothGroupStreamManifestBehavior& value) { SetStreamManifestBehavior(value); return *this;}

    /**
     * When set to send, send stream manifest so publishing point doesn't start until
     * all streams start.
     */
    inline MsSmoothGroupSettings& WithStreamManifestBehavior(SmoothGroupStreamManifestBehavior&& value) { SetStreamManifestBehavior(std::move(value)); return *this;}


    /**
     * Timestamp offset for the event.  Only used if timestampOffsetMode is set to
     * useConfiguredOffset.
     */
    inline const Aws::String& GetTimestampOffset() const{ return m_timestampOffset; }

    /**
     * Timestamp offset for the event.  Only used if timestampOffsetMode is set to
     * useConfiguredOffset.
     */
    inline bool TimestampOffsetHasBeenSet() const { return m_timestampOffsetHasBeenSet; }

    /**
     * Timestamp offset for the event.  Only used if timestampOffsetMode is set to
     * useConfiguredOffset.
     */
    inline void SetTimestampOffset(const Aws::String& value) { m_timestampOffsetHasBeenSet = true; m_timestampOffset = value; }

    /**
     * Timestamp offset for the event.  Only used if timestampOffsetMode is set to
     * useConfiguredOffset.
     */
    inline void SetTimestampOffset(Aws::String&& value) { m_timestampOffsetHasBeenSet = true; m_timestampOffset = std::move(value); }

    /**
     * Timestamp offset for the event.  Only used if timestampOffsetMode is set to
     * useConfiguredOffset.
     */
    inline void SetTimestampOffset(const char* value) { m_timestampOffsetHasBeenSet = true; m_timestampOffset.assign(value); }

    /**
     * Timestamp offset for the event.  Only used if timestampOffsetMode is set to
     * useConfiguredOffset.
     */
    inline MsSmoothGroupSettings& WithTimestampOffset(const Aws::String& value) { SetTimestampOffset(value); return *this;}

    /**
     * Timestamp offset for the event.  Only used if timestampOffsetMode is set to
     * useConfiguredOffset.
     */
    inline MsSmoothGroupSettings& WithTimestampOffset(Aws::String&& value) { SetTimestampOffset(std::move(value)); return *this;}

    /**
     * Timestamp offset for the event.  Only used if timestampOffsetMode is set to
     * useConfiguredOffset.
     */
    inline MsSmoothGroupSettings& WithTimestampOffset(const char* value) { SetTimestampOffset(value); return *this;}


    /**
     * Type of timestamp date offset to use.
- useEventStartDate: Use the date the
     * event was started as the offset
- useConfiguredOffset: Use an explicitly
     * configured date as the offset
     */
    inline const SmoothGroupTimestampOffsetMode& GetTimestampOffsetMode() const{ return m_timestampOffsetMode; }

    /**
     * Type of timestamp date offset to use.
- useEventStartDate: Use the date the
     * event was started as the offset
- useConfiguredOffset: Use an explicitly
     * configured date as the offset
     */
    inline bool TimestampOffsetModeHasBeenSet() const { return m_timestampOffsetModeHasBeenSet; }

    /**
     * Type of timestamp date offset to use.
- useEventStartDate: Use the date the
     * event was started as the offset
- useConfiguredOffset: Use an explicitly
     * configured date as the offset
     */
    inline void SetTimestampOffsetMode(const SmoothGroupTimestampOffsetMode& value) { m_timestampOffsetModeHasBeenSet = true; m_timestampOffsetMode = value; }

    /**
     * Type of timestamp date offset to use.
- useEventStartDate: Use the date the
     * event was started as the offset
- useConfiguredOffset: Use an explicitly
     * configured date as the offset
     */
    inline void SetTimestampOffsetMode(SmoothGroupTimestampOffsetMode&& value) { m_timestampOffsetModeHasBeenSet = true; m_timestampOffsetMode = std::move(value); }

    /**
     * Type of timestamp date offset to use.
- useEventStartDate: Use the date the
     * event was started as the offset
- useConfiguredOffset: Use an explicitly
     * configured date as the offset
     */
    inline MsSmoothGroupSettings& WithTimestampOffsetMode(const SmoothGroupTimestampOffsetMode& value) { SetTimestampOffsetMode(value); return *this;}

    /**
     * Type of timestamp date offset to use.
- useEventStartDate: Use the date the
     * event was started as the offset
- useConfiguredOffset: Use an explicitly
     * configured date as the offset
     */
    inline MsSmoothGroupSettings& WithTimestampOffsetMode(SmoothGroupTimestampOffsetMode&& value) { SetTimestampOffsetMode(std::move(value)); return *this;}

  private:

    Aws::String m_acquisitionPointId;
    bool m_acquisitionPointIdHasBeenSet = false;

    SmoothGroupAudioOnlyTimecodeControl m_audioOnlyTimecodeControl;
    bool m_audioOnlyTimecodeControlHasBeenSet = false;

    SmoothGroupCertificateMode m_certificateMode;
    bool m_certificateModeHasBeenSet = false;

    int m_connectionRetryInterval;
    bool m_connectionRetryIntervalHasBeenSet = false;

    OutputLocationRef m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    SmoothGroupEventIdMode m_eventIdMode;
    bool m_eventIdModeHasBeenSet = false;

    SmoothGroupEventStopBehavior m_eventStopBehavior;
    bool m_eventStopBehaviorHasBeenSet = false;

    int m_filecacheDuration;
    bool m_filecacheDurationHasBeenSet = false;

    int m_fragmentLength;
    bool m_fragmentLengthHasBeenSet = false;

    InputLossActionForMsSmoothOut m_inputLossAction;
    bool m_inputLossActionHasBeenSet = false;

    int m_numRetries;
    bool m_numRetriesHasBeenSet = false;

    int m_restartDelay;
    bool m_restartDelayHasBeenSet = false;

    SmoothGroupSegmentationMode m_segmentationMode;
    bool m_segmentationModeHasBeenSet = false;

    int m_sendDelayMs;
    bool m_sendDelayMsHasBeenSet = false;

    SmoothGroupSparseTrackType m_sparseTrackType;
    bool m_sparseTrackTypeHasBeenSet = false;

    SmoothGroupStreamManifestBehavior m_streamManifestBehavior;
    bool m_streamManifestBehaviorHasBeenSet = false;

    Aws::String m_timestampOffset;
    bool m_timestampOffsetHasBeenSet = false;

    SmoothGroupTimestampOffsetMode m_timestampOffsetMode;
    bool m_timestampOffsetModeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
