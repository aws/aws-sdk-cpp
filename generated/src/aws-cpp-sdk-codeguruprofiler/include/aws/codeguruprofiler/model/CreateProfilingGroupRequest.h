/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/codeguruprofiler/CodeGuruProfilerRequest.h>
#include <aws/codeguruprofiler/model/AgentOrchestrationConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguruprofiler/model/ComputePlatform.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p>The structure representing the createProfiliingGroupRequest.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/CreateProfilingGroupRequest">AWS
   * API Reference</a></p>
   */
  class CreateProfilingGroupRequest : public CodeGuruProfilerRequest
  {
  public:
    AWS_CODEGURUPROFILER_API CreateProfilingGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProfilingGroup"; }

    AWS_CODEGURUPROFILER_API Aws::String SerializePayload() const override;

    AWS_CODEGURUPROFILER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> Specifies whether profiling is enabled or disabled for the created profiling
     * group. </p>
     */
    inline const AgentOrchestrationConfig& GetAgentOrchestrationConfig() const{ return m_agentOrchestrationConfig; }

    /**
     * <p> Specifies whether profiling is enabled or disabled for the created profiling
     * group. </p>
     */
    inline bool AgentOrchestrationConfigHasBeenSet() const { return m_agentOrchestrationConfigHasBeenSet; }

    /**
     * <p> Specifies whether profiling is enabled or disabled for the created profiling
     * group. </p>
     */
    inline void SetAgentOrchestrationConfig(const AgentOrchestrationConfig& value) { m_agentOrchestrationConfigHasBeenSet = true; m_agentOrchestrationConfig = value; }

    /**
     * <p> Specifies whether profiling is enabled or disabled for the created profiling
     * group. </p>
     */
    inline void SetAgentOrchestrationConfig(AgentOrchestrationConfig&& value) { m_agentOrchestrationConfigHasBeenSet = true; m_agentOrchestrationConfig = std::move(value); }

    /**
     * <p> Specifies whether profiling is enabled or disabled for the created profiling
     * group. </p>
     */
    inline CreateProfilingGroupRequest& WithAgentOrchestrationConfig(const AgentOrchestrationConfig& value) { SetAgentOrchestrationConfig(value); return *this;}

    /**
     * <p> Specifies whether profiling is enabled or disabled for the created profiling
     * group. </p>
     */
    inline CreateProfilingGroupRequest& WithAgentOrchestrationConfig(AgentOrchestrationConfig&& value) { SetAgentOrchestrationConfig(std::move(value)); return *this;}


    /**
     * <p> Amazon CodeGuru Profiler uses this universally unique identifier (UUID) to
     * prevent the accidental creation of duplicate profiling groups if there are
     * failures and retries. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p> Amazon CodeGuru Profiler uses this universally unique identifier (UUID) to
     * prevent the accidental creation of duplicate profiling groups if there are
     * failures and retries. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p> Amazon CodeGuru Profiler uses this universally unique identifier (UUID) to
     * prevent the accidental creation of duplicate profiling groups if there are
     * failures and retries. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p> Amazon CodeGuru Profiler uses this universally unique identifier (UUID) to
     * prevent the accidental creation of duplicate profiling groups if there are
     * failures and retries. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p> Amazon CodeGuru Profiler uses this universally unique identifier (UUID) to
     * prevent the accidental creation of duplicate profiling groups if there are
     * failures and retries. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p> Amazon CodeGuru Profiler uses this universally unique identifier (UUID) to
     * prevent the accidental creation of duplicate profiling groups if there are
     * failures and retries. </p>
     */
    inline CreateProfilingGroupRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p> Amazon CodeGuru Profiler uses this universally unique identifier (UUID) to
     * prevent the accidental creation of duplicate profiling groups if there are
     * failures and retries. </p>
     */
    inline CreateProfilingGroupRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p> Amazon CodeGuru Profiler uses this universally unique identifier (UUID) to
     * prevent the accidental creation of duplicate profiling groups if there are
     * failures and retries. </p>
     */
    inline CreateProfilingGroupRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p> The compute platform of the profiling group. Use <code>AWSLambda</code> if
     * your application runs on AWS Lambda. Use <code>Default</code> if your
     * application runs on a compute platform that is not AWS Lambda, such an Amazon
     * EC2 instance, an on-premises server, or a different platform. If not specified,
     * <code>Default</code> is used. </p>
     */
    inline const ComputePlatform& GetComputePlatform() const{ return m_computePlatform; }

    /**
     * <p> The compute platform of the profiling group. Use <code>AWSLambda</code> if
     * your application runs on AWS Lambda. Use <code>Default</code> if your
     * application runs on a compute platform that is not AWS Lambda, such an Amazon
     * EC2 instance, an on-premises server, or a different platform. If not specified,
     * <code>Default</code> is used. </p>
     */
    inline bool ComputePlatformHasBeenSet() const { return m_computePlatformHasBeenSet; }

    /**
     * <p> The compute platform of the profiling group. Use <code>AWSLambda</code> if
     * your application runs on AWS Lambda. Use <code>Default</code> if your
     * application runs on a compute platform that is not AWS Lambda, such an Amazon
     * EC2 instance, an on-premises server, or a different platform. If not specified,
     * <code>Default</code> is used. </p>
     */
    inline void SetComputePlatform(const ComputePlatform& value) { m_computePlatformHasBeenSet = true; m_computePlatform = value; }

    /**
     * <p> The compute platform of the profiling group. Use <code>AWSLambda</code> if
     * your application runs on AWS Lambda. Use <code>Default</code> if your
     * application runs on a compute platform that is not AWS Lambda, such an Amazon
     * EC2 instance, an on-premises server, or a different platform. If not specified,
     * <code>Default</code> is used. </p>
     */
    inline void SetComputePlatform(ComputePlatform&& value) { m_computePlatformHasBeenSet = true; m_computePlatform = std::move(value); }

    /**
     * <p> The compute platform of the profiling group. Use <code>AWSLambda</code> if
     * your application runs on AWS Lambda. Use <code>Default</code> if your
     * application runs on a compute platform that is not AWS Lambda, such an Amazon
     * EC2 instance, an on-premises server, or a different platform. If not specified,
     * <code>Default</code> is used. </p>
     */
    inline CreateProfilingGroupRequest& WithComputePlatform(const ComputePlatform& value) { SetComputePlatform(value); return *this;}

    /**
     * <p> The compute platform of the profiling group. Use <code>AWSLambda</code> if
     * your application runs on AWS Lambda. Use <code>Default</code> if your
     * application runs on a compute platform that is not AWS Lambda, such an Amazon
     * EC2 instance, an on-premises server, or a different platform. If not specified,
     * <code>Default</code> is used. </p>
     */
    inline CreateProfilingGroupRequest& WithComputePlatform(ComputePlatform&& value) { SetComputePlatform(std::move(value)); return *this;}


    /**
     * <p>The name of the profiling group to create.</p>
     */
    inline const Aws::String& GetProfilingGroupName() const{ return m_profilingGroupName; }

    /**
     * <p>The name of the profiling group to create.</p>
     */
    inline bool ProfilingGroupNameHasBeenSet() const { return m_profilingGroupNameHasBeenSet; }

    /**
     * <p>The name of the profiling group to create.</p>
     */
    inline void SetProfilingGroupName(const Aws::String& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = value; }

    /**
     * <p>The name of the profiling group to create.</p>
     */
    inline void SetProfilingGroupName(Aws::String&& value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName = std::move(value); }

    /**
     * <p>The name of the profiling group to create.</p>
     */
    inline void SetProfilingGroupName(const char* value) { m_profilingGroupNameHasBeenSet = true; m_profilingGroupName.assign(value); }

    /**
     * <p>The name of the profiling group to create.</p>
     */
    inline CreateProfilingGroupRequest& WithProfilingGroupName(const Aws::String& value) { SetProfilingGroupName(value); return *this;}

    /**
     * <p>The name of the profiling group to create.</p>
     */
    inline CreateProfilingGroupRequest& WithProfilingGroupName(Aws::String&& value) { SetProfilingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the profiling group to create.</p>
     */
    inline CreateProfilingGroupRequest& WithProfilingGroupName(const char* value) { SetProfilingGroupName(value); return *this;}


    /**
     * <p> A list of tags to add to the created profiling group. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> A list of tags to add to the created profiling group. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> A list of tags to add to the created profiling group. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> A list of tags to add to the created profiling group. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> A list of tags to add to the created profiling group. </p>
     */
    inline CreateProfilingGroupRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> A list of tags to add to the created profiling group. </p>
     */
    inline CreateProfilingGroupRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> A list of tags to add to the created profiling group. </p>
     */
    inline CreateProfilingGroupRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> A list of tags to add to the created profiling group. </p>
     */
    inline CreateProfilingGroupRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> A list of tags to add to the created profiling group. </p>
     */
    inline CreateProfilingGroupRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A list of tags to add to the created profiling group. </p>
     */
    inline CreateProfilingGroupRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> A list of tags to add to the created profiling group. </p>
     */
    inline CreateProfilingGroupRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A list of tags to add to the created profiling group. </p>
     */
    inline CreateProfilingGroupRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> A list of tags to add to the created profiling group. </p>
     */
    inline CreateProfilingGroupRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    AgentOrchestrationConfig m_agentOrchestrationConfig;
    bool m_agentOrchestrationConfigHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    ComputePlatform m_computePlatform;
    bool m_computePlatformHasBeenSet = false;

    Aws::String m_profilingGroupName;
    bool m_profilingGroupNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
