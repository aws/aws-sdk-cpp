/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/LiveConnectorSourceType.h>
#include <aws/chime-sdk-media-pipelines/model/ChimeSdkMeetingLiveConnectorConfiguration.h>
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
   * <p>The data source configuration object of a streaming media
   * pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/LiveConnectorSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class LiveConnectorSourceConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API LiveConnectorSourceConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API LiveConnectorSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API LiveConnectorSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The source configuration's media source type.</p>
     */
    inline const LiveConnectorSourceType& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The source configuration's media source type.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The source configuration's media source type.</p>
     */
    inline void SetSourceType(const LiveConnectorSourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The source configuration's media source type.</p>
     */
    inline void SetSourceType(LiveConnectorSourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The source configuration's media source type.</p>
     */
    inline LiveConnectorSourceConfiguration& WithSourceType(const LiveConnectorSourceType& value) { SetSourceType(value); return *this;}

    /**
     * <p>The source configuration's media source type.</p>
     */
    inline LiveConnectorSourceConfiguration& WithSourceType(LiveConnectorSourceType&& value) { SetSourceType(std::move(value)); return *this;}


    /**
     * <p>The configuration settings of the connector pipeline.</p>
     */
    inline const ChimeSdkMeetingLiveConnectorConfiguration& GetChimeSdkMeetingLiveConnectorConfiguration() const{ return m_chimeSdkMeetingLiveConnectorConfiguration; }

    /**
     * <p>The configuration settings of the connector pipeline.</p>
     */
    inline bool ChimeSdkMeetingLiveConnectorConfigurationHasBeenSet() const { return m_chimeSdkMeetingLiveConnectorConfigurationHasBeenSet; }

    /**
     * <p>The configuration settings of the connector pipeline.</p>
     */
    inline void SetChimeSdkMeetingLiveConnectorConfiguration(const ChimeSdkMeetingLiveConnectorConfiguration& value) { m_chimeSdkMeetingLiveConnectorConfigurationHasBeenSet = true; m_chimeSdkMeetingLiveConnectorConfiguration = value; }

    /**
     * <p>The configuration settings of the connector pipeline.</p>
     */
    inline void SetChimeSdkMeetingLiveConnectorConfiguration(ChimeSdkMeetingLiveConnectorConfiguration&& value) { m_chimeSdkMeetingLiveConnectorConfigurationHasBeenSet = true; m_chimeSdkMeetingLiveConnectorConfiguration = std::move(value); }

    /**
     * <p>The configuration settings of the connector pipeline.</p>
     */
    inline LiveConnectorSourceConfiguration& WithChimeSdkMeetingLiveConnectorConfiguration(const ChimeSdkMeetingLiveConnectorConfiguration& value) { SetChimeSdkMeetingLiveConnectorConfiguration(value); return *this;}

    /**
     * <p>The configuration settings of the connector pipeline.</p>
     */
    inline LiveConnectorSourceConfiguration& WithChimeSdkMeetingLiveConnectorConfiguration(ChimeSdkMeetingLiveConnectorConfiguration&& value) { SetChimeSdkMeetingLiveConnectorConfiguration(std::move(value)); return *this;}

  private:

    LiveConnectorSourceType m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    ChimeSdkMeetingLiveConnectorConfiguration m_chimeSdkMeetingLiveConnectorConfiguration;
    bool m_chimeSdkMeetingLiveConnectorConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
