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
    AWS_GROUNDSTATION_API UpdateAgentStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAgentStatus"; }

    AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;


    /**
     * <p>UUID of agent to update.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p>UUID of agent to update.</p>
     */
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }

    /**
     * <p>UUID of agent to update.</p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    /**
     * <p>UUID of agent to update.</p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }

    /**
     * <p>UUID of agent to update.</p>
     */
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    /**
     * <p>UUID of agent to update.</p>
     */
    inline UpdateAgentStatusRequest& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>UUID of agent to update.</p>
     */
    inline UpdateAgentStatusRequest& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p>UUID of agent to update.</p>
     */
    inline UpdateAgentStatusRequest& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    /**
     * <p>Aggregate status for agent.</p>
     */
    inline const AggregateStatus& GetAggregateStatus() const{ return m_aggregateStatus; }

    /**
     * <p>Aggregate status for agent.</p>
     */
    inline bool AggregateStatusHasBeenSet() const { return m_aggregateStatusHasBeenSet; }

    /**
     * <p>Aggregate status for agent.</p>
     */
    inline void SetAggregateStatus(const AggregateStatus& value) { m_aggregateStatusHasBeenSet = true; m_aggregateStatus = value; }

    /**
     * <p>Aggregate status for agent.</p>
     */
    inline void SetAggregateStatus(AggregateStatus&& value) { m_aggregateStatusHasBeenSet = true; m_aggregateStatus = std::move(value); }

    /**
     * <p>Aggregate status for agent.</p>
     */
    inline UpdateAgentStatusRequest& WithAggregateStatus(const AggregateStatus& value) { SetAggregateStatus(value); return *this;}

    /**
     * <p>Aggregate status for agent.</p>
     */
    inline UpdateAgentStatusRequest& WithAggregateStatus(AggregateStatus&& value) { SetAggregateStatus(std::move(value)); return *this;}


    /**
     * <p>List of component statuses for agent.</p>
     */
    inline const Aws::Vector<ComponentStatusData>& GetComponentStatuses() const{ return m_componentStatuses; }

    /**
     * <p>List of component statuses for agent.</p>
     */
    inline bool ComponentStatusesHasBeenSet() const { return m_componentStatusesHasBeenSet; }

    /**
     * <p>List of component statuses for agent.</p>
     */
    inline void SetComponentStatuses(const Aws::Vector<ComponentStatusData>& value) { m_componentStatusesHasBeenSet = true; m_componentStatuses = value; }

    /**
     * <p>List of component statuses for agent.</p>
     */
    inline void SetComponentStatuses(Aws::Vector<ComponentStatusData>&& value) { m_componentStatusesHasBeenSet = true; m_componentStatuses = std::move(value); }

    /**
     * <p>List of component statuses for agent.</p>
     */
    inline UpdateAgentStatusRequest& WithComponentStatuses(const Aws::Vector<ComponentStatusData>& value) { SetComponentStatuses(value); return *this;}

    /**
     * <p>List of component statuses for agent.</p>
     */
    inline UpdateAgentStatusRequest& WithComponentStatuses(Aws::Vector<ComponentStatusData>&& value) { SetComponentStatuses(std::move(value)); return *this;}

    /**
     * <p>List of component statuses for agent.</p>
     */
    inline UpdateAgentStatusRequest& AddComponentStatuses(const ComponentStatusData& value) { m_componentStatusesHasBeenSet = true; m_componentStatuses.push_back(value); return *this; }

    /**
     * <p>List of component statuses for agent.</p>
     */
    inline UpdateAgentStatusRequest& AddComponentStatuses(ComponentStatusData&& value) { m_componentStatusesHasBeenSet = true; m_componentStatuses.push_back(std::move(value)); return *this; }


    /**
     * <p>GUID of agent task.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>GUID of agent task.</p>
     */
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }

    /**
     * <p>GUID of agent task.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p>GUID of agent task.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }

    /**
     * <p>GUID of agent task.</p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p>GUID of agent task.</p>
     */
    inline UpdateAgentStatusRequest& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>GUID of agent task.</p>
     */
    inline UpdateAgentStatusRequest& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>GUID of agent task.</p>
     */
    inline UpdateAgentStatusRequest& WithTaskId(const char* value) { SetTaskId(value); return *this;}

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
