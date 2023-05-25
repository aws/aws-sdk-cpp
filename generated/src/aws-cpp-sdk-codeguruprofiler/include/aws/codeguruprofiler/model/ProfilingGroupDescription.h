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
    AWS_CODEGURUPROFILER_API ProfilingGroupDescription();
    AWS_CODEGURUPROFILER_API ProfilingGroupDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API ProfilingGroupDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> An <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_AgentOrchestrationConfig.html">
     * <code>AgentOrchestrationConfig</code> </a> object that indicates if the
     * profiling group is enabled for profiled or not. </p>
     */
    inline const AgentOrchestrationConfig& GetAgentOrchestrationConfig() const{ return m_agentOrchestrationConfig; }

    /**
     * <p> An <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_AgentOrchestrationConfig.html">
     * <code>AgentOrchestrationConfig</code> </a> object that indicates if the
     * profiling group is enabled for profiled or not. </p>
     */
    inline bool AgentOrchestrationConfigHasBeenSet() const { return m_agentOrchestrationConfigHasBeenSet; }

    /**
     * <p> An <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_AgentOrchestrationConfig.html">
     * <code>AgentOrchestrationConfig</code> </a> object that indicates if the
     * profiling group is enabled for profiled or not. </p>
     */
    inline void SetAgentOrchestrationConfig(const AgentOrchestrationConfig& value) { m_agentOrchestrationConfigHasBeenSet = true; m_agentOrchestrationConfig = value; }

    /**
     * <p> An <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_AgentOrchestrationConfig.html">
     * <code>AgentOrchestrationConfig</code> </a> object that indicates if the
     * profiling group is enabled for profiled or not. </p>
     */
    inline void SetAgentOrchestrationConfig(AgentOrchestrationConfig&& value) { m_agentOrchestrationConfigHasBeenSet = true; m_agentOrchestrationConfig = std::move(value); }

    /**
     * <p> An <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_AgentOrchestrationConfig.html">
     * <code>AgentOrchestrationConfig</code> </a> object that indicates if the
     * profiling group is enabled for profiled or not. </p>
     */
    inline ProfilingGroupDescription& WithAgentOrchestrationConfig(const AgentOrchestrationConfig& value) { SetAgentOrchestrationConfig(value); return *this;}

    /**
     * <p> An <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_AgentOrchestrationConfig.html">
     * <code>AgentOrchestrationConfig</code> </a> object that indicates if the
     * profiling group is enabled for profiled or not. </p>
     */
    inline ProfilingGroupDescription& WithAgentOrchestrationConfig(AgentOrchestrationConfig&& value) { SetAgentOrchestrationConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) identifying the profiling group resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) identifying the profiling group resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) identifying the profiling group resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) identifying the profiling group resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) identifying the profiling group resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) identifying the profiling group resource.</p>
     */
    inline ProfilingGroupDescription& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) identifying the profiling group resource.</p>
     */
    inline ProfilingGroupDescription& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) identifying the profiling group resource.</p>
     */
    inline ProfilingGroupDescription& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The compute platform of the profiling group. If it is set to
     * <code>AWSLambda</code>, then the profiled application runs on AWS Lambda. If it
     * is set to <code>Default</code>, then the profiled application runs on a compute
     * platform that is not AWS Lambda, such an Amazon EC2 instance, an on-premises
     * server, or a different platform. The default is <code>Default</code>. </p>
     */
    inline const ComputePlatform& GetComputePlatform() const{ return m_computePlatform; }

    /**
     * <p> The compute platform of the profiling group. If it is set to
     * <code>AWSLambda</code>, then the profiled application runs on AWS Lambda. If it
     * is set to <code>Default</code>, then the profiled application runs on a compute
     * platform that is not AWS Lambda, such an Amazon EC2 instance, an on-premises
     * server, or a different platform. The default is <code>Default</code>. </p>
     */
    inline bool ComputePlatformHasBeenSet() const { return m_computePlatformHasBeenSet; }

    /**
     * <p> The compute platform of the profiling group. If it is set to
     * <code>AWSLambda</code>, then the profiled application runs on AWS Lambda. If it
     * is set to <code>Default</code>, then the profiled application runs on a compute
     * platform that is not AWS Lambda, such an Amazon EC2 instance, an on-premises
     * server, or a different platform. The default is <code>Default</code>. </p>
     */
    inline void SetComputePlatform(const ComputePlatform& value) { m_computePlatformHasBeenSet = true; m_computePlatform = value; }

    /**
     * <p> The compute platform of the profiling group. If it is set to
     * <code>AWSLambda</code>, then the profiled application runs on AWS Lambda. If it
     * is set to <code>Default</code>, then the profiled application runs on a compute
     * platform that is not AWS Lambda, such an Amazon EC2 instance, an on-premises
     * server, or a different platform. The default is <code>Default</code>. </p>
     */
    inline void SetComputePlatform(ComputePlatform&& value) { m_computePlatformHasBeenSet = true; m_computePlatform = std::move(value); }

    /**
     * <p> The compute platform of the profiling group. If it is set to
     * <code>AWSLambda</code>, then the profiled application runs on AWS Lambda. If it
     * is set to <code>Default</code>, then the profiled application runs on a compute
     * platform that is not AWS Lambda, such an Amazon EC2 instance, an on-premises
     * server, or a different platform. The default is <code>Default</code>. </p>
     */
    inline ProfilingGroupDescription& WithComputePlatform(const ComputePlatform& value) { SetComputePlatform(value); return *this;}

    /**
     * <p> The compute platform of the profiling group. If it is set to
     * <code>AWSLambda</code>, then the profiled application runs on AWS Lambda. If it
     * is set to <code>Default</code>, then the profiled application runs on a compute
     * platform that is not AWS Lambda, such an Amazon EC2 instance, an on-premises
     * server, or a different platform. The default is <code>Default</code>. </p>
     */
    inline ProfilingGroupDescription& WithComputePlatform(ComputePlatform&& value) { SetComputePlatform(std::move(value)); return *this;}


    /**
     * <p>The time when the profiling group was created. Specify using the ISO 8601
     * format. For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June
     * 1, 2020 1:15:02 PM UTC. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time when the profiling group was created. Specify using the ISO 8601
     * format. For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June
     * 1, 2020 1:15:02 PM UTC. </p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time when the profiling group was created. Specify using the ISO 8601
     * format. For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June
     * 1, 2020 1:15:02 PM UTC. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time when the profiling group was created. Specify using the ISO 8601
     * format. For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June
     * 1, 2020 1:15:02 PM UTC. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time when the profiling group was created. Specify using the ISO 8601
     * format. For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June
     * 1, 2020 1:15:02 PM UTC. </p>
     */
    inline ProfilingGroupDescription& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time when the profiling group was created. Specify using the ISO 8601
     * format. For example, 2020-06-01T13:15:02.001Z represents 1 millisecond past June
     * 1, 2020 1:15:02 PM UTC. </p>
     */
    inline ProfilingGroupDescription& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The name of the profiling group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the profiling group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the profiling group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the profiling group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the profiling group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the profiling group.</p>
     */
    inline ProfilingGroupDescription& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the profiling group.</p>
     */
    inline ProfilingGroupDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the profiling group.</p>
     */
    inline ProfilingGroupDescription& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingStatus.html">
     * <code>ProfilingStatus</code> </a> object that includes information about the
     * last time a profile agent pinged back, the last time a profile was received, and
     * the aggregation period and start time for the most recent aggregated profile.
     * </p>
     */
    inline const ProfilingStatus& GetProfilingStatus() const{ return m_profilingStatus; }

    /**
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingStatus.html">
     * <code>ProfilingStatus</code> </a> object that includes information about the
     * last time a profile agent pinged back, the last time a profile was received, and
     * the aggregation period and start time for the most recent aggregated profile.
     * </p>
     */
    inline bool ProfilingStatusHasBeenSet() const { return m_profilingStatusHasBeenSet; }

    /**
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingStatus.html">
     * <code>ProfilingStatus</code> </a> object that includes information about the
     * last time a profile agent pinged back, the last time a profile was received, and
     * the aggregation period and start time for the most recent aggregated profile.
     * </p>
     */
    inline void SetProfilingStatus(const ProfilingStatus& value) { m_profilingStatusHasBeenSet = true; m_profilingStatus = value; }

    /**
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingStatus.html">
     * <code>ProfilingStatus</code> </a> object that includes information about the
     * last time a profile agent pinged back, the last time a profile was received, and
     * the aggregation period and start time for the most recent aggregated profile.
     * </p>
     */
    inline void SetProfilingStatus(ProfilingStatus&& value) { m_profilingStatusHasBeenSet = true; m_profilingStatus = std::move(value); }

    /**
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingStatus.html">
     * <code>ProfilingStatus</code> </a> object that includes information about the
     * last time a profile agent pinged back, the last time a profile was received, and
     * the aggregation period and start time for the most recent aggregated profile.
     * </p>
     */
    inline ProfilingGroupDescription& WithProfilingStatus(const ProfilingStatus& value) { SetProfilingStatus(value); return *this;}

    /**
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingStatus.html">
     * <code>ProfilingStatus</code> </a> object that includes information about the
     * last time a profile agent pinged back, the last time a profile was received, and
     * the aggregation period and start time for the most recent aggregated profile.
     * </p>
     */
    inline ProfilingGroupDescription& WithProfilingStatus(ProfilingStatus&& value) { SetProfilingStatus(std::move(value)); return *this;}


    /**
     * <p> A list of the tags that belong to this profiling group. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> A list of the tags that belong to this profiling group. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> A list of the tags that belong to this profiling group. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> A list of the tags that belong to this profiling group. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> A list of the tags that belong to this profiling group. </p>
     */
    inline ProfilingGroupDescription& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> A list of the tags that belong to this profiling group. </p>
     */
    inline ProfilingGroupDescription& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> A list of the tags that belong to this profiling group. </p>
     */
    inline ProfilingGroupDescription& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> A list of the tags that belong to this profiling group. </p>
     */
    inline ProfilingGroupDescription& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> A list of the tags that belong to this profiling group. </p>
     */
    inline ProfilingGroupDescription& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A list of the tags that belong to this profiling group. </p>
     */
    inline ProfilingGroupDescription& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> A list of the tags that belong to this profiling group. </p>
     */
    inline ProfilingGroupDescription& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A list of the tags that belong to this profiling group. </p>
     */
    inline ProfilingGroupDescription& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> A list of the tags that belong to this profiling group. </p>
     */
    inline ProfilingGroupDescription& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p> The date and time when the profiling group was last updated. Specify using
     * the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p> The date and time when the profiling group was last updated. Specify using
     * the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p> The date and time when the profiling group was last updated. Specify using
     * the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p> The date and time when the profiling group was last updated. Specify using
     * the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p> The date and time when the profiling group was last updated. Specify using
     * the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline ProfilingGroupDescription& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p> The date and time when the profiling group was last updated. Specify using
     * the ISO 8601 format. For example, 2020-06-01T13:15:02.001Z represents 1
     * millisecond past June 1, 2020 1:15:02 PM UTC. </p>
     */
    inline ProfilingGroupDescription& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    AgentOrchestrationConfig m_agentOrchestrationConfig;
    bool m_agentOrchestrationConfigHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ComputePlatform m_computePlatform;
    bool m_computePlatformHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ProfilingStatus m_profilingStatus;
    bool m_profilingStatusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
