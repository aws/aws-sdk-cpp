﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/WorkloadIdentityDetails.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agentcore-control/model/AgentStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace BedrockAgentCoreControl
{
namespace Model
{
  class UpdateAgentRuntimeResult
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API UpdateAgentRuntimeResult() = default;
    AWS_BEDROCKAGENTCORECONTROL_API UpdateAgentRuntimeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORECONTROL_API UpdateAgentRuntimeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the updated agent runtime.</p>
     */
    inline const Aws::String& GetAgentRuntimeArn() const { return m_agentRuntimeArn; }
    template<typename AgentRuntimeArnT = Aws::String>
    void SetAgentRuntimeArn(AgentRuntimeArnT&& value) { m_agentRuntimeArnHasBeenSet = true; m_agentRuntimeArn = std::forward<AgentRuntimeArnT>(value); }
    template<typename AgentRuntimeArnT = Aws::String>
    UpdateAgentRuntimeResult& WithAgentRuntimeArn(AgentRuntimeArnT&& value) { SetAgentRuntimeArn(std::forward<AgentRuntimeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the updated agent runtime.</p>
     */
    inline const Aws::String& GetAgentRuntimeId() const { return m_agentRuntimeId; }
    template<typename AgentRuntimeIdT = Aws::String>
    void SetAgentRuntimeId(AgentRuntimeIdT&& value) { m_agentRuntimeIdHasBeenSet = true; m_agentRuntimeId = std::forward<AgentRuntimeIdT>(value); }
    template<typename AgentRuntimeIdT = Aws::String>
    UpdateAgentRuntimeResult& WithAgentRuntimeId(AgentRuntimeIdT&& value) { SetAgentRuntimeId(std::forward<AgentRuntimeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workload identity details for the updated agent runtime.</p>
     */
    inline const WorkloadIdentityDetails& GetWorkloadIdentityDetails() const { return m_workloadIdentityDetails; }
    template<typename WorkloadIdentityDetailsT = WorkloadIdentityDetails>
    void SetWorkloadIdentityDetails(WorkloadIdentityDetailsT&& value) { m_workloadIdentityDetailsHasBeenSet = true; m_workloadIdentityDetails = std::forward<WorkloadIdentityDetailsT>(value); }
    template<typename WorkloadIdentityDetailsT = WorkloadIdentityDetails>
    UpdateAgentRuntimeResult& WithWorkloadIdentityDetails(WorkloadIdentityDetailsT&& value) { SetWorkloadIdentityDetails(std::forward<WorkloadIdentityDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the updated agent runtime.</p>
     */
    inline const Aws::String& GetAgentRuntimeVersion() const { return m_agentRuntimeVersion; }
    template<typename AgentRuntimeVersionT = Aws::String>
    void SetAgentRuntimeVersion(AgentRuntimeVersionT&& value) { m_agentRuntimeVersionHasBeenSet = true; m_agentRuntimeVersion = std::forward<AgentRuntimeVersionT>(value); }
    template<typename AgentRuntimeVersionT = Aws::String>
    UpdateAgentRuntimeResult& WithAgentRuntimeVersion(AgentRuntimeVersionT&& value) { SetAgentRuntimeVersion(std::forward<AgentRuntimeVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the agent runtime was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    UpdateAgentRuntimeResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the agent runtime was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    UpdateAgentRuntimeResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the updated agent runtime.</p>
     */
    inline AgentStatus GetStatus() const { return m_status; }
    inline void SetStatus(AgentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateAgentRuntimeResult& WithStatus(AgentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAgentRuntimeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentRuntimeArn;
    bool m_agentRuntimeArnHasBeenSet = false;

    Aws::String m_agentRuntimeId;
    bool m_agentRuntimeIdHasBeenSet = false;

    WorkloadIdentityDetails m_workloadIdentityDetails;
    bool m_workloadIdentityDetailsHasBeenSet = false;

    Aws::String m_agentRuntimeVersion;
    bool m_agentRuntimeVersionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    AgentStatus m_status{AgentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
