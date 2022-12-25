/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ProcessingOutputConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProcessingResources.h>
#include <aws/sagemaker/model/ProcessingStoppingCondition.h>
#include <aws/sagemaker/model/AppSpecification.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/NetworkConfig.h>
#include <aws/sagemaker/model/ExperimentConfig.h>
#include <aws/sagemaker/model/ProcessingJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ProcessingInput.h>
#include <aws/sagemaker/model/Tag.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>An Amazon SageMaker processing job that is used to analyze data and evaluate
   * models. For more information, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/processing-job.html">Process
   * Data and Evaluate Models</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProcessingJob">AWS
   * API Reference</a></p>
   */
  class ProcessingJob
  {
  public:
    AWS_SAGEMAKER_API ProcessingJob();
    AWS_SAGEMAKER_API ProcessingJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProcessingJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of input configurations for the processing job.</p>
     */
    inline const Aws::Vector<ProcessingInput>& GetProcessingInputs() const{ return m_processingInputs; }

    /**
     * <p>List of input configurations for the processing job.</p>
     */
    inline bool ProcessingInputsHasBeenSet() const { return m_processingInputsHasBeenSet; }

    /**
     * <p>List of input configurations for the processing job.</p>
     */
    inline void SetProcessingInputs(const Aws::Vector<ProcessingInput>& value) { m_processingInputsHasBeenSet = true; m_processingInputs = value; }

    /**
     * <p>List of input configurations for the processing job.</p>
     */
    inline void SetProcessingInputs(Aws::Vector<ProcessingInput>&& value) { m_processingInputsHasBeenSet = true; m_processingInputs = std::move(value); }

    /**
     * <p>List of input configurations for the processing job.</p>
     */
    inline ProcessingJob& WithProcessingInputs(const Aws::Vector<ProcessingInput>& value) { SetProcessingInputs(value); return *this;}

    /**
     * <p>List of input configurations for the processing job.</p>
     */
    inline ProcessingJob& WithProcessingInputs(Aws::Vector<ProcessingInput>&& value) { SetProcessingInputs(std::move(value)); return *this;}

    /**
     * <p>List of input configurations for the processing job.</p>
     */
    inline ProcessingJob& AddProcessingInputs(const ProcessingInput& value) { m_processingInputsHasBeenSet = true; m_processingInputs.push_back(value); return *this; }

    /**
     * <p>List of input configurations for the processing job.</p>
     */
    inline ProcessingJob& AddProcessingInputs(ProcessingInput&& value) { m_processingInputsHasBeenSet = true; m_processingInputs.push_back(std::move(value)); return *this; }


    
    inline const ProcessingOutputConfig& GetProcessingOutputConfig() const{ return m_processingOutputConfig; }

    
    inline bool ProcessingOutputConfigHasBeenSet() const { return m_processingOutputConfigHasBeenSet; }

    
    inline void SetProcessingOutputConfig(const ProcessingOutputConfig& value) { m_processingOutputConfigHasBeenSet = true; m_processingOutputConfig = value; }

    
    inline void SetProcessingOutputConfig(ProcessingOutputConfig&& value) { m_processingOutputConfigHasBeenSet = true; m_processingOutputConfig = std::move(value); }

    
    inline ProcessingJob& WithProcessingOutputConfig(const ProcessingOutputConfig& value) { SetProcessingOutputConfig(value); return *this;}

    
    inline ProcessingJob& WithProcessingOutputConfig(ProcessingOutputConfig&& value) { SetProcessingOutputConfig(std::move(value)); return *this;}


    /**
     * <p>The name of the processing job.</p>
     */
    inline const Aws::String& GetProcessingJobName() const{ return m_processingJobName; }

    /**
     * <p>The name of the processing job.</p>
     */
    inline bool ProcessingJobNameHasBeenSet() const { return m_processingJobNameHasBeenSet; }

    /**
     * <p>The name of the processing job.</p>
     */
    inline void SetProcessingJobName(const Aws::String& value) { m_processingJobNameHasBeenSet = true; m_processingJobName = value; }

    /**
     * <p>The name of the processing job.</p>
     */
    inline void SetProcessingJobName(Aws::String&& value) { m_processingJobNameHasBeenSet = true; m_processingJobName = std::move(value); }

    /**
     * <p>The name of the processing job.</p>
     */
    inline void SetProcessingJobName(const char* value) { m_processingJobNameHasBeenSet = true; m_processingJobName.assign(value); }

    /**
     * <p>The name of the processing job.</p>
     */
    inline ProcessingJob& WithProcessingJobName(const Aws::String& value) { SetProcessingJobName(value); return *this;}

    /**
     * <p>The name of the processing job.</p>
     */
    inline ProcessingJob& WithProcessingJobName(Aws::String&& value) { SetProcessingJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the processing job.</p>
     */
    inline ProcessingJob& WithProcessingJobName(const char* value) { SetProcessingJobName(value); return *this;}


    
    inline const ProcessingResources& GetProcessingResources() const{ return m_processingResources; }

    
    inline bool ProcessingResourcesHasBeenSet() const { return m_processingResourcesHasBeenSet; }

    
    inline void SetProcessingResources(const ProcessingResources& value) { m_processingResourcesHasBeenSet = true; m_processingResources = value; }

    
    inline void SetProcessingResources(ProcessingResources&& value) { m_processingResourcesHasBeenSet = true; m_processingResources = std::move(value); }

    
    inline ProcessingJob& WithProcessingResources(const ProcessingResources& value) { SetProcessingResources(value); return *this;}

    
    inline ProcessingJob& WithProcessingResources(ProcessingResources&& value) { SetProcessingResources(std::move(value)); return *this;}


    
    inline const ProcessingStoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }

    
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }

    
    inline void SetStoppingCondition(const ProcessingStoppingCondition& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = value; }

    
    inline void SetStoppingCondition(ProcessingStoppingCondition&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::move(value); }

    
    inline ProcessingJob& WithStoppingCondition(const ProcessingStoppingCondition& value) { SetStoppingCondition(value); return *this;}

    
    inline ProcessingJob& WithStoppingCondition(ProcessingStoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}


    
    inline const AppSpecification& GetAppSpecification() const{ return m_appSpecification; }

    
    inline bool AppSpecificationHasBeenSet() const { return m_appSpecificationHasBeenSet; }

    
    inline void SetAppSpecification(const AppSpecification& value) { m_appSpecificationHasBeenSet = true; m_appSpecification = value; }

    
    inline void SetAppSpecification(AppSpecification&& value) { m_appSpecificationHasBeenSet = true; m_appSpecification = std::move(value); }

    
    inline ProcessingJob& WithAppSpecification(const AppSpecification& value) { SetAppSpecification(value); return *this;}

    
    inline ProcessingJob& WithAppSpecification(AppSpecification&& value) { SetAppSpecification(std::move(value)); return *this;}


    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline void SetEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline void SetEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline ProcessingJob& WithEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline ProcessingJob& WithEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline ProcessingJob& AddEnvironment(const Aws::String& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline ProcessingJob& AddEnvironment(Aws::String&& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline ProcessingJob& AddEnvironment(const Aws::String& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline ProcessingJob& AddEnvironment(Aws::String&& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline ProcessingJob& AddEnvironment(const char* key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline ProcessingJob& AddEnvironment(Aws::String&& key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline ProcessingJob& AddEnvironment(const char* key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }


    
    inline const NetworkConfig& GetNetworkConfig() const{ return m_networkConfig; }

    
    inline bool NetworkConfigHasBeenSet() const { return m_networkConfigHasBeenSet; }

    
    inline void SetNetworkConfig(const NetworkConfig& value) { m_networkConfigHasBeenSet = true; m_networkConfig = value; }

    
    inline void SetNetworkConfig(NetworkConfig&& value) { m_networkConfigHasBeenSet = true; m_networkConfig = std::move(value); }

    
    inline ProcessingJob& WithNetworkConfig(const NetworkConfig& value) { SetNetworkConfig(value); return *this;}

    
    inline ProcessingJob& WithNetworkConfig(NetworkConfig&& value) { SetNetworkConfig(std::move(value)); return *this;}


    /**
     * <p>The ARN of the role used to create the processing job.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the role used to create the processing job.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the role used to create the processing job.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the role used to create the processing job.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the role used to create the processing job.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the role used to create the processing job.</p>
     */
    inline ProcessingJob& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role used to create the processing job.</p>
     */
    inline ProcessingJob& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role used to create the processing job.</p>
     */
    inline ProcessingJob& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    
    inline const ExperimentConfig& GetExperimentConfig() const{ return m_experimentConfig; }

    
    inline bool ExperimentConfigHasBeenSet() const { return m_experimentConfigHasBeenSet; }

    
    inline void SetExperimentConfig(const ExperimentConfig& value) { m_experimentConfigHasBeenSet = true; m_experimentConfig = value; }

    
    inline void SetExperimentConfig(ExperimentConfig&& value) { m_experimentConfigHasBeenSet = true; m_experimentConfig = std::move(value); }

    
    inline ProcessingJob& WithExperimentConfig(const ExperimentConfig& value) { SetExperimentConfig(value); return *this;}

    
    inline ProcessingJob& WithExperimentConfig(ExperimentConfig&& value) { SetExperimentConfig(std::move(value)); return *this;}


    /**
     * <p>The ARN of the processing job.</p>
     */
    inline const Aws::String& GetProcessingJobArn() const{ return m_processingJobArn; }

    /**
     * <p>The ARN of the processing job.</p>
     */
    inline bool ProcessingJobArnHasBeenSet() const { return m_processingJobArnHasBeenSet; }

    /**
     * <p>The ARN of the processing job.</p>
     */
    inline void SetProcessingJobArn(const Aws::String& value) { m_processingJobArnHasBeenSet = true; m_processingJobArn = value; }

    /**
     * <p>The ARN of the processing job.</p>
     */
    inline void SetProcessingJobArn(Aws::String&& value) { m_processingJobArnHasBeenSet = true; m_processingJobArn = std::move(value); }

    /**
     * <p>The ARN of the processing job.</p>
     */
    inline void SetProcessingJobArn(const char* value) { m_processingJobArnHasBeenSet = true; m_processingJobArn.assign(value); }

    /**
     * <p>The ARN of the processing job.</p>
     */
    inline ProcessingJob& WithProcessingJobArn(const Aws::String& value) { SetProcessingJobArn(value); return *this;}

    /**
     * <p>The ARN of the processing job.</p>
     */
    inline ProcessingJob& WithProcessingJobArn(Aws::String&& value) { SetProcessingJobArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the processing job.</p>
     */
    inline ProcessingJob& WithProcessingJobArn(const char* value) { SetProcessingJobArn(value); return *this;}


    /**
     * <p>The status of the processing job.</p>
     */
    inline const ProcessingJobStatus& GetProcessingJobStatus() const{ return m_processingJobStatus; }

    /**
     * <p>The status of the processing job.</p>
     */
    inline bool ProcessingJobStatusHasBeenSet() const { return m_processingJobStatusHasBeenSet; }

    /**
     * <p>The status of the processing job.</p>
     */
    inline void SetProcessingJobStatus(const ProcessingJobStatus& value) { m_processingJobStatusHasBeenSet = true; m_processingJobStatus = value; }

    /**
     * <p>The status of the processing job.</p>
     */
    inline void SetProcessingJobStatus(ProcessingJobStatus&& value) { m_processingJobStatusHasBeenSet = true; m_processingJobStatus = std::move(value); }

    /**
     * <p>The status of the processing job.</p>
     */
    inline ProcessingJob& WithProcessingJobStatus(const ProcessingJobStatus& value) { SetProcessingJobStatus(value); return *this;}

    /**
     * <p>The status of the processing job.</p>
     */
    inline ProcessingJob& WithProcessingJobStatus(ProcessingJobStatus&& value) { SetProcessingJobStatus(std::move(value)); return *this;}


    /**
     * <p>A string, up to one KB in size, that contains metadata from the processing
     * container when the processing job exits.</p>
     */
    inline const Aws::String& GetExitMessage() const{ return m_exitMessage; }

    /**
     * <p>A string, up to one KB in size, that contains metadata from the processing
     * container when the processing job exits.</p>
     */
    inline bool ExitMessageHasBeenSet() const { return m_exitMessageHasBeenSet; }

    /**
     * <p>A string, up to one KB in size, that contains metadata from the processing
     * container when the processing job exits.</p>
     */
    inline void SetExitMessage(const Aws::String& value) { m_exitMessageHasBeenSet = true; m_exitMessage = value; }

    /**
     * <p>A string, up to one KB in size, that contains metadata from the processing
     * container when the processing job exits.</p>
     */
    inline void SetExitMessage(Aws::String&& value) { m_exitMessageHasBeenSet = true; m_exitMessage = std::move(value); }

    /**
     * <p>A string, up to one KB in size, that contains metadata from the processing
     * container when the processing job exits.</p>
     */
    inline void SetExitMessage(const char* value) { m_exitMessageHasBeenSet = true; m_exitMessage.assign(value); }

    /**
     * <p>A string, up to one KB in size, that contains metadata from the processing
     * container when the processing job exits.</p>
     */
    inline ProcessingJob& WithExitMessage(const Aws::String& value) { SetExitMessage(value); return *this;}

    /**
     * <p>A string, up to one KB in size, that contains metadata from the processing
     * container when the processing job exits.</p>
     */
    inline ProcessingJob& WithExitMessage(Aws::String&& value) { SetExitMessage(std::move(value)); return *this;}

    /**
     * <p>A string, up to one KB in size, that contains metadata from the processing
     * container when the processing job exits.</p>
     */
    inline ProcessingJob& WithExitMessage(const char* value) { SetExitMessage(value); return *this;}


    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline ProcessingJob& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline ProcessingJob& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline ProcessingJob& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The time that the processing job ended.</p>
     */
    inline const Aws::Utils::DateTime& GetProcessingEndTime() const{ return m_processingEndTime; }

    /**
     * <p>The time that the processing job ended.</p>
     */
    inline bool ProcessingEndTimeHasBeenSet() const { return m_processingEndTimeHasBeenSet; }

    /**
     * <p>The time that the processing job ended.</p>
     */
    inline void SetProcessingEndTime(const Aws::Utils::DateTime& value) { m_processingEndTimeHasBeenSet = true; m_processingEndTime = value; }

    /**
     * <p>The time that the processing job ended.</p>
     */
    inline void SetProcessingEndTime(Aws::Utils::DateTime&& value) { m_processingEndTimeHasBeenSet = true; m_processingEndTime = std::move(value); }

    /**
     * <p>The time that the processing job ended.</p>
     */
    inline ProcessingJob& WithProcessingEndTime(const Aws::Utils::DateTime& value) { SetProcessingEndTime(value); return *this;}

    /**
     * <p>The time that the processing job ended.</p>
     */
    inline ProcessingJob& WithProcessingEndTime(Aws::Utils::DateTime&& value) { SetProcessingEndTime(std::move(value)); return *this;}


    /**
     * <p>The time that the processing job started.</p>
     */
    inline const Aws::Utils::DateTime& GetProcessingStartTime() const{ return m_processingStartTime; }

    /**
     * <p>The time that the processing job started.</p>
     */
    inline bool ProcessingStartTimeHasBeenSet() const { return m_processingStartTimeHasBeenSet; }

    /**
     * <p>The time that the processing job started.</p>
     */
    inline void SetProcessingStartTime(const Aws::Utils::DateTime& value) { m_processingStartTimeHasBeenSet = true; m_processingStartTime = value; }

    /**
     * <p>The time that the processing job started.</p>
     */
    inline void SetProcessingStartTime(Aws::Utils::DateTime&& value) { m_processingStartTimeHasBeenSet = true; m_processingStartTime = std::move(value); }

    /**
     * <p>The time that the processing job started.</p>
     */
    inline ProcessingJob& WithProcessingStartTime(const Aws::Utils::DateTime& value) { SetProcessingStartTime(value); return *this;}

    /**
     * <p>The time that the processing job started.</p>
     */
    inline ProcessingJob& WithProcessingStartTime(Aws::Utils::DateTime&& value) { SetProcessingStartTime(std::move(value)); return *this;}


    /**
     * <p>The time the processing job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The time the processing job was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The time the processing job was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The time the processing job was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The time the processing job was last modified.</p>
     */
    inline ProcessingJob& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The time the processing job was last modified.</p>
     */
    inline ProcessingJob& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The time the processing job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the processing job was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time the processing job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time the processing job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time the processing job was created.</p>
     */
    inline ProcessingJob& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the processing job was created.</p>
     */
    inline ProcessingJob& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The ARN of a monitoring schedule for an endpoint associated with this
     * processing job.</p>
     */
    inline const Aws::String& GetMonitoringScheduleArn() const{ return m_monitoringScheduleArn; }

    /**
     * <p>The ARN of a monitoring schedule for an endpoint associated with this
     * processing job.</p>
     */
    inline bool MonitoringScheduleArnHasBeenSet() const { return m_monitoringScheduleArnHasBeenSet; }

    /**
     * <p>The ARN of a monitoring schedule for an endpoint associated with this
     * processing job.</p>
     */
    inline void SetMonitoringScheduleArn(const Aws::String& value) { m_monitoringScheduleArnHasBeenSet = true; m_monitoringScheduleArn = value; }

    /**
     * <p>The ARN of a monitoring schedule for an endpoint associated with this
     * processing job.</p>
     */
    inline void SetMonitoringScheduleArn(Aws::String&& value) { m_monitoringScheduleArnHasBeenSet = true; m_monitoringScheduleArn = std::move(value); }

    /**
     * <p>The ARN of a monitoring schedule for an endpoint associated with this
     * processing job.</p>
     */
    inline void SetMonitoringScheduleArn(const char* value) { m_monitoringScheduleArnHasBeenSet = true; m_monitoringScheduleArn.assign(value); }

    /**
     * <p>The ARN of a monitoring schedule for an endpoint associated with this
     * processing job.</p>
     */
    inline ProcessingJob& WithMonitoringScheduleArn(const Aws::String& value) { SetMonitoringScheduleArn(value); return *this;}

    /**
     * <p>The ARN of a monitoring schedule for an endpoint associated with this
     * processing job.</p>
     */
    inline ProcessingJob& WithMonitoringScheduleArn(Aws::String&& value) { SetMonitoringScheduleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a monitoring schedule for an endpoint associated with this
     * processing job.</p>
     */
    inline ProcessingJob& WithMonitoringScheduleArn(const char* value) { SetMonitoringScheduleArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job associated with this
     * processing job.</p>
     */
    inline const Aws::String& GetAutoMLJobArn() const{ return m_autoMLJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job associated with this
     * processing job.</p>
     */
    inline bool AutoMLJobArnHasBeenSet() const { return m_autoMLJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job associated with this
     * processing job.</p>
     */
    inline void SetAutoMLJobArn(const Aws::String& value) { m_autoMLJobArnHasBeenSet = true; m_autoMLJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job associated with this
     * processing job.</p>
     */
    inline void SetAutoMLJobArn(Aws::String&& value) { m_autoMLJobArnHasBeenSet = true; m_autoMLJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job associated with this
     * processing job.</p>
     */
    inline void SetAutoMLJobArn(const char* value) { m_autoMLJobArnHasBeenSet = true; m_autoMLJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job associated with this
     * processing job.</p>
     */
    inline ProcessingJob& WithAutoMLJobArn(const Aws::String& value) { SetAutoMLJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job associated with this
     * processing job.</p>
     */
    inline ProcessingJob& WithAutoMLJobArn(Aws::String&& value) { SetAutoMLJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AutoML job associated with this
     * processing job.</p>
     */
    inline ProcessingJob& WithAutoMLJobArn(const char* value) { SetAutoMLJobArn(value); return *this;}


    /**
     * <p>The ARN of the training job associated with this processing job.</p>
     */
    inline const Aws::String& GetTrainingJobArn() const{ return m_trainingJobArn; }

    /**
     * <p>The ARN of the training job associated with this processing job.</p>
     */
    inline bool TrainingJobArnHasBeenSet() const { return m_trainingJobArnHasBeenSet; }

    /**
     * <p>The ARN of the training job associated with this processing job.</p>
     */
    inline void SetTrainingJobArn(const Aws::String& value) { m_trainingJobArnHasBeenSet = true; m_trainingJobArn = value; }

    /**
     * <p>The ARN of the training job associated with this processing job.</p>
     */
    inline void SetTrainingJobArn(Aws::String&& value) { m_trainingJobArnHasBeenSet = true; m_trainingJobArn = std::move(value); }

    /**
     * <p>The ARN of the training job associated with this processing job.</p>
     */
    inline void SetTrainingJobArn(const char* value) { m_trainingJobArnHasBeenSet = true; m_trainingJobArn.assign(value); }

    /**
     * <p>The ARN of the training job associated with this processing job.</p>
     */
    inline ProcessingJob& WithTrainingJobArn(const Aws::String& value) { SetTrainingJobArn(value); return *this;}

    /**
     * <p>The ARN of the training job associated with this processing job.</p>
     */
    inline ProcessingJob& WithTrainingJobArn(Aws::String&& value) { SetTrainingJobArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the training job associated with this processing job.</p>
     */
    inline ProcessingJob& WithTrainingJobArn(const char* value) { SetTrainingJobArn(value); return *this;}


    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline ProcessingJob& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline ProcessingJob& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline ProcessingJob& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline ProcessingJob& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ProcessingInput> m_processingInputs;
    bool m_processingInputsHasBeenSet = false;

    ProcessingOutputConfig m_processingOutputConfig;
    bool m_processingOutputConfigHasBeenSet = false;

    Aws::String m_processingJobName;
    bool m_processingJobNameHasBeenSet = false;

    ProcessingResources m_processingResources;
    bool m_processingResourcesHasBeenSet = false;

    ProcessingStoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet = false;

    AppSpecification m_appSpecification;
    bool m_appSpecificationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;

    NetworkConfig m_networkConfig;
    bool m_networkConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    ExperimentConfig m_experimentConfig;
    bool m_experimentConfigHasBeenSet = false;

    Aws::String m_processingJobArn;
    bool m_processingJobArnHasBeenSet = false;

    ProcessingJobStatus m_processingJobStatus;
    bool m_processingJobStatusHasBeenSet = false;

    Aws::String m_exitMessage;
    bool m_exitMessageHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Utils::DateTime m_processingEndTime;
    bool m_processingEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_processingStartTime;
    bool m_processingStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_monitoringScheduleArn;
    bool m_monitoringScheduleArnHasBeenSet = false;

    Aws::String m_autoMLJobArn;
    bool m_autoMLJobArnHasBeenSet = false;

    Aws::String m_trainingJobArn;
    bool m_trainingJobArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
