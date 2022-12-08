/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/emr-serverless/model/JobRunState.h>
#include <aws/emr-serverless/model/ConfigurationOverrides.h>
#include <aws/emr-serverless/model/JobDriver.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/emr-serverless/model/TotalResourceUtilization.h>
#include <aws/emr-serverless/model/NetworkConfiguration.h>
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
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>Information about a job run. A job run is a unit of work, such as a Spark
   * JAR, Hive query, or SparkSQL query, that you submit to an EMR Serverless
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/JobRun">AWS
   * API Reference</a></p>
   */
  class JobRun
  {
  public:
    AWS_EMRSERVERLESS_API JobRun();
    AWS_EMRSERVERLESS_API JobRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API JobRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the application the job is running on.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The ID of the application the job is running on.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The ID of the application the job is running on.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The ID of the application the job is running on.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The ID of the application the job is running on.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The ID of the application the job is running on.</p>
     */
    inline JobRun& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The ID of the application the job is running on.</p>
     */
    inline JobRun& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application the job is running on.</p>
     */
    inline JobRun& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The ID of the job run.</p>
     */
    inline const Aws::String& GetJobRunId() const{ return m_jobRunId; }

    /**
     * <p>The ID of the job run.</p>
     */
    inline bool JobRunIdHasBeenSet() const { return m_jobRunIdHasBeenSet; }

    /**
     * <p>The ID of the job run.</p>
     */
    inline void SetJobRunId(const Aws::String& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = value; }

    /**
     * <p>The ID of the job run.</p>
     */
    inline void SetJobRunId(Aws::String&& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = std::move(value); }

    /**
     * <p>The ID of the job run.</p>
     */
    inline void SetJobRunId(const char* value) { m_jobRunIdHasBeenSet = true; m_jobRunId.assign(value); }

    /**
     * <p>The ID of the job run.</p>
     */
    inline JobRun& WithJobRunId(const Aws::String& value) { SetJobRunId(value); return *this;}

    /**
     * <p>The ID of the job run.</p>
     */
    inline JobRun& WithJobRunId(Aws::String&& value) { SetJobRunId(std::move(value)); return *this;}

    /**
     * <p>The ID of the job run.</p>
     */
    inline JobRun& WithJobRunId(const char* value) { SetJobRunId(value); return *this;}


    /**
     * <p>The optional job run name. This doesn't have to be unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The optional job run name. This doesn't have to be unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The optional job run name. This doesn't have to be unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The optional job run name. This doesn't have to be unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The optional job run name. This doesn't have to be unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The optional job run name. This doesn't have to be unique.</p>
     */
    inline JobRun& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The optional job run name. This doesn't have to be unique.</p>
     */
    inline JobRun& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The optional job run name. This doesn't have to be unique.</p>
     */
    inline JobRun& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline JobRun& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline JobRun& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline JobRun& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The user who created the job run.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The user who created the job run.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The user who created the job run.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The user who created the job run.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The user who created the job run.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The user who created the job run.</p>
     */
    inline JobRun& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The user who created the job run.</p>
     */
    inline JobRun& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The user who created the job run.</p>
     */
    inline JobRun& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The date and time when the job run was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time when the job run was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time when the job run was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time when the job run was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time when the job run was created.</p>
     */
    inline JobRun& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time when the job run was created.</p>
     */
    inline JobRun& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The date and time when the job run was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time when the job run was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The date and time when the job run was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The date and time when the job run was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The date and time when the job run was updated.</p>
     */
    inline JobRun& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time when the job run was updated.</p>
     */
    inline JobRun& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }

    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }

    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }

    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }

    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }

    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline JobRun& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}

    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline JobRun& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}

    /**
     * <p>The execution role ARN of the job run.</p>
     */
    inline JobRun& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}


    /**
     * <p>The state of the job run.</p>
     */
    inline const JobRunState& GetState() const{ return m_state; }

    /**
     * <p>The state of the job run.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the job run.</p>
     */
    inline void SetState(const JobRunState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the job run.</p>
     */
    inline void SetState(JobRunState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the job run.</p>
     */
    inline JobRun& WithState(const JobRunState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the job run.</p>
     */
    inline JobRun& WithState(JobRunState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The state details of the job run.</p>
     */
    inline const Aws::String& GetStateDetails() const{ return m_stateDetails; }

    /**
     * <p>The state details of the job run.</p>
     */
    inline bool StateDetailsHasBeenSet() const { return m_stateDetailsHasBeenSet; }

    /**
     * <p>The state details of the job run.</p>
     */
    inline void SetStateDetails(const Aws::String& value) { m_stateDetailsHasBeenSet = true; m_stateDetails = value; }

    /**
     * <p>The state details of the job run.</p>
     */
    inline void SetStateDetails(Aws::String&& value) { m_stateDetailsHasBeenSet = true; m_stateDetails = std::move(value); }

    /**
     * <p>The state details of the job run.</p>
     */
    inline void SetStateDetails(const char* value) { m_stateDetailsHasBeenSet = true; m_stateDetails.assign(value); }

    /**
     * <p>The state details of the job run.</p>
     */
    inline JobRun& WithStateDetails(const Aws::String& value) { SetStateDetails(value); return *this;}

    /**
     * <p>The state details of the job run.</p>
     */
    inline JobRun& WithStateDetails(Aws::String&& value) { SetStateDetails(std::move(value)); return *this;}

    /**
     * <p>The state details of the job run.</p>
     */
    inline JobRun& WithStateDetails(const char* value) { SetStateDetails(value); return *this;}


    /**
     * <p>The EMR release version associated with the application your job is running
     * on.</p>
     */
    inline const Aws::String& GetReleaseLabel() const{ return m_releaseLabel; }

    /**
     * <p>The EMR release version associated with the application your job is running
     * on.</p>
     */
    inline bool ReleaseLabelHasBeenSet() const { return m_releaseLabelHasBeenSet; }

    /**
     * <p>The EMR release version associated with the application your job is running
     * on.</p>
     */
    inline void SetReleaseLabel(const Aws::String& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = value; }

    /**
     * <p>The EMR release version associated with the application your job is running
     * on.</p>
     */
    inline void SetReleaseLabel(Aws::String&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::move(value); }

    /**
     * <p>The EMR release version associated with the application your job is running
     * on.</p>
     */
    inline void SetReleaseLabel(const char* value) { m_releaseLabelHasBeenSet = true; m_releaseLabel.assign(value); }

    /**
     * <p>The EMR release version associated with the application your job is running
     * on.</p>
     */
    inline JobRun& WithReleaseLabel(const Aws::String& value) { SetReleaseLabel(value); return *this;}

    /**
     * <p>The EMR release version associated with the application your job is running
     * on.</p>
     */
    inline JobRun& WithReleaseLabel(Aws::String&& value) { SetReleaseLabel(std::move(value)); return *this;}

    /**
     * <p>The EMR release version associated with the application your job is running
     * on.</p>
     */
    inline JobRun& WithReleaseLabel(const char* value) { SetReleaseLabel(value); return *this;}


    /**
     * <p>The configuration settings that are used to override default
     * configuration.</p>
     */
    inline const ConfigurationOverrides& GetConfigurationOverrides() const{ return m_configurationOverrides; }

    /**
     * <p>The configuration settings that are used to override default
     * configuration.</p>
     */
    inline bool ConfigurationOverridesHasBeenSet() const { return m_configurationOverridesHasBeenSet; }

    /**
     * <p>The configuration settings that are used to override default
     * configuration.</p>
     */
    inline void SetConfigurationOverrides(const ConfigurationOverrides& value) { m_configurationOverridesHasBeenSet = true; m_configurationOverrides = value; }

    /**
     * <p>The configuration settings that are used to override default
     * configuration.</p>
     */
    inline void SetConfigurationOverrides(ConfigurationOverrides&& value) { m_configurationOverridesHasBeenSet = true; m_configurationOverrides = std::move(value); }

    /**
     * <p>The configuration settings that are used to override default
     * configuration.</p>
     */
    inline JobRun& WithConfigurationOverrides(const ConfigurationOverrides& value) { SetConfigurationOverrides(value); return *this;}

    /**
     * <p>The configuration settings that are used to override default
     * configuration.</p>
     */
    inline JobRun& WithConfigurationOverrides(ConfigurationOverrides&& value) { SetConfigurationOverrides(std::move(value)); return *this;}


    /**
     * <p>The job driver for the job run.</p>
     */
    inline const JobDriver& GetJobDriver() const{ return m_jobDriver; }

    /**
     * <p>The job driver for the job run.</p>
     */
    inline bool JobDriverHasBeenSet() const { return m_jobDriverHasBeenSet; }

    /**
     * <p>The job driver for the job run.</p>
     */
    inline void SetJobDriver(const JobDriver& value) { m_jobDriverHasBeenSet = true; m_jobDriver = value; }

    /**
     * <p>The job driver for the job run.</p>
     */
    inline void SetJobDriver(JobDriver&& value) { m_jobDriverHasBeenSet = true; m_jobDriver = std::move(value); }

    /**
     * <p>The job driver for the job run.</p>
     */
    inline JobRun& WithJobDriver(const JobDriver& value) { SetJobDriver(value); return *this;}

    /**
     * <p>The job driver for the job run.</p>
     */
    inline JobRun& WithJobDriver(JobDriver&& value) { SetJobDriver(std::move(value)); return *this;}


    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline JobRun& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline JobRun& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline JobRun& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline JobRun& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline JobRun& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline JobRun& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline JobRun& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline JobRun& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the job run.</p>
     */
    inline JobRun& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The aggregate vCPU, memory, and storage resources used from the time job
     * start executing till the time job is terminated, rounded up to the nearest
     * second.</p>
     */
    inline const TotalResourceUtilization& GetTotalResourceUtilization() const{ return m_totalResourceUtilization; }

    /**
     * <p>The aggregate vCPU, memory, and storage resources used from the time job
     * start executing till the time job is terminated, rounded up to the nearest
     * second.</p>
     */
    inline bool TotalResourceUtilizationHasBeenSet() const { return m_totalResourceUtilizationHasBeenSet; }

    /**
     * <p>The aggregate vCPU, memory, and storage resources used from the time job
     * start executing till the time job is terminated, rounded up to the nearest
     * second.</p>
     */
    inline void SetTotalResourceUtilization(const TotalResourceUtilization& value) { m_totalResourceUtilizationHasBeenSet = true; m_totalResourceUtilization = value; }

    /**
     * <p>The aggregate vCPU, memory, and storage resources used from the time job
     * start executing till the time job is terminated, rounded up to the nearest
     * second.</p>
     */
    inline void SetTotalResourceUtilization(TotalResourceUtilization&& value) { m_totalResourceUtilizationHasBeenSet = true; m_totalResourceUtilization = std::move(value); }

    /**
     * <p>The aggregate vCPU, memory, and storage resources used from the time job
     * start executing till the time job is terminated, rounded up to the nearest
     * second.</p>
     */
    inline JobRun& WithTotalResourceUtilization(const TotalResourceUtilization& value) { SetTotalResourceUtilization(value); return *this;}

    /**
     * <p>The aggregate vCPU, memory, and storage resources used from the time job
     * start executing till the time job is terminated, rounded up to the nearest
     * second.</p>
     */
    inline JobRun& WithTotalResourceUtilization(TotalResourceUtilization&& value) { SetTotalResourceUtilization(std::move(value)); return *this;}


    
    inline const NetworkConfiguration& GetNetworkConfiguration() const{ return m_networkConfiguration; }

    
    inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }

    
    inline void SetNetworkConfiguration(const NetworkConfiguration& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = value; }

    
    inline void SetNetworkConfiguration(NetworkConfiguration&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::move(value); }

    
    inline JobRun& WithNetworkConfiguration(const NetworkConfiguration& value) { SetNetworkConfiguration(value); return *this;}

    
    inline JobRun& WithNetworkConfiguration(NetworkConfiguration&& value) { SetNetworkConfiguration(std::move(value)); return *this;}


    /**
     * <p>The job run total execution duration in seconds. This field is only available
     * for job runs in a <code>COMPLETED</code>, <code>FAILED</code>, or
     * <code>CANCELLED</code> state.</p>
     */
    inline int GetTotalExecutionDurationSeconds() const{ return m_totalExecutionDurationSeconds; }

    /**
     * <p>The job run total execution duration in seconds. This field is only available
     * for job runs in a <code>COMPLETED</code>, <code>FAILED</code>, or
     * <code>CANCELLED</code> state.</p>
     */
    inline bool TotalExecutionDurationSecondsHasBeenSet() const { return m_totalExecutionDurationSecondsHasBeenSet; }

    /**
     * <p>The job run total execution duration in seconds. This field is only available
     * for job runs in a <code>COMPLETED</code>, <code>FAILED</code>, or
     * <code>CANCELLED</code> state.</p>
     */
    inline void SetTotalExecutionDurationSeconds(int value) { m_totalExecutionDurationSecondsHasBeenSet = true; m_totalExecutionDurationSeconds = value; }

    /**
     * <p>The job run total execution duration in seconds. This field is only available
     * for job runs in a <code>COMPLETED</code>, <code>FAILED</code>, or
     * <code>CANCELLED</code> state.</p>
     */
    inline JobRun& WithTotalExecutionDurationSeconds(int value) { SetTotalExecutionDurationSeconds(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_jobRunId;
    bool m_jobRunIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    JobRunState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateDetails;
    bool m_stateDetailsHasBeenSet = false;

    Aws::String m_releaseLabel;
    bool m_releaseLabelHasBeenSet = false;

    ConfigurationOverrides m_configurationOverrides;
    bool m_configurationOverridesHasBeenSet = false;

    JobDriver m_jobDriver;
    bool m_jobDriverHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    TotalResourceUtilization m_totalResourceUtilization;
    bool m_totalResourceUtilizationHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    int m_totalExecutionDurationSeconds;
    bool m_totalExecutionDurationSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
