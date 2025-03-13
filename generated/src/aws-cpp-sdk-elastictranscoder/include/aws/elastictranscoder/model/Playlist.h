/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elastictranscoder/model/HlsContentProtection.h>
#include <aws/elastictranscoder/model/PlayReadyDrm.h>
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
   * <p> Use Only for Fragmented MP4 or MPEG-TS Outputs. If you specify a preset for
   * which the value of Container is <code>fmp4</code> (Fragmented MP4) or
   * <code>ts</code> (MPEG-TS), Playlists contains information about the master
   * playlists that you want Elastic Transcoder to create. We recommend that you
   * create only one master playlist per output format. The maximum number of master
   * playlists in a job is 30. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/Playlist">AWS
   * API Reference</a></p>
   */
  class Playlist
  {
  public:
    AWS_ELASTICTRANSCODER_API Playlist() = default;
    AWS_ELASTICTRANSCODER_API Playlist(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Playlist& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICTRANSCODER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name that you want Elastic Transcoder to assign to the master playlist,
     * for example, nyc-vacation.m3u8. If the name includes a <code>/</code> character,
     * the section of the name before the last <code>/</code> must be identical for all
     * <code>Name</code> objects. If you create more than one master playlist, the
     * values of all <code>Name</code> objects must be unique.</p>  <p>Elastic
     * Transcoder automatically appends the relevant file extension to the file name
     * (<code>.m3u8</code> for <code>HLSv3</code> and <code>HLSv4</code> playlists, and
     * <code>.ism</code> and <code>.ismc</code> for <code>Smooth</code> playlists). If
     * you include a file extension in <code>Name</code>, the file name will have two
     * extensions.</p> 
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Playlist& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the output playlist. Valid formats include <code>HLSv3</code>,
     * <code>HLSv4</code>, and <code>Smooth</code>.</p>
     */
    inline const Aws::String& GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    template<typename FormatT = Aws::String>
    void SetFormat(FormatT&& value) { m_formatHasBeenSet = true; m_format = std::forward<FormatT>(value); }
    template<typename FormatT = Aws::String>
    Playlist& WithFormat(FormatT&& value) { SetFormat(std::forward<FormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For each output in this job that you want to include in a master playlist,
     * the value of the Outputs:Key object.</p> <ul> <li> <p>If your output is not
     * <code>HLS</code> or does not have a segment duration set, the name of the output
     * file is a concatenation of <code>OutputKeyPrefix</code> and
     * <code>Outputs:Key</code>:</p> <p>OutputKeyPrefix<code>Outputs:Key</code> </p>
     * </li> <li> <p>If your output is <code>HLSv3</code> and has a segment duration
     * set, or is not included in a playlist, Elastic Transcoder creates an output
     * playlist file with a file extension of <code>.m3u8</code>, and a series of
     * <code>.ts</code> files that include a five-digit sequential counter beginning
     * with 00000:</p> <p>OutputKeyPrefix<code>Outputs:Key</code>.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>00000.ts</p> </li> <li> <p>If your
     * output is <code>HLSv4</code>, has a segment duration set, and is included in an
     * <code>HLSv4</code> playlist, Elastic Transcoder creates an output playlist file
     * with a file extension of <code>_v4.m3u8</code>. If the output is video, Elastic
     * Transcoder also creates an output file with an extension of
     * <code>_iframe.m3u8</code>:</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>_v4.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>_iframe.m3u8</p>
     * <p>OutputKeyPrefix<code>Outputs:Key</code>.ts</p> </li> </ul> <p>Elastic
     * Transcoder automatically appends the relevant file extension to the file name.
     * If you include a file extension in Output Key, the file name will have two
     * extensions.</p> <p>If you include more than one output in a playlist, any
     * segment duration settings, clip settings, or caption settings must be the same
     * for all outputs in the playlist. For <code>Smooth</code> playlists, the
     * <code>Audio:Profile</code>, <code>Video:Profile</code>, and
     * <code>Video:FrameRate</code> to <code>Video:KeyframesMaxDist</code> ratio must
     * be the same for all outputs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOutputKeys() const { return m_outputKeys; }
    inline bool OutputKeysHasBeenSet() const { return m_outputKeysHasBeenSet; }
    template<typename OutputKeysT = Aws::Vector<Aws::String>>
    void SetOutputKeys(OutputKeysT&& value) { m_outputKeysHasBeenSet = true; m_outputKeys = std::forward<OutputKeysT>(value); }
    template<typename OutputKeysT = Aws::Vector<Aws::String>>
    Playlist& WithOutputKeys(OutputKeysT&& value) { SetOutputKeys(std::forward<OutputKeysT>(value)); return *this;}
    template<typename OutputKeysT = Aws::String>
    Playlist& AddOutputKeys(OutputKeysT&& value) { m_outputKeysHasBeenSet = true; m_outputKeys.emplace_back(std::forward<OutputKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The HLS content protection settings, if any, that you want Elastic Transcoder
     * to apply to the output files associated with this playlist.</p>
     */
    inline const HlsContentProtection& GetHlsContentProtection() const { return m_hlsContentProtection; }
    inline bool HlsContentProtectionHasBeenSet() const { return m_hlsContentProtectionHasBeenSet; }
    template<typename HlsContentProtectionT = HlsContentProtection>
    void SetHlsContentProtection(HlsContentProtectionT&& value) { m_hlsContentProtectionHasBeenSet = true; m_hlsContentProtection = std::forward<HlsContentProtectionT>(value); }
    template<typename HlsContentProtectionT = HlsContentProtection>
    Playlist& WithHlsContentProtection(HlsContentProtectionT&& value) { SetHlsContentProtection(std::forward<HlsContentProtectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DRM settings, if any, that you want Elastic Transcoder to apply to the
     * output files associated with this playlist.</p>
     */
    inline const PlayReadyDrm& GetPlayReadyDrm() const { return m_playReadyDrm; }
    inline bool PlayReadyDrmHasBeenSet() const { return m_playReadyDrmHasBeenSet; }
    template<typename PlayReadyDrmT = PlayReadyDrm>
    void SetPlayReadyDrm(PlayReadyDrmT&& value) { m_playReadyDrmHasBeenSet = true; m_playReadyDrm = std::forward<PlayReadyDrmT>(value); }
    template<typename PlayReadyDrmT = PlayReadyDrm>
    Playlist& WithPlayReadyDrm(PlayReadyDrmT&& value) { SetPlayReadyDrm(std::forward<PlayReadyDrmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the job with which the playlist is associated.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    Playlist& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information that further explains the status.</p>
     */
    inline const Aws::String& GetStatusDetail() const { return m_statusDetail; }
    inline bool StatusDetailHasBeenSet() const { return m_statusDetailHasBeenSet; }
    template<typename StatusDetailT = Aws::String>
    void SetStatusDetail(StatusDetailT&& value) { m_statusDetailHasBeenSet = true; m_statusDetail = std::forward<StatusDetailT>(value); }
    template<typename StatusDetailT = Aws::String>
    Playlist& WithStatusDetail(StatusDetailT&& value) { SetStatusDetail(std::forward<StatusDetailT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_format;
    bool m_formatHasBeenSet = false;

    Aws::Vector<Aws::String> m_outputKeys;
    bool m_outputKeysHasBeenSet = false;

    HlsContentProtection m_hlsContentProtection;
    bool m_hlsContentProtectionHasBeenSet = false;

    PlayReadyDrm m_playReadyDrm;
    bool m_playReadyDrmHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusDetail;
    bool m_statusDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
