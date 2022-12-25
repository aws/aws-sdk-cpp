/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/M3u8AudioDuration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/M3u8DataPtsControl.h>
#include <aws/mediaconvert/model/M3u8NielsenId3.h>
#include <aws/mediaconvert/model/M3u8PcrControl.h>
#include <aws/mediaconvert/model/M3u8Scte35Source.h>
#include <aws/mediaconvert/model/TimedMetadata.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * These settings relate to the MPEG-2 transport stream (MPEG2-TS) container for
   * the MPEG2-TS segments in your HLS outputs.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/M3u8Settings">AWS
   * API Reference</a></p>
   */
  class M3u8Settings
  {
  public:
    AWS_MEDIACONVERT_API M3u8Settings();
    AWS_MEDIACONVERT_API M3u8Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API M3u8Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify this setting only when your output will be consumed by a downstream
     * repackaging workflow that is sensitive to very small duration differences
     * between video and audio. For this situation, choose Match video duration
     * (MATCH_VIDEO_DURATION). In all other cases, keep the default value, Default
     * codec duration (DEFAULT_CODEC_DURATION). When you choose Match video duration,
     * MediaConvert pads the output audio streams with silence or trims them to ensure
     * that the total duration of each audio stream is at least as long as the total
     * duration of the video stream. After padding or trimming, the audio stream
     * duration is no more than one frame longer than the video stream. MediaConvert
     * applies audio padding or trimming only to the end of the last segment of the
     * output. For unsegmented outputs, MediaConvert adds padding only to the end of
     * the file. When you keep the default value, any minor discrepancies between audio
     * and video duration will depend on your output audio codec.
     */
    inline const M3u8AudioDuration& GetAudioDuration() const{ return m_audioDuration; }

    /**
     * Specify this setting only when your output will be consumed by a downstream
     * repackaging workflow that is sensitive to very small duration differences
     * between video and audio. For this situation, choose Match video duration
     * (MATCH_VIDEO_DURATION). In all other cases, keep the default value, Default
     * codec duration (DEFAULT_CODEC_DURATION). When you choose Match video duration,
     * MediaConvert pads the output audio streams with silence or trims them to ensure
     * that the total duration of each audio stream is at least as long as the total
     * duration of the video stream. After padding or trimming, the audio stream
     * duration is no more than one frame longer than the video stream. MediaConvert
     * applies audio padding or trimming only to the end of the last segment of the
     * output. For unsegmented outputs, MediaConvert adds padding only to the end of
     * the file. When you keep the default value, any minor discrepancies between audio
     * and video duration will depend on your output audio codec.
     */
    inline bool AudioDurationHasBeenSet() const { return m_audioDurationHasBeenSet; }

    /**
     * Specify this setting only when your output will be consumed by a downstream
     * repackaging workflow that is sensitive to very small duration differences
     * between video and audio. For this situation, choose Match video duration
     * (MATCH_VIDEO_DURATION). In all other cases, keep the default value, Default
     * codec duration (DEFAULT_CODEC_DURATION). When you choose Match video duration,
     * MediaConvert pads the output audio streams with silence or trims them to ensure
     * that the total duration of each audio stream is at least as long as the total
     * duration of the video stream. After padding or trimming, the audio stream
     * duration is no more than one frame longer than the video stream. MediaConvert
     * applies audio padding or trimming only to the end of the last segment of the
     * output. For unsegmented outputs, MediaConvert adds padding only to the end of
     * the file. When you keep the default value, any minor discrepancies between audio
     * and video duration will depend on your output audio codec.
     */
    inline void SetAudioDuration(const M3u8AudioDuration& value) { m_audioDurationHasBeenSet = true; m_audioDuration = value; }

    /**
     * Specify this setting only when your output will be consumed by a downstream
     * repackaging workflow that is sensitive to very small duration differences
     * between video and audio. For this situation, choose Match video duration
     * (MATCH_VIDEO_DURATION). In all other cases, keep the default value, Default
     * codec duration (DEFAULT_CODEC_DURATION). When you choose Match video duration,
     * MediaConvert pads the output audio streams with silence or trims them to ensure
     * that the total duration of each audio stream is at least as long as the total
     * duration of the video stream. After padding or trimming, the audio stream
     * duration is no more than one frame longer than the video stream. MediaConvert
     * applies audio padding or trimming only to the end of the last segment of the
     * output. For unsegmented outputs, MediaConvert adds padding only to the end of
     * the file. When you keep the default value, any minor discrepancies between audio
     * and video duration will depend on your output audio codec.
     */
    inline void SetAudioDuration(M3u8AudioDuration&& value) { m_audioDurationHasBeenSet = true; m_audioDuration = std::move(value); }

    /**
     * Specify this setting only when your output will be consumed by a downstream
     * repackaging workflow that is sensitive to very small duration differences
     * between video and audio. For this situation, choose Match video duration
     * (MATCH_VIDEO_DURATION). In all other cases, keep the default value, Default
     * codec duration (DEFAULT_CODEC_DURATION). When you choose Match video duration,
     * MediaConvert pads the output audio streams with silence or trims them to ensure
     * that the total duration of each audio stream is at least as long as the total
     * duration of the video stream. After padding or trimming, the audio stream
     * duration is no more than one frame longer than the video stream. MediaConvert
     * applies audio padding or trimming only to the end of the last segment of the
     * output. For unsegmented outputs, MediaConvert adds padding only to the end of
     * the file. When you keep the default value, any minor discrepancies between audio
     * and video duration will depend on your output audio codec.
     */
    inline M3u8Settings& WithAudioDuration(const M3u8AudioDuration& value) { SetAudioDuration(value); return *this;}

    /**
     * Specify this setting only when your output will be consumed by a downstream
     * repackaging workflow that is sensitive to very small duration differences
     * between video and audio. For this situation, choose Match video duration
     * (MATCH_VIDEO_DURATION). In all other cases, keep the default value, Default
     * codec duration (DEFAULT_CODEC_DURATION). When you choose Match video duration,
     * MediaConvert pads the output audio streams with silence or trims them to ensure
     * that the total duration of each audio stream is at least as long as the total
     * duration of the video stream. After padding or trimming, the audio stream
     * duration is no more than one frame longer than the video stream. MediaConvert
     * applies audio padding or trimming only to the end of the last segment of the
     * output. For unsegmented outputs, MediaConvert adds padding only to the end of
     * the file. When you keep the default value, any minor discrepancies between audio
     * and video duration will depend on your output audio codec.
     */
    inline M3u8Settings& WithAudioDuration(M3u8AudioDuration&& value) { SetAudioDuration(std::move(value)); return *this;}


    /**
     * The number of audio frames to insert for each PES packet.
     */
    inline int GetAudioFramesPerPes() const{ return m_audioFramesPerPes; }

    /**
     * The number of audio frames to insert for each PES packet.
     */
    inline bool AudioFramesPerPesHasBeenSet() const { return m_audioFramesPerPesHasBeenSet; }

    /**
     * The number of audio frames to insert for each PES packet.
     */
    inline void SetAudioFramesPerPes(int value) { m_audioFramesPerPesHasBeenSet = true; m_audioFramesPerPes = value; }

    /**
     * The number of audio frames to insert for each PES packet.
     */
    inline M3u8Settings& WithAudioFramesPerPes(int value) { SetAudioFramesPerPes(value); return *this;}


    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation.
     */
    inline const Aws::Vector<int>& GetAudioPids() const{ return m_audioPids; }

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation.
     */
    inline bool AudioPidsHasBeenSet() const { return m_audioPidsHasBeenSet; }

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation.
     */
    inline void SetAudioPids(const Aws::Vector<int>& value) { m_audioPidsHasBeenSet = true; m_audioPids = value; }

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation.
     */
    inline void SetAudioPids(Aws::Vector<int>&& value) { m_audioPidsHasBeenSet = true; m_audioPids = std::move(value); }

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation.
     */
    inline M3u8Settings& WithAudioPids(const Aws::Vector<int>& value) { SetAudioPids(value); return *this;}

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation.
     */
    inline M3u8Settings& WithAudioPids(Aws::Vector<int>&& value) { SetAudioPids(std::move(value)); return *this;}

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation.
     */
    inline M3u8Settings& AddAudioPids(int value) { m_audioPidsHasBeenSet = true; m_audioPids.push_back(value); return *this; }


    /**
     * If you select ALIGN_TO_VIDEO, MediaConvert writes captions and data packets with
     * Presentation Timestamp (PTS) values greater than or equal to the first video
     * packet PTS (MediaConvert drops captions and data packets with lesser PTS
     * values). Keep the default value (AUTO) to allow all PTS values.
     */
    inline const M3u8DataPtsControl& GetDataPTSControl() const{ return m_dataPTSControl; }

    /**
     * If you select ALIGN_TO_VIDEO, MediaConvert writes captions and data packets with
     * Presentation Timestamp (PTS) values greater than or equal to the first video
     * packet PTS (MediaConvert drops captions and data packets with lesser PTS
     * values). Keep the default value (AUTO) to allow all PTS values.
     */
    inline bool DataPTSControlHasBeenSet() const { return m_dataPTSControlHasBeenSet; }

    /**
     * If you select ALIGN_TO_VIDEO, MediaConvert writes captions and data packets with
     * Presentation Timestamp (PTS) values greater than or equal to the first video
     * packet PTS (MediaConvert drops captions and data packets with lesser PTS
     * values). Keep the default value (AUTO) to allow all PTS values.
     */
    inline void SetDataPTSControl(const M3u8DataPtsControl& value) { m_dataPTSControlHasBeenSet = true; m_dataPTSControl = value; }

    /**
     * If you select ALIGN_TO_VIDEO, MediaConvert writes captions and data packets with
     * Presentation Timestamp (PTS) values greater than or equal to the first video
     * packet PTS (MediaConvert drops captions and data packets with lesser PTS
     * values). Keep the default value (AUTO) to allow all PTS values.
     */
    inline void SetDataPTSControl(M3u8DataPtsControl&& value) { m_dataPTSControlHasBeenSet = true; m_dataPTSControl = std::move(value); }

    /**
     * If you select ALIGN_TO_VIDEO, MediaConvert writes captions and data packets with
     * Presentation Timestamp (PTS) values greater than or equal to the first video
     * packet PTS (MediaConvert drops captions and data packets with lesser PTS
     * values). Keep the default value (AUTO) to allow all PTS values.
     */
    inline M3u8Settings& WithDataPTSControl(const M3u8DataPtsControl& value) { SetDataPTSControl(value); return *this;}

    /**
     * If you select ALIGN_TO_VIDEO, MediaConvert writes captions and data packets with
     * Presentation Timestamp (PTS) values greater than or equal to the first video
     * packet PTS (MediaConvert drops captions and data packets with lesser PTS
     * values). Keep the default value (AUTO) to allow all PTS values.
     */
    inline M3u8Settings& WithDataPTSControl(M3u8DataPtsControl&& value) { SetDataPTSControl(std::move(value)); return *this;}


    /**
     * Specify the maximum time, in milliseconds, between Program Clock References
     * (PCRs) inserted into the transport stream.
     */
    inline int GetMaxPcrInterval() const{ return m_maxPcrInterval; }

    /**
     * Specify the maximum time, in milliseconds, between Program Clock References
     * (PCRs) inserted into the transport stream.
     */
    inline bool MaxPcrIntervalHasBeenSet() const { return m_maxPcrIntervalHasBeenSet; }

    /**
     * Specify the maximum time, in milliseconds, between Program Clock References
     * (PCRs) inserted into the transport stream.
     */
    inline void SetMaxPcrInterval(int value) { m_maxPcrIntervalHasBeenSet = true; m_maxPcrInterval = value; }

    /**
     * Specify the maximum time, in milliseconds, between Program Clock References
     * (PCRs) inserted into the transport stream.
     */
    inline M3u8Settings& WithMaxPcrInterval(int value) { SetMaxPcrInterval(value); return *this;}


    /**
     * If INSERT, Nielsen inaudible tones for media tracking will be detected in the
     * input audio and an equivalent ID3 tag will be inserted in the output.
     */
    inline const M3u8NielsenId3& GetNielsenId3() const{ return m_nielsenId3; }

    /**
     * If INSERT, Nielsen inaudible tones for media tracking will be detected in the
     * input audio and an equivalent ID3 tag will be inserted in the output.
     */
    inline bool NielsenId3HasBeenSet() const { return m_nielsenId3HasBeenSet; }

    /**
     * If INSERT, Nielsen inaudible tones for media tracking will be detected in the
     * input audio and an equivalent ID3 tag will be inserted in the output.
     */
    inline void SetNielsenId3(const M3u8NielsenId3& value) { m_nielsenId3HasBeenSet = true; m_nielsenId3 = value; }

    /**
     * If INSERT, Nielsen inaudible tones for media tracking will be detected in the
     * input audio and an equivalent ID3 tag will be inserted in the output.
     */
    inline void SetNielsenId3(M3u8NielsenId3&& value) { m_nielsenId3HasBeenSet = true; m_nielsenId3 = std::move(value); }

    /**
     * If INSERT, Nielsen inaudible tones for media tracking will be detected in the
     * input audio and an equivalent ID3 tag will be inserted in the output.
     */
    inline M3u8Settings& WithNielsenId3(const M3u8NielsenId3& value) { SetNielsenId3(value); return *this;}

    /**
     * If INSERT, Nielsen inaudible tones for media tracking will be detected in the
     * input audio and an equivalent ID3 tag will be inserted in the output.
     */
    inline M3u8Settings& WithNielsenId3(M3u8NielsenId3&& value) { SetNielsenId3(std::move(value)); return *this;}


    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline int GetPatInterval() const{ return m_patInterval; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline bool PatIntervalHasBeenSet() const { return m_patIntervalHasBeenSet; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline void SetPatInterval(int value) { m_patIntervalHasBeenSet = true; m_patInterval = value; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline M3u8Settings& WithPatInterval(int value) { SetPatInterval(value); return *this;}


    /**
     * When set to PCR_EVERY_PES_PACKET a Program Clock Reference value is inserted for
     * every Packetized Elementary Stream (PES) header. This parameter is effective
     * only when the PCR PID is the same as the video or audio elementary stream.
     */
    inline const M3u8PcrControl& GetPcrControl() const{ return m_pcrControl; }

    /**
     * When set to PCR_EVERY_PES_PACKET a Program Clock Reference value is inserted for
     * every Packetized Elementary Stream (PES) header. This parameter is effective
     * only when the PCR PID is the same as the video or audio elementary stream.
     */
    inline bool PcrControlHasBeenSet() const { return m_pcrControlHasBeenSet; }

    /**
     * When set to PCR_EVERY_PES_PACKET a Program Clock Reference value is inserted for
     * every Packetized Elementary Stream (PES) header. This parameter is effective
     * only when the PCR PID is the same as the video or audio elementary stream.
     */
    inline void SetPcrControl(const M3u8PcrControl& value) { m_pcrControlHasBeenSet = true; m_pcrControl = value; }

    /**
     * When set to PCR_EVERY_PES_PACKET a Program Clock Reference value is inserted for
     * every Packetized Elementary Stream (PES) header. This parameter is effective
     * only when the PCR PID is the same as the video or audio elementary stream.
     */
    inline void SetPcrControl(M3u8PcrControl&& value) { m_pcrControlHasBeenSet = true; m_pcrControl = std::move(value); }

    /**
     * When set to PCR_EVERY_PES_PACKET a Program Clock Reference value is inserted for
     * every Packetized Elementary Stream (PES) header. This parameter is effective
     * only when the PCR PID is the same as the video or audio elementary stream.
     */
    inline M3u8Settings& WithPcrControl(const M3u8PcrControl& value) { SetPcrControl(value); return *this;}

    /**
     * When set to PCR_EVERY_PES_PACKET a Program Clock Reference value is inserted for
     * every Packetized Elementary Stream (PES) header. This parameter is effective
     * only when the PCR PID is the same as the video or audio elementary stream.
     */
    inline M3u8Settings& WithPcrControl(M3u8PcrControl&& value) { SetPcrControl(std::move(value)); return *this;}


    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID.
     */
    inline int GetPcrPid() const{ return m_pcrPid; }

    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID.
     */
    inline bool PcrPidHasBeenSet() const { return m_pcrPidHasBeenSet; }

    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID.
     */
    inline void SetPcrPid(int value) { m_pcrPidHasBeenSet = true; m_pcrPid = value; }

    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID.
     */
    inline M3u8Settings& WithPcrPid(int value) { SetPcrPid(value); return *this;}


    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline int GetPmtInterval() const{ return m_pmtInterval; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline bool PmtIntervalHasBeenSet() const { return m_pmtIntervalHasBeenSet; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline void SetPmtInterval(int value) { m_pmtIntervalHasBeenSet = true; m_pmtInterval = value; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline M3u8Settings& WithPmtInterval(int value) { SetPmtInterval(value); return *this;}


    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     */
    inline int GetPmtPid() const{ return m_pmtPid; }

    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     */
    inline bool PmtPidHasBeenSet() const { return m_pmtPidHasBeenSet; }

    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     */
    inline void SetPmtPid(int value) { m_pmtPidHasBeenSet = true; m_pmtPid = value; }

    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     */
    inline M3u8Settings& WithPmtPid(int value) { SetPmtPid(value); return *this;}


    /**
     * Packet Identifier (PID) of the private metadata stream in the transport stream.
     */
    inline int GetPrivateMetadataPid() const{ return m_privateMetadataPid; }

    /**
     * Packet Identifier (PID) of the private metadata stream in the transport stream.
     */
    inline bool PrivateMetadataPidHasBeenSet() const { return m_privateMetadataPidHasBeenSet; }

    /**
     * Packet Identifier (PID) of the private metadata stream in the transport stream.
     */
    inline void SetPrivateMetadataPid(int value) { m_privateMetadataPidHasBeenSet = true; m_privateMetadataPid = value; }

    /**
     * Packet Identifier (PID) of the private metadata stream in the transport stream.
     */
    inline M3u8Settings& WithPrivateMetadataPid(int value) { SetPrivateMetadataPid(value); return *this;}


    /**
     * The value of the program number field in the Program Map Table.
     */
    inline int GetProgramNumber() const{ return m_programNumber; }

    /**
     * The value of the program number field in the Program Map Table.
     */
    inline bool ProgramNumberHasBeenSet() const { return m_programNumberHasBeenSet; }

    /**
     * The value of the program number field in the Program Map Table.
     */
    inline void SetProgramNumber(int value) { m_programNumberHasBeenSet = true; m_programNumber = value; }

    /**
     * The value of the program number field in the Program Map Table.
     */
    inline M3u8Settings& WithProgramNumber(int value) { SetProgramNumber(value); return *this;}


    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream.
     */
    inline int GetScte35Pid() const{ return m_scte35Pid; }

    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream.
     */
    inline bool Scte35PidHasBeenSet() const { return m_scte35PidHasBeenSet; }

    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream.
     */
    inline void SetScte35Pid(int value) { m_scte35PidHasBeenSet = true; m_scte35Pid = value; }

    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream.
     */
    inline M3u8Settings& WithScte35Pid(int value) { SetScte35Pid(value); return *this;}


    /**
     * For SCTE-35 markers from your input-- Choose Passthrough (PASSTHROUGH) if you
     * want SCTE-35 markers that appear in your input to also appear in this output.
     * Choose None (NONE) if you don't want SCTE-35 markers in this output. For SCTE-35
     * markers from an ESAM XML document-- Choose None (NONE) if you don't want
     * manifest conditioning. Choose Passthrough (PASSTHROUGH) and choose Ad markers
     * (adMarkers) if you do want manifest conditioning. In both cases, also provide
     * the ESAM XML as a string in the setting Signal processing notification XML
     * (sccXml).
     */
    inline const M3u8Scte35Source& GetScte35Source() const{ return m_scte35Source; }

    /**
     * For SCTE-35 markers from your input-- Choose Passthrough (PASSTHROUGH) if you
     * want SCTE-35 markers that appear in your input to also appear in this output.
     * Choose None (NONE) if you don't want SCTE-35 markers in this output. For SCTE-35
     * markers from an ESAM XML document-- Choose None (NONE) if you don't want
     * manifest conditioning. Choose Passthrough (PASSTHROUGH) and choose Ad markers
     * (adMarkers) if you do want manifest conditioning. In both cases, also provide
     * the ESAM XML as a string in the setting Signal processing notification XML
     * (sccXml).
     */
    inline bool Scte35SourceHasBeenSet() const { return m_scte35SourceHasBeenSet; }

    /**
     * For SCTE-35 markers from your input-- Choose Passthrough (PASSTHROUGH) if you
     * want SCTE-35 markers that appear in your input to also appear in this output.
     * Choose None (NONE) if you don't want SCTE-35 markers in this output. For SCTE-35
     * markers from an ESAM XML document-- Choose None (NONE) if you don't want
     * manifest conditioning. Choose Passthrough (PASSTHROUGH) and choose Ad markers
     * (adMarkers) if you do want manifest conditioning. In both cases, also provide
     * the ESAM XML as a string in the setting Signal processing notification XML
     * (sccXml).
     */
    inline void SetScte35Source(const M3u8Scte35Source& value) { m_scte35SourceHasBeenSet = true; m_scte35Source = value; }

    /**
     * For SCTE-35 markers from your input-- Choose Passthrough (PASSTHROUGH) if you
     * want SCTE-35 markers that appear in your input to also appear in this output.
     * Choose None (NONE) if you don't want SCTE-35 markers in this output. For SCTE-35
     * markers from an ESAM XML document-- Choose None (NONE) if you don't want
     * manifest conditioning. Choose Passthrough (PASSTHROUGH) and choose Ad markers
     * (adMarkers) if you do want manifest conditioning. In both cases, also provide
     * the ESAM XML as a string in the setting Signal processing notification XML
     * (sccXml).
     */
    inline void SetScte35Source(M3u8Scte35Source&& value) { m_scte35SourceHasBeenSet = true; m_scte35Source = std::move(value); }

    /**
     * For SCTE-35 markers from your input-- Choose Passthrough (PASSTHROUGH) if you
     * want SCTE-35 markers that appear in your input to also appear in this output.
     * Choose None (NONE) if you don't want SCTE-35 markers in this output. For SCTE-35
     * markers from an ESAM XML document-- Choose None (NONE) if you don't want
     * manifest conditioning. Choose Passthrough (PASSTHROUGH) and choose Ad markers
     * (adMarkers) if you do want manifest conditioning. In both cases, also provide
     * the ESAM XML as a string in the setting Signal processing notification XML
     * (sccXml).
     */
    inline M3u8Settings& WithScte35Source(const M3u8Scte35Source& value) { SetScte35Source(value); return *this;}

    /**
     * For SCTE-35 markers from your input-- Choose Passthrough (PASSTHROUGH) if you
     * want SCTE-35 markers that appear in your input to also appear in this output.
     * Choose None (NONE) if you don't want SCTE-35 markers in this output. For SCTE-35
     * markers from an ESAM XML document-- Choose None (NONE) if you don't want
     * manifest conditioning. Choose Passthrough (PASSTHROUGH) and choose Ad markers
     * (adMarkers) if you do want manifest conditioning. In both cases, also provide
     * the ESAM XML as a string in the setting Signal processing notification XML
     * (sccXml).
     */
    inline M3u8Settings& WithScte35Source(M3u8Scte35Source&& value) { SetScte35Source(std::move(value)); return *this;}


    /**
     * Set ID3 metadata (timedMetadata) to Passthrough (PASSTHROUGH) to include ID3
     * metadata in this output. This includes ID3 metadata from the following features:
     * ID3 timestamp period (timedMetadataId3Period), and Custom ID3 metadata inserter
     * (timedMetadataInsertion). To exclude this ID3 metadata in this output: set ID3
     * metadata to None (NONE) or leave blank.
     */
    inline const TimedMetadata& GetTimedMetadata() const{ return m_timedMetadata; }

    /**
     * Set ID3 metadata (timedMetadata) to Passthrough (PASSTHROUGH) to include ID3
     * metadata in this output. This includes ID3 metadata from the following features:
     * ID3 timestamp period (timedMetadataId3Period), and Custom ID3 metadata inserter
     * (timedMetadataInsertion). To exclude this ID3 metadata in this output: set ID3
     * metadata to None (NONE) or leave blank.
     */
    inline bool TimedMetadataHasBeenSet() const { return m_timedMetadataHasBeenSet; }

    /**
     * Set ID3 metadata (timedMetadata) to Passthrough (PASSTHROUGH) to include ID3
     * metadata in this output. This includes ID3 metadata from the following features:
     * ID3 timestamp period (timedMetadataId3Period), and Custom ID3 metadata inserter
     * (timedMetadataInsertion). To exclude this ID3 metadata in this output: set ID3
     * metadata to None (NONE) or leave blank.
     */
    inline void SetTimedMetadata(const TimedMetadata& value) { m_timedMetadataHasBeenSet = true; m_timedMetadata = value; }

    /**
     * Set ID3 metadata (timedMetadata) to Passthrough (PASSTHROUGH) to include ID3
     * metadata in this output. This includes ID3 metadata from the following features:
     * ID3 timestamp period (timedMetadataId3Period), and Custom ID3 metadata inserter
     * (timedMetadataInsertion). To exclude this ID3 metadata in this output: set ID3
     * metadata to None (NONE) or leave blank.
     */
    inline void SetTimedMetadata(TimedMetadata&& value) { m_timedMetadataHasBeenSet = true; m_timedMetadata = std::move(value); }

    /**
     * Set ID3 metadata (timedMetadata) to Passthrough (PASSTHROUGH) to include ID3
     * metadata in this output. This includes ID3 metadata from the following features:
     * ID3 timestamp period (timedMetadataId3Period), and Custom ID3 metadata inserter
     * (timedMetadataInsertion). To exclude this ID3 metadata in this output: set ID3
     * metadata to None (NONE) or leave blank.
     */
    inline M3u8Settings& WithTimedMetadata(const TimedMetadata& value) { SetTimedMetadata(value); return *this;}

    /**
     * Set ID3 metadata (timedMetadata) to Passthrough (PASSTHROUGH) to include ID3
     * metadata in this output. This includes ID3 metadata from the following features:
     * ID3 timestamp period (timedMetadataId3Period), and Custom ID3 metadata inserter
     * (timedMetadataInsertion). To exclude this ID3 metadata in this output: set ID3
     * metadata to None (NONE) or leave blank.
     */
    inline M3u8Settings& WithTimedMetadata(TimedMetadata&& value) { SetTimedMetadata(std::move(value)); return *this;}


    /**
     * Packet Identifier (PID) of the ID3 metadata stream in the transport stream.
     */
    inline int GetTimedMetadataPid() const{ return m_timedMetadataPid; }

    /**
     * Packet Identifier (PID) of the ID3 metadata stream in the transport stream.
     */
    inline bool TimedMetadataPidHasBeenSet() const { return m_timedMetadataPidHasBeenSet; }

    /**
     * Packet Identifier (PID) of the ID3 metadata stream in the transport stream.
     */
    inline void SetTimedMetadataPid(int value) { m_timedMetadataPidHasBeenSet = true; m_timedMetadataPid = value; }

    /**
     * Packet Identifier (PID) of the ID3 metadata stream in the transport stream.
     */
    inline M3u8Settings& WithTimedMetadataPid(int value) { SetTimedMetadataPid(value); return *this;}


    /**
     * The value of the transport stream ID field in the Program Map Table.
     */
    inline int GetTransportStreamId() const{ return m_transportStreamId; }

    /**
     * The value of the transport stream ID field in the Program Map Table.
     */
    inline bool TransportStreamIdHasBeenSet() const { return m_transportStreamIdHasBeenSet; }

    /**
     * The value of the transport stream ID field in the Program Map Table.
     */
    inline void SetTransportStreamId(int value) { m_transportStreamIdHasBeenSet = true; m_transportStreamId = value; }

    /**
     * The value of the transport stream ID field in the Program Map Table.
     */
    inline M3u8Settings& WithTransportStreamId(int value) { SetTransportStreamId(value); return *this;}


    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     */
    inline int GetVideoPid() const{ return m_videoPid; }

    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     */
    inline bool VideoPidHasBeenSet() const { return m_videoPidHasBeenSet; }

    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     */
    inline void SetVideoPid(int value) { m_videoPidHasBeenSet = true; m_videoPid = value; }

    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     */
    inline M3u8Settings& WithVideoPid(int value) { SetVideoPid(value); return *this;}

  private:

    M3u8AudioDuration m_audioDuration;
    bool m_audioDurationHasBeenSet = false;

    int m_audioFramesPerPes;
    bool m_audioFramesPerPesHasBeenSet = false;

    Aws::Vector<int> m_audioPids;
    bool m_audioPidsHasBeenSet = false;

    M3u8DataPtsControl m_dataPTSControl;
    bool m_dataPTSControlHasBeenSet = false;

    int m_maxPcrInterval;
    bool m_maxPcrIntervalHasBeenSet = false;

    M3u8NielsenId3 m_nielsenId3;
    bool m_nielsenId3HasBeenSet = false;

    int m_patInterval;
    bool m_patIntervalHasBeenSet = false;

    M3u8PcrControl m_pcrControl;
    bool m_pcrControlHasBeenSet = false;

    int m_pcrPid;
    bool m_pcrPidHasBeenSet = false;

    int m_pmtInterval;
    bool m_pmtIntervalHasBeenSet = false;

    int m_pmtPid;
    bool m_pmtPidHasBeenSet = false;

    int m_privateMetadataPid;
    bool m_privateMetadataPidHasBeenSet = false;

    int m_programNumber;
    bool m_programNumberHasBeenSet = false;

    int m_scte35Pid;
    bool m_scte35PidHasBeenSet = false;

    M3u8Scte35Source m_scte35Source;
    bool m_scte35SourceHasBeenSet = false;

    TimedMetadata m_timedMetadata;
    bool m_timedMetadataHasBeenSet = false;

    int m_timedMetadataPid;
    bool m_timedMetadataPidHasBeenSet = false;

    int m_transportStreamId;
    bool m_transportStreamIdHasBeenSet = false;

    int m_videoPid;
    bool m_videoPidHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
