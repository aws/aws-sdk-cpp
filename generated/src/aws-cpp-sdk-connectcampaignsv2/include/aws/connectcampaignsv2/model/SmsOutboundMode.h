/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
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
   * <p>SMS Outbound Mode</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/SmsOutboundMode">AWS
   * API Reference</a></p>
   */
  class SmsOutboundMode
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API SmsOutboundMode() = default;
    AWS_CONNECTCAMPAIGNSV2_API SmsOutboundMode(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API SmsOutboundMode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const AgentlessConfig& GetAgentless() const { return m_agentless; }
    inline bool AgentlessHasBeenSet() const { return m_agentlessHasBeenSet; }
    template<typename AgentlessT = AgentlessConfig>
    void SetAgentless(AgentlessT&& value) { m_agentlessHasBeenSet = true; m_agentless = std::forward<AgentlessT>(value); }
    template<typename AgentlessT = AgentlessConfig>
    SmsOutboundMode& WithAgentless(AgentlessT&& value) { SetAgentless(std::forward<AgentlessT>(value)); return *this;}
    ///@}
  private:

    AgentlessConfig m_agentless;
    bool m_agentlessHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
