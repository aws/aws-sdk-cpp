﻿/**
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
   * <p>The composited content configuration object for a specified media pipeline.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/ContentConcatenationConfiguration">AWS
   * API Reference</a></p>
   */
  class ContentConcatenationConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API ContentConcatenationConfiguration() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API ContentConcatenationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API ContentConcatenationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables or disables the configuration object.</p>
     */
    inline ArtifactsConcatenationState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ArtifactsConcatenationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ContentConcatenationConfiguration& WithState(ArtifactsConcatenationState value) { SetState(value); return *this;}
    ///@}
  private:

    ArtifactsConcatenationState m_state{ArtifactsConcatenationState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
