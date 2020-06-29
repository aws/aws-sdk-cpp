/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ProcessingOutputConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProcessingResources.h>
#include <aws/sagemaker/model/ProcessingStoppingCondition.h>
#include <aws/sagemaker/model/AppSpecification.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/NetworkConfig.h>
#include <aws/sagemaker/model/ExperimentConfig.h>
#include <aws/sagemaker/model/ProcessingInput.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API CreateProcessingJobRequest : public SageMakerRequest
  {
  public:
    CreateProcessingJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProcessingJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>For each input, data is downloaded from S3 into the processing container
     * before the processing job begins running if "S3InputMode" is set to
     * <code>File</code>.</p>
     */
    inline const Aws::Vector<ProcessingInput>& GetProcessingInputs() const{ return m_processingInputs; }

    /**
     * <p>For each input, data is downloaded from S3 into the processing container
     * before the processing job begins running if "S3InputMode" is set to
     * <code>File</code>.</p>
     */
    inline bool ProcessingInputsHasBeenSet() const { return m_processingInputsHasBeenSet; }

    /**
     * <p>For each input, data is downloaded from S3 into the processing container
     * before the processing job begins running if "S3InputMode" is set to
     * <code>File</code>.</p>
     */
    inline void SetProcessingInputs(const Aws::Vector<ProcessingInput>& value) { m_processingInputsHasBeenSet = true; m_processingInputs = value; }

    /**
     * <p>For each input, data is downloaded from S3 into the processing container
     * before the processing job begins running if "S3InputMode" is set to
     * <code>File</code>.</p>
     */
    inline void SetProcessingInputs(Aws::Vector<ProcessingInput>&& value) { m_processingInputsHasBeenSet = true; m_processingInputs = std::move(value); }

    /**
     * <p>For each input, data is downloaded from S3 into the processing container
     * before the processing job begins running if "S3InputMode" is set to
     * <code>File</code>.</p>
     */
    inline CreateProcessingJobRequest& WithProcessingInputs(const Aws::Vector<ProcessingInput>& value) { SetProcessingInputs(value); return *this;}

    /**
     * <p>For each input, data is downloaded from S3 into the processing container
     * before the processing job begins running if "S3InputMode" is set to
     * <code>File</code>.</p>
     */
    inline CreateProcessingJobRequest& WithProcessingInputs(Aws::Vector<ProcessingInput>&& value) { SetProcessingInputs(std::move(value)); return *this;}

    /**
     * <p>For each input, data is downloaded from S3 into the processing container
     * before the processing job begins running if "S3InputMode" is set to
     * <code>File</code>.</p>
     */
    inline CreateProcessingJobRequest& AddProcessingInputs(const ProcessingInput& value) { m_processingInputsHasBeenSet = true; m_processingInputs.push_back(value); return *this; }

    /**
     * <p>For each input, data is downloaded from S3 into the processing container
     * before the processing job begins running if "S3InputMode" is set to
     * <code>File</code>.</p>
     */
    inline CreateProcessingJobRequest& AddProcessingInputs(ProcessingInput&& value) { m_processingInputsHasBeenSet = true; m_processingInputs.push_back(std::move(value)); return *this; }


    /**
     * <p>Output configuration for the processing job.</p>
     */
    inline const ProcessingOutputConfig& GetProcessingOutputConfig() const{ return m_processingOutputConfig; }

    /**
     * <p>Output configuration for the processing job.</p>
     */
    inline bool ProcessingOutputConfigHasBeenSet() const { return m_processingOutputConfigHasBeenSet; }

    /**
     * <p>Output configuration for the processing job.</p>
     */
    inline void SetProcessingOutputConfig(const ProcessingOutputConfig& value) { m_processingOutputConfigHasBeenSet = true; m_processingOutputConfig = value; }

    /**
     * <p>Output configuration for the processing job.</p>
     */
    inline void SetProcessingOutputConfig(ProcessingOutputConfig&& value) { m_processingOutputConfigHasBeenSet = true; m_processingOutputConfig = std::move(value); }

    /**
     * <p>Output configuration for the processing job.</p>
     */
    inline CreateProcessingJobRequest& WithProcessingOutputConfig(const ProcessingOutputConfig& value) { SetProcessingOutputConfig(value); return *this;}

    /**
     * <p>Output configuration for the processing job.</p>
     */
    inline CreateProcessingJobRequest& WithProcessingOutputConfig(ProcessingOutputConfig&& value) { SetProcessingOutputConfig(std::move(value)); return *this;}


    /**
     * <p> The name of the processing job. The name must be unique within an AWS Region
     * in the AWS account.</p>
     */
    inline const Aws::String& GetProcessingJobName() const{ return m_processingJobName; }

    /**
     * <p> The name of the processing job. The name must be unique within an AWS Region
     * in the AWS account.</p>
     */
    inline bool ProcessingJobNameHasBeenSet() const { return m_processingJobNameHasBeenSet; }

    /**
     * <p> The name of the processing job. The name must be unique within an AWS Region
     * in the AWS account.</p>
     */
    inline void SetProcessingJobName(const Aws::String& value) { m_processingJobNameHasBeenSet = true; m_processingJobName = value; }

    /**
     * <p> The name of the processing job. The name must be unique within an AWS Region
     * in the AWS account.</p>
     */
    inline void SetProcessingJobName(Aws::String&& value) { m_processingJobNameHasBeenSet = true; m_processingJobName = std::move(value); }

    /**
     * <p> The name of the processing job. The name must be unique within an AWS Region
     * in the AWS account.</p>
     */
    inline void SetProcessingJobName(const char* value) { m_processingJobNameHasBeenSet = true; m_processingJobName.assign(value); }

    /**
     * <p> The name of the processing job. The name must be unique within an AWS Region
     * in the AWS account.</p>
     */
    inline CreateProcessingJobRequest& WithProcessingJobName(const Aws::String& value) { SetProcessingJobName(value); return *this;}

    /**
     * <p> The name of the processing job. The name must be unique within an AWS Region
     * in the AWS account.</p>
     */
    inline CreateProcessingJobRequest& WithProcessingJobName(Aws::String&& value) { SetProcessingJobName(std::move(value)); return *this;}

    /**
     * <p> The name of the processing job. The name must be unique within an AWS Region
     * in the AWS account.</p>
     */
    inline CreateProcessingJobRequest& WithProcessingJobName(const char* value) { SetProcessingJobName(value); return *this;}


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
    inline bool ProcessingResourcesHasBeenSet() const { return m_processingResourcesHasBeenSet; }

    /**
     * <p>Identifies the resources, ML compute instances, and ML storage volumes to
     * deploy for a processing job. In distributed training, you specify more than one
     * instance.</p>
     */
    inline void SetProcessingResources(const ProcessingResources& value) { m_processingResourcesHasBeenSet = true; m_processingResources = value; }

    /**
     * <p>Identifies the resources, ML compute instances, and ML storage volumes to
     * deploy for a processing job. In distributed training, you specify more than one
     * instance.</p>
     */
    inline void SetProcessingResources(ProcessingResources&& value) { m_processingResourcesHasBeenSet = true; m_processingResources = std::move(value); }

    /**
     * <p>Identifies the resources, ML compute instances, and ML storage volumes to
     * deploy for a processing job. In distributed training, you specify more than one
     * instance.</p>
     */
    inline CreateProcessingJobRequest& WithProcessingResources(const ProcessingResources& value) { SetProcessingResources(value); return *this;}

    /**
     * <p>Identifies the resources, ML compute instances, and ML storage volumes to
     * deploy for a processing job. In distributed training, you specify more than one
     * instance.</p>
     */
    inline CreateProcessingJobRequest& WithProcessingResources(ProcessingResources&& value) { SetProcessingResources(std::move(value)); return *this;}


    /**
     * <p>The time limit for how long the processing job is allowed to run.</p>
     */
    inline const ProcessingStoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }

    /**
     * <p>The time limit for how long the processing job is allowed to run.</p>
     */
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }

    /**
     * <p>The time limit for how long the processing job is allowed to run.</p>
     */
    inline void SetStoppingCondition(const ProcessingStoppingCondition& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = value; }

    /**
     * <p>The time limit for how long the processing job is allowed to run.</p>
     */
    inline void SetStoppingCondition(ProcessingStoppingCondition&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::move(value); }

    /**
     * <p>The time limit for how long the processing job is allowed to run.</p>
     */
    inline CreateProcessingJobRequest& WithStoppingCondition(const ProcessingStoppingCondition& value) { SetStoppingCondition(value); return *this;}

    /**
     * <p>The time limit for how long the processing job is allowed to run.</p>
     */
    inline CreateProcessingJobRequest& WithStoppingCondition(ProcessingStoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}


    /**
     * <p>Configures the processing job to run a specified Docker container image.</p>
     */
    inline const AppSpecification& GetAppSpecification() const{ return m_appSpecification; }

    /**
     * <p>Configures the processing job to run a specified Docker container image.</p>
     */
    inline bool AppSpecificationHasBeenSet() const { return m_appSpecificationHasBeenSet; }

    /**
     * <p>Configures the processing job to run a specified Docker container image.</p>
     */
    inline void SetAppSpecification(const AppSpecification& value) { m_appSpecificationHasBeenSet = true; m_appSpecification = value; }

    /**
     * <p>Configures the processing job to run a specified Docker container image.</p>
     */
    inline void SetAppSpecification(AppSpecification&& value) { m_appSpecificationHasBeenSet = true; m_appSpecification = std::move(value); }

    /**
     * <p>Configures the processing job to run a specified Docker container image.</p>
     */
    inline CreateProcessingJobRequest& WithAppSpecification(const AppSpecification& value) { SetAppSpecification(value); return *this;}

    /**
     * <p>Configures the processing job to run a specified Docker container image.</p>
     */
    inline CreateProcessingJobRequest& WithAppSpecification(AppSpecification&& value) { SetAppSpecification(std::move(value)); return *this;}


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
    inline CreateProcessingJobRequest& WithEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline CreateProcessingJobRequest& WithEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline CreateProcessingJobRequest& AddEnvironment(const Aws::String& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline CreateProcessingJobRequest& AddEnvironment(Aws::String&& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline CreateProcessingJobRequest& AddEnvironment(const Aws::String& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline CreateProcessingJobRequest& AddEnvironment(Aws::String&& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline CreateProcessingJobRequest& AddEnvironment(const char* key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline CreateProcessingJobRequest& AddEnvironment(Aws::String&& key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>Sets the environment variables in the Docker container.</p>
     */
    inline CreateProcessingJobRequest& AddEnvironment(const char* key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }


    /**
     * <p>Networking options for a processing job.</p>
     */
    inline const NetworkConfig& GetNetworkConfig() const{ return m_networkConfig; }

    /**
     * <p>Networking options for a processing job.</p>
     */
    inline bool NetworkConfigHasBeenSet() const { return m_networkConfigHasBeenSet; }

    /**
     * <p>Networking options for a processing job.</p>
     */
    inline void SetNetworkConfig(const NetworkConfig& value) { m_networkConfigHasBeenSet = true; m_networkConfig = value; }

    /**
     * <p>Networking options for a processing job.</p>
     */
    inline void SetNetworkConfig(NetworkConfig&& value) { m_networkConfigHasBeenSet = true; m_networkConfig = std::move(value); }

    /**
     * <p>Networking options for a processing job.</p>
     */
    inline CreateProcessingJobRequest& WithNetworkConfig(const NetworkConfig& value) { SetNetworkConfig(value); return *this;}

    /**
     * <p>Networking options for a processing job.</p>
     */
    inline CreateProcessingJobRequest& WithNetworkConfig(NetworkConfig&& value) { SetNetworkConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline CreateProcessingJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline CreateProcessingJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline CreateProcessingJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline CreateProcessingJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline CreateProcessingJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline CreateProcessingJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>.</p>
     */
    inline CreateProcessingJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    
    inline const ExperimentConfig& GetExperimentConfig() const{ return m_experimentConfig; }

    
    inline bool ExperimentConfigHasBeenSet() const { return m_experimentConfigHasBeenSet; }

    
    inline void SetExperimentConfig(const ExperimentConfig& value) { m_experimentConfigHasBeenSet = true; m_experimentConfig = value; }

    
    inline void SetExperimentConfig(ExperimentConfig&& value) { m_experimentConfigHasBeenSet = true; m_experimentConfig = std::move(value); }

    
    inline CreateProcessingJobRequest& WithExperimentConfig(const ExperimentConfig& value) { SetExperimentConfig(value); return *this;}

    
    inline CreateProcessingJobRequest& WithExperimentConfig(ExperimentConfig&& value) { SetExperimentConfig(std::move(value)); return *this;}

  private:

    Aws::Vector<ProcessingInput> m_processingInputs;
    bool m_processingInputsHasBeenSet;

    ProcessingOutputConfig m_processingOutputConfig;
    bool m_processingOutputConfigHasBeenSet;

    Aws::String m_processingJobName;
    bool m_processingJobNameHasBeenSet;

    ProcessingResources m_processingResources;
    bool m_processingResourcesHasBeenSet;

    ProcessingStoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet;

    AppSpecification m_appSpecification;
    bool m_appSpecificationHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet;

    NetworkConfig m_networkConfig;
    bool m_networkConfigHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    ExperimentConfig m_experimentConfig;
    bool m_experimentConfigHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
