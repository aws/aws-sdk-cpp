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
    AWS_IVS_API IngestConfigurations();
    AWS_IVS_API IngestConfigurations(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API IngestConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Encoder settings for audio.</p>
     */
    inline const Aws::Vector<AudioConfiguration>& GetAudioConfigurations() const{ return m_audioConfigurations; }
    inline bool AudioConfigurationsHasBeenSet() const { return m_audioConfigurationsHasBeenSet; }
    inline void SetAudioConfigurations(const Aws::Vector<AudioConfiguration>& value) { m_audioConfigurationsHasBeenSet = true; m_audioConfigurations = value; }
    inline void SetAudioConfigurations(Aws::Vector<AudioConfiguration>&& value) { m_audioConfigurationsHasBeenSet = true; m_audioConfigurations = std::move(value); }
    inline IngestConfigurations& WithAudioConfigurations(const Aws::Vector<AudioConfiguration>& value) { SetAudioConfigurations(value); return *this;}
    inline IngestConfigurations& WithAudioConfigurations(Aws::Vector<AudioConfiguration>&& value) { SetAudioConfigurations(std::move(value)); return *this;}
    inline IngestConfigurations& AddAudioConfigurations(const AudioConfiguration& value) { m_audioConfigurationsHasBeenSet = true; m_audioConfigurations.push_back(value); return *this; }
    inline IngestConfigurations& AddAudioConfigurations(AudioConfiguration&& value) { m_audioConfigurationsHasBeenSet = true; m_audioConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Encoder settings for video</p>
     */
    inline const Aws::Vector<VideoConfiguration>& GetVideoConfigurations() const{ return m_videoConfigurations; }
    inline bool VideoConfigurationsHasBeenSet() const { return m_videoConfigurationsHasBeenSet; }
    inline void SetVideoConfigurations(const Aws::Vector<VideoConfiguration>& value) { m_videoConfigurationsHasBeenSet = true; m_videoConfigurations = value; }
    inline void SetVideoConfigurations(Aws::Vector<VideoConfiguration>&& value) { m_videoConfigurationsHasBeenSet = true; m_videoConfigurations = std::move(value); }
    inline IngestConfigurations& WithVideoConfigurations(const Aws::Vector<VideoConfiguration>& value) { SetVideoConfigurations(value); return *this;}
    inline IngestConfigurations& WithVideoConfigurations(Aws::Vector<VideoConfiguration>&& value) { SetVideoConfigurations(std::move(value)); return *this;}
    inline IngestConfigurations& AddVideoConfigurations(const VideoConfiguration& value) { m_videoConfigurationsHasBeenSet = true; m_videoConfigurations.push_back(value); return *this; }
    inline IngestConfigurations& AddVideoConfigurations(VideoConfiguration&& value) { m_videoConfigurationsHasBeenSet = true; m_videoConfigurations.push_back(std::move(value)); return *this; }
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
