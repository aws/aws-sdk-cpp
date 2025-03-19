/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/model/ParametricConfigurationOverrides.h>
#include <aws/emr-containers/model/JobDriver.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/emr-containers/model/TemplateParameterConfiguration.h>
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
namespace EMRContainers
{
namespace Model
{

  /**
   * <p>The values of StartJobRun API requests used in job runs started using the job
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/JobTemplateData">AWS
   * API Reference</a></p>
   */
  class JobTemplateData
  {
  public:
    AWS_EMRCONTAINERS_API JobTemplateData() = default;
    AWS_EMRCONTAINERS_API JobTemplateData(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API JobTemplateData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    JobTemplateData& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The release version of Amazon EMR.</p>
     */
    inline const Aws::String& GetReleaseLabel() const { return m_releaseLabel; }
    inline bool ReleaseLabelHasBeenSet() const { return m_releaseLabelHasBeenSet; }
    template<typename ReleaseLabelT = Aws::String>
    void SetReleaseLabel(ReleaseLabelT&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::forward<ReleaseLabelT>(value); }
    template<typename ReleaseLabelT = Aws::String>
    JobTemplateData& WithReleaseLabel(ReleaseLabelT&& value) { SetReleaseLabel(std::forward<ReleaseLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration settings that are used to override defaults
     * configuration.</p>
     */
    inline const ParametricConfigurationOverrides& GetConfigurationOverrides() const { return m_configurationOverrides; }
    inline bool ConfigurationOverridesHasBeenSet() const { return m_configurationOverridesHasBeenSet; }
    template<typename ConfigurationOverridesT = ParametricConfigurationOverrides>
    void SetConfigurationOverrides(ConfigurationOverridesT&& value) { m_configurationOverridesHasBeenSet = true; m_configurationOverrides = std::forward<ConfigurationOverridesT>(value); }
    template<typename ConfigurationOverridesT = ParametricConfigurationOverrides>
    JobTemplateData& WithConfigurationOverrides(ConfigurationOverridesT&& value) { SetConfigurationOverrides(std::forward<ConfigurationOverridesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const JobDriver& GetJobDriver() const { return m_jobDriver; }
    inline bool JobDriverHasBeenSet() const { return m_jobDriverHasBeenSet; }
    template<typename JobDriverT = JobDriver>
    void SetJobDriver(JobDriverT&& value) { m_jobDriverHasBeenSet = true; m_jobDriver = std::forward<JobDriverT>(value); }
    template<typename JobDriverT = JobDriver>
    JobTemplateData& WithJobDriver(JobDriverT&& value) { SetJobDriver(std::forward<JobDriverT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of parameters existing in the job template.</p>
     */
    inline const Aws::Map<Aws::String, TemplateParameterConfiguration>& GetParameterConfiguration() const { return m_parameterConfiguration; }
    inline bool ParameterConfigurationHasBeenSet() const { return m_parameterConfigurationHasBeenSet; }
    template<typename ParameterConfigurationT = Aws::Map<Aws::String, TemplateParameterConfiguration>>
    void SetParameterConfiguration(ParameterConfigurationT&& value) { m_parameterConfigurationHasBeenSet = true; m_parameterConfiguration = std::forward<ParameterConfigurationT>(value); }
    template<typename ParameterConfigurationT = Aws::Map<Aws::String, TemplateParameterConfiguration>>
    JobTemplateData& WithParameterConfiguration(ParameterConfigurationT&& value) { SetParameterConfiguration(std::forward<ParameterConfigurationT>(value)); return *this;}
    template<typename ParameterConfigurationKeyT = Aws::String, typename ParameterConfigurationValueT = TemplateParameterConfiguration>
    JobTemplateData& AddParameterConfiguration(ParameterConfigurationKeyT&& key, ParameterConfigurationValueT&& value) {
      m_parameterConfigurationHasBeenSet = true; m_parameterConfiguration.emplace(std::forward<ParameterConfigurationKeyT>(key), std::forward<ParameterConfigurationValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The tags assigned to jobs started using the job template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetJobTags() const { return m_jobTags; }
    inline bool JobTagsHasBeenSet() const { return m_jobTagsHasBeenSet; }
    template<typename JobTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetJobTags(JobTagsT&& value) { m_jobTagsHasBeenSet = true; m_jobTags = std::forward<JobTagsT>(value); }
    template<typename JobTagsT = Aws::Map<Aws::String, Aws::String>>
    JobTemplateData& WithJobTags(JobTagsT&& value) { SetJobTags(std::forward<JobTagsT>(value)); return *this;}
    template<typename JobTagsKeyT = Aws::String, typename JobTagsValueT = Aws::String>
    JobTemplateData& AddJobTags(JobTagsKeyT&& key, JobTagsValueT&& value) {
      m_jobTagsHasBeenSet = true; m_jobTags.emplace(std::forward<JobTagsKeyT>(key), std::forward<JobTagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Aws::String m_releaseLabel;
    bool m_releaseLabelHasBeenSet = false;

    ParametricConfigurationOverrides m_configurationOverrides;
    bool m_configurationOverridesHasBeenSet = false;

    JobDriver m_jobDriver;
    bool m_jobDriverHasBeenSet = false;

    Aws::Map<Aws::String, TemplateParameterConfiguration> m_parameterConfiguration;
    bool m_parameterConfigurationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_jobTags;
    bool m_jobTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
