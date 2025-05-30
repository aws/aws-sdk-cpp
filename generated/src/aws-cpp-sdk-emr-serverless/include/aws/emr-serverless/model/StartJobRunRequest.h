/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/emr-serverless/EMRServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-serverless/model/JobRunExecutionIamPolicy.h>
#include <aws/emr-serverless/model/JobDriver.h>
#include <aws/emr-serverless/model/ConfigurationOverrides.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/emr-serverless/model/JobRunMode.h>
#include <aws/emr-serverless/model/RetryPolicy.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

  /**
   */
  class StartJobRunRequest : public EMRServerlessRequest
  {
  public:
    AWS_EMRSERVERLESS_API StartJobRunRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartJobRun"; }

    AWS_EMRSERVERLESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the application on which to run the job.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    StartJobRunRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client idempotency token of the job run to start. Its value must be
     * unique for each request.</p>
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
     * <p>You can pass an optional IAM policy. The resulting job IAM role permissions
     * will be an intersection of this policy and the policy associated with your job
     * execution role.</p>
     */
    inline const JobRunExecutionIamPolicy& GetExecutionIamPolicy() const { return m_executionIamPolicy; }
    inline bool ExecutionIamPolicyHasBeenSet() const { return m_executionIamPolicyHasBeenSet; }
    template<typename ExecutionIamPolicyT = JobRunExecutionIamPolicy>
    void SetExecutionIamPolicy(ExecutionIamPolicyT&& value) { m_executionIamPolicyHasBeenSet = true; m_executionIamPolicy = std::forward<ExecutionIamPolicyT>(value); }
    template<typename ExecutionIamPolicyT = JobRunExecutionIamPolicy>
    StartJobRunRequest& WithExecutionIamPolicy(ExecutionIamPolicyT&& value) { SetExecutionIamPolicy(std::forward<ExecutionIamPolicyT>(value)); return *this;}
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
     * <p>The tags assigned to the job run.</p>
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
     * <p>The maximum duration for the job run to run. If the job run runs beyond this
     * duration, it will be automatically cancelled.</p>
     */
    inline long long GetExecutionTimeoutMinutes() const { return m_executionTimeoutMinutes; }
    inline bool ExecutionTimeoutMinutesHasBeenSet() const { return m_executionTimeoutMinutesHasBeenSet; }
    inline void SetExecutionTimeoutMinutes(long long value) { m_executionTimeoutMinutesHasBeenSet = true; m_executionTimeoutMinutes = value; }
    inline StartJobRunRequest& WithExecutionTimeoutMinutes(long long value) { SetExecutionTimeoutMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional job run name. This doesn't have to be unique.</p>
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
     * <p>The mode of the job run when it starts.</p>
     */
    inline JobRunMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(JobRunMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline StartJobRunRequest& WithMode(JobRunMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retry policy when job run starts.</p>
     */
    inline const RetryPolicy& GetRetryPolicy() const { return m_retryPolicy; }
    inline bool RetryPolicyHasBeenSet() const { return m_retryPolicyHasBeenSet; }
    template<typename RetryPolicyT = RetryPolicy>
    void SetRetryPolicy(RetryPolicyT&& value) { m_retryPolicyHasBeenSet = true; m_retryPolicy = std::forward<RetryPolicyT>(value); }
    template<typename RetryPolicyT = RetryPolicy>
    StartJobRunRequest& WithRetryPolicy(RetryPolicyT&& value) { SetRetryPolicy(std::forward<RetryPolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    JobRunExecutionIamPolicy m_executionIamPolicy;
    bool m_executionIamPolicyHasBeenSet = false;

    JobDriver m_jobDriver;
    bool m_jobDriverHasBeenSet = false;

    ConfigurationOverrides m_configurationOverrides;
    bool m_configurationOverridesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    long long m_executionTimeoutMinutes{0};
    bool m_executionTimeoutMinutesHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    JobRunMode m_mode{JobRunMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    RetryPolicy m_retryPolicy;
    bool m_retryPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
