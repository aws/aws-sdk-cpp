/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/CodeGuruProfilerRequest.h>
#include <aws/codeguruprofiler/model/AgentOrchestrationConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p>The structure representing the updateProfilingGroupRequest.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/UpdateProfilingGroupRequest">AWS
   * API Reference</a></p>
   */
  class UpdateProfilingGroupRequest : public CodeGuruProfilerRequest
  {
  public:
    AWS_CODEGURUPROFILER_API UpdateProfilingGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProfilingGroup"; }

    AWS_CODEGURUPROFILER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> Specifies whether profiling is enabled or disabled for a profiling group.
     * </p>
     */
    inline const AgentOrchestrationConfig& GetAgentOrchestrationConfig() const { return m_agentOrchestrationConfig; }
    inline bool AgentOrchestrationConfigHasBeenSet() const { return m_agentOrchestrationConfigHasBeenSet; }
    template<typename AgentOrchestrationConfigT = AgentOrchestrationConfig>
    void SetAgentOrchestrationConfig(AgentOrchestrationConfigT&& value) { m_agentOrchestrationConfigHasBeenSet = true; m_agentOrchestrationConfig = std::forward<AgentOrchestrationConfigT>(value); }
    template<typename AgentOrchestrationConfigT = AgentOrchestrationConfig>
    UpdateProfilingGroupRequest& WithAgentOrchestrationConfig(AgentOrchestrationConfigT&& value) { SetAgentOrchestrationConfig(std::forward<AgentOrchestrationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the profiling group to update.</p>
     */
    inline const Aws::String& GetProfilingGroupName() const { return m_profilingGroupName; }
    inline bool ProfilingGroupNameHasBeenSet() const { return m_profilingGroupNameHasBeenSet; }
    template<typename ProfilingGroupNameT = Aws::String>
    void SetProfilingGroupName(ProfilingGroupNameT&& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = std::forward<ProfilingGroupNameT>(value); }
    template<typename ProfilingGroupNameT = Aws::String>
    UpdateProfilingGroupRequest& WithProfilingGroupName(ProfilingGroupNameT&& value) { SetProfilingGroupName(std::forward<ProfilingGroupNameT>(value)); return *this;}
    ///@}
  private:

    AgentOrchestrationConfig m_agentOrchestrationConfig;
    bool m_agentOrchestrationConfigHasBeenSet = false;

    Aws::String m_profilingGroupName;
    bool m_profilingGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
