/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastictranscoder/model/Encryption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elastictranscoder/model/JobAlbumArt.h>
#include <aws/elastictranscoder/model/Captions.h>
#include <aws/elastictranscoder/model/JobWatermark.h>
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
namespace ElasticTranscoder
{
namespace Model
{

  /**
   *  <p>Outputs recommended instead.</p>  <p>If you specified
   * one output for a job, information about that output. If you specified multiple
   * outputs for a job, the <code>Output</code> object lists information about the
   * first output. This duplicates the information that is listed for the first
   * output in the <code>Outputs</code> object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/JobOutput">AWS
   * API Reference</a></p>
   */
  class JobOutput
  {
  public:
    AWS_ELASTICTRANSCODER_API JobOutput() = default;
    AWS_ELASTICTRANSCODER_API JobOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API JobOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A sequential counter, starting with 1, that identifies an output among the
     * outputs from the current job. In the Output syntax, this value is always 1.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    JobOutput& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name to assign to the transcoded file. Elastic Transcoder saves the file
     * in the Amazon S3 bucket specified by the <code>OutputBucket</code> object in the
     * pipeline that is specified by the pipeline ID.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    JobOutput& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether you want Elastic Transcoder to create thumbnails for your videos and,
     * if so, how you want Elastic Transcoder to name the files.</p> <p>If you don't
     * want Elastic Transcoder to create thumbnails, specify "".</p> <p>If you do want
     * Elastic Transcoder to create thumbnails, specify the information that you want
     * to include in the file name for each thumbnail. You can specify the following
     * values in any sequence:</p> <ul> <li> <p> <b> <code>{count}</code>
     * (Required)</b>: If you want to create thumbnails, you must include
     * <code>{count}</code> in the <code>ThumbnailPattern</code> object. Wherever you
     * specify <code>{count}</code>, Elastic Transcoder adds a five-digit sequence
     * number (beginning with <b>00001</b>) to thumbnail file names. The number
     * indicates where a given thumbnail appears in the sequence of thumbnails for a
     * transcoded file. </p>  <p>If you specify a literal value and/or
     * <code>{resolution}</code> but you omit <code>{count}</code>, Elastic Transcoder
     * returns a validation error and does not create the job.</p>  </li>
     * <li> <p> <b>Literal values (Optional)</b>: You can specify literal values
     * anywhere in the <code>ThumbnailPattern</code> object. For example, you can
     * include them as a file name prefix or as a delimiter between
     * <code>{resolution}</code> and <code>{count}</code>. </p> </li> <li> <p> <b>
     * <code>{resolution}</code> (Optional)</b>: If you want Elastic Transcoder to
     * include the resolution in the file name, include <code>{resolution}</code> in
     * the <code>ThumbnailPattern</code> object. </p> </li> </ul> <p>When creating
     * thumbnails, Elastic Transcoder automatically saves the files in the format (.jpg
     * or .png) that appears in the preset that you specified in the
     * <code>PresetID</code> value of <code>CreateJobOutput</code>. Elastic Transcoder
     * also appends the applicable file name extension.</p>
     */
    inline const Aws::String& GetThumbnailPattern() const { return m_thumbnailPattern; }
    inline bool ThumbnailPatternHasBeenSet() const { return m_thumbnailPatternHasBeenSet; }
    template<typename ThumbnailPatternT = Aws::String>
    void SetThumbnailPattern(ThumbnailPatternT&& value) { m_thumbnailPatternHasBeenSet = true; m_thumbnailPattern = std::forward<ThumbnailPatternT>(value); }
    template<typename ThumbnailPatternT = Aws::String>
    JobOutput& WithThumbnailPattern(ThumbnailPatternT&& value) { SetThumbnailPattern(std::forward<ThumbnailPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your thumbnail.</p>
     */
    inline const Encryption& GetThumbnailEncryption() const { return m_thumbnailEncryption; }
    inline bool ThumbnailEncryptionHasBeenSet() const { return m_thumbnailEncryptionHasBeenSet; }
    template<typename ThumbnailEncryptionT = Encryption>
    void SetThumbnailEncryption(ThumbnailEncryptionT&& value) { m_thumbnailEncryptionHasBeenSet = true; m_thumbnailEncryption = std::forward<ThumbnailEncryptionT>(value); }
    template<typename ThumbnailEncryptionT = Encryption>
    JobOutput& WithThumbnailEncryption(ThumbnailEncryptionT&& value) { SetThumbnailEncryption(std::forward<ThumbnailEncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of degrees clockwise by which you want Elastic Transcoder to
     * rotate the output relative to the input. Enter one of the following values:</p>
     * <p> <code>auto</code>, <code>0</code>, <code>90</code>, <code>180</code>,
     * <code>270</code> </p> <p> The value <code>auto</code> generally works only if
     * the file that you're transcoding contains rotation metadata.</p>
     */
    inline const Aws::String& GetRotate() const { return m_rotate; }
    inline bool RotateHasBeenSet() const { return m_rotateHasBeenSet; }
    template<typename RotateT = Aws::String>
    void SetRotate(RotateT&& value) { m_rotateHasBeenSet = true; m_rotate = std::forward<RotateT>(value); }
    template<typename RotateT = Aws::String>
    JobOutput& WithRotate(RotateT&& value) { SetRotate(std::forward<RotateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the <code>Id</code> object for the preset that you want to use
     * for this job. The preset determines the audio, video, and thumbnail settings
     * that Elastic Transcoder uses for transcoding. To use a preset that you created,
     * specify the preset ID that Elastic Transcoder returned in the response when you
     * created the preset. You can also use the Elastic Transcoder system presets,
     * which you can get with <code>ListPresets</code>.</p>
     */
    inline const Aws::String& GetPresetId() const { return m_presetId; }
    inline bool PresetIdHasBeenSet() const { return m_presetIdHasBeenSet; }
    template<typename PresetIdT = Aws::String>
    void SetPresetId(PresetIdT&& value) { m_presetIdHasBeenSet = true; m_presetId = std::forward<PresetIdT>(value); }
    template<typename PresetIdT = Aws::String>
    JobOutput& WithPresetId(PresetIdT&& value) { SetPresetId(std::forward<PresetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>(Outputs in Fragmented MP4 or MPEG-TS format only.</p>
     *  <p>If you specify a preset in <code>PresetId</code> for which the
     * value of <code>Container</code> is <code>fmp4</code> (Fragmented MP4) or
     * <code>ts</code> (MPEG-TS), <code>SegmentDuration</code> is the target maximum
     * duration of each segment in seconds. For <code>HLSv3</code> format playlists,
     * each media segment is stored in a separate <code>.ts</code> file. For
     * <code>HLSv4</code>, <code>MPEG-DASH</code>, and <code>Smooth</code> playlists,
     * all media segments for an output are stored in a single file. Each segment is
     * approximately the length of the <code>SegmentDuration</code>, though individual
     * segments might be shorter or longer.</p> <p>The range of valid values is 1 to 60
     * seconds. If the duration of the video is not evenly divisible by
     * <code>SegmentDuration</code>, the duration of the last segment is the remainder
     * of total length/SegmentDuration.</p> <p>Elastic Transcoder creates an
     * output-specific playlist for each output <code>HLS</code> output that you
     * specify in OutputKeys. To add an output to the master playlist for this job,
     * include it in the <code>OutputKeys</code> of the associated playlist.</p>
     */
    inline const Aws::String& GetSegmentDuration() const { return m_segmentDuration; }
    inline bool SegmentDurationHasBeenSet() const { return m_segmentDurationHasBeenSet; }
    template<typename SegmentDurationT = Aws::String>
    void SetSegmentDuration(SegmentDurationT&& value) { m_segmentDurationHasBeenSet = true; m_segmentDuration = std::forward<SegmentDurationT>(value); }
    template<typename SegmentDurationT = Aws::String>
    JobOutput& WithSegmentDuration(SegmentDurationT&& value) { SetSegmentDuration(std::forward<SegmentDurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of one output in a job. If you specified only one output for the
     * job, <code>Outputs:Status</code> is always the same as <code>Job:Status</code>.
     * If you specified more than one output: </p> <ul> <li> <p>
     * <code>Job:Status</code> and <code>Outputs:Status</code> for all of the outputs
     * is Submitted until Elastic Transcoder starts to process the first output.</p>
     * </li> <li> <p>When Elastic Transcoder starts to process the first output,
     * <code>Outputs:Status</code> for that output and <code>Job:Status</code> both
     * change to Progressing. For each output, the value of <code>Outputs:Status</code>
     * remains Submitted until Elastic Transcoder starts to process the output.</p>
     * </li> <li> <p>Job:Status remains Progressing until all of the outputs reach a
     * terminal status, either Complete or Error.</p> </li> <li> <p>When all of the
     * outputs reach a terminal status, <code>Job:Status</code> changes to Complete
     * only if <code>Outputs:Status</code> for all of the outputs is
     * <code>Complete</code>. If <code>Outputs:Status</code> for one or more outputs is
     * <code>Error</code>, the terminal status for <code>Job:Status</code> is also
     * <code>Error</code>.</p> </li> </ul> <p>The value of <code>Status</code> is one
     * of the following: <code>Submitted</code>, <code>Progressing</code>,
     * <code>Complete</code>, <code>Canceled</code>, or <code>Error</code>. </p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    JobOutput& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information that further explains <code>Status</code>.</p>
     */
    inline const Aws::String& GetStatusDetail() const { return m_statusDetail; }
    inline bool StatusDetailHasBeenSet() const { return m_statusDetailHasBeenSet; }
    template<typename StatusDetailT = Aws::String>
    void SetStatusDetail(StatusDetailT&& value) { m_statusDetailHasBeenSet = true; m_statusDetail = std::forward<StatusDetailT>(value); }
    template<typename StatusDetailT = Aws::String>
    JobOutput& WithStatusDetail(StatusDetailT&& value) { SetStatusDetail(std::forward<StatusDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Duration of the output file, in seconds.</p>
     */
    inline long long GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(long long value) { m_durationHasBeenSet = true; m_duration = value; }
    inline JobOutput& WithDuration(long long value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the width of the output file in pixels.</p>
     */
    inline int GetWidth() const { return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }
    inline JobOutput& WithWidth(int value) { SetWidth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Height of the output file, in pixels.</p>
     */
    inline int GetHeight() const { return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }
    inline JobOutput& WithHeight(int value) { SetHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Frame rate of the output file, in frames per second.</p>
     */
    inline const Aws::String& GetFrameRate() const { return m_frameRate; }
    inline bool FrameRateHasBeenSet() const { return m_frameRateHasBeenSet; }
    template<typename FrameRateT = Aws::String>
    void SetFrameRate(FrameRateT&& value) { m_frameRateHasBeenSet = true; m_frameRate = std::forward<FrameRateT>(value); }
    template<typename FrameRateT = Aws::String>
    JobOutput& WithFrameRate(FrameRateT&& value) { SetFrameRate(std::forward<FrameRateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>File size of the output file, in bytes.</p>
     */
    inline long long GetFileSize() const { return m_fileSize; }
    inline bool FileSizeHasBeenSet() const { return m_fileSizeHasBeenSet; }
    inline void SetFileSize(long long value) { m_fileSizeHasBeenSet = true; m_fileSize = value; }
    inline JobOutput& WithFileSize(long long value) { SetFileSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Duration of the output file, in milliseconds.</p>
     */
    inline long long GetDurationMillis() const { return m_durationMillis; }
    inline bool DurationMillisHasBeenSet() const { return m_durationMillisHasBeenSet; }
    inline void SetDurationMillis(long long value) { m_durationMillisHasBeenSet = true; m_durationMillis = value; }
    inline JobOutput& WithDurationMillis(long long value) { SetDurationMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the watermarks that you want Elastic Transcoder to add to
     * the video during transcoding. You can specify up to four watermarks for each
     * output. Settings for each watermark must be defined in the preset that you
     * specify in <code>Preset</code> for the current output.</p> <p>Watermarks are
     * added to the output video in the sequence in which you list them in the job
     * output—the first watermark in the list is added to the output video first, the
     * second watermark in the list is added next, and so on. As a result, if the
     * settings in a preset cause Elastic Transcoder to place all watermarks in the
     * same location, the second watermark that you add covers the first one, the third
     * one covers the second, and the fourth one covers the third.</p>
     */
    inline const Aws::Vector<JobWatermark>& GetWatermarks() const { return m_watermarks; }
    inline bool WatermarksHasBeenSet() const { return m_watermarksHasBeenSet; }
    template<typename WatermarksT = Aws::Vector<JobWatermark>>
    void SetWatermarks(WatermarksT&& value) { m_watermarksHasBeenSet = true; m_watermarks = std::forward<WatermarksT>(value); }
    template<typename WatermarksT = Aws::Vector<JobWatermark>>
    JobOutput& WithWatermarks(WatermarksT&& value) { SetWatermarks(std::forward<WatermarksT>(value)); return *this;}
    template<typename WatermarksT = JobWatermark>
    JobOutput& AddWatermarks(WatermarksT&& value) { m_watermarksHasBeenSet = true; m_watermarks.emplace_back(std::forward<WatermarksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The album art to be associated with the output file, if any.</p>
     */
    inline const JobAlbumArt& GetAlbumArt() const { return m_albumArt; }
    inline bool AlbumArtHasBeenSet() const { return m_albumArtHasBeenSet; }
    template<typename AlbumArtT = JobAlbumArt>
    void SetAlbumArt(AlbumArtT&& value) { m_albumArtHasBeenSet = true; m_albumArt = std::forward<AlbumArtT>(value); }
    template<typename AlbumArtT = JobAlbumArt>
    JobOutput& WithAlbumArt(AlbumArtT&& value) { SetAlbumArt(std::forward<AlbumArtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can configure Elastic Transcoder to transcode captions, or subtitles,
     * from one format to another. All captions must be in UTF-8. Elastic Transcoder
     * supports two types of captions:</p> <ul> <li> <p> <b>Embedded:</b> Embedded
     * captions are included in the same file as the audio and video. Elastic
     * Transcoder supports only one embedded caption per language, to a maximum of 300
     * embedded captions per file.</p> <p>Valid input values include: <code>CEA-608
     * (EIA-608</code>, first non-empty channel only), <code>CEA-708 (EIA-708</code>,
     * first non-empty channel only), and <code>mov-text</code> </p> <p>Valid outputs
     * include: <code>mov-text</code> </p> <p>Elastic Transcoder supports a maximum of
     * one embedded format per output.</p> </li> <li> <p> <b>Sidecar:</b> Sidecar
     * captions are kept in a separate metadata file from the audio and video data.
     * Sidecar captions require a player that is capable of understanding the
     * relationship between the video file and the sidecar file. Elastic Transcoder
     * supports only one sidecar caption per language, to a maximum of 20 sidecar
     * captions per file.</p> <p>Valid input values include: <code>dfxp</code> (first
     * div element only), <code>ebu-tt</code>, <code>scc</code>, <code>smpt</code>,
     * <code>srt</code>, <code>ttml</code> (first div element only), and
     * <code>webvtt</code> </p> <p>Valid outputs include: <code>dfxp</code> (first div
     * element only), <code>scc</code>, <code>srt</code>, and <code>webvtt</code>.</p>
     * </li> </ul> <p>If you want ttml or smpte-tt compatible captions, specify dfxp as
     * your output format.</p> <p>Elastic Transcoder does not support OCR (Optical
     * Character Recognition), does not accept pictures as a valid input for captions,
     * and is not available for audio-only transcoding. Elastic Transcoder does not
     * preserve text formatting (for example, italics) during the transcoding
     * process.</p> <p>To remove captions or leave the captions empty, set
     * <code>Captions</code> to null. To pass through existing captions unchanged, set
     * the <code>MergePolicy</code> to <code>MergeRetain</code>, and pass in a null
     * <code>CaptionSources</code> array.</p> <p>For more information on embedded
     * files, see the Subtitles Wikipedia page.</p> <p>For more information on sidecar
     * files, see the Extensible Metadata Platform and Sidecar file Wikipedia
     * pages.</p>
     */
    inline const Captions& GetCaptions() const { return m_captions; }
    inline bool CaptionsHasBeenSet() const { return m_captionsHasBeenSet; }
    template<typename CaptionsT = Captions>
    void SetCaptions(CaptionsT&& value) { m_captionsHasBeenSet = true; m_captions = std::forward<CaptionsT>(value); }
    template<typename CaptionsT = Captions>
    JobOutput& WithCaptions(CaptionsT&& value) { SetCaptions(std::forward<CaptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption settings, if any, that you want Elastic Transcoder to apply to
     * your output files. If you choose to use encryption, you must specify a mode to
     * use. If you choose not to use encryption, Elastic Transcoder writes an
     * unencrypted file to your Amazon S3 bucket.</p>
     */
    inline const Encryption& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = Encryption>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = Encryption>
    JobOutput& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If Elastic Transcoder used a preset with a
     * <code>ColorSpaceConversionMode</code> to transcode the output file, the
     * <code>AppliedColorSpaceConversion</code> parameter shows the conversion used. If
     * no <code>ColorSpaceConversionMode</code> was defined in the preset, this
     * parameter is not be included in the job response.</p>
     */
    inline const Aws::String& GetAppliedColorSpaceConversion() const { return m_appliedColorSpaceConversion; }
    inline bool AppliedColorSpaceConversionHasBeenSet() const { return m_appliedColorSpaceConversionHasBeenSet; }
    template<typename AppliedColorSpaceConversionT = Aws::String>
    void SetAppliedColorSpaceConversion(AppliedColorSpaceConversionT&& value) { m_appliedColorSpaceConversionHasBeenSet = true; m_appliedColorSpaceConversion = std::forward<AppliedColorSpaceConversionT>(value); }
    template<typename AppliedColorSpaceConversionT = Aws::String>
    JobOutput& WithAppliedColorSpaceConversion(AppliedColorSpaceConversionT&& value) { SetAppliedColorSpaceConversion(std::forward<AppliedColorSpaceConversionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_thumbnailPattern;
    bool m_thumbnailPatternHasBeenSet = false;

    Encryption m_thumbnailEncryption;
    bool m_thumbnailEncryptionHasBeenSet = false;

    Aws::String m_rotate;
    bool m_rotateHasBeenSet = false;

    Aws::String m_presetId;
    bool m_presetIdHasBeenSet = false;

    Aws::String m_segmentDuration;
    bool m_segmentDurationHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusDetail;
    bool m_statusDetailHasBeenSet = false;

    long long m_duration{0};
    bool m_durationHasBeenSet = false;

    int m_width{0};
    bool m_widthHasBeenSet = false;

    int m_height{0};
    bool m_heightHasBeenSet = false;

    Aws::String m_frameRate;
    bool m_frameRateHasBeenSet = false;

    long long m_fileSize{0};
    bool m_fileSizeHasBeenSet = false;

    long long m_durationMillis{0};
    bool m_durationMillisHasBeenSet = false;

    Aws::Vector<JobWatermark> m_watermarks;
    bool m_watermarksHasBeenSet = false;

    JobAlbumArt m_albumArt;
    bool m_albumArtHasBeenSet = false;

    Captions m_captions;
    bool m_captionsHasBeenSet = false;

    Encryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    Aws::String m_appliedColorSpaceConversion;
    bool m_appliedColorSpaceConversionHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
