/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/connectcampaigns/model/ProgressiveDialerConfig.h>
#include <aws/connectcampaigns/model/PredictiveDialerConfig.h>
#include <aws/connectcampaigns/model/AgentlessDialerConfig.h>
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
namespace ConnectCampaigns
{
namespace Model
{

  /**
   * <p>The possible types of dialer config parameters</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaigns-2021-01-30/DialerConfig">AWS
   * API Reference</a></p>
   */
  class DialerConfig
  {
  public:
    AWS_CONNECTCAMPAIGNS_API DialerConfig() = default;
    AWS_CONNECTCAMPAIGNS_API DialerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API DialerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ProgressiveDialerConfig& GetProgressiveDialerConfig() const { return m_progressiveDialerConfig; }
    inline bool ProgressiveDialerConfigHasBeenSet() const { return m_progressiveDialerConfigHasBeenSet; }
    template<typename ProgressiveDialerConfigT = ProgressiveDialerConfig>
    void SetProgressiveDialerConfig(ProgressiveDialerConfigT&& value) { m_progressiveDialerConfigHasBeenSet = true; m_progressiveDialerConfig = std::forward<ProgressiveDialerConfigT>(value); }
    template<typename ProgressiveDialerConfigT = ProgressiveDialerConfig>
    DialerConfig& WithProgressiveDialerConfig(ProgressiveDialerConfigT&& value) { SetProgressiveDialerConfig(std::forward<ProgressiveDialerConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PredictiveDialerConfig& GetPredictiveDialerConfig() const { return m_predictiveDialerConfig; }
    inline bool PredictiveDialerConfigHasBeenSet() const { return m_predictiveDialerConfigHasBeenSet; }
    template<typename PredictiveDialerConfigT = PredictiveDialerConfig>
    void SetPredictiveDialerConfig(PredictiveDialerConfigT&& value) { m_predictiveDialerConfigHasBeenSet = true; m_predictiveDialerConfig = std::forward<PredictiveDialerConfigT>(value); }
    template<typename PredictiveDialerConfigT = PredictiveDialerConfig>
    DialerConfig& WithPredictiveDialerConfig(PredictiveDialerConfigT&& value) { SetPredictiveDialerConfig(std::forward<PredictiveDialerConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AgentlessDialerConfig& GetAgentlessDialerConfig() const { return m_agentlessDialerConfig; }
    inline bool AgentlessDialerConfigHasBeenSet() const { return m_agentlessDialerConfigHasBeenSet; }
    template<typename AgentlessDialerConfigT = AgentlessDialerConfig>
    void SetAgentlessDialerConfig(AgentlessDialerConfigT&& value) { m_agentlessDialerConfigHasBeenSet = true; m_agentlessDialerConfig = std::forward<AgentlessDialerConfigT>(value); }
    template<typename AgentlessDialerConfigT = AgentlessDialerConfig>
    DialerConfig& WithAgentlessDialerConfig(AgentlessDialerConfigT&& value) { SetAgentlessDialerConfig(std::forward<AgentlessDialerConfigT>(value)); return *this;}
    ///@}
  private:

    ProgressiveDialerConfig m_progressiveDialerConfig;
    bool m_progressiveDialerConfigHasBeenSet = false;

    PredictiveDialerConfig m_predictiveDialerConfig;
    bool m_predictiveDialerConfigHasBeenSet = false;

    AgentlessDialerConfig m_agentlessDialerConfig;
    bool m_agentlessDialerConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
