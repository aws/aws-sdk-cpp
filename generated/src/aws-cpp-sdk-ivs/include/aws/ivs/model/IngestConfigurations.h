/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs/model/AudioConfiguration.h>
#include <aws/ivs/model/VideoConfiguration.h>
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
namespace IVS
{
namespace Model
{

  /**
   * <p>Object specifying the ingest configuration set up by the broadcaster, usually
   * in an encoder. </p> <p> <b>Note:</b> Use IngestConfigurations instead of
   * <a>IngestConfiguration</a> (which is deprecated). If multitrack is not enabled,
   * IngestConfiguration and IngestConfigurations contain the same data, namely
   * information about track0 (the sole track). If multitrack is enabled,
   * IngestConfiguration contains data for only the first track (track0) and
   * IngestConfigurations contains data for all tracks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/IngestConfigurations">AWS
   * API Reference</a></p>
   */
  class IngestConfigurations
  {
  public:
    AWS_IVS_API IngestConfigurations() = default;
    AWS_IVS_API IngestConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API IngestConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Encoder settings for audio.</p>
     */
    inline const Aws::Vector<AudioConfiguration>& GetAudioConfigurations() const { return m_audioConfigurations; }
    inline bool AudioConfigurationsHasBeenSet() const { return m_audioConfigurationsHasBeenSet; }
    template<typename AudioConfigurationsT = Aws::Vector<AudioConfiguration>>
    void SetAudioConfigurations(AudioConfigurationsT&& value) { m_audioConfigurationsHasBeenSet = true; m_audioConfigurations = std::forward<AudioConfigurationsT>(value); }
    template<typename AudioConfigurationsT = Aws::Vector<AudioConfiguration>>
    IngestConfigurations& WithAudioConfigurations(AudioConfigurationsT&& value) { SetAudioConfigurations(std::forward<AudioConfigurationsT>(value)); return *this;}
    template<typename AudioConfigurationsT = AudioConfiguration>
    IngestConfigurations& AddAudioConfigurations(AudioConfigurationsT&& value) { m_audioConfigurationsHasBeenSet = true; m_audioConfigurations.emplace_back(std::forward<AudioConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Encoder settings for video</p>
     */
    inline const Aws::Vector<VideoConfiguration>& GetVideoConfigurations() const { return m_videoConfigurations; }
    inline bool VideoConfigurationsHasBeenSet() const { return m_videoConfigurationsHasBeenSet; }
    template<typename VideoConfigurationsT = Aws::Vector<VideoConfiguration>>
    void SetVideoConfigurations(VideoConfigurationsT&& value) { m_videoConfigurationsHasBeenSet = true; m_videoConfigurations = std::forward<VideoConfigurationsT>(value); }
    template<typename VideoConfigurationsT = Aws::Vector<VideoConfiguration>>
    IngestConfigurations& WithVideoConfigurations(VideoConfigurationsT&& value) { SetVideoConfigurations(std::forward<VideoConfigurationsT>(value)); return *this;}
    template<typename VideoConfigurationsT = VideoConfiguration>
    IngestConfigurations& AddVideoConfigurations(VideoConfigurationsT&& value) { m_videoConfigurationsHasBeenSet = true; m_videoConfigurations.emplace_back(std::forward<VideoConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AudioConfiguration> m_audioConfigurations;
    bool m_audioConfigurationsHasBeenSet = false;

    Aws::Vector<VideoConfiguration> m_videoConfigurations;
    bool m_videoConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
