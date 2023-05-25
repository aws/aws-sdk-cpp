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
    AWS_GROUNDSTATION_API RegisterAgentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterAgent"; }

    AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;


    /**
     * <p>Detailed information about the agent being registered.</p>
     */
    inline const AgentDetails& GetAgentDetails() const{ return m_agentDetails; }

    /**
     * <p>Detailed information about the agent being registered.</p>
     */
    inline bool AgentDetailsHasBeenSet() const { return m_agentDetailsHasBeenSet; }

    /**
     * <p>Detailed information about the agent being registered.</p>
     */
    inline void SetAgentDetails(const AgentDetails& value) { m_agentDetailsHasBeenSet = true; m_agentDetails = value; }

    /**
     * <p>Detailed information about the agent being registered.</p>
     */
    inline void SetAgentDetails(AgentDetails&& value) { m_agentDetailsHasBeenSet = true; m_agentDetails = std::move(value); }

    /**
     * <p>Detailed information about the agent being registered.</p>
     */
    inline RegisterAgentRequest& WithAgentDetails(const AgentDetails& value) { SetAgentDetails(value); return *this;}

    /**
     * <p>Detailed information about the agent being registered.</p>
     */
    inline RegisterAgentRequest& WithAgentDetails(AgentDetails&& value) { SetAgentDetails(std::move(value)); return *this;}


    /**
     * <p>Data for associating an agent with the capabilities it is managing.</p>
     */
    inline const DiscoveryData& GetDiscoveryData() const{ return m_discoveryData; }

    /**
     * <p>Data for associating an agent with the capabilities it is managing.</p>
     */
    inline bool DiscoveryDataHasBeenSet() const { return m_discoveryDataHasBeenSet; }

    /**
     * <p>Data for associating an agent with the capabilities it is managing.</p>
     */
    inline void SetDiscoveryData(const DiscoveryData& value) { m_discoveryDataHasBeenSet = true; m_discoveryData = value; }

    /**
     * <p>Data for associating an agent with the capabilities it is managing.</p>
     */
    inline void SetDiscoveryData(DiscoveryData&& value) { m_discoveryDataHasBeenSet = true; m_discoveryData = std::move(value); }

    /**
     * <p>Data for associating an agent with the capabilities it is managing.</p>
     */
    inline RegisterAgentRequest& WithDiscoveryData(const DiscoveryData& value) { SetDiscoveryData(value); return *this;}

    /**
     * <p>Data for associating an agent with the capabilities it is managing.</p>
     */
    inline RegisterAgentRequest& WithDiscoveryData(DiscoveryData&& value) { SetDiscoveryData(std::move(value)); return *this;}

  private:

    AgentDetails m_agentDetails;
    bool m_agentDetailsHasBeenSet = false;

    DiscoveryData m_discoveryData;
    bool m_discoveryDataHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
