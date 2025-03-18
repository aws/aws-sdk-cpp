/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/SourceConfiguration.h>
#include <aws/chime-sdk-media-pipelines/model/ArtifactsConfiguration.h>
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
   * <p>The configuration object of the Amazon Chime SDK meeting for a specified
   * media pipeline. <code>SourceType</code> must be
   * <code>ChimeSdkMeeting</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/ChimeSdkMeetingConfiguration">AWS
   * API Reference</a></p>
   */
  class ChimeSdkMeetingConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API ChimeSdkMeetingConfiguration() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API ChimeSdkMeetingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API ChimeSdkMeetingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source configuration for a specified media pipeline.</p>
     */
    inline const SourceConfiguration& GetSourceConfiguration() const { return m_sourceConfiguration; }
    inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }
    template<typename SourceConfigurationT = SourceConfiguration>
    void SetSourceConfiguration(SourceConfigurationT&& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = std::forward<SourceConfigurationT>(value); }
    template<typename SourceConfigurationT = SourceConfiguration>
    ChimeSdkMeetingConfiguration& WithSourceConfiguration(SourceConfigurationT&& value) { SetSourceConfiguration(std::forward<SourceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the artifacts in an Amazon Chime SDK meeting.</p>
     */
    inline const ArtifactsConfiguration& GetArtifactsConfiguration() const { return m_artifactsConfiguration; }
    inline bool ArtifactsConfigurationHasBeenSet() const { return m_artifactsConfigurationHasBeenSet; }
    template<typename ArtifactsConfigurationT = ArtifactsConfiguration>
    void SetArtifactsConfiguration(ArtifactsConfigurationT&& value) { m_artifactsConfigurationHasBeenSet = true; m_artifactsConfiguration = std::forward<ArtifactsConfigurationT>(value); }
    template<typename ArtifactsConfigurationT = ArtifactsConfiguration>
    ChimeSdkMeetingConfiguration& WithArtifactsConfiguration(ArtifactsConfigurationT&& value) { SetArtifactsConfiguration(std::forward<ArtifactsConfigurationT>(value)); return *this;}
    ///@}
  private:

    SourceConfiguration m_sourceConfiguration;
    bool m_sourceConfigurationHasBeenSet = false;

    ArtifactsConfiguration m_artifactsConfiguration;
    bool m_artifactsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
