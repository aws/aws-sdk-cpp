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
    AWS_CHIMESDKMEDIAPIPELINES_API LiveConnectorSinkConfiguration() = default;
    AWS_CHIMESDKMEDIAPIPELINES_API LiveConnectorSinkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API LiveConnectorSinkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sink configuration's sink type.</p>
     */
    inline LiveConnectorSinkType GetSinkType() const { return m_sinkType; }
    inline bool SinkTypeHasBeenSet() const { return m_sinkTypeHasBeenSet; }
    inline void SetSinkType(LiveConnectorSinkType value) { m_sinkTypeHasBeenSet = true; m_sinkType = value; }
    inline LiveConnectorSinkConfiguration& WithSinkType(LiveConnectorSinkType value) { SetSinkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sink configuration's RTMP configuration settings.</p>
     */
    inline const LiveConnectorRTMPConfiguration& GetRTMPConfiguration() const { return m_rTMPConfiguration; }
    inline bool RTMPConfigurationHasBeenSet() const { return m_rTMPConfigurationHasBeenSet; }
    template<typename RTMPConfigurationT = LiveConnectorRTMPConfiguration>
    void SetRTMPConfiguration(RTMPConfigurationT&& value) { m_rTMPConfigurationHasBeenSet = true; m_rTMPConfiguration = std::forward<RTMPConfigurationT>(value); }
    template<typename RTMPConfigurationT = LiveConnectorRTMPConfiguration>
    LiveConnectorSinkConfiguration& WithRTMPConfiguration(RTMPConfigurationT&& value) { SetRTMPConfiguration(std::forward<RTMPConfigurationT>(value)); return *this;}
    ///@}
  private:

    LiveConnectorSinkType m_sinkType{LiveConnectorSinkType::NOT_SET};
    bool m_sinkTypeHasBeenSet = false;

    LiveConnectorRTMPConfiguration m_rTMPConfiguration;
    bool m_rTMPConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
