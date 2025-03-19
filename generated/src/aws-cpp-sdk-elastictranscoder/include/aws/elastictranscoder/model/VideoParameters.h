/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elastictranscoder/model/PresetWatermark.h>
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
   * <p>The <code>VideoParameters</code> structure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/VideoParameters">AWS
   * API Reference</a></p>
   */
  class VideoParameters
  {
  public:
    AWS_ELASTICTRANSCODER_API VideoParameters() = default;
    AWS_ELASTICTRANSCODER_API VideoParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API VideoParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The video codec for the output file. Valid values include <code>gif</code>,
     * <code>H.264</code>, <code>mpeg2</code>, <code>vp8</code>, and <code>vp9</code>.
     * You can only specify <code>vp8</code> and <code>vp9</code> when the container
     * type is <code>webm</code>, <code>gif</code> when the container type is
     * <code>gif</code>, and <code>mpeg2</code> when the container type is
     * <code>mpg</code>.</p>
     */
    inline const Aws::String& GetCodec() const { return m_codec; }
    inline bool CodecHasBeenSet() const { return m_codecHasBeenSet; }
    template<typename CodecT = Aws::String>
    void SetCodec(CodecT&& value) { m_codecHasBeenSet = true; m_codec = std::forward<CodecT>(value); }
    template<typename CodecT = Aws::String>
    VideoParameters& WithCodec(CodecT&& value) { SetCodec(std::forward<CodecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>Profile (H.264/VP8/VP9 Only)</b> </p> <p>The H.264 profile that you want
     * to use for the output file. Elastic Transcoder supports the following
     * profiles:</p> <ul> <li> <p> <code>baseline</code>: The profile most commonly
     * used for videoconferencing and for mobile applications.</p> </li> <li> <p>
     * <code>main</code>: The profile used for standard-definition digital TV
     * broadcasts.</p> </li> <li> <p> <code>high</code>: The profile used for
     * high-definition digital TV broadcasts and for Blu-ray discs.</p> </li> </ul> <p>
     * <b>Level (H.264 Only)</b> </p> <p>The H.264 level that you want to use for the
     * output file. Elastic Transcoder supports the following levels:</p> <p>
     * <code>1</code>, <code>1b</code>, <code>1.1</code>, <code>1.2</code>,
     * <code>1.3</code>, <code>2</code>, <code>2.1</code>, <code>2.2</code>,
     * <code>3</code>, <code>3.1</code>, <code>3.2</code>, <code>4</code>,
     * <code>4.1</code> </p> <p> <b>MaxReferenceFrames (H.264 Only)</b> </p>
     * <p>Applicable only when the value of Video:Codec is H.264. The maximum number of
     * previously decoded frames to use as a reference for decoding future frames.
     * Valid values are integers 0 through 16, but we recommend that you not use a
     * value greater than the following:</p> <p> <code>Min(Floor(Maximum decoded
     * picture buffer in macroblocks * 256 / (Width in pixels * Height in pixels)),
     * 16)</code> </p> <p>where <i>Width in pixels</i> and <i>Height in pixels</i>
     * represent either MaxWidth and MaxHeight, or Resolution. <i>Maximum decoded
     * picture buffer in macroblocks</i> depends on the value of the <code>Level</code>
     * object. See the list below. (A macroblock is a block of pixels measuring 16x16.)
     * </p> <ul> <li> <p>1 - 396</p> </li> <li> <p>1b - 396</p> </li> <li> <p>1.1 -
     * 900</p> </li> <li> <p>1.2 - 2376</p> </li> <li> <p>1.3 - 2376</p> </li> <li>
     * <p>2 - 2376</p> </li> <li> <p>2.1 - 4752</p> </li> <li> <p>2.2 - 8100</p> </li>
     * <li> <p>3 - 8100</p> </li> <li> <p>3.1 - 18000</p> </li> <li> <p>3.2 - 20480</p>
     * </li> <li> <p>4 - 32768</p> </li> <li> <p>4.1 - 32768</p> </li> </ul> <p>
     * <b>MaxBitRate (Optional, H.264/MPEG2/VP8/VP9 only)</b> </p> <p>The maximum
     * number of bits per second in a video buffer; the size of the buffer is specified
     * by <code>BufferSize</code>. Specify a value between 16 and 62,500. You can
     * reduce the bandwidth required to stream a video by reducing the maximum bit
     * rate, but this also reduces the quality of the video.</p> <p> <b>BufferSize
     * (Optional, H.264/MPEG2/VP8/VP9 only)</b> </p> <p>The maximum number of bits in
     * any x seconds of the output video. This window is commonly 10 seconds, the
     * standard segment duration when you're using FMP4 or MPEG-TS for the container
     * type of the output video. Specify an integer greater than 0. If you specify
     * <code>MaxBitRate</code> and omit <code>BufferSize</code>, Elastic Transcoder
     * sets <code>BufferSize</code> to 10 times the value of
     * <code>MaxBitRate</code>.</p> <p> <b>InterlacedMode (Optional, H.264/MPEG2
     * Only)</b> </p> <p>The interlace mode for the output video.</p> <p>Interlaced
     * video is used to double the perceived frame rate for a video by interlacing two
     * fields (one field on every other line, the other field on the other lines) so
     * that the human eye registers multiple pictures per frame. Interlacing reduces
     * the bandwidth required for transmitting a video, but can result in blurred
     * images and flickering.</p> <p>Valid values include <code>Progressive</code> (no
     * interlacing, top to bottom), <code>TopFirst</code> (top field first),
     * <code>BottomFirst</code> (bottom field first), and <code>Auto</code>.</p> <p>If
     * <code>InterlaceMode</code> is not specified, Elastic Transcoder uses
     * <code>Progressive</code> for the output. If <code>Auto</code> is specified,
     * Elastic Transcoder interlaces the output.</p> <p> <b>ColorSpaceConversionMode
     * (Optional, H.264/MPEG2 Only)</b> </p> <p>The color space conversion Elastic
     * Transcoder applies to the output video. Color spaces are the algorithms used by
     * the computer to store information about how to render color. <code>Bt.601</code>
     * is the standard for standard definition video, while <code>Bt.709</code> is the
     * standard for high definition video.</p> <p>Valid values include
     * <code>None</code>, <code>Bt709toBt601</code>, <code>Bt601toBt709</code>, and
     * <code>Auto</code>.</p> <p>If you chose <code>Auto</code> for
     * <code>ColorSpaceConversionMode</code> and your output is interlaced, your frame
     * rate is one of <code>23.97</code>, <code>24</code>, <code>25</code>,
     * <code>29.97</code>, <code>50</code>, or <code>60</code>, your
     * <code>SegmentDuration</code> is null, and you are using one of the resolution
     * changes from the list below, Elastic Transcoder applies the following color
     * space conversions:</p> <ul> <li> <p> <i>Standard to HD, 720x480 to 1920x1080</i>
     * - Elastic Transcoder applies <code>Bt601ToBt709</code> </p> </li> <li> <p>
     * <i>Standard to HD, 720x576 to 1920x1080</i> - Elastic Transcoder applies
     * <code>Bt601ToBt709</code> </p> </li> <li> <p> <i>HD to Standard, 1920x1080 to
     * 720x480</i> - Elastic Transcoder applies <code>Bt709ToBt601</code> </p> </li>
     * <li> <p> <i>HD to Standard, 1920x1080 to 720x576</i> - Elastic Transcoder
     * applies <code>Bt709ToBt601</code> </p> </li> </ul>  <p>Elastic Transcoder
     * may change the behavior of the <code>ColorspaceConversionMode</code>
     * <code>Auto</code> mode in the future. All outputs in a playlist must use the
     * same <code>ColorSpaceConversionMode</code>.</p>  <p>If you do not specify
     * a <code>ColorSpaceConversionMode</code>, Elastic Transcoder does not change the
     * color space of a file. If you are unsure what
     * <code>ColorSpaceConversionMode</code> was applied to your output file, you can
     * check the <code>AppliedColorSpaceConversion</code> parameter included in your
     * job response. If your job does not have an
     * <code>AppliedColorSpaceConversion</code> in its response, no
     * <code>ColorSpaceConversionMode</code> was applied.</p> <p>
     * <b>ChromaSubsampling</b> </p> <p>The sampling pattern for the chroma (color)
     * channels of the output video. Valid values include <code>yuv420p</code> and
     * <code>yuv422p</code>.</p> <p> <code>yuv420p</code> samples the chroma
     * information of every other horizontal and every other vertical line,
     * <code>yuv422p</code> samples the color information of every horizontal line and
     * every other vertical line.</p> <p> <b>LoopCount (Gif Only)</b> </p> <p>The
     * number of times you want the output gif to loop. Valid values include
     * <code>Infinite</code> and integers between <code>0</code> and <code>100</code>,
     * inclusive.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCodecOptions() const { return m_codecOptions; }
    inline bool CodecOptionsHasBeenSet() const { return m_codecOptionsHasBeenSet; }
    template<typename CodecOptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetCodecOptions(CodecOptionsT&& value) { m_codecOptionsHasBeenSet = true; m_codecOptions = std::forward<CodecOptionsT>(value); }
    template<typename CodecOptionsT = Aws::Map<Aws::String, Aws::String>>
    VideoParameters& WithCodecOptions(CodecOptionsT&& value) { SetCodecOptions(std::forward<CodecOptionsT>(value)); return *this;}
    template<typename CodecOptionsKeyT = Aws::String, typename CodecOptionsValueT = Aws::String>
    VideoParameters& AddCodecOptions(CodecOptionsKeyT&& key, CodecOptionsValueT&& value) {
      m_codecOptionsHasBeenSet = true; m_codecOptions.emplace(std::forward<CodecOptionsKeyT>(key), std::forward<CodecOptionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Applicable only when the value of Video:Codec is one of <code>H.264</code>,
     * <code>MPEG2</code>, or <code>VP8</code>.</p> <p>The maximum number of frames
     * between key frames. Key frames are fully encoded frames; the frames between key
     * frames are encoded based, in part, on the content of the key frames. The value
     * is an integer formatted as a string; valid values are between 1 (every frame is
     * a key frame) and 100000, inclusive. A higher value results in higher compression
     * but may also discernibly decrease video quality.</p> <p>For <code>Smooth</code>
     * outputs, the <code>FrameRate</code> must have a constant ratio to the
     * <code>KeyframesMaxDist</code>. This allows <code>Smooth</code> playlists to
     * switch between different quality levels while the file is being played.</p>
     * <p>For example, an input file can have a <code>FrameRate</code> of 30 with a
     * <code>KeyframesMaxDist</code> of 90. The output file then needs to have a ratio
     * of 1:3. Valid outputs would have <code>FrameRate</code> of 30, 25, and 10, and
     * <code>KeyframesMaxDist</code> of 90, 75, and 30, respectively.</p>
     * <p>Alternately, this can be achieved by setting <code>FrameRate</code> to auto
     * and having the same values for <code>MaxFrameRate</code> and
     * <code>KeyframesMaxDist</code>.</p>
     */
    inline const Aws::String& GetKeyframesMaxDist() const { return m_keyframesMaxDist; }
    inline bool KeyframesMaxDistHasBeenSet() const { return m_keyframesMaxDistHasBeenSet; }
    template<typename KeyframesMaxDistT = Aws::String>
    void SetKeyframesMaxDist(KeyframesMaxDistT&& value) { m_keyframesMaxDistHasBeenSet = true; m_keyframesMaxDist = std::forward<KeyframesMaxDistT>(value); }
    template<typename KeyframesMaxDistT = Aws::String>
    VideoParameters& WithKeyframesMaxDist(KeyframesMaxDistT&& value) { SetKeyframesMaxDist(std::forward<KeyframesMaxDistT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Applicable only when the value of Video:Codec is one of <code>H.264</code>,
     * <code>MPEG2</code>, or <code>VP8</code>.</p> <p>Whether to use a fixed value for
     * <code>FixedGOP</code>. Valid values are <code>true</code> and
     * <code>false</code>:</p> <ul> <li> <p> <code>true</code>: Elastic Transcoder uses
     * the value of <code>KeyframesMaxDist</code> for the distance between key frames
     * (the number of frames in a group of pictures, or GOP).</p> </li> <li> <p>
     * <code>false</code>: The distance between key frames can vary.</p> </li> </ul>
     *  <p> <code>FixedGOP</code> must be set to <code>true</code> for
     * <code>fmp4</code> containers.</p> 
     */
    inline const Aws::String& GetFixedGOP() const { return m_fixedGOP; }
    inline bool FixedGOPHasBeenSet() const { return m_fixedGOPHasBeenSet; }
    template<typename FixedGOPT = Aws::String>
    void SetFixedGOP(FixedGOPT&& value) { m_fixedGOPHasBeenSet = true; m_fixedGOP = std::forward<FixedGOPT>(value); }
    template<typename FixedGOPT = Aws::String>
    VideoParameters& WithFixedGOP(FixedGOPT&& value) { SetFixedGOP(std::forward<FixedGOPT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bit rate of the video stream in the output file, in kilobits/second.
     * Valid values depend on the values of <code>Level</code> and
     * <code>Profile</code>. If you specify <code>auto</code>, Elastic Transcoder uses
     * the detected bit rate of the input source. If you specify a value other than
     * <code>auto</code>, we recommend that you specify a value less than or equal to
     * the maximum H.264-compliant value listed for your level and profile:</p> <p>
     * <i>Level - Maximum video bit rate in kilobits/second (baseline and main Profile)
     * : maximum video bit rate in kilobits/second (high Profile)</i> </p> <ul> <li>
     * <p>1 - 64 : 80</p> </li> <li> <p>1b - 128 : 160</p> </li> <li> <p>1.1 - 192 :
     * 240</p> </li> <li> <p>1.2 - 384 : 480</p> </li> <li> <p>1.3 - 768 : 960</p>
     * </li> <li> <p>2 - 2000 : 2500</p> </li> <li> <p>3 - 10000 : 12500</p> </li> <li>
     * <p>3.1 - 14000 : 17500</p> </li> <li> <p>3.2 - 20000 : 25000</p> </li> <li> <p>4
     * - 20000 : 25000</p> </li> <li> <p>4.1 - 50000 : 62500</p> </li> </ul>
     */
    inline const Aws::String& GetBitRate() const { return m_bitRate; }
    inline bool BitRateHasBeenSet() const { return m_bitRateHasBeenSet; }
    template<typename BitRateT = Aws::String>
    void SetBitRate(BitRateT&& value) { m_bitRateHasBeenSet = true; m_bitRate = std::forward<BitRateT>(value); }
    template<typename BitRateT = Aws::String>
    VideoParameters& WithBitRate(BitRateT&& value) { SetBitRate(std::forward<BitRateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frames per second for the video stream in the output file. Valid values
     * include:</p> <p> <code>auto</code>, <code>10</code>, <code>15</code>,
     * <code>23.97</code>, <code>24</code>, <code>25</code>, <code>29.97</code>,
     * <code>30</code>, <code>60</code> </p> <p>If you specify <code>auto</code>,
     * Elastic Transcoder uses the detected frame rate of the input source. If you
     * specify a frame rate, we recommend that you perform the following
     * calculation:</p> <p> <code>Frame rate = maximum recommended decoding speed in
     * luma samples/second / (width in pixels * height in pixels)</code> </p>
     * <p>where:</p> <ul> <li> <p> <i>width in pixels</i> and <i>height in pixels</i>
     * represent the Resolution of the output video.</p> </li> <li> <p> <i>maximum
     * recommended decoding speed in Luma samples/second</i> is less than or equal to
     * the maximum value listed in the following table, based on the value that you
     * specified for Level.</p> </li> </ul> <p>The maximum recommended decoding speed
     * in Luma samples/second for each level is described in the following list
     * (<i>Level - Decoding speed</i>):</p> <ul> <li> <p>1 - 380160</p> </li> <li>
     * <p>1b - 380160</p> </li> <li> <p>1.1 - 76800</p> </li> <li> <p>1.2 - 1536000</p>
     * </li> <li> <p>1.3 - 3041280</p> </li> <li> <p>2 - 3041280</p> </li> <li> <p>2.1
     * - 5068800</p> </li> <li> <p>2.2 - 5184000</p> </li> <li> <p>3 - 10368000</p>
     * </li> <li> <p>3.1 - 27648000</p> </li> <li> <p>3.2 - 55296000</p> </li> <li>
     * <p>4 - 62914560</p> </li> <li> <p>4.1 - 62914560</p> </li> </ul>
     */
    inline const Aws::String& GetFrameRate() const { return m_frameRate; }
    inline bool FrameRateHasBeenSet() const { return m_frameRateHasBeenSet; }
    template<typename FrameRateT = Aws::String>
    void SetFrameRate(FrameRateT&& value) { m_frameRateHasBeenSet = true; m_frameRate = std::forward<FrameRateT>(value); }
    template<typename FrameRateT = Aws::String>
    VideoParameters& WithFrameRate(FrameRateT&& value) { SetFrameRate(std::forward<FrameRateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you specify <code>auto</code> for <code>FrameRate</code>, Elastic
     * Transcoder uses the frame rate of the input video for the frame rate of the
     * output video. Specify the maximum frame rate that you want Elastic Transcoder to
     * use when the frame rate of the input video is greater than the desired maximum
     * frame rate of the output video. Valid values include: <code>10</code>,
     * <code>15</code>, <code>23.97</code>, <code>24</code>, <code>25</code>,
     * <code>29.97</code>, <code>30</code>, <code>60</code>.</p>
     */
    inline const Aws::String& GetMaxFrameRate() const { return m_maxFrameRate; }
    inline bool MaxFrameRateHasBeenSet() const { return m_maxFrameRateHasBeenSet; }
    template<typename MaxFrameRateT = Aws::String>
    void SetMaxFrameRate(MaxFrameRateT&& value) { m_maxFrameRateHasBeenSet = true; m_maxFrameRate = std::forward<MaxFrameRateT>(value); }
    template<typename MaxFrameRateT = Aws::String>
    VideoParameters& WithMaxFrameRate(MaxFrameRateT&& value) { SetMaxFrameRate(std::forward<MaxFrameRateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>To better control resolution and aspect ratio of output videos,
     * we recommend that you use the values <code>MaxWidth</code>,
     * <code>MaxHeight</code>, <code>SizingPolicy</code>, <code>PaddingPolicy</code>,
     * and <code>DisplayAspectRatio</code> instead of <code>Resolution</code> and
     * <code>AspectRatio</code>. The two groups of settings are mutually exclusive. Do
     * not use them together.</p>  <p>The width and height of the video in
     * the output file, in pixels. Valid values are <code>auto</code> and <i>width</i>
     * x <i>height</i>:</p> <ul> <li> <p> <code>auto</code>: Elastic Transcoder
     * attempts to preserve the width and height of the input file, subject to the
     * following rules.</p> </li> <li> <p> <code> <i>width</i> x <i>height</i> </code>:
     * The width and height of the output video in pixels.</p> </li> </ul> <p>Note the
     * following about specifying the width and height:</p> <ul> <li> <p>The width must
     * be an even integer between 128 and 4096, inclusive.</p> </li> <li> <p>The height
     * must be an even integer between 96 and 3072, inclusive.</p> </li> <li> <p>If you
     * specify a resolution that is less than the resolution of the input file, Elastic
     * Transcoder rescales the output file to the lower resolution.</p> </li> <li>
     * <p>If you specify a resolution that is greater than the resolution of the input
     * file, Elastic Transcoder rescales the output to the higher resolution.</p> </li>
     * <li> <p>We recommend that you specify a resolution for which the product of
     * width and height is less than or equal to the applicable value in the following
     * list (<i>List - Max width x height value</i>):</p> <ul> <li> <p>1 - 25344</p>
     * </li> <li> <p>1b - 25344</p> </li> <li> <p>1.1 - 101376</p> </li> <li> <p>1.2 -
     * 101376</p> </li> <li> <p>1.3 - 101376</p> </li> <li> <p>2 - 101376</p> </li>
     * <li> <p>2.1 - 202752</p> </li> <li> <p>2.2 - 404720</p> </li> <li> <p>3 -
     * 404720</p> </li> <li> <p>3.1 - 921600</p> </li> <li> <p>3.2 - 1310720</p> </li>
     * <li> <p>4 - 2097152</p> </li> <li> <p>4.1 - 2097152</p> </li> </ul> </li> </ul>
     */
    inline const Aws::String& GetResolution() const { return m_resolution; }
    inline bool ResolutionHasBeenSet() const { return m_resolutionHasBeenSet; }
    template<typename ResolutionT = Aws::String>
    void SetResolution(ResolutionT&& value) { m_resolutionHasBeenSet = true; m_resolution = std::forward<ResolutionT>(value); }
    template<typename ResolutionT = Aws::String>
    VideoParameters& WithResolution(ResolutionT&& value) { SetResolution(std::forward<ResolutionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>To better control resolution and aspect ratio of output videos,
     * we recommend that you use the values <code>MaxWidth</code>,
     * <code>MaxHeight</code>, <code>SizingPolicy</code>, <code>PaddingPolicy</code>,
     * and <code>DisplayAspectRatio</code> instead of <code>Resolution</code> and
     * <code>AspectRatio</code>. The two groups of settings are mutually exclusive. Do
     * not use them together.</p>  <p>The display aspect ratio of the video
     * in the output file. Valid values include:</p> <p> <code>auto</code>,
     * <code>1:1</code>, <code>4:3</code>, <code>3:2</code>, <code>16:9</code> </p>
     * <p>If you specify <code>auto</code>, Elastic Transcoder tries to preserve the
     * aspect ratio of the input file.</p> <p>If you specify an aspect ratio for the
     * output file that differs from aspect ratio of the input file, Elastic Transcoder
     * adds pillarboxing (black bars on the sides) or letterboxing (black bars on the
     * top and bottom) to maintain the aspect ratio of the active region of the
     * video.</p>
     */
    inline const Aws::String& GetAspectRatio() const { return m_aspectRatio; }
    inline bool AspectRatioHasBeenSet() const { return m_aspectRatioHasBeenSet; }
    template<typename AspectRatioT = Aws::String>
    void SetAspectRatio(AspectRatioT&& value) { m_aspectRatioHasBeenSet = true; m_aspectRatio = std::forward<AspectRatioT>(value); }
    template<typename AspectRatioT = Aws::String>
    VideoParameters& WithAspectRatio(AspectRatioT&& value) { SetAspectRatio(std::forward<AspectRatioT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum width of the output video in pixels. If you specify
     * <code>auto</code>, Elastic Transcoder uses 1920 (Full HD) as the default value.
     * If you specify a numeric value, enter an even integer between 128 and 4096. </p>
     */
    inline const Aws::String& GetMaxWidth() const { return m_maxWidth; }
    inline bool MaxWidthHasBeenSet() const { return m_maxWidthHasBeenSet; }
    template<typename MaxWidthT = Aws::String>
    void SetMaxWidth(MaxWidthT&& value) { m_maxWidthHasBeenSet = true; m_maxWidth = std::forward<MaxWidthT>(value); }
    template<typename MaxWidthT = Aws::String>
    VideoParameters& WithMaxWidth(MaxWidthT&& value) { SetMaxWidth(std::forward<MaxWidthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum height of the output video in pixels. If you specify
     * <code>auto</code>, Elastic Transcoder uses 1080 (Full HD) as the default value.
     * If you specify a numeric value, enter an even integer between 96 and 3072.</p>
     */
    inline const Aws::String& GetMaxHeight() const { return m_maxHeight; }
    inline bool MaxHeightHasBeenSet() const { return m_maxHeightHasBeenSet; }
    template<typename MaxHeightT = Aws::String>
    void SetMaxHeight(MaxHeightT&& value) { m_maxHeightHasBeenSet = true; m_maxHeight = std::forward<MaxHeightT>(value); }
    template<typename MaxHeightT = Aws::String>
    VideoParameters& WithMaxHeight(MaxHeightT&& value) { SetMaxHeight(std::forward<MaxHeightT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that Elastic Transcoder adds to the metadata in the output
     * file.</p>
     */
    inline const Aws::String& GetDisplayAspectRatio() const { return m_displayAspectRatio; }
    inline bool DisplayAspectRatioHasBeenSet() const { return m_displayAspectRatioHasBeenSet; }
    template<typename DisplayAspectRatioT = Aws::String>
    void SetDisplayAspectRatio(DisplayAspectRatioT&& value) { m_displayAspectRatioHasBeenSet = true; m_displayAspectRatio = std::forward<DisplayAspectRatioT>(value); }
    template<typename DisplayAspectRatioT = Aws::String>
    VideoParameters& WithDisplayAspectRatio(DisplayAspectRatioT&& value) { SetDisplayAspectRatio(std::forward<DisplayAspectRatioT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify one of the following values to control scaling of the output
     * video:</p> <ul> <li> <p> <code>Fit</code>: Elastic Transcoder scales the output
     * video so it matches the value that you specified in either <code>MaxWidth</code>
     * or <code>MaxHeight</code> without exceeding the other value.</p> </li> <li> <p>
     * <code>Fill</code>: Elastic Transcoder scales the output video so it matches the
     * value that you specified in either <code>MaxWidth</code> or
     * <code>MaxHeight</code> and matches or exceeds the other value. Elastic
     * Transcoder centers the output video and then crops it in the dimension (if any)
     * that exceeds the maximum value.</p> </li> <li> <p> <code>Stretch</code>: Elastic
     * Transcoder stretches the output video to match the values that you specified for
     * <code>MaxWidth</code> and <code>MaxHeight</code>. If the relative proportions of
     * the input video and the output video are different, the output video will be
     * distorted.</p> </li> <li> <p> <code>Keep</code>: Elastic Transcoder does not
     * scale the output video. If either dimension of the input video exceeds the
     * values that you specified for <code>MaxWidth</code> and <code>MaxHeight</code>,
     * Elastic Transcoder crops the output video.</p> </li> <li> <p>
     * <code>ShrinkToFit</code>: Elastic Transcoder scales the output video down so
     * that its dimensions match the values that you specified for at least one of
     * <code>MaxWidth</code> and <code>MaxHeight</code> without exceeding either value.
     * If you specify this option, Elastic Transcoder does not scale the video up.</p>
     * </li> <li> <p> <code>ShrinkToFill</code>: Elastic Transcoder scales the output
     * video down so that its dimensions match the values that you specified for at
     * least one of <code>MaxWidth</code> and <code>MaxHeight</code> without dropping
     * below either value. If you specify this option, Elastic Transcoder does not
     * scale the video up.</p> </li> </ul>
     */
    inline const Aws::String& GetSizingPolicy() const { return m_sizingPolicy; }
    inline bool SizingPolicyHasBeenSet() const { return m_sizingPolicyHasBeenSet; }
    template<typename SizingPolicyT = Aws::String>
    void SetSizingPolicy(SizingPolicyT&& value) { m_sizingPolicyHasBeenSet = true; m_sizingPolicy = std::forward<SizingPolicyT>(value); }
    template<typename SizingPolicyT = Aws::String>
    VideoParameters& WithSizingPolicy(SizingPolicyT&& value) { SetSizingPolicy(std::forward<SizingPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you set <code>PaddingPolicy</code> to <code>Pad</code>, Elastic
     * Transcoder may add black bars to the top and bottom and/or left and right sides
     * of the output video to make the total size of the output video match the values
     * that you specified for <code>MaxWidth</code> and <code>MaxHeight</code>.</p>
     */
    inline const Aws::String& GetPaddingPolicy() const { return m_paddingPolicy; }
    inline bool PaddingPolicyHasBeenSet() const { return m_paddingPolicyHasBeenSet; }
    template<typename PaddingPolicyT = Aws::String>
    void SetPaddingPolicy(PaddingPolicyT&& value) { m_paddingPolicyHasBeenSet = true; m_paddingPolicy = std::forward<PaddingPolicyT>(value); }
    template<typename PaddingPolicyT = Aws::String>
    VideoParameters& WithPaddingPolicy(PaddingPolicyT&& value) { SetPaddingPolicy(std::forward<PaddingPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for the size, location, and opacity of graphics that you want
     * Elastic Transcoder to overlay over videos that are transcoded using this preset.
     * You can specify settings for up to four watermarks. Watermarks appear in the
     * specified size and location, and with the specified opacity for the duration of
     * the transcoded video.</p> <p>Watermarks can be in .png or .jpg format. If you
     * want to display a watermark that is not rectangular, use the .png format, which
     * supports transparency.</p> <p>When you create a job that uses this preset, you
     * specify the .png or .jpg graphics that you want Elastic Transcoder to include in
     * the transcoded videos. You can specify fewer graphics in the job than you
     * specify watermark settings in the preset, which allows you to use the same
     * preset for up to four watermarks that have different dimensions.</p>
     */
    inline const Aws::Vector<PresetWatermark>& GetWatermarks() const { return m_watermarks; }
    inline bool WatermarksHasBeenSet() const { return m_watermarksHasBeenSet; }
    template<typename WatermarksT = Aws::Vector<PresetWatermark>>
    void SetWatermarks(WatermarksT&& value) { m_watermarksHasBeenSet = true; m_watermarks = std::forward<WatermarksT>(value); }
    template<typename WatermarksT = Aws::Vector<PresetWatermark>>
    VideoParameters& WithWatermarks(WatermarksT&& value) { SetWatermarks(std::forward<WatermarksT>(value)); return *this;}
    template<typename WatermarksT = PresetWatermark>
    VideoParameters& AddWatermarks(WatermarksT&& value) { m_watermarksHasBeenSet = true; m_watermarks.emplace_back(std::forward<WatermarksT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_codec;
    bool m_codecHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_codecOptions;
    bool m_codecOptionsHasBeenSet = false;

    Aws::String m_keyframesMaxDist;
    bool m_keyframesMaxDistHasBeenSet = false;

    Aws::String m_fixedGOP;
    bool m_fixedGOPHasBeenSet = false;

    Aws::String m_bitRate;
    bool m_bitRateHasBeenSet = false;

    Aws::String m_frameRate;
    bool m_frameRateHasBeenSet = false;

    Aws::String m_maxFrameRate;
    bool m_maxFrameRateHasBeenSet = false;

    Aws::String m_resolution;
    bool m_resolutionHasBeenSet = false;

    Aws::String m_aspectRatio;
    bool m_aspectRatioHasBeenSet = false;

    Aws::String m_maxWidth;
    bool m_maxWidthHasBeenSet = false;

    Aws::String m_maxHeight;
    bool m_maxHeightHasBeenSet = false;

    Aws::String m_displayAspectRatio;
    bool m_displayAspectRatioHasBeenSet = false;

    Aws::String m_sizingPolicy;
    bool m_sizingPolicyHasBeenSet = false;

    Aws::String m_paddingPolicy;
    bool m_paddingPolicyHasBeenSet = false;

    Aws::Vector<PresetWatermark> m_watermarks;
    bool m_watermarksHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
