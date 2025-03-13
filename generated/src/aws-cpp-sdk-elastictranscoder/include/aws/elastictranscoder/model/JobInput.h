/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastictranscoder/model/Encryption.h>
#include <aws/elastictranscoder/model/TimeSpan.h>
#include <aws/elastictranscoder/model/InputCaptions.h>
#include <aws/elastictranscoder/model/DetectedProperties.h>
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
   * <p>Information about the file that you're transcoding.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/JobInput">AWS
   * API Reference</a></p>
   */
  class JobInput
  {
  public:
    AWS_ELASTICTRANSCODER_API JobInput() = default;
    AWS_ELASTICTRANSCODER_API JobInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API JobInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the file to transcode. Elsewhere in the body of the JSON block
     * is the the ID of the pipeline to use for processing the job. The
     * <code>InputBucket</code> object in that pipeline tells Elastic Transcoder which
     * Amazon S3 bucket to get the file from. </p> <p>If the file name includes a
     * prefix, such as <code>cooking/lasagna.mpg</code>, include the prefix in the key.
     * If the file isn't in the specified bucket, Elastic Transcoder returns an
     * error.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    JobInput& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frame rate of the input file. If you want Elastic Transcoder to
     * automatically detect the frame rate of the input file, specify
     * <code>auto</code>. If you want to specify the frame rate for the input file,
     * enter one of the following values: </p> <p> <code>10</code>, <code>15</code>,
     * <code>23.97</code>, <code>24</code>, <code>25</code>, <code>29.97</code>,
     * <code>30</code>, <code>60</code> </p> <p>If you specify a value other than
     * <code>auto</code>, Elastic Transcoder disables automatic detection of the frame
     * rate.</p>
     */
    inline const Aws::String& GetFrameRate() const { return m_frameRate; }
    inline bool FrameRateHasBeenSet() const { return m_frameRateHasBeenSet; }
    template<typename FrameRateT = Aws::String>
    void SetFrameRate(FrameRateT&& value) { m_frameRateHasBeenSet = true; m_frameRate = std::forward<FrameRateT>(value); }
    template<typename FrameRateT = Aws::String>
    JobInput& WithFrameRate(FrameRateT&& value) { SetFrameRate(std::forward<FrameRateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value must be <code>auto</code>, which causes Elastic Transcoder to
     * automatically detect the resolution of the input file.</p>
     */
    inline const Aws::String& GetResolution() const { return m_resolution; }
    inline bool ResolutionHasBeenSet() const { return m_resolutionHasBeenSet; }
    template<typename ResolutionT = Aws::String>
    void SetResolution(ResolutionT&& value) { m_resolutionHasBeenSet = true; m_resolution = std::forward<ResolutionT>(value); }
    template<typename ResolutionT = Aws::String>
    JobInput& WithResolution(ResolutionT&& value) { SetResolution(std::forward<ResolutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The aspect ratio of the input file. If you want Elastic Transcoder to
     * automatically detect the aspect ratio of the input file, specify
     * <code>auto</code>. If you want to specify the aspect ratio for the output file,
     * enter one of the following values: </p> <p> <code>1:1</code>, <code>4:3</code>,
     * <code>3:2</code>, <code>16:9</code> </p> <p> If you specify a value other than
     * <code>auto</code>, Elastic Transcoder disables automatic detection of the aspect
     * ratio. </p>
     */
    inline const Aws::String& GetAspectRatio() const { return m_aspectRatio; }
    inline bool AspectRatioHasBeenSet() const { return m_aspectRatioHasBeenSet; }
    template<typename AspectRatioT = Aws::String>
    void SetAspectRatio(AspectRatioT&& value) { m_aspectRatioHasBeenSet = true; m_aspectRatio = std::forward<AspectRatioT>(value); }
    template<typename AspectRatioT = Aws::String>
    JobInput& WithAspectRatio(AspectRatioT&& value) { SetAspectRatio(std::forward<AspectRatioT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the input file is interlaced. If you want Elastic Transcoder to
     * automatically detect whether the input file is interlaced, specify
     * <code>auto</code>. If you want to specify whether the input file is interlaced,
     * enter one of the following values:</p> <p> <code>true</code>, <code>false</code>
     * </p> <p>If you specify a value other than <code>auto</code>, Elastic Transcoder
     * disables automatic detection of interlacing.</p>
     */
    inline const Aws::String& GetInterlaced() const { return m_interlaced; }
    inline bool InterlacedHasBeenSet() const { return m_interlacedHasBeenSet; }
    template<typename InterlacedT = Aws::String>
    void SetInterlaced(InterlacedT&& value) { m_interlacedHasBeenSet = true; m_interlaced = std::forward<InterlacedT>(value); }
    template<typename InterlacedT = Aws::String>
    JobInput& WithInterlaced(InterlacedT&& value) { SetInterlaced(std::forward<InterlacedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container type for the input file. If you want Elastic Transcoder to
     * automatically detect the container type of the input file, specify
     * <code>auto</code>. If you want to specify the container type for the input file,
     * enter one of the following values: </p> <p> <code>3gp</code>, <code>aac</code>,
     * <code>asf</code>, <code>avi</code>, <code>divx</code>, <code>flv</code>,
     * <code>m4a</code>, <code>mkv</code>, <code>mov</code>, <code>mp3</code>,
     * <code>mp4</code>, <code>mpeg</code>, <code>mpeg-ps</code>, <code>mpeg-ts</code>,
     * <code>mxf</code>, <code>ogg</code>, <code>vob</code>, <code>wav</code>,
     * <code>webm</code> </p>
     */
    inline const Aws::String& GetContainer() const { return m_container; }
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }
    template<typename ContainerT = Aws::String>
    void SetContainer(ContainerT&& value) { m_containerHasBeenSet = true; m_container = std::forward<ContainerT>(value); }
    template<typename ContainerT = Aws::String>
    JobInput& WithContainer(ContainerT&& value) { SetContainer(std::forward<ContainerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption settings, if any, that are used for decrypting your input
     * files. If your input file is encrypted, you must specify the mode that Elastic
     * Transcoder uses to decrypt your file.</p>
     */
    inline const Encryption& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = Encryption>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = Encryption>
    JobInput& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for clipping an input. Each input can have different clip
     * settings.</p>
     */
    inline const TimeSpan& GetTimeSpan() const { return m_timeSpan; }
    inline bool TimeSpanHasBeenSet() const { return m_timeSpanHasBeenSet; }
    template<typename TimeSpanT = TimeSpan>
    void SetTimeSpan(TimeSpanT&& value) { m_timeSpanHasBeenSet = true; m_timeSpan = std::forward<TimeSpanT>(value); }
    template<typename TimeSpanT = TimeSpan>
    JobInput& WithTimeSpan(TimeSpanT&& value) { SetTimeSpan(std::forward<TimeSpanT>(value)); return *this;}
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
    inline const InputCaptions& GetInputCaptions() const { return m_inputCaptions; }
    inline bool InputCaptionsHasBeenSet() const { return m_inputCaptionsHasBeenSet; }
    template<typename InputCaptionsT = InputCaptions>
    void SetInputCaptions(InputCaptionsT&& value) { m_inputCaptionsHasBeenSet = true; m_inputCaptions = std::forward<InputCaptionsT>(value); }
    template<typename InputCaptionsT = InputCaptions>
    JobInput& WithInputCaptions(InputCaptionsT&& value) { SetInputCaptions(std::forward<InputCaptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detected properties of the input file.</p>
     */
    inline const DetectedProperties& GetDetectedProperties() const { return m_detectedProperties; }
    inline bool DetectedPropertiesHasBeenSet() const { return m_detectedPropertiesHasBeenSet; }
    template<typename DetectedPropertiesT = DetectedProperties>
    void SetDetectedProperties(DetectedPropertiesT&& value) { m_detectedPropertiesHasBeenSet = true; m_detectedProperties = std::forward<DetectedPropertiesT>(value); }
    template<typename DetectedPropertiesT = DetectedProperties>
    JobInput& WithDetectedProperties(DetectedPropertiesT&& value) { SetDetectedProperties(std::forward<DetectedPropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_frameRate;
    bool m_frameRateHasBeenSet = false;

    Aws::String m_resolution;
    bool m_resolutionHasBeenSet = false;

    Aws::String m_aspectRatio;
    bool m_aspectRatioHasBeenSet = false;

    Aws::String m_interlaced;
    bool m_interlacedHasBeenSet = false;

    Aws::String m_container;
    bool m_containerHasBeenSet = false;

    Encryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    TimeSpan m_timeSpan;
    bool m_timeSpanHasBeenSet = false;

    InputCaptions m_inputCaptions;
    bool m_inputCaptionsHasBeenSet = false;

    DetectedProperties m_detectedProperties;
    bool m_detectedPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
