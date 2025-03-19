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
   * <p>The <code>CreateJobOutput</code> structure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/CreateJobOutput">AWS
   * API Reference</a></p>
   */
  class CreateJobOutput
  {
  public:
    AWS_ELASTICTRANSCODER_API CreateJobOutput() = default;
    AWS_ELASTICTRANSCODER_API CreateJobOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API CreateJobOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name to assign to the transcoded file. Elastic Transcoder saves the file
     * in the Amazon S3 bucket specified by the <code>OutputBucket</code> object in the
     * pipeline that is specified by the pipeline ID. If a file with the specified name
     * already exists in the output bucket, the job fails. </p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    CreateJobOutput& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
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
    CreateJobOutput& WithThumbnailPattern(ThumbnailPatternT&& value) { SetThumbnailPattern(std::forward<ThumbnailPatternT>(value)); return *this;}
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
    CreateJobOutput& WithThumbnailEncryption(ThumbnailEncryptionT&& value) { SetThumbnailEncryption(std::forward<ThumbnailEncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of degrees clockwise by which you want Elastic Transcoder to
     * rotate the output relative to the input. Enter one of the following values:
     * <code>auto</code>, <code>0</code>, <code>90</code>, <code>180</code>,
     * <code>270</code>. The value <code>auto</code> generally works only if the file
     * that you're transcoding contains rotation metadata. </p>
     */
    inline const Aws::String& GetRotate() const { return m_rotate; }
    inline bool RotateHasBeenSet() const { return m_rotateHasBeenSet; }
    template<typename RotateT = Aws::String>
    void SetRotate(RotateT&& value) { m_rotateHasBeenSet = true; m_rotate = std::forward<RotateT>(value); }
    template<typename RotateT = Aws::String>
    CreateJobOutput& WithRotate(RotateT&& value) { SetRotate(std::forward<RotateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The <code>Id</code> of the preset to use for this job. The preset determines
     * the audio, video, and thumbnail settings that Elastic Transcoder uses for
     * transcoding. </p>
     */
    inline const Aws::String& GetPresetId() const { return m_presetId; }
    inline bool PresetIdHasBeenSet() const { return m_presetIdHasBeenSet; }
    template<typename PresetIdT = Aws::String>
    void SetPresetId(PresetIdT&& value) { m_presetIdHasBeenSet = true; m_presetId = std::forward<PresetIdT>(value); }
    template<typename PresetIdT = Aws::String>
    CreateJobOutput& WithPresetId(PresetIdT&& value) { SetPresetId(std::forward<PresetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>(Outputs in Fragmented MP4 or MPEG-TS format only.</p>
     *  <p>If you specify a preset in <code>PresetId</code> for which the
     * value of <code>Container</code> is <code>fmp4</code> (Fragmented MP4) or
     * <code>ts</code> (MPEG-TS), <code>SegmentDuration</code> is the target maximum
     * duration of each segment in seconds. For <code>HLSv3</code> format playlists,
     * each media segment is stored in a separate <code>.ts</code> file. For
     * <code>HLSv4</code> and <code>Smooth</code> playlists, all media segments for an
     * output are stored in a single file. Each segment is approximately the length of
     * the <code>SegmentDuration</code>, though individual segments might be shorter or
     * longer.</p> <p>The range of valid values is 1 to 60 seconds. If the duration of
     * the video is not evenly divisible by <code>SegmentDuration</code>, the duration
     * of the last segment is the remainder of total length/SegmentDuration.</p>
     * <p>Elastic Transcoder creates an output-specific playlist for each output
     * <code>HLS</code> output that you specify in OutputKeys. To add an output to the
     * master playlist for this job, include it in the <code>OutputKeys</code> of the
     * associated playlist.</p>
     */
    inline const Aws::String& GetSegmentDuration() const { return m_segmentDuration; }
    inline bool SegmentDurationHasBeenSet() const { return m_segmentDurationHasBeenSet; }
    template<typename SegmentDurationT = Aws::String>
    void SetSegmentDuration(SegmentDurationT&& value) { m_segmentDurationHasBeenSet = true; m_segmentDuration = std::forward<SegmentDurationT>(value); }
    template<typename SegmentDurationT = Aws::String>
    CreateJobOutput& WithSegmentDuration(SegmentDurationT&& value) { SetSegmentDuration(std::forward<SegmentDurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the watermarks that you want Elastic Transcoder to add to
     * the video during transcoding. You can specify up to four watermarks for each
     * output. Settings for each watermark must be defined in the preset for the
     * current output.</p>
     */
    inline const Aws::Vector<JobWatermark>& GetWatermarks() const { return m_watermarks; }
    inline bool WatermarksHasBeenSet() const { return m_watermarksHasBeenSet; }
    template<typename WatermarksT = Aws::Vector<JobWatermark>>
    void SetWatermarks(WatermarksT&& value) { m_watermarksHasBeenSet = true; m_watermarks = std::forward<WatermarksT>(value); }
    template<typename WatermarksT = Aws::Vector<JobWatermark>>
    CreateJobOutput& WithWatermarks(WatermarksT&& value) { SetWatermarks(std::forward<WatermarksT>(value)); return *this;}
    template<typename WatermarksT = JobWatermark>
    CreateJobOutput& AddWatermarks(WatermarksT&& value) { m_watermarksHasBeenSet = true; m_watermarks.emplace_back(std::forward<WatermarksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the album art that you want Elastic Transcoder to add to
     * the file during transcoding. You can specify up to twenty album artworks for
     * each output. Settings for each artwork must be defined in the job for the
     * current output.</p>
     */
    inline const JobAlbumArt& GetAlbumArt() const { return m_albumArt; }
    inline bool AlbumArtHasBeenSet() const { return m_albumArtHasBeenSet; }
    template<typename AlbumArtT = JobAlbumArt>
    void SetAlbumArt(AlbumArtT&& value) { m_albumArtHasBeenSet = true; m_albumArt = std::forward<AlbumArtT>(value); }
    template<typename AlbumArtT = JobAlbumArt>
    CreateJobOutput& WithAlbumArt(AlbumArtT&& value) { SetAlbumArt(std::forward<AlbumArtT>(value)); return *this;}
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
    CreateJobOutput& WithCaptions(CaptionsT&& value) { SetCaptions(std::forward<CaptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can specify encryption settings for any output files that you want to use
     * for a transcoding job. This includes the output file and any watermarks,
     * thumbnails, album art, or captions that you want to use. You must specify
     * encryption settings for each file individually.</p>
     */
    inline const Encryption& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = Encryption>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = Encryption>
    CreateJobOutput& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}
  private:

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

    Aws::Vector<JobWatermark> m_watermarks;
    bool m_watermarksHasBeenSet = false;

    JobAlbumArt m_albumArt;
    bool m_albumArtHasBeenSet = false;

    Captions m_captions;
    bool m_captionsHasBeenSet = false;

    Encryption m_encryption;
    bool m_encryptionHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
