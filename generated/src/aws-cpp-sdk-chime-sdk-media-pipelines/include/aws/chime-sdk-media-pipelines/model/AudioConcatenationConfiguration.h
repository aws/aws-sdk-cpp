﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/AudioArtifactsConcatenationState.h>
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
   * <p>The audio artifact concatenation configuration object.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/AudioConcatenationConfiguration">AWS
   * API Reference</a></p>
   */
  class AudioConcatenationConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API AudioConcatenationConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API AudioConcatenationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API AudioConcatenationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables or disables the configuration object.</p>
     */
    inline const AudioArtifactsConcatenationState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const AudioArtifactsConcatenationState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(AudioArtifactsConcatenationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline AudioConcatenationConfiguration& WithState(const AudioArtifactsConcatenationState& value) { SetState(value); return *this;}
    inline AudioConcatenationConfiguration& WithState(AudioArtifactsConcatenationState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    AudioArtifactsConcatenationState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
