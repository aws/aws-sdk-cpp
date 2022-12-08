/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/SourceConfiguration.h>
#include <aws/chime/model/ArtifactsConfiguration.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The configuration object of the Amazon Chime SDK meeting for a specified
   * media capture pipeline. <code>SourceType</code> must be
   * <code>ChimeSdkMeeting</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/ChimeSdkMeetingConfiguration">AWS
   * API Reference</a></p>
   */
  class ChimeSdkMeetingConfiguration
  {
  public:
    AWS_CHIME_API ChimeSdkMeetingConfiguration();
    AWS_CHIME_API ChimeSdkMeetingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API ChimeSdkMeetingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The source configuration for a specified media capture pipline.</p>
     */
    inline const SourceConfiguration& GetSourceConfiguration() const{ return m_sourceConfiguration; }

    /**
     * <p>The source configuration for a specified media capture pipline.</p>
     */
    inline bool SourceConfigurationHasBeenSet() const { return m_sourceConfigurationHasBeenSet; }

    /**
     * <p>The source configuration for a specified media capture pipline.</p>
     */
    inline void SetSourceConfiguration(const SourceConfiguration& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = value; }

    /**
     * <p>The source configuration for a specified media capture pipline.</p>
     */
    inline void SetSourceConfiguration(SourceConfiguration&& value) { m_sourceConfigurationHasBeenSet = true; m_sourceConfiguration = std::move(value); }

    /**
     * <p>The source configuration for a specified media capture pipline.</p>
     */
    inline ChimeSdkMeetingConfiguration& WithSourceConfiguration(const SourceConfiguration& value) { SetSourceConfiguration(value); return *this;}

    /**
     * <p>The source configuration for a specified media capture pipline.</p>
     */
    inline ChimeSdkMeetingConfiguration& WithSourceConfiguration(SourceConfiguration&& value) { SetSourceConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration for the artifacts in an Amazon Chime SDK meeting.</p>
     */
    inline const ArtifactsConfiguration& GetArtifactsConfiguration() const{ return m_artifactsConfiguration; }

    /**
     * <p>The configuration for the artifacts in an Amazon Chime SDK meeting.</p>
     */
    inline bool ArtifactsConfigurationHasBeenSet() const { return m_artifactsConfigurationHasBeenSet; }

    /**
     * <p>The configuration for the artifacts in an Amazon Chime SDK meeting.</p>
     */
    inline void SetArtifactsConfiguration(const ArtifactsConfiguration& value) { m_artifactsConfigurationHasBeenSet = true; m_artifactsConfiguration = value; }

    /**
     * <p>The configuration for the artifacts in an Amazon Chime SDK meeting.</p>
     */
    inline void SetArtifactsConfiguration(ArtifactsConfiguration&& value) { m_artifactsConfigurationHasBeenSet = true; m_artifactsConfiguration = std::move(value); }

    /**
     * <p>The configuration for the artifacts in an Amazon Chime SDK meeting.</p>
     */
    inline ChimeSdkMeetingConfiguration& WithArtifactsConfiguration(const ArtifactsConfiguration& value) { SetArtifactsConfiguration(value); return *this;}

    /**
     * <p>The configuration for the artifacts in an Amazon Chime SDK meeting.</p>
     */
    inline ChimeSdkMeetingConfiguration& WithArtifactsConfiguration(ArtifactsConfiguration&& value) { SetArtifactsConfiguration(std::move(value)); return *this;}

  private:

    SourceConfiguration m_sourceConfiguration;
    bool m_sourceConfigurationHasBeenSet = false;

    ArtifactsConfiguration m_artifactsConfiguration;
    bool m_artifactsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
