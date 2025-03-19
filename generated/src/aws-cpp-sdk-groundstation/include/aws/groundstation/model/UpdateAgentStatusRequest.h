/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/GroundStationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/AggregateStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/groundstation/model/ComponentStatusData.h>
#include <utility>

namespace Aws
{
namespace GroundStation
{
namespace Model
{

  /**
   */
  class UpdateAgentStatusRequest : public GroundStationRequest
  {
  public:
    AWS_GROUNDSTATION_API UpdateAgentStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAgentStatus"; }

    AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>UUID of agent to update.</p>
     */
    inline const Aws::String& GetAgentId() const { return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    template<typename AgentIdT = Aws::String>
    void SetAgentId(AgentIdT&& value) { m_agentIdHasBeenSet = true; m_agentId = std::forward<AgentIdT>(value); }
    template<typename AgentIdT = Aws::String>
    UpdateAgentStatusRequest& WithAgentId(AgentIdT&& value) { SetAgentId(std::forward<AgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Aggregate status for agent.</p>
     */
    inline const AggregateStatus& GetAggregateStatus() const { return m_aggregateStatus; }
    inline bool AggregateStatusHasBeenSet() const { return m_aggregateStatusHasBeenSet; }
    template<typename AggregateStatusT = AggregateStatus>
    void SetAggregateStatus(AggregateStatusT&& value) { m_aggregateStatusHasBeenSet = true; m_aggregateStatus = std::forward<AggregateStatusT>(value); }
    template<typename AggregateStatusT = AggregateStatus>
    UpdateAgentStatusRequest& WithAggregateStatus(AggregateStatusT&& value) { SetAggregateStatus(std::forward<AggregateStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of component statuses for agent.</p>
     */
    inline const Aws::Vector<ComponentStatusData>& GetComponentStatuses() const { return m_componentStatuses; }
    inline bool ComponentStatusesHasBeenSet() const { return m_componentStatusesHasBeenSet; }
    template<typename ComponentStatusesT = Aws::Vector<ComponentStatusData>>
    void SetComponentStatuses(ComponentStatusesT&& value) { m_componentStatusesHasBeenSet = true; m_componentStatuses = std::forward<ComponentStatusesT>(value); }
    template<typename ComponentStatusesT = Aws::Vector<ComponentStatusData>>
    UpdateAgentStatusRequest& WithComponentStatuses(ComponentStatusesT&& value) { SetComponentStatuses(std::forward<ComponentStatusesT>(value)); return *this;}
    template<typename ComponentStatusesT = ComponentStatusData>
    UpdateAgentStatusRequest& AddComponentStatuses(ComponentStatusesT&& value) { m_componentStatusesHasBeenSet = true; m_componentStatuses.emplace_back(std::forward<ComponentStatusesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>GUID of agent task.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    UpdateAgentStatusRequest& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    AggregateStatus m_aggregateStatus;
    bool m_aggregateStatusHasBeenSet = false;

    Aws::Vector<ComponentStatusData> m_componentStatuses;
    bool m_componentStatusesHasBeenSet = false;

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
