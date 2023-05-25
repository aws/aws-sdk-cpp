/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-media-pipelines/model/ChimeSdkMeetingConcatenationConfiguration.h>
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
   * <p>The source configuration object of a media capture pipeline.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/MediaCapturePipelineSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class MediaCapturePipelineSourceConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API MediaCapturePipelineSourceConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API MediaCapturePipelineSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API MediaCapturePipelineSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The media pipeline ARN in the configuration object of a media capture
     * pipeline.</p>
     */
    inline const Aws::String& GetMediaPipelineArn() const{ return m_mediaPipelineArn; }

    /**
     * <p>The media pipeline ARN in the configuration object of a media capture
     * pipeline.</p>
     */
    inline bool MediaPipelineArnHasBeenSet() const { return m_mediaPipelineArnHasBeenSet; }

    /**
     * <p>The media pipeline ARN in the configuration object of a media capture
     * pipeline.</p>
     */
    inline void SetMediaPipelineArn(const Aws::String& value) { m_mediaPipelineArnHasBeenSet = true; m_mediaPipelineArn = value; }

    /**
     * <p>The media pipeline ARN in the configuration object of a media capture
     * pipeline.</p>
     */
    inline void SetMediaPipelineArn(Aws::String&& value) { m_mediaPipelineArnHasBeenSet = true; m_mediaPipelineArn = std::move(value); }

    /**
     * <p>The media pipeline ARN in the configuration object of a media capture
     * pipeline.</p>
     */
    inline void SetMediaPipelineArn(const char* value) { m_mediaPipelineArnHasBeenSet = true; m_mediaPipelineArn.assign(value); }

    /**
     * <p>The media pipeline ARN in the configuration object of a media capture
     * pipeline.</p>
     */
    inline MediaCapturePipelineSourceConfiguration& WithMediaPipelineArn(const Aws::String& value) { SetMediaPipelineArn(value); return *this;}

    /**
     * <p>The media pipeline ARN in the configuration object of a media capture
     * pipeline.</p>
     */
    inline MediaCapturePipelineSourceConfiguration& WithMediaPipelineArn(Aws::String&& value) { SetMediaPipelineArn(std::move(value)); return *this;}

    /**
     * <p>The media pipeline ARN in the configuration object of a media capture
     * pipeline.</p>
     */
    inline MediaCapturePipelineSourceConfiguration& WithMediaPipelineArn(const char* value) { SetMediaPipelineArn(value); return *this;}


    /**
     * <p>The meeting configuration settings in a media capture pipeline configuration
     * object. </p>
     */
    inline const ChimeSdkMeetingConcatenationConfiguration& GetChimeSdkMeetingConfiguration() const{ return m_chimeSdkMeetingConfiguration; }

    /**
     * <p>The meeting configuration settings in a media capture pipeline configuration
     * object. </p>
     */
    inline bool ChimeSdkMeetingConfigurationHasBeenSet() const { return m_chimeSdkMeetingConfigurationHasBeenSet; }

    /**
     * <p>The meeting configuration settings in a media capture pipeline configuration
     * object. </p>
     */
    inline void SetChimeSdkMeetingConfiguration(const ChimeSdkMeetingConcatenationConfiguration& value) { m_chimeSdkMeetingConfigurationHasBeenSet = true; m_chimeSdkMeetingConfiguration = value; }

    /**
     * <p>The meeting configuration settings in a media capture pipeline configuration
     * object. </p>
     */
    inline void SetChimeSdkMeetingConfiguration(ChimeSdkMeetingConcatenationConfiguration&& value) { m_chimeSdkMeetingConfigurationHasBeenSet = true; m_chimeSdkMeetingConfiguration = std::move(value); }

    /**
     * <p>The meeting configuration settings in a media capture pipeline configuration
     * object. </p>
     */
    inline MediaCapturePipelineSourceConfiguration& WithChimeSdkMeetingConfiguration(const ChimeSdkMeetingConcatenationConfiguration& value) { SetChimeSdkMeetingConfiguration(value); return *this;}

    /**
     * <p>The meeting configuration settings in a media capture pipeline configuration
     * object. </p>
     */
    inline MediaCapturePipelineSourceConfiguration& WithChimeSdkMeetingConfiguration(ChimeSdkMeetingConcatenationConfiguration&& value) { SetChimeSdkMeetingConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_mediaPipelineArn;
    bool m_mediaPipelineArnHasBeenSet = false;

    ChimeSdkMeetingConcatenationConfiguration m_chimeSdkMeetingConfiguration;
    bool m_chimeSdkMeetingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
