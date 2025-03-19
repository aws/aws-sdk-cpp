/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/ProgressiveConfig.h>
#include <aws/connectcampaignsv2/model/PredictiveConfig.h>
#include <aws/connectcampaignsv2/model/AgentlessConfig.h>
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
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>Telephony Outbound Mode</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/TelephonyOutboundMode">AWS
   * API Reference</a></p>
   */
  class TelephonyOutboundMode
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API TelephonyOutboundMode() = default;
    AWS_CONNECTCAMPAIGNSV2_API TelephonyOutboundMode(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API TelephonyOutboundMode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ProgressiveConfig& GetProgressive() const { return m_progressive; }
    inline bool ProgressiveHasBeenSet() const { return m_progressiveHasBeenSet; }
    template<typename ProgressiveT = ProgressiveConfig>
    void SetProgressive(ProgressiveT&& value) { m_progressiveHasBeenSet = true; m_progressive = std::forward<ProgressiveT>(value); }
    template<typename ProgressiveT = ProgressiveConfig>
    TelephonyOutboundMode& WithProgressive(ProgressiveT&& value) { SetProgressive(std::forward<ProgressiveT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PredictiveConfig& GetPredictive() const { return m_predictive; }
    inline bool PredictiveHasBeenSet() const { return m_predictiveHasBeenSet; }
    template<typename PredictiveT = PredictiveConfig>
    void SetPredictive(PredictiveT&& value) { m_predictiveHasBeenSet = true; m_predictive = std::forward<PredictiveT>(value); }
    template<typename PredictiveT = PredictiveConfig>
    TelephonyOutboundMode& WithPredictive(PredictiveT&& value) { SetPredictive(std::forward<PredictiveT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AgentlessConfig& GetAgentless() const { return m_agentless; }
    inline bool AgentlessHasBeenSet() const { return m_agentlessHasBeenSet; }
    template<typename AgentlessT = AgentlessConfig>
    void SetAgentless(AgentlessT&& value) { m_agentlessHasBeenSet = true; m_agentless = std::forward<AgentlessT>(value); }
    template<typename AgentlessT = AgentlessConfig>
    TelephonyOutboundMode& WithAgentless(AgentlessT&& value) { SetAgentless(std::forward<AgentlessT>(value)); return *this;}
    ///@}
  private:

    ProgressiveConfig m_progressive;
    bool m_progressiveHasBeenSet = false;

    PredictiveConfig m_predictive;
    bool m_predictiveHasBeenSet = false;

    AgentlessConfig m_agentless;
    bool m_agentlessHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
