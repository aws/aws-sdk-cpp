/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/ArtifactsConcatenationConfiguration.h>
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
   * <p>The configuration object of the Amazon Chime SDK meeting concatenation for a
   * specified media pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/ChimeSdkMeetingConcatenationConfiguration">AWS
   * API Reference</a></p>
   */
  class ChimeSdkMeetingConcatenationConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API ChimeSdkMeetingConcatenationConfiguration() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API ChimeSdkMeetingConcatenationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API ChimeSdkMeetingConcatenationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for the artifacts in an Amazon Chime SDK meeting
     * concatenation.</p>
     */
    inline const ArtifactsConcatenationConfiguration& GetArtifactsConfiguration() const { return m_artifactsConfiguration; }
    inline bool ArtifactsConfigurationHasBeenSet() const { return m_artifactsConfigurationHasBeenSet; }
    template<typename ArtifactsConfigurationT = ArtifactsConcatenationConfiguration>
    void SetArtifactsConfiguration(ArtifactsConfigurationT&& value) { m_artifactsConfigurationHasBeenSet = true; m_artifactsConfiguration = std::forward<ArtifactsConfigurationT>(value); }
    template<typename ArtifactsConfigurationT = ArtifactsConcatenationConfiguration>
    ChimeSdkMeetingConcatenationConfiguration& WithArtifactsConfiguration(ArtifactsConfigurationT&& value) { SetArtifactsConfiguration(std::forward<ArtifactsConfigurationT>(value)); return *this;}
    ///@}
  private:

    ArtifactsConcatenationConfiguration m_artifactsConfiguration;
    bool m_artifactsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
