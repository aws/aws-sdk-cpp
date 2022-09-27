﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/MpdAccessibilityCaptionHints.h>
#include <aws/mediaconvert/model/MpdAudioDuration.h>
#include <aws/mediaconvert/model/MpdCaptionContainerType.h>
#include <aws/mediaconvert/model/MpdKlvMetadata.h>
#include <aws/mediaconvert/model/MpdScte35Esam.h>
#include <aws/mediaconvert/model/MpdScte35Source.h>
#include <aws/mediaconvert/model/MpdTimedMetadata.h>
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
   * These settings relate to the fragmented MP4 container for the segments in your
   * DASH outputs.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/MpdSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API MpdSettings
  {
  public:
    MpdSettings();
    MpdSettings(Aws::Utils::Json::JsonView jsonValue);
    MpdSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Optional. Choose Include (INCLUDE) to have MediaConvert mark up your DASH
     * manifest with <Accessibility> elements for embedded 608 captions. This markup
     * isn't generally required, but some video players require it to discover and play
     * embedded 608 captions. Keep the default value, Exclude (EXCLUDE), to leave these
     * elements out. When you enable this setting, this is the markup that MediaConvert
     * includes in your manifest: <Accessibility
     * schemeIdUri="urn:scte:dash:cc:cea-608:2015" value="CC1=eng"/>
     */
    inline const MpdAccessibilityCaptionHints& GetAccessibilityCaptionHints() const{ return m_accessibilityCaptionHints; }

    /**
     * Optional. Choose Include (INCLUDE) to have MediaConvert mark up your DASH
     * manifest with <Accessibility> elements for embedded 608 captions. This markup
     * isn't generally required, but some video players require it to discover and play
     * embedded 608 captions. Keep the default value, Exclude (EXCLUDE), to leave these
     * elements out. When you enable this setting, this is the markup that MediaConvert
     * includes in your manifest: <Accessibility
     * schemeIdUri="urn:scte:dash:cc:cea-608:2015" value="CC1=eng"/>
     */
    inline bool AccessibilityCaptionHintsHasBeenSet() const { return m_accessibilityCaptionHintsHasBeenSet; }

    /**
     * Optional. Choose Include (INCLUDE) to have MediaConvert mark up your DASH
     * manifest with <Accessibility> elements for embedded 608 captions. This markup
     * isn't generally required, but some video players require it to discover and play
     * embedded 608 captions. Keep the default value, Exclude (EXCLUDE), to leave these
     * elements out. When you enable this setting, this is the markup that MediaConvert
     * includes in your manifest: <Accessibility
     * schemeIdUri="urn:scte:dash:cc:cea-608:2015" value="CC1=eng"/>
     */
    inline void SetAccessibilityCaptionHints(const MpdAccessibilityCaptionHints& value) { m_accessibilityCaptionHintsHasBeenSet = true; m_accessibilityCaptionHints = value; }

    /**
     * Optional. Choose Include (INCLUDE) to have MediaConvert mark up your DASH
     * manifest with <Accessibility> elements for embedded 608 captions. This markup
     * isn't generally required, but some video players require it to discover and play
     * embedded 608 captions. Keep the default value, Exclude (EXCLUDE), to leave these
     * elements out. When you enable this setting, this is the markup that MediaConvert
     * includes in your manifest: <Accessibility
     * schemeIdUri="urn:scte:dash:cc:cea-608:2015" value="CC1=eng"/>
     */
    inline void SetAccessibilityCaptionHints(MpdAccessibilityCaptionHints&& value) { m_accessibilityCaptionHintsHasBeenSet = true; m_accessibilityCaptionHints = std::move(value); }

    /**
     * Optional. Choose Include (INCLUDE) to have MediaConvert mark up your DASH
     * manifest with <Accessibility> elements for embedded 608 captions. This markup
     * isn't generally required, but some video players require it to discover and play
     * embedded 608 captions. Keep the default value, Exclude (EXCLUDE), to leave these
     * elements out. When you enable this setting, this is the markup that MediaConvert
     * includes in your manifest: <Accessibility
     * schemeIdUri="urn:scte:dash:cc:cea-608:2015" value="CC1=eng"/>
     */
    inline MpdSettings& WithAccessibilityCaptionHints(const MpdAccessibilityCaptionHints& value) { SetAccessibilityCaptionHints(value); return *this;}

    /**
     * Optional. Choose Include (INCLUDE) to have MediaConvert mark up your DASH
     * manifest with <Accessibility> elements for embedded 608 captions. This markup
     * isn't generally required, but some video players require it to discover and play
     * embedded 608 captions. Keep the default value, Exclude (EXCLUDE), to leave these
     * elements out. When you enable this setting, this is the markup that MediaConvert
     * includes in your manifest: <Accessibility
     * schemeIdUri="urn:scte:dash:cc:cea-608:2015" value="CC1=eng"/>
     */
    inline MpdSettings& WithAccessibilityCaptionHints(MpdAccessibilityCaptionHints&& value) { SetAccessibilityCaptionHints(std::move(value)); return *this;}


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
    inline const MpdAudioDuration& GetAudioDuration() const{ return m_audioDuration; }

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
    inline void SetAudioDuration(const MpdAudioDuration& value) { m_audioDurationHasBeenSet = true; m_audioDuration = value; }

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
    inline void SetAudioDuration(MpdAudioDuration&& value) { m_audioDurationHasBeenSet = true; m_audioDuration = std::move(value); }

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
    inline MpdSettings& WithAudioDuration(const MpdAudioDuration& value) { SetAudioDuration(value); return *this;}

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
    inline MpdSettings& WithAudioDuration(MpdAudioDuration&& value) { SetAudioDuration(std::move(value)); return *this;}


    /**
     * Use this setting only in DASH output groups that include sidecar TTML or IMSC
     * captions.  You specify sidecar captions in a separate output from your audio and
     * video. Choose Raw (RAW) for captions in a single XML file in a raw container.
     * Choose Fragmented MPEG-4 (FRAGMENTED_MP4) for captions in XML format contained
     * within fragmented MP4 files. This set of fragmented MP4 files is separate from
     * your video and audio fragmented MP4 files.
     */
    inline const MpdCaptionContainerType& GetCaptionContainerType() const{ return m_captionContainerType; }

    /**
     * Use this setting only in DASH output groups that include sidecar TTML or IMSC
     * captions.  You specify sidecar captions in a separate output from your audio and
     * video. Choose Raw (RAW) for captions in a single XML file in a raw container.
     * Choose Fragmented MPEG-4 (FRAGMENTED_MP4) for captions in XML format contained
     * within fragmented MP4 files. This set of fragmented MP4 files is separate from
     * your video and audio fragmented MP4 files.
     */
    inline bool CaptionContainerTypeHasBeenSet() const { return m_captionContainerTypeHasBeenSet; }

    /**
     * Use this setting only in DASH output groups that include sidecar TTML or IMSC
     * captions.  You specify sidecar captions in a separate output from your audio and
     * video. Choose Raw (RAW) for captions in a single XML file in a raw container.
     * Choose Fragmented MPEG-4 (FRAGMENTED_MP4) for captions in XML format contained
     * within fragmented MP4 files. This set of fragmented MP4 files is separate from
     * your video and audio fragmented MP4 files.
     */
    inline void SetCaptionContainerType(const MpdCaptionContainerType& value) { m_captionContainerTypeHasBeenSet = true; m_captionContainerType = value; }

    /**
     * Use this setting only in DASH output groups that include sidecar TTML or IMSC
     * captions.  You specify sidecar captions in a separate output from your audio and
     * video. Choose Raw (RAW) for captions in a single XML file in a raw container.
     * Choose Fragmented MPEG-4 (FRAGMENTED_MP4) for captions in XML format contained
     * within fragmented MP4 files. This set of fragmented MP4 files is separate from
     * your video and audio fragmented MP4 files.
     */
    inline void SetCaptionContainerType(MpdCaptionContainerType&& value) { m_captionContainerTypeHasBeenSet = true; m_captionContainerType = std::move(value); }

    /**
     * Use this setting only in DASH output groups that include sidecar TTML or IMSC
     * captions.  You specify sidecar captions in a separate output from your audio and
     * video. Choose Raw (RAW) for captions in a single XML file in a raw container.
     * Choose Fragmented MPEG-4 (FRAGMENTED_MP4) for captions in XML format contained
     * within fragmented MP4 files. This set of fragmented MP4 files is separate from
     * your video and audio fragmented MP4 files.
     */
    inline MpdSettings& WithCaptionContainerType(const MpdCaptionContainerType& value) { SetCaptionContainerType(value); return *this;}

    /**
     * Use this setting only in DASH output groups that include sidecar TTML or IMSC
     * captions.  You specify sidecar captions in a separate output from your audio and
     * video. Choose Raw (RAW) for captions in a single XML file in a raw container.
     * Choose Fragmented MPEG-4 (FRAGMENTED_MP4) for captions in XML format contained
     * within fragmented MP4 files. This set of fragmented MP4 files is separate from
     * your video and audio fragmented MP4 files.
     */
    inline MpdSettings& WithCaptionContainerType(MpdCaptionContainerType&& value) { SetCaptionContainerType(std::move(value)); return *this;}


    /**
     * To include key-length-value metadata in this output: Set KLV metadata insertion
     * to Passthrough. MediaConvert reads KLV metadata present in your input and writes
     * each instance to a separate event message box in the output, according to MISB
     * ST1910.1. To exclude this KLV metadata: Set KLV metadata insertion to None or
     * leave blank.
     */
    inline const MpdKlvMetadata& GetKlvMetadata() const{ return m_klvMetadata; }

    /**
     * To include key-length-value metadata in this output: Set KLV metadata insertion
     * to Passthrough. MediaConvert reads KLV metadata present in your input and writes
     * each instance to a separate event message box in the output, according to MISB
     * ST1910.1. To exclude this KLV metadata: Set KLV metadata insertion to None or
     * leave blank.
     */
    inline bool KlvMetadataHasBeenSet() const { return m_klvMetadataHasBeenSet; }

    /**
     * To include key-length-value metadata in this output: Set KLV metadata insertion
     * to Passthrough. MediaConvert reads KLV metadata present in your input and writes
     * each instance to a separate event message box in the output, according to MISB
     * ST1910.1. To exclude this KLV metadata: Set KLV metadata insertion to None or
     * leave blank.
     */
    inline void SetKlvMetadata(const MpdKlvMetadata& value) { m_klvMetadataHasBeenSet = true; m_klvMetadata = value; }

    /**
     * To include key-length-value metadata in this output: Set KLV metadata insertion
     * to Passthrough. MediaConvert reads KLV metadata present in your input and writes
     * each instance to a separate event message box in the output, according to MISB
     * ST1910.1. To exclude this KLV metadata: Set KLV metadata insertion to None or
     * leave blank.
     */
    inline void SetKlvMetadata(MpdKlvMetadata&& value) { m_klvMetadataHasBeenSet = true; m_klvMetadata = std::move(value); }

    /**
     * To include key-length-value metadata in this output: Set KLV metadata insertion
     * to Passthrough. MediaConvert reads KLV metadata present in your input and writes
     * each instance to a separate event message box in the output, according to MISB
     * ST1910.1. To exclude this KLV metadata: Set KLV metadata insertion to None or
     * leave blank.
     */
    inline MpdSettings& WithKlvMetadata(const MpdKlvMetadata& value) { SetKlvMetadata(value); return *this;}

    /**
     * To include key-length-value metadata in this output: Set KLV metadata insertion
     * to Passthrough. MediaConvert reads KLV metadata present in your input and writes
     * each instance to a separate event message box in the output, according to MISB
     * ST1910.1. To exclude this KLV metadata: Set KLV metadata insertion to None or
     * leave blank.
     */
    inline MpdSettings& WithKlvMetadata(MpdKlvMetadata&& value) { SetKlvMetadata(std::move(value)); return *this;}


    /**
     * Use this setting only when you specify SCTE-35 markers from ESAM. Choose INSERT
     * to put SCTE-35 markers in this output at the insertion points that you specify
     * in an ESAM XML document. Provide the document in the setting SCC XML (sccXml).
     */
    inline const MpdScte35Esam& GetScte35Esam() const{ return m_scte35Esam; }

    /**
     * Use this setting only when you specify SCTE-35 markers from ESAM. Choose INSERT
     * to put SCTE-35 markers in this output at the insertion points that you specify
     * in an ESAM XML document. Provide the document in the setting SCC XML (sccXml).
     */
    inline bool Scte35EsamHasBeenSet() const { return m_scte35EsamHasBeenSet; }

    /**
     * Use this setting only when you specify SCTE-35 markers from ESAM. Choose INSERT
     * to put SCTE-35 markers in this output at the insertion points that you specify
     * in an ESAM XML document. Provide the document in the setting SCC XML (sccXml).
     */
    inline void SetScte35Esam(const MpdScte35Esam& value) { m_scte35EsamHasBeenSet = true; m_scte35Esam = value; }

    /**
     * Use this setting only when you specify SCTE-35 markers from ESAM. Choose INSERT
     * to put SCTE-35 markers in this output at the insertion points that you specify
     * in an ESAM XML document. Provide the document in the setting SCC XML (sccXml).
     */
    inline void SetScte35Esam(MpdScte35Esam&& value) { m_scte35EsamHasBeenSet = true; m_scte35Esam = std::move(value); }

    /**
     * Use this setting only when you specify SCTE-35 markers from ESAM. Choose INSERT
     * to put SCTE-35 markers in this output at the insertion points that you specify
     * in an ESAM XML document. Provide the document in the setting SCC XML (sccXml).
     */
    inline MpdSettings& WithScte35Esam(const MpdScte35Esam& value) { SetScte35Esam(value); return *this;}

    /**
     * Use this setting only when you specify SCTE-35 markers from ESAM. Choose INSERT
     * to put SCTE-35 markers in this output at the insertion points that you specify
     * in an ESAM XML document. Provide the document in the setting SCC XML (sccXml).
     */
    inline MpdSettings& WithScte35Esam(MpdScte35Esam&& value) { SetScte35Esam(std::move(value)); return *this;}


    /**
     * Ignore this setting unless you have SCTE-35 markers in your input video file.
     * Choose Passthrough (PASSTHROUGH) if you want SCTE-35 markers that appear in your
     * input to also appear in this output. Choose None (NONE) if you don't want those
     * SCTE-35 markers in this output.
     */
    inline const MpdScte35Source& GetScte35Source() const{ return m_scte35Source; }

    /**
     * Ignore this setting unless you have SCTE-35 markers in your input video file.
     * Choose Passthrough (PASSTHROUGH) if you want SCTE-35 markers that appear in your
     * input to also appear in this output. Choose None (NONE) if you don't want those
     * SCTE-35 markers in this output.
     */
    inline bool Scte35SourceHasBeenSet() const { return m_scte35SourceHasBeenSet; }

    /**
     * Ignore this setting unless you have SCTE-35 markers in your input video file.
     * Choose Passthrough (PASSTHROUGH) if you want SCTE-35 markers that appear in your
     * input to also appear in this output. Choose None (NONE) if you don't want those
     * SCTE-35 markers in this output.
     */
    inline void SetScte35Source(const MpdScte35Source& value) { m_scte35SourceHasBeenSet = true; m_scte35Source = value; }

    /**
     * Ignore this setting unless you have SCTE-35 markers in your input video file.
     * Choose Passthrough (PASSTHROUGH) if you want SCTE-35 markers that appear in your
     * input to also appear in this output. Choose None (NONE) if you don't want those
     * SCTE-35 markers in this output.
     */
    inline void SetScte35Source(MpdScte35Source&& value) { m_scte35SourceHasBeenSet = true; m_scte35Source = std::move(value); }

    /**
     * Ignore this setting unless you have SCTE-35 markers in your input video file.
     * Choose Passthrough (PASSTHROUGH) if you want SCTE-35 markers that appear in your
     * input to also appear in this output. Choose None (NONE) if you don't want those
     * SCTE-35 markers in this output.
     */
    inline MpdSettings& WithScte35Source(const MpdScte35Source& value) { SetScte35Source(value); return *this;}

    /**
     * Ignore this setting unless you have SCTE-35 markers in your input video file.
     * Choose Passthrough (PASSTHROUGH) if you want SCTE-35 markers that appear in your
     * input to also appear in this output. Choose None (NONE) if you don't want those
     * SCTE-35 markers in this output.
     */
    inline MpdSettings& WithScte35Source(MpdScte35Source&& value) { SetScte35Source(std::move(value)); return *this;}


    /**
     * To include ID3 metadata in this output: Set ID3 metadata (timedMetadata) to
     * Passthrough (PASSTHROUGH). Specify this ID3 metadata in Custom ID3 metadata
     * inserter (timedMetadataInsertion). MediaConvert writes each instance of ID3
     * metadata in a separate Event Message (eMSG) box. To exclude this ID3 metadata:
     * Set ID3 metadata to None (NONE) or leave blank.
     */
    inline const MpdTimedMetadata& GetTimedMetadata() const{ return m_timedMetadata; }

    /**
     * To include ID3 metadata in this output: Set ID3 metadata (timedMetadata) to
     * Passthrough (PASSTHROUGH). Specify this ID3 metadata in Custom ID3 metadata
     * inserter (timedMetadataInsertion). MediaConvert writes each instance of ID3
     * metadata in a separate Event Message (eMSG) box. To exclude this ID3 metadata:
     * Set ID3 metadata to None (NONE) or leave blank.
     */
    inline bool TimedMetadataHasBeenSet() const { return m_timedMetadataHasBeenSet; }

    /**
     * To include ID3 metadata in this output: Set ID3 metadata (timedMetadata) to
     * Passthrough (PASSTHROUGH). Specify this ID3 metadata in Custom ID3 metadata
     * inserter (timedMetadataInsertion). MediaConvert writes each instance of ID3
     * metadata in a separate Event Message (eMSG) box. To exclude this ID3 metadata:
     * Set ID3 metadata to None (NONE) or leave blank.
     */
    inline void SetTimedMetadata(const MpdTimedMetadata& value) { m_timedMetadataHasBeenSet = true; m_timedMetadata = value; }

    /**
     * To include ID3 metadata in this output: Set ID3 metadata (timedMetadata) to
     * Passthrough (PASSTHROUGH). Specify this ID3 metadata in Custom ID3 metadata
     * inserter (timedMetadataInsertion). MediaConvert writes each instance of ID3
     * metadata in a separate Event Message (eMSG) box. To exclude this ID3 metadata:
     * Set ID3 metadata to None (NONE) or leave blank.
     */
    inline void SetTimedMetadata(MpdTimedMetadata&& value) { m_timedMetadataHasBeenSet = true; m_timedMetadata = std::move(value); }

    /**
     * To include ID3 metadata in this output: Set ID3 metadata (timedMetadata) to
     * Passthrough (PASSTHROUGH). Specify this ID3 metadata in Custom ID3 metadata
     * inserter (timedMetadataInsertion). MediaConvert writes each instance of ID3
     * metadata in a separate Event Message (eMSG) box. To exclude this ID3 metadata:
     * Set ID3 metadata to None (NONE) or leave blank.
     */
    inline MpdSettings& WithTimedMetadata(const MpdTimedMetadata& value) { SetTimedMetadata(value); return *this;}

    /**
     * To include ID3 metadata in this output: Set ID3 metadata (timedMetadata) to
     * Passthrough (PASSTHROUGH). Specify this ID3 metadata in Custom ID3 metadata
     * inserter (timedMetadataInsertion). MediaConvert writes each instance of ID3
     * metadata in a separate Event Message (eMSG) box. To exclude this ID3 metadata:
     * Set ID3 metadata to None (NONE) or leave blank.
     */
    inline MpdSettings& WithTimedMetadata(MpdTimedMetadata&& value) { SetTimedMetadata(std::move(value)); return *this;}

  private:

    MpdAccessibilityCaptionHints m_accessibilityCaptionHints;
    bool m_accessibilityCaptionHintsHasBeenSet = false;

    MpdAudioDuration m_audioDuration;
    bool m_audioDurationHasBeenSet = false;

    MpdCaptionContainerType m_captionContainerType;
    bool m_captionContainerTypeHasBeenSet = false;

    MpdKlvMetadata m_klvMetadata;
    bool m_klvMetadataHasBeenSet = false;

    MpdScte35Esam m_scte35Esam;
    bool m_scte35EsamHasBeenSet = false;

    MpdScte35Source m_scte35Source;
    bool m_scte35SourceHasBeenSet = false;

    MpdTimedMetadata m_timedMetadata;
    bool m_timedMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
