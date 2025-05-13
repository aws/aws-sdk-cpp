/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/EMRContainersRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/model/JobDriver.h>
#include <aws/emr-containers/model/ConfigurationOverrides.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/emr-containers/model/RetryPolicyConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

  /**
   */
  class StartJobRunRequest : public EMRContainersRequest
  {
  public:
    AWS_EMRCONTAINERS_API StartJobRunRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartJobRun"; }

    AWS_EMRCONTAINERS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the job run.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StartJobRunRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The virtual cluster ID for which the job run request is submitted.</p>
     */
    inline const Aws::String& GetVirtualClusterId() const { return m_virtualClusterId; }
    inline bool VirtualClusterIdHasBeenSet() const { return m_virtualClusterIdHasBeenSet; }
    template<typename VirtualClusterIdT = Aws::String>
    void SetVirtualClusterId(VirtualClusterIdT&& value) { m_virtualClusterIdHasBeenSet = true; m_virtualClusterId = std::forward<VirtualClusterIdT>(value); }
    template<typename VirtualClusterIdT = Aws::String>
    StartJobRunRequest& WithVirtualClusterId(VirtualClusterIdT&& value) { SetVirtualClusterId(std::forward<VirtualClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client idempotency token of the job run request. </p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    StartJobRunRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution role ARN for the job run.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    StartJobRunRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EMR release version to use for the job run.</p>
     */
    inline const Aws::String& GetReleaseLabel() const { return m_releaseLabel; }
    inline bool ReleaseLabelHasBeenSet() const { return m_releaseLabelHasBeenSet; }
    template<typename ReleaseLabelT = Aws::String>
    void SetReleaseLabel(ReleaseLabelT&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::forward<ReleaseLabelT>(value); }
    template<typename ReleaseLabelT = Aws::String>
    StartJobRunRequest& WithReleaseLabel(ReleaseLabelT&& value) { SetReleaseLabel(std::forward<ReleaseLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job driver for the job run.</p>
     */
    inline const JobDriver& GetJobDriver() const { return m_jobDriver; }
    inline bool JobDriverHasBeenSet() const { return m_jobDriverHasBeenSet; }
    template<typename JobDriverT = JobDriver>
    void SetJobDriver(JobDriverT&& value) { m_jobDriverHasBeenSet = true; m_jobDriver = std::forward<JobDriverT>(value); }
    template<typename JobDriverT = JobDriver>
    StartJobRunRequest& WithJobDriver(JobDriverT&& value) { SetJobDriver(std::forward<JobDriverT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration overrides for the job run.</p>
     */
    inline const ConfigurationOverrides& GetConfigurationOverrides() const { return m_configurationOverrides; }
    inline bool ConfigurationOverridesHasBeenSet() const { return m_configurationOverridesHasBeenSet; }
    template<typename ConfigurationOverridesT = ConfigurationOverrides>
    void SetConfigurationOverrides(ConfigurationOverridesT&& value) { m_configurationOverridesHasBeenSet = true; m_configurationOverrides = std::forward<ConfigurationOverridesT>(value); }
    template<typename ConfigurationOverridesT = ConfigurationOverrides>
    StartJobRunRequest& WithConfigurationOverrides(ConfigurationOverridesT&& value) { SetConfigurationOverrides(std::forward<ConfigurationOverridesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to job runs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    StartJobRunRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    StartJobRunRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The job template ID to be used to start the job run.</p>
     */
    inline const Aws::String& GetJobTemplateId() const { return m_jobTemplateId; }
    inline bool JobTemplateIdHasBeenSet() const { return m_jobTemplateIdHasBeenSet; }
    template<typename JobTemplateIdT = Aws::String>
    void SetJobTemplateId(JobTemplateIdT&& value) { m_jobTemplateIdHasBeenSet = true; m_jobTemplateId = std::forward<JobTemplateIdT>(value); }
    template<typename JobTemplateIdT = Aws::String>
    StartJobRunRequest& WithJobTemplateId(JobTemplateIdT&& value) { SetJobTemplateId(std::forward<JobTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values of job template parameters to start a job run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetJobTemplateParameters() const { return m_jobTemplateParameters; }
    inline bool JobTemplateParametersHasBeenSet() const { return m_jobTemplateParametersHasBeenSet; }
    template<typename JobTemplateParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetJobTemplateParameters(JobTemplateParametersT&& value) { m_jobTemplateParametersHasBeenSet = true; m_jobTemplateParameters = std::forward<JobTemplateParametersT>(value); }
    template<typename JobTemplateParametersT = Aws::Map<Aws::String, Aws::String>>
    StartJobRunRequest& WithJobTemplateParameters(JobTemplateParametersT&& value) { SetJobTemplateParameters(std::forward<JobTemplateParametersT>(value)); return *this;}
    template<typename JobTemplateParametersKeyT = Aws::String, typename JobTemplateParametersValueT = Aws::String>
    StartJobRunRequest& AddJobTemplateParameters(JobTemplateParametersKeyT&& key, JobTemplateParametersValueT&& value) {
      m_jobTemplateParametersHasBeenSet = true; m_jobTemplateParameters.emplace(std::forward<JobTemplateParametersKeyT>(key), std::forward<JobTemplateParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The retry policy configuration for the job run.</p>
     */
    inline const RetryPolicyConfiguration& GetRetryPolicyConfiguration() const { return m_retryPolicyConfiguration; }
    inline bool RetryPolicyConfigurationHasBeenSet() const { return m_retryPolicyConfigurationHasBeenSet; }
    template<typename RetryPolicyConfigurationT = RetryPolicyConfiguration>
    void SetRetryPolicyConfiguration(RetryPolicyConfigurationT&& value) { m_retryPolicyConfigurationHasBeenSet = true; m_retryPolicyConfiguration = std::forward<RetryPolicyConfigurationT>(value); }
    template<typename RetryPolicyConfigurationT = RetryPolicyConfiguration>
    StartJobRunRequest& WithRetryPolicyConfiguration(RetryPolicyConfigurationT&& value) { SetRetryPolicyConfiguration(std::forward<RetryPolicyConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_virtualClusterId;
    bool m_virtualClusterIdHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Aws::String m_releaseLabel;
    bool m_releaseLabelHasBeenSet = false;

    JobDriver m_jobDriver;
    bool m_jobDriverHasBeenSet = false;

    ConfigurationOverrides m_configurationOverrides;
    bool m_configurationOverridesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_jobTemplateId;
    bool m_jobTemplateIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_jobTemplateParameters;
    bool m_jobTemplateParametersHasBeenSet = false;

    RetryPolicyConfiguration m_retryPolicyConfiguration;
    bool m_retryPolicyConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
