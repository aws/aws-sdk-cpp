/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/model/AgentOrchestrationConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguruprofiler/model/ComputePlatform.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codeguruprofiler/model/ProfilingStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p> Contains information about a profiling group. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ProfilingGroupDescription">AWS
   * API Reference</a></p>
   */
  class ProfilingGroupDescription
  {
  public:
    AWS_CODEGURUPROFILER_API ProfilingGroupDescription() = default;
    AWS_CODEGURUPROFILER_API ProfilingGroupDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API ProfilingGroupDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> An <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_AgentOrchestrationConfig.html">
     * <code>AgentOrchestrationConfig</code> </a> object that indicates if the
     * profiling group is enabled for profiled or not. </p>
     */
    inline const AgentOrchestrationConfig& GetAgentOrchestrationConfig() const { return m_agentOrchestrationConfig; }
    inline bool AgentOrchestrationConfigHasBeenSet() const { return m_agentOrchestrationConfigHasBeenSet; }
    template<typename AgentOrchestrationConfigT = AgentOrchestrationConfig>
    void SetAgentOrchestrationConfig(AgentOrchestrationConfigT&& value) { m_agentOrchestrationConfigHasBeenSet = true; m_agentOrchestrationConfig = std::forward<AgentOrchestrationConfigT>(value); }
    template<typename AgentOrchestrationConfigT = AgentOrchestrationConfig>
    ProfilingGroupDescription& WithAgentOrchestrationConfig(AgentOrchestrationConfigT&& value) { SetAgentOrchestrationConfig(std::forward<AgentOrchestrationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) identifying the profiling group resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ProfilingGroupDescription& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The compute platform of the profiling group. If it is set to
     * <code>AWSLambda</code>, then the profiled application runs on AWS Lambda. If it
     * is set to <code>Default</code>, then the profiled application runs on a compute
     * platform that is not AWS Lambda, such an Amazon EC2 instance, an on-premises
     * server, or a different platform. The default is <code>Default</code>. </p>
     */
    inline ComputePlatform GetComputePlatform() const { return m_computePlatform; }
    inline bool ComputePlatformHasBeenSet() const { return m_computePlatformHasBeenSet; }
    inline void SetComputePlatform(ComputePlatform value) { m_computePlatformHasBeenSet = true; m_computePlatform = value; }
    inline ProfilingGroupDescription& WithComputePlatform(ComputePlatform value) { SetComputePlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the profiling group was created. Specify using the ISO 8601
     * format. For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June
     * 1, 2020 1:15:02 PM UTC. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ProfilingGroupDescription& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the profiling group.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ProfilingGroupDescription& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingStatus.html">
     * <code>ProfilingStatus</code> </a> object that includes information about the
     * last time a profile agent pinged back, the last time a profile was received, and
     * the aggregation period and start time for the most recent aggregated profile.
     * </p>
     */
    inline const ProfilingStatus& GetProfilingStatus() const { return m_profilingStatus; }
    inline bool ProfilingStatusHasBeenSet() const { return m_profilingStatusHasBeenSet; }
    template<typename ProfilingStatusT = ProfilingStatus>
    void SetProfilingStatus(ProfilingStatusT&& value) { m_profilingStatusHasBeenSet = true; m_profilingStatus = std::forward<ProfilingStatusT>(value); }
    template<typename ProfilingStatusT = ProfilingStatus>
    ProfilingGroupDescription& WithProfilingStatus(ProfilingStatusT&& value) { SetProfilingStatus(std::forward<ProfilingStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of the tags that belong to this profiling group. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    ProfilingGroupDescription& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ProfilingGroupDescription& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> The date and time when the profiling group was last updated. Specify using
     * the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    ProfilingGroupDescription& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    AgentOrchestrationConfig m_agentOrchestrationConfig;
    bool m_agentOrchestrationConfigHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ComputePlatform m_computePlatform{ComputePlatform::NOT_SET};
    bool m_computePlatformHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ProfilingStatus m_profilingStatus;
    bool m_profilingStatusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
