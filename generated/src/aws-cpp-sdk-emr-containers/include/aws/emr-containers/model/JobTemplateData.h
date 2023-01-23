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
    AWS_EMRCONTAINERS_API JobTemplateData();
    AWS_EMRCONTAINERS_API JobTemplateData(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API JobTemplateData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }

    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }

    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }

    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }

    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline JobTemplateData& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline JobTemplateData& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline JobTemplateData& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p> The release version of Amazon EMR.</p>
     */
    inline const Aws::String& GetReleaseLabel() const{ return m_releaseLabel; }

    /**
     * <p> The release version of Amazon EMR.</p>
     */
    inline bool ReleaseLabelHasBeenSet() const { return m_releaseLabelHasBeenSet; }

    /**
     * <p> The release version of Amazon EMR.</p>
     */
    inline void SetReleaseLabel(const Aws::String& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = value; }

    /**
     * <p> The release version of Amazon EMR.</p>
     */
    inline void SetReleaseLabel(Aws::String&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::move(value); }

    /**
     * <p> The release version of Amazon EMR.</p>
     */
    inline void SetReleaseLabel(const char* value) { m_releaseLabelHasBeenSet = true; m_releaseLabel.assign(value); }

    /**
     * <p> The release version of Amazon EMR.</p>
     */
    inline JobTemplateData& WithReleaseLabel(const Aws::String& value) { SetReleaseLabel(value); return *this;}

    /**
     * <p> The release version of Amazon EMR.</p>
     */
    inline JobTemplateData& WithReleaseLabel(Aws::String&& value) { SetReleaseLabel(std::move(value)); return *this;}

    /**
     * <p> The release version of Amazon EMR.</p>
     */
    inline JobTemplateData& WithReleaseLabel(const char* value) { SetReleaseLabel(value); return *this;}


    /**
     * <p> The configuration settings that are used to override defaults
     * configuration.</p>
     */
    inline const ParametricConfigurationOverrides& GetConfigurationOverrides() const{ return m_configurationOverrides; }

    /**
     * <p> The configuration settings that are used to override defaults
     * configuration.</p>
     */
    inline bool ConfigurationOverridesHasBeenSet() const { return m_configurationOverridesHasBeenSet; }

    /**
     * <p> The configuration settings that are used to override defaults
     * configuration.</p>
     */
    inline void SetConfigurationOverrides(const ParametricConfigurationOverrides& value) { m_configurationOverridesHasBeenSet = true; m_configurationOverrides = value; }

    /**
     * <p> The configuration settings that are used to override defaults
     * configuration.</p>
     */
    inline void SetConfigurationOverrides(ParametricConfigurationOverrides&& value) { m_configurationOverridesHasBeenSet = true; m_configurationOverrides = std::move(value); }

    /**
     * <p> The configuration settings that are used to override defaults
     * configuration.</p>
     */
    inline JobTemplateData& WithConfigurationOverrides(const ParametricConfigurationOverrides& value) { SetConfigurationOverrides(value); return *this;}

    /**
     * <p> The configuration settings that are used to override defaults
     * configuration.</p>
     */
    inline JobTemplateData& WithConfigurationOverrides(ParametricConfigurationOverrides&& value) { SetConfigurationOverrides(std::move(value)); return *this;}


    
    inline const JobDriver& GetJobDriver() const{ return m_jobDriver; }

    
    inline bool JobDriverHasBeenSet() const { return m_jobDriverHasBeenSet; }

    
    inline void SetJobDriver(const JobDriver& value) { m_jobDriverHasBeenSet = true; m_jobDriver = value; }

    
    inline void SetJobDriver(JobDriver&& value) { m_jobDriverHasBeenSet = true; m_jobDriver = std::move(value); }

    
    inline JobTemplateData& WithJobDriver(const JobDriver& value) { SetJobDriver(value); return *this;}

    
    inline JobTemplateData& WithJobDriver(JobDriver&& value) { SetJobDriver(std::move(value)); return *this;}


    /**
     * <p>The configuration of parameters existing in the job template.</p>
     */
    inline const Aws::Map<Aws::String, TemplateParameterConfiguration>& GetParameterConfiguration() const{ return m_parameterConfiguration; }

    /**
     * <p>The configuration of parameters existing in the job template.</p>
     */
    inline bool ParameterConfigurationHasBeenSet() const { return m_parameterConfigurationHasBeenSet; }

    /**
     * <p>The configuration of parameters existing in the job template.</p>
     */
    inline void SetParameterConfiguration(const Aws::Map<Aws::String, TemplateParameterConfiguration>& value) { m_parameterConfigurationHasBeenSet = true; m_parameterConfiguration = value; }

    /**
     * <p>The configuration of parameters existing in the job template.</p>
     */
    inline void SetParameterConfiguration(Aws::Map<Aws::String, TemplateParameterConfiguration>&& value) { m_parameterConfigurationHasBeenSet = true; m_parameterConfiguration = std::move(value); }

    /**
     * <p>The configuration of parameters existing in the job template.</p>
     */
    inline JobTemplateData& WithParameterConfiguration(const Aws::Map<Aws::String, TemplateParameterConfiguration>& value) { SetParameterConfiguration(value); return *this;}

    /**
     * <p>The configuration of parameters existing in the job template.</p>
     */
    inline JobTemplateData& WithParameterConfiguration(Aws::Map<Aws::String, TemplateParameterConfiguration>&& value) { SetParameterConfiguration(std::move(value)); return *this;}

    /**
     * <p>The configuration of parameters existing in the job template.</p>
     */
    inline JobTemplateData& AddParameterConfiguration(const Aws::String& key, const TemplateParameterConfiguration& value) { m_parameterConfigurationHasBeenSet = true; m_parameterConfiguration.emplace(key, value); return *this; }

    /**
     * <p>The configuration of parameters existing in the job template.</p>
     */
    inline JobTemplateData& AddParameterConfiguration(Aws::String&& key, const TemplateParameterConfiguration& value) { m_parameterConfigurationHasBeenSet = true; m_parameterConfiguration.emplace(std::move(key), value); return *this; }

    /**
     * <p>The configuration of parameters existing in the job template.</p>
     */
    inline JobTemplateData& AddParameterConfiguration(const Aws::String& key, TemplateParameterConfiguration&& value) { m_parameterConfigurationHasBeenSet = true; m_parameterConfiguration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The configuration of parameters existing in the job template.</p>
     */
    inline JobTemplateData& AddParameterConfiguration(Aws::String&& key, TemplateParameterConfiguration&& value) { m_parameterConfigurationHasBeenSet = true; m_parameterConfiguration.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The configuration of parameters existing in the job template.</p>
     */
    inline JobTemplateData& AddParameterConfiguration(const char* key, TemplateParameterConfiguration&& value) { m_parameterConfigurationHasBeenSet = true; m_parameterConfiguration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The configuration of parameters existing in the job template.</p>
     */
    inline JobTemplateData& AddParameterConfiguration(const char* key, const TemplateParameterConfiguration& value) { m_parameterConfigurationHasBeenSet = true; m_parameterConfiguration.emplace(key, value); return *this; }


    /**
     * <p>The tags assigned to jobs started using the job template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetJobTags() const{ return m_jobTags; }

    /**
     * <p>The tags assigned to jobs started using the job template.</p>
     */
    inline bool JobTagsHasBeenSet() const { return m_jobTagsHasBeenSet; }

    /**
     * <p>The tags assigned to jobs started using the job template.</p>
     */
    inline void SetJobTags(const Aws::Map<Aws::String, Aws::String>& value) { m_jobTagsHasBeenSet = true; m_jobTags = value; }

    /**
     * <p>The tags assigned to jobs started using the job template.</p>
     */
    inline void SetJobTags(Aws::Map<Aws::String, Aws::String>&& value) { m_jobTagsHasBeenSet = true; m_jobTags = std::move(value); }

    /**
     * <p>The tags assigned to jobs started using the job template.</p>
     */
    inline JobTemplateData& WithJobTags(const Aws::Map<Aws::String, Aws::String>& value) { SetJobTags(value); return *this;}

    /**
     * <p>The tags assigned to jobs started using the job template.</p>
     */
    inline JobTemplateData& WithJobTags(Aws::Map<Aws::String, Aws::String>&& value) { SetJobTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to jobs started using the job template.</p>
     */
    inline JobTemplateData& AddJobTags(const Aws::String& key, const Aws::String& value) { m_jobTagsHasBeenSet = true; m_jobTags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to jobs started using the job template.</p>
     */
    inline JobTemplateData& AddJobTags(Aws::String&& key, const Aws::String& value) { m_jobTagsHasBeenSet = true; m_jobTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to jobs started using the job template.</p>
     */
    inline JobTemplateData& AddJobTags(const Aws::String& key, Aws::String&& value) { m_jobTagsHasBeenSet = true; m_jobTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to jobs started using the job template.</p>
     */
    inline JobTemplateData& AddJobTags(Aws::String&& key, Aws::String&& value) { m_jobTagsHasBeenSet = true; m_jobTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to jobs started using the job template.</p>
     */
    inline JobTemplateData& AddJobTags(const char* key, Aws::String&& value) { m_jobTagsHasBeenSet = true; m_jobTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to jobs started using the job template.</p>
     */
    inline JobTemplateData& AddJobTags(Aws::String&& key, const char* value) { m_jobTagsHasBeenSet = true; m_jobTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to jobs started using the job template.</p>
     */
    inline JobTemplateData& AddJobTags(const char* key, const char* value) { m_jobTagsHasBeenSet = true; m_jobTags.emplace(key, value); return *this; }

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
