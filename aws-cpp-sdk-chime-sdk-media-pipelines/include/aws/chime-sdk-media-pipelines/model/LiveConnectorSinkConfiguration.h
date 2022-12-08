/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/LiveConnectorSinkType.h>
#include <aws/chime-sdk-media-pipelines/model/LiveConnectorRTMPConfiguration.h>
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
   * <p>The media pipeline's sink configuration settings.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/LiveConnectorSinkConfiguration">AWS
   * API Reference</a></p>
   */
  class LiveConnectorSinkConfiguration
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API LiveConnectorSinkConfiguration();
    AWS_CHIMESDKMEDIAPIPELINES_API LiveConnectorSinkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API LiveConnectorSinkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The sink configuration's sink type.</p>
     */
    inline const LiveConnectorSinkType& GetSinkType() const{ return m_sinkType; }

    /**
     * <p>The sink configuration's sink type.</p>
     */
    inline bool SinkTypeHasBeenSet() const { return m_sinkTypeHasBeenSet; }

    /**
     * <p>The sink configuration's sink type.</p>
     */
    inline void SetSinkType(const LiveConnectorSinkType& value) { m_sinkTypeHasBeenSet = true; m_sinkType = value; }

    /**
     * <p>The sink configuration's sink type.</p>
     */
    inline void SetSinkType(LiveConnectorSinkType&& value) { m_sinkTypeHasBeenSet = true; m_sinkType = std::move(value); }

    /**
     * <p>The sink configuration's sink type.</p>
     */
    inline LiveConnectorSinkConfiguration& WithSinkType(const LiveConnectorSinkType& value) { SetSinkType(value); return *this;}

    /**
     * <p>The sink configuration's sink type.</p>
     */
    inline LiveConnectorSinkConfiguration& WithSinkType(LiveConnectorSinkType&& value) { SetSinkType(std::move(value)); return *this;}


    /**
     * <p>The sink configuration's RTMP configuration setttings.</p>
     */
    inline const LiveConnectorRTMPConfiguration& GetRTMPConfiguration() const{ return m_rTMPConfiguration; }

    /**
     * <p>The sink configuration's RTMP configuration setttings.</p>
     */
    inline bool RTMPConfigurationHasBeenSet() const { return m_rTMPConfigurationHasBeenSet; }

    /**
     * <p>The sink configuration's RTMP configuration setttings.</p>
     */
    inline void SetRTMPConfiguration(const LiveConnectorRTMPConfiguration& value) { m_rTMPConfigurationHasBeenSet = true; m_rTMPConfiguration = value; }

    /**
     * <p>The sink configuration's RTMP configuration setttings.</p>
     */
    inline void SetRTMPConfiguration(LiveConnectorRTMPConfiguration&& value) { m_rTMPConfigurationHasBeenSet = true; m_rTMPConfiguration = std::move(value); }

    /**
     * <p>The sink configuration's RTMP configuration setttings.</p>
     */
    inline LiveConnectorSinkConfiguration& WithRTMPConfiguration(const LiveConnectorRTMPConfiguration& value) { SetRTMPConfiguration(value); return *this;}

    /**
     * <p>The sink configuration's RTMP configuration setttings.</p>
     */
    inline LiveConnectorSinkConfiguration& WithRTMPConfiguration(LiveConnectorRTMPConfiguration&& value) { SetRTMPConfiguration(std::move(value)); return *this;}

  private:

    LiveConnectorSinkType m_sinkType;
    bool m_sinkTypeHasBeenSet = false;

    LiveConnectorRTMPConfiguration m_rTMPConfiguration;
    bool m_rTMPConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
