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
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DescribeProcessingJobResult
  {
  public:
    AWS_SAGEMAKER_API DescribeProcessingJobResult();
    AWS_SAGEMAKER_API DescribeProcessingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeProcessingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The inputs for a processing job.</p>
     */
    inline const Aws::Vector<ProcessingInput>& GetProcessingInputs() const{ return m_processingInputs; }

    /**
     * <p>The inputs for a processing job.</p>
     */
    inline void SetProcessingInputs(const Aws::Vector<ProcessingInput>& value) { m_processingInputs = value; }

    /**
     * <p>The inputs for a processing job.</p>
     */
    inline void SetProcessingInputs(Aws::Vector<ProcessingInput>&& value) { m_processingInputs = std::move(value); }

    /**
     * <p>The inputs for a processing job.</p>
     */
    inline DescribeProcessingJobResult& WithProcessingInputs(const Aws::Vector<ProcessingInput>& value) { SetProcessingInputs(value); return *this;}

    /**
     * <p>The inputs for a processing job.</p>
     */
    inline DescribeProcessingJobResult& WithProcessingInputs(Aws::Vector<ProcessingInput>&& value) { SetProcessingInputs(std::move(value)); return *this;}

    /**
     * <p>The inputs for a processing job.</p>
     */
    inline DescribeProcessingJobResult& AddProcessingInputs(const ProcessingInput& value) { m_processingInputs.push_back(value); return *this; }

    /**
     * <p>The inputs for a processing job.</p>
     */
    inline DescribeProcessingJobResult& AddProcessingInputs(ProcessingInput&& value) { m_processingInputs.push_back(std::move(value)); return *this; }


    /**
     * <p>Output configuration for the processing job.</p>
     */
    inline const ProcessingOutputConfig& GetProcessingOutputConfig() const{ return m_processingOutputConfig; }

    /**
     * <p>Output configuration for the processing job.</p>
     */
    inline void SetProcessingOutputConfig(const ProcessingOutputConfig& value) { m_processingOutputConfig = value; }

    /**
     * <p>Output configuration for the processing job.</p>
     */
    inline void SetProcessingOutputConfig(ProcessingOutputConfig&& value) { m_processingOutputConfig = std::move(value); }

    /**
     * <p>Output configuration for the processing job.</p>
     */
    inline DescribeProcessingJobResult& WithProcessingOutputConfig(const ProcessingOutputConfig& value) { SetProcessingOutputConfig(value); return *this;}

    /**
     * <p>Output configuration for the processing job.</p>
     */
    inline DescribeProcessingJobResult& WithProcessingOutputConfig(ProcessingOutputConfig&& value) { SetProcessingOutputConfig(std::move(value)); return *this;}


    /**
     * <p>The name of the processing job. The name must be unique within an Amazon Web
     * Services Region in the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetProcessingJobName() const{ return m_processingJobName; }

    /**
     * <p>The name of the processing job. The name must be unique within an Amazon Web
     * Services Region in the Amazon Web Services account.</p>
     */
    inline void SetProcessingJobName(const Aws::String& value) { m_processingJobName = value; }

    /**
     * <p>The name of the processing job. The name must be unique within an Amazon Web
     * Services Region in the Amazon Web Services account.</p>
     */
    inline void SetProcessingJobName(Aws::String&& value) { m_processingJobName = std::move(value); }

    /**
     * <p>The name of the processing job. The name must be unique within an Amazon Web
     * Services Region in the Amazon Web Services account.</p>
     */
    inline void SetProcessingJobName(const char* value) { m_processingJobName.assign(value); }

    /**
     * <p>The name of the processing job. The name must be unique within an Amazon Web
     * Services Region in the Amazon Web Services account.</p>
     */
    inline DescribeProcessingJobResult& WithProcessingJobName(const Aws::String& value) { SetProcessingJobName(value); return *this;}

    /**
     * <p>The name of the processing job. The name must be unique within an Amazon Web
     * Services Region in the Amazon Web Services account.</p>
     */
    inline DescribeProcessingJobResult& WithProcessingJobName(Aws::String&& value) { SetProcessingJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the processing job. The name must be unique within an Amazon Web
     * Services Region in the Amazon Web Services account.</p>
     */
    inline DescribeProcessingJobResult& WithProcessingJobName(const char* value) { SetProcessingJobName(value); return *this;}


    /**
     * <p>Identifies the resources, ML compute instances, and ML storage volumes to
     * deploy for a processing job. In distributed training, you specify more than one
     * instance.</p>
     */
    inline const ProcessingResources& GetProcessingResources() const{ return m_processingResources; }

    /**
     * <p>Identifies the resources, ML compute instances, and ML storage volumes to
     * deploy for a processing job. In distributed training, you specify more than one
     * instance.</p>
     */
    inline void SetProcessingResources(const ProcessingResources& value) { m_processingResources = value; }

    /**
     * <p>Identifies the resources, ML compute instances, and ML storage volumes to
     * deploy for a processing job. In distributed training, you specify more than one
     * instance.</p>
     */
    inline void SetProcessingResources(ProcessingResources&& value) { m_processingResources = std::move(value); }

    /**
     * <p>Identifies the resources, ML compute instances, and ML storage volumes to
     * deploy for a processing job. In distributed training, you specify more than one
     * instance.</p>
     */
    inline DescribeProcessingJobResult& WithProcessingResources(const ProcessingResources& value) { SetProcessingResources(value); return *this;}

    /**
     * <p>Identifies the resources, ML compute instances, and ML storage volumes to
     * deploy for a processing job. In distributed training, you specify more than one
     * instance.</p>
     */
    inline DescribeProcessingJobResult& WithProcessingResources(ProcessingResources&& value) { SetProcessingResources(std::move(value)); return *this;}


    /**
     * <p>The time limit for how long the processing job is allowed to run.</p>
     */
    inline const ProcessingStoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }

    /**
     * <p>The time limit for how long the processing job is allowed to run.</p>
     */
    inline void SetStoppingCondition(const ProcessingStoppingCondition& value) { m_stoppingCondition = value; }

    /**
     * <p>The time limit for how long the processing job is allowed to run.</p>
     */
    inline void SetStoppingCondition(ProcessingStoppingCondition&& value) { m_stoppingCondition = std::move(value); }

    /**
     * <p>The time limit for how long the processing job is allowed to run.</p>
     */
    inline DescribeProcessingJobResult& WithStoppingCondition(const ProcessingStoppingCondition& value) { SetStoppingCondition(value); return *this;}

    /**
     * <p>The time limit for how long the processing job is allowed to run.</p>
     */
    inline DescribeProcessingJobResult& WithStoppingCondition(ProcessingStoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}


    /**
     * <p>Configures the processing job to run a specified container image.</p>
     */
    inline const AppSpecification& GetAppSpecification() const{ return m_appSpecification; }

    /**
     * <p>Configures the processing job to run a specified container image.</p>
     */
    inline void SetAppSpecification(const AppSpecification& value) { m_appSpecification = value; }

    /**
     * <p>Configures the processing job to run a specified container image.</p>
     */
    inline void SetAppSpecification(AppSpecification&& value) { m_appSpecification = std::move(value); }

    /**
     * <p>Configures the processing job to run a specified container image.</p>
     */
    inline DescribeProcessingJobResult& WithAppSpecification(const AppSpecification& value) { SetAppSpecification(value); return *this;}

    /**
     * <p>Configures the processing job to run a specified container image.</p>
     */
    inline DescribeProcessingJobResult& WithAppSpecification(AppSpecification&& value) { SetAppSpecification(std::move(value)); return *this;}


    /**
     * <p>The environment variables set in the Docker container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The environment variables set in the Docker container.</p>
     */
    inline void SetEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_environment = value; }

    /**
     * <p>The environment variables set in the Docker container.</p>
     */
    inline void SetEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_environment = std::move(value); }

    /**
     * <p>The environment variables set in the Docker container.</p>
     */
    inline DescribeProcessingJobResult& WithEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment variables set in the Docker container.</p>
     */
    inline DescribeProcessingJobResult& WithEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>The environment variables set in the Docker container.</p>
     */
    inline DescribeProcessingJobResult& AddEnvironment(const Aws::String& key, const Aws::String& value) { m_environment.emplace(key, value); return *this; }

    /**
     * <p>The environment variables set in the Docker container.</p>
     */
    inline DescribeProcessingJobResult& AddEnvironment(Aws::String&& key, const Aws::String& value) { m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>The environment variables set in the Docker container.</p>
     */
    inline DescribeProcessingJobResult& AddEnvironment(const Aws::String& key, Aws::String&& value) { m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The environment variables set in the Docker container.</p>
     */
    inline DescribeProcessingJobResult& AddEnvironment(Aws::String&& key, Aws::String&& value) { m_environment.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The environment variables set in the Docker container.</p>
     */
    inline DescribeProcessingJobResult& AddEnvironment(const char* key, Aws::String&& value) { m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The environment variables set in the Docker container.</p>
     */
    inline DescribeProcessingJobResult& AddEnvironment(Aws::String&& key, const char* value) { m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>The environment variables set in the Docker container.</p>
     */
    inline DescribeProcessingJobResult& AddEnvironment(const char* key, const char* value) { m_environment.emplace(key, value); return *this; }


    /**
     * <p>Networking options for a processing job.</p>
     */
    inline const NetworkConfig& GetNetworkConfig() const{ return m_networkConfig; }

    /**
     * <p>Networking options for a processing job.</p>
     */
    inline void SetNetworkConfig(const NetworkConfig& value) { m_networkConfig = value; }

    /**
     * <p>Networking options for a processing job.</p>
     */
    inline void SetNetworkConfig(NetworkConfig&& value) { m_networkConfig = std::move(value); }

    /**
     * <p>Networking options for a processing job.</p>
     */
    inline DescribeProcessingJobResult& WithNetworkConfig(const NetworkConfig& value) { SetNetworkConfig(value); return *this;}

    /**
     * <p>Networking options for a processing job.</p>
     */
    inline DescribeProcessingJobResult& WithNetworkConfig(NetworkConfig&& value) { SetNetworkConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline DescribeProcessingJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline DescribeProcessingJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline DescribeProcessingJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The configuration information used to create an experiment.</p>
     */
    inline const ExperimentConfig& GetExperimentConfig() const{ return m_experimentConfig; }

    /**
     * <p>The configuration information used to create an experiment.</p>
     */
    inline void SetExperimentConfig(const ExperimentConfig& value) { m_experimentConfig = value; }

    /**
     * <p>The configuration information used to create an experiment.</p>
     */
    inline void SetExperimentConfig(ExperimentConfig&& value) { m_experimentConfig = std::move(value); }

    /**
     * <p>The configuration information used to create an experiment.</p>
     */
    inline DescribeProcessingJobResult& WithExperimentConfig(const ExperimentConfig& value) { SetExperimentConfig(value); return *this;}

    /**
     * <p>The configuration information used to create an experiment.</p>
     */
    inline DescribeProcessingJobResult& WithExperimentConfig(ExperimentConfig&& value) { SetExperimentConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the processing job.</p>
     */
    inline const Aws::String& GetProcessingJobArn() const{ return m_processingJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job.</p>
     */
    inline void SetProcessingJobArn(const Aws::String& value) { m_processingJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job.</p>
     */
    inline void SetProcessingJobArn(Aws::String&& value) { m_processingJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job.</p>
     */
    inline void SetProcessingJobArn(const char* value) { m_processingJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job.</p>
     */
    inline DescribeProcessingJobResult& WithProcessingJobArn(const Aws::String& value) { SetProcessingJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job.</p>
     */
    inline DescribeProcessingJobResult& WithProcessingJobArn(Aws::String&& value) { SetProcessingJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job.</p>
     */
    inline DescribeProcessingJobResult& WithProcessingJobArn(const char* value) { SetProcessingJobArn(value); return *this;}


    /**
     * <p>Provides the status of a processing job.</p>
     */
    inline const ProcessingJobStatus& GetProcessingJobStatus() const{ return m_processingJobStatus; }

    /**
     * <p>Provides the status of a processing job.</p>
     */
    inline void SetProcessingJobStatus(const ProcessingJobStatus& value) { m_processingJobStatus = value; }

    /**
     * <p>Provides the status of a processing job.</p>
     */
    inline void SetProcessingJobStatus(ProcessingJobStatus&& value) { m_processingJobStatus = std::move(value); }

    /**
     * <p>Provides the status of a processing job.</p>
     */
    inline DescribeProcessingJobResult& WithProcessingJobStatus(const ProcessingJobStatus& value) { SetProcessingJobStatus(value); return *this;}

    /**
     * <p>Provides the status of a processing job.</p>
     */
    inline DescribeProcessingJobResult& WithProcessingJobStatus(ProcessingJobStatus&& value) { SetProcessingJobStatus(std::move(value)); return *this;}


    /**
     * <p>An optional string, up to one KB in size, that contains metadata from the
     * processing container when the processing job exits.</p>
     */
    inline const Aws::String& GetExitMessage() const{ return m_exitMessage; }

    /**
     * <p>An optional string, up to one KB in size, that contains metadata from the
     * processing container when the processing job exits.</p>
     */
    inline void SetExitMessage(const Aws::String& value) { m_exitMessage = value; }

    /**
     * <p>An optional string, up to one KB in size, that contains metadata from the
     * processing container when the processing job exits.</p>
     */
    inline void SetExitMessage(Aws::String&& value) { m_exitMessage = std::move(value); }

    /**
     * <p>An optional string, up to one KB in size, that contains metadata from the
     * processing container when the processing job exits.</p>
     */
    inline void SetExitMessage(const char* value) { m_exitMessage.assign(value); }

    /**
     * <p>An optional string, up to one KB in size, that contains metadata from the
     * processing container when the processing job exits.</p>
     */
    inline DescribeProcessingJobResult& WithExitMessage(const Aws::String& value) { SetExitMessage(value); return *this;}

    /**
     * <p>An optional string, up to one KB in size, that contains metadata from the
     * processing container when the processing job exits.</p>
     */
    inline DescribeProcessingJobResult& WithExitMessage(Aws::String&& value) { SetExitMessage(std::move(value)); return *this;}

    /**
     * <p>An optional string, up to one KB in size, that contains metadata from the
     * processing container when the processing job exits.</p>
     */
    inline DescribeProcessingJobResult& WithExitMessage(const char* value) { SetExitMessage(value); return *this;}


    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline DescribeProcessingJobResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline DescribeProcessingJobResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline DescribeProcessingJobResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The time at which the processing job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetProcessingEndTime() const{ return m_processingEndTime; }

    /**
     * <p>The time at which the processing job completed.</p>
     */
    inline void SetProcessingEndTime(const Aws::Utils::DateTime& value) { m_processingEndTime = value; }

    /**
     * <p>The time at which the processing job completed.</p>
     */
    inline void SetProcessingEndTime(Aws::Utils::DateTime&& value) { m_processingEndTime = std::move(value); }

    /**
     * <p>The time at which the processing job completed.</p>
     */
    inline DescribeProcessingJobResult& WithProcessingEndTime(const Aws::Utils::DateTime& value) { SetProcessingEndTime(value); return *this;}

    /**
     * <p>The time at which the processing job completed.</p>
     */
    inline DescribeProcessingJobResult& WithProcessingEndTime(Aws::Utils::DateTime&& value) { SetProcessingEndTime(std::move(value)); return *this;}


    /**
     * <p>The time at which the processing job started.</p>
     */
    inline const Aws::Utils::DateTime& GetProcessingStartTime() const{ return m_processingStartTime; }

    /**
     * <p>The time at which the processing job started.</p>
     */
    inline void SetProcessingStartTime(const Aws::Utils::DateTime& value) { m_processingStartTime = value; }

    /**
     * <p>The time at which the processing job started.</p>
     */
    inline void SetProcessingStartTime(Aws::Utils::DateTime&& value) { m_processingStartTime = std::move(value); }

    /**
     * <p>The time at which the processing job started.</p>
     */
    inline DescribeProcessingJobResult& WithProcessingStartTime(const Aws::Utils::DateTime& value) { SetProcessingStartTime(value); return *this;}

    /**
     * <p>The time at which the processing job started.</p>
     */
    inline DescribeProcessingJobResult& WithProcessingStartTime(Aws::Utils::DateTime&& value) { SetProcessingStartTime(std::move(value)); return *this;}


    /**
     * <p>The time at which the processing job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The time at which the processing job was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The time at which the processing job was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The time at which the processing job was last modified.</p>
     */
    inline DescribeProcessingJobResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The time at which the processing job was last modified.</p>
     */
    inline DescribeProcessingJobResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The time at which the processing job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time at which the processing job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time at which the processing job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time at which the processing job was created.</p>
     */
    inline DescribeProcessingJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time at which the processing job was created.</p>
     */
    inline DescribeProcessingJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The ARN of a monitoring schedule for an endpoint associated with this
     * processing job.</p>
     */
    inline const Aws::String& GetMonitoringScheduleArn() const{ return m_monitoringScheduleArn; }

    /**
     * <p>The ARN of a monitoring schedule for an endpoint associated with this
     * processing job.</p>
     */
    inline void SetMonitoringScheduleArn(const Aws::String& value) { m_monitoringScheduleArn = value; }

    /**
     * <p>The ARN of a monitoring schedule for an endpoint associated with this
     * processing job.</p>
     */
    inline void SetMonitoringScheduleArn(Aws::String&& value) { m_monitoringScheduleArn = std::move(value); }

    /**
     * <p>The ARN of a monitoring schedule for an endpoint associated with this
     * processing job.</p>
     */
    inline void SetMonitoringScheduleArn(const char* value) { m_monitoringScheduleArn.assign(value); }

    /**
     * <p>The ARN of a monitoring schedule for an endpoint associated with this
     * processing job.</p>
     */
    inline DescribeProcessingJobResult& WithMonitoringScheduleArn(const Aws::String& value) { SetMonitoringScheduleArn(value); return *this;}

    /**
     * <p>The ARN of a monitoring schedule for an endpoint associated with this
     * processing job.</p>
     */
    inline DescribeProcessingJobResult& WithMonitoringScheduleArn(Aws::String&& value) { SetMonitoringScheduleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a monitoring schedule for an endpoint associated with this
     * processing job.</p>
     */
    inline DescribeProcessingJobResult& WithMonitoringScheduleArn(const char* value) { SetMonitoringScheduleArn(value); return *this;}


    /**
     * <p>The ARN of an AutoML job associated with this processing job.</p>
     */
    inline const Aws::String& GetAutoMLJobArn() const{ return m_autoMLJobArn; }

    /**
     * <p>The ARN of an AutoML job associated with this processing job.</p>
     */
    inline void SetAutoMLJobArn(const Aws::String& value) { m_autoMLJobArn = value; }

    /**
     * <p>The ARN of an AutoML job associated with this processing job.</p>
     */
    inline void SetAutoMLJobArn(Aws::String&& value) { m_autoMLJobArn = std::move(value); }

    /**
     * <p>The ARN of an AutoML job associated with this processing job.</p>
     */
    inline void SetAutoMLJobArn(const char* value) { m_autoMLJobArn.assign(value); }

    /**
     * <p>The ARN of an AutoML job associated with this processing job.</p>
     */
    inline DescribeProcessingJobResult& WithAutoMLJobArn(const Aws::String& value) { SetAutoMLJobArn(value); return *this;}

    /**
     * <p>The ARN of an AutoML job associated with this processing job.</p>
     */
    inline DescribeProcessingJobResult& WithAutoMLJobArn(Aws::String&& value) { SetAutoMLJobArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an AutoML job associated with this processing job.</p>
     */
    inline DescribeProcessingJobResult& WithAutoMLJobArn(const char* value) { SetAutoMLJobArn(value); return *this;}


    /**
     * <p>The ARN of a training job associated with this processing job.</p>
     */
    inline const Aws::String& GetTrainingJobArn() const{ return m_trainingJobArn; }

    /**
     * <p>The ARN of a training job associated with this processing job.</p>
     */
    inline void SetTrainingJobArn(const Aws::String& value) { m_trainingJobArn = value; }

    /**
     * <p>The ARN of a training job associated with this processing job.</p>
     */
    inline void SetTrainingJobArn(Aws::String&& value) { m_trainingJobArn = std::move(value); }

    /**
     * <p>The ARN of a training job associated with this processing job.</p>
     */
    inline void SetTrainingJobArn(const char* value) { m_trainingJobArn.assign(value); }

    /**
     * <p>The ARN of a training job associated with this processing job.</p>
     */
    inline DescribeProcessingJobResult& WithTrainingJobArn(const Aws::String& value) { SetTrainingJobArn(value); return *this;}

    /**
     * <p>The ARN of a training job associated with this processing job.</p>
     */
    inline DescribeProcessingJobResult& WithTrainingJobArn(Aws::String&& value) { SetTrainingJobArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a training job associated with this processing job.</p>
     */
    inline DescribeProcessingJobResult& WithTrainingJobArn(const char* value) { SetTrainingJobArn(value); return *this;}

  private:

    Aws::Vector<ProcessingInput> m_processingInputs;

    ProcessingOutputConfig m_processingOutputConfig;

    Aws::String m_processingJobName;

    ProcessingResources m_processingResources;

    ProcessingStoppingCondition m_stoppingCondition;

    AppSpecification m_appSpecification;

    Aws::Map<Aws::String, Aws::String> m_environment;

    NetworkConfig m_networkConfig;

    Aws::String m_roleArn;

    ExperimentConfig m_experimentConfig;

    Aws::String m_processingJobArn;

    ProcessingJobStatus m_processingJobStatus;

    Aws::String m_exitMessage;

    Aws::String m_failureReason;

    Aws::Utils::DateTime m_processingEndTime;

    Aws::Utils::DateTime m_processingStartTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_monitoringScheduleArn;

    Aws::String m_autoMLJobArn;

    Aws::String m_trainingJobArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
