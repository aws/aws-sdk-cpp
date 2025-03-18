/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/GroundStationRequest.h>
#include <aws/groundstation/model/AgentDetails.h>
#include <aws/groundstation/model/DiscoveryData.h>
#include <utility>

namespace Aws
{
namespace GroundStation
{
namespace Model
{

  /**
   */
  class RegisterAgentRequest : public GroundStationRequest
  {
  public:
    AWS_GROUNDSTATION_API RegisterAgentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterAgent"; }

    AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Detailed information about the agent being registered.</p>
     */
    inline const AgentDetails& GetAgentDetails() const { return m_agentDetails; }
    inline bool AgentDetailsHasBeenSet() const { return m_agentDetailsHasBeenSet; }
    template<typename AgentDetailsT = AgentDetails>
    void SetAgentDetails(AgentDetailsT&& value) { m_agentDetailsHasBeenSet = true; m_agentDetails = std::forward<AgentDetailsT>(value); }
    template<typename AgentDetailsT = AgentDetails>
    RegisterAgentRequest& WithAgentDetails(AgentDetailsT&& value) { SetAgentDetails(std::forward<AgentDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data for associating an agent with the capabilities it is managing.</p>
     */
    inline const DiscoveryData& GetDiscoveryData() const { return m_discoveryData; }
    inline bool DiscoveryDataHasBeenSet() const { return m_discoveryDataHasBeenSet; }
    template<typename DiscoveryDataT = DiscoveryData>
    void SetDiscoveryData(DiscoveryDataT&& value) { m_discoveryDataHasBeenSet = true; m_discoveryData = std::forward<DiscoveryDataT>(value); }
    template<typename DiscoveryDataT = DiscoveryData>
    RegisterAgentRequest& WithDiscoveryData(DiscoveryDataT&& value) { SetDiscoveryData(std::forward<DiscoveryDataT>(value)); return *this;}
    ///@}
  private:

    AgentDetails m_agentDetails;
    bool m_agentDetailsHasBeenSet = false;

    DiscoveryData m_discoveryData;
    bool m_discoveryDataHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
