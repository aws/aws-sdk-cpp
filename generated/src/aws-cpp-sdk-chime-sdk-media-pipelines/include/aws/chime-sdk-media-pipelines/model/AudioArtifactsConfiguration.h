/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/AudioMuxType.h>
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
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>The audio artifact configuration object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/AudioArtifactsConfiguration">AWS
   * API Reference</a></p>
   */
  class AudioArtifactsConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API AudioArtifactsConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API AudioArtifactsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API AudioArtifactsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The MUX type of the audio artifact configuration object.</p>
     */
    inline const AudioMuxType& GetMuxType() const{ return m_muxType; }

    /**
     * <p>The MUX type of the audio artifact configuration object.</p>
     */
    inline bool MuxTypeHasBeenSet() const { return m_muxTypeHasBeenSet; }

    /**
     * <p>The MUX type of the audio artifact configuration object.</p>
     */
    inline void SetMuxType(const AudioMuxType& value) { m_muxTypeHasBeenSet = true; m_muxType = value; }

    /**
     * <p>The MUX type of the audio artifact configuration object.</p>
     */
    inline void SetMuxType(AudioMuxType&& value) { m_muxTypeHasBeenSet = true; m_muxType = std::move(value); }

    /**
     * <p>The MUX type of the audio artifact configuration object.</p>
     */
    inline AudioArtifactsConfiguration& WithMuxType(const AudioMuxType& value) { SetMuxType(value); return *this;}

    /**
     * <p>The MUX type of the audio artifact configuration object.</p>
     */
    inline AudioArtifactsConfiguration& WithMuxType(AudioMuxType&& value) { SetMuxType(std::move(value)); return *this;}

  private:

    AudioMuxType m_muxType;
    bool m_muxTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
