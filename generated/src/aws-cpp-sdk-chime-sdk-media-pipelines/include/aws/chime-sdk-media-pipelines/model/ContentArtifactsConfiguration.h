/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/ArtifactsState.h>
#include <aws/chime-sdk-media-pipelines/model/ContentMuxType.h>
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
   * <p>The content artifact object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/ContentArtifactsConfiguration">AWS
   * API Reference</a></p>
   */
  class ContentArtifactsConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API ContentArtifactsConfiguration() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API ContentArtifactsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API ContentArtifactsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the content artifact is enabled or disabled.</p>
     */
    inline ArtifactsState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ArtifactsState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ContentArtifactsConfiguration& WithState(ArtifactsState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MUX type of the artifact configuration.</p>
     */
    inline ContentMuxType GetMuxType() const { return m_muxType; }
    inline bool MuxTypeHasBeenSet() const { return m_muxTypeHasBeenSet; }
    inline void SetMuxType(ContentMuxType value) { m_muxTypeHasBeenSet = true; m_muxType = value; }
    inline ContentArtifactsConfiguration& WithMuxType(ContentMuxType value) { SetMuxType(value); return *this;}
    ///@}
  private:

    ArtifactsState m_state{ArtifactsState::NOT_SET};
    bool m_stateHasBeenSet = false;

    ContentMuxType m_muxType{ContentMuxType::NOT_SET};
    bool m_muxTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
