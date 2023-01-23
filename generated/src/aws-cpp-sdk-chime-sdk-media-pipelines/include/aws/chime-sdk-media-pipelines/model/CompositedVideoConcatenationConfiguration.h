/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/ArtifactsConcatenationState.h>
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
   * <p>The composited video configuration object for a specified media pipeline.
   * <code>SourceType</code> must be <code>ChimeSdkMeeting</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/CompositedVideoConcatenationConfiguration">AWS
   * API Reference</a></p>
   */
  class CompositedVideoConcatenationConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API CompositedVideoConcatenationConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API CompositedVideoConcatenationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API CompositedVideoConcatenationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enables or disables the configuration object.</p>
     */
    inline const ArtifactsConcatenationState& GetState() const{ return m_state; }

    /**
     * <p>Enables or disables the configuration object.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Enables or disables the configuration object.</p>
     */
    inline void SetState(const ArtifactsConcatenationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Enables or disables the configuration object.</p>
     */
    inline void SetState(ArtifactsConcatenationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Enables or disables the configuration object.</p>
     */
    inline CompositedVideoConcatenationConfiguration& WithState(const ArtifactsConcatenationState& value) { SetState(value); return *this;}

    /**
     * <p>Enables or disables the configuration object.</p>
     */
    inline CompositedVideoConcatenationConfiguration& WithState(ArtifactsConcatenationState&& value) { SetState(std::move(value)); return *this;}

  private:

    ArtifactsConcatenationState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
