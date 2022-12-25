/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelExplainabilityBaselineConfig.h>
#include <aws/sagemaker/model/ModelExplainabilityAppSpecification.h>
#include <aws/sagemaker/model/ModelExplainabilityJobInput.h>
#include <aws/sagemaker/model/MonitoringOutputConfig.h>
#include <aws/sagemaker/model/MonitoringResources.h>
#include <aws/sagemaker/model/MonitoringNetworkConfig.h>
#include <aws/sagemaker/model/MonitoringStoppingCondition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class CreateModelExplainabilityJobDefinitionRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateModelExplainabilityJobDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateModelExplainabilityJobDefinition"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The name of the model explainability job definition. The name must be unique
     * within an Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetJobDefinitionName() const{ return m_jobDefinitionName; }

    /**
     * <p> The name of the model explainability job definition. The name must be unique
     * within an Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline bool JobDefinitionNameHasBeenSet() const { return m_jobDefinitionNameHasBeenSet; }

    /**
     * <p> The name of the model explainability job definition. The name must be unique
     * within an Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline void SetJobDefinitionName(const Aws::String& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = value; }

    /**
     * <p> The name of the model explainability job definition. The name must be unique
     * within an Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline void SetJobDefinitionName(Aws::String&& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = std::move(value); }

    /**
     * <p> The name of the model explainability job definition. The name must be unique
     * within an Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline void SetJobDefinitionName(const char* value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName.assign(value); }

    /**
     * <p> The name of the model explainability job definition. The name must be unique
     * within an Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline CreateModelExplainabilityJobDefinitionRequest& WithJobDefinitionName(const Aws::String& value) { SetJobDefinitionName(value); return *this;}

    /**
     * <p> The name of the model explainability job definition. The name must be unique
     * within an Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline CreateModelExplainabilityJobDefinitionRequest& WithJobDefinitionName(Aws::String&& value) { SetJobDefinitionName(std::move(value)); return *this;}

    /**
     * <p> The name of the model explainability job definition. The name must be unique
     * within an Amazon Web Services Region in the Amazon Web Services account.</p>
     */
    inline CreateModelExplainabilityJobDefinitionRequest& WithJobDefinitionName(const char* value) { SetJobDefinitionName(value); return *this;}


    /**
     * <p>The baseline configuration for a model explainability job.</p>
     */
    inline const ModelExplainabilityBaselineConfig& GetModelExplainabilityBaselineConfig() const{ return m_modelExplainabilityBaselineConfig; }

    /**
     * <p>The baseline configuration for a model explainability job.</p>
     */
    inline bool ModelExplainabilityBaselineConfigHasBeenSet() const { return m_modelExplainabilityBaselineConfigHasBeenSet; }

    /**
     * <p>The baseline configuration for a model explainability job.</p>
     */
    inline void SetModelExplainabilityBaselineConfig(const ModelExplainabilityBaselineConfig& value) { m_modelExplainabilityBaselineConfigHasBeenSet = true; m_modelExplainabilityBaselineConfig = value; }

    /**
     * <p>The baseline configuration for a model explainability job.</p>
     */
    inline void SetModelExplainabilityBaselineConfig(ModelExplainabilityBaselineConfig&& value) { m_modelExplainabilityBaselineConfigHasBeenSet = true; m_modelExplainabilityBaselineConfig = std::move(value); }

    /**
     * <p>The baseline configuration for a model explainability job.</p>
     */
    inline CreateModelExplainabilityJobDefinitionRequest& WithModelExplainabilityBaselineConfig(const ModelExplainabilityBaselineConfig& value) { SetModelExplainabilityBaselineConfig(value); return *this;}

    /**
     * <p>The baseline configuration for a model explainability job.</p>
     */
    inline CreateModelExplainabilityJobDefinitionRequest& WithModelExplainabilityBaselineConfig(ModelExplainabilityBaselineConfig&& value) { SetModelExplainabilityBaselineConfig(std::move(value)); return *this;}


    /**
     * <p>Configures the model explainability job to run a specified Docker container
     * image.</p>
     */
    inline const ModelExplainabilityAppSpecification& GetModelExplainabilityAppSpecification() const{ return m_modelExplainabilityAppSpecification; }

    /**
     * <p>Configures the model explainability job to run a specified Docker container
     * image.</p>
     */
    inline bool ModelExplainabilityAppSpecificationHasBeenSet() const { return m_modelExplainabilityAppSpecificationHasBeenSet; }

    /**
     * <p>Configures the model explainability job to run a specified Docker container
     * image.</p>
     */
    inline void SetModelExplainabilityAppSpecification(const ModelExplainabilityAppSpecification& value) { m_modelExplainabilityAppSpecificationHasBeenSet = true; m_modelExplainabilityAppSpecification = value; }

    /**
     * <p>Configures the model explainability job to run a specified Docker container
     * image.</p>
     */
    inline void SetModelExplainabilityAppSpecification(ModelExplainabilityAppSpecification&& value) { m_modelExplainabilityAppSpecificationHasBeenSet = true; m_modelExplainabilityAppSpecification = std::move(value); }

    /**
     * <p>Configures the model explainability job to run a specified Docker container
     * image.</p>
     */
    inline CreateModelExplainabilityJobDefinitionRequest& WithModelExplainabilityAppSpecification(const ModelExplainabilityAppSpecification& value) { SetModelExplainabilityAppSpecification(value); return *this;}

    /**
     * <p>Configures the model explainability job to run a specified Docker container
     * image.</p>
     */
    inline CreateModelExplainabilityJobDefinitionRequest& WithModelExplainabilityAppSpecification(ModelExplainabilityAppSpecification&& value) { SetModelExplainabilityAppSpecification(std::move(value)); return *this;}


    /**
     * <p>Inputs for the model explainability job.</p>
     */
    inline const ModelExplainabilityJobInput& GetModelExplainabilityJobInput() const{ return m_modelExplainabilityJobInput; }

    /**
     * <p>Inputs for the model explainability job.</p>
     */
    inline bool ModelExplainabilityJobInputHasBeenSet() const { return m_modelExplainabilityJobInputHasBeenSet; }

    /**
     * <p>Inputs for the model explainability job.</p>
     */
    inline void SetModelExplainabilityJobInput(const ModelExplainabilityJobInput& value) { m_modelExplainabilityJobInputHasBeenSet = true; m_modelExplainabilityJobInput = value; }

    /**
     * <p>Inputs for the model explainability job.</p>
     */
    inline void SetModelExplainabilityJobInput(ModelExplainabilityJobInput&& value) { m_modelExplainabilityJobInputHasBeenSet = true; m_modelExplainabilityJobInput = std::move(value); }

    /**
     * <p>Inputs for the model explainability job.</p>
     */
    inline CreateModelExplainabilityJobDefinitionRequest& WithModelExplainabilityJobInput(const ModelExplainabilityJobInput& value) { SetModelExplainabilityJobInput(value); return *this;}

    /**
     * <p>Inputs for the model explainability job.</p>
     */
    inline CreateModelExplainabilityJobDefinitionRequest& WithModelExplainabilityJobInput(ModelExplainabilityJobInput&& value) { SetModelExplainabilityJobInput(std::move(value)); return *this;}


    
    inline const MonitoringOutputConfig& GetModelExplainabilityJobOutputConfig() const{ return m_modelExplainabilityJobOutputConfig; }

    
    inline bool ModelExplainabilityJobOutputConfigHasBeenSet() const { return m_modelExplainabilityJobOutputConfigHasBeenSet; }

    
    inline void SetModelExplainabilityJobOutputConfig(const MonitoringOutputConfig& value) { m_modelExplainabilityJobOutputConfigHasBeenSet = true; m_modelExplainabilityJobOutputConfig = value; }

    
    inline void SetModelExplainabilityJobOutputConfig(MonitoringOutputConfig&& value) { m_modelExplainabilityJobOutputConfigHasBeenSet = true; m_modelExplainabilityJobOutputConfig = std::move(value); }

    
    inline CreateModelExplainabilityJobDefinitionRequest& WithModelExplainabilityJobOutputConfig(const MonitoringOutputConfig& value) { SetModelExplainabilityJobOutputConfig(value); return *this;}

    
    inline CreateModelExplainabilityJobDefinitionRequest& WithModelExplainabilityJobOutputConfig(MonitoringOutputConfig&& value) { SetModelExplainabilityJobOutputConfig(std::move(value)); return *this;}


    
    inline const MonitoringResources& GetJobResources() const{ return m_jobResources; }

    
    inline bool JobResourcesHasBeenSet() const { return m_jobResourcesHasBeenSet; }

    
    inline void SetJobResources(const MonitoringResources& value) { m_jobResourcesHasBeenSet = true; m_jobResources = value; }

    
    inline void SetJobResources(MonitoringResources&& value) { m_jobResourcesHasBeenSet = true; m_jobResources = std::move(value); }

    
    inline CreateModelExplainabilityJobDefinitionRequest& WithJobResources(const MonitoringResources& value) { SetJobResources(value); return *this;}

    
    inline CreateModelExplainabilityJobDefinitionRequest& WithJobResources(MonitoringResources&& value) { SetJobResources(std::move(value)); return *this;}


    /**
     * <p>Networking options for a model explainability job.</p>
     */
    inline const MonitoringNetworkConfig& GetNetworkConfig() const{ return m_networkConfig; }

    /**
     * <p>Networking options for a model explainability job.</p>
     */
    inline bool NetworkConfigHasBeenSet() const { return m_networkConfigHasBeenSet; }

    /**
     * <p>Networking options for a model explainability job.</p>
     */
    inline void SetNetworkConfig(const MonitoringNetworkConfig& value) { m_networkConfigHasBeenSet = true; m_networkConfig = value; }

    /**
     * <p>Networking options for a model explainability job.</p>
     */
    inline void SetNetworkConfig(MonitoringNetworkConfig&& value) { m_networkConfigHasBeenSet = true; m_networkConfig = std::move(value); }

    /**
     * <p>Networking options for a model explainability job.</p>
     */
    inline CreateModelExplainabilityJobDefinitionRequest& WithNetworkConfig(const MonitoringNetworkConfig& value) { SetNetworkConfig(value); return *this;}

    /**
     * <p>Networking options for a model explainability job.</p>
     */
    inline CreateModelExplainabilityJobDefinitionRequest& WithNetworkConfig(MonitoringNetworkConfig&& value) { SetNetworkConfig(std::move(value)); return *this;}


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
    inline CreateModelExplainabilityJobDefinitionRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline CreateModelExplainabilityJobDefinitionRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline CreateModelExplainabilityJobDefinitionRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    
    inline const MonitoringStoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }

    
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }

    
    inline void SetStoppingCondition(const MonitoringStoppingCondition& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = value; }

    
    inline void SetStoppingCondition(MonitoringStoppingCondition&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::move(value); }

    
    inline CreateModelExplainabilityJobDefinitionRequest& WithStoppingCondition(const MonitoringStoppingCondition& value) { SetStoppingCondition(value); return *this;}

    
    inline CreateModelExplainabilityJobDefinitionRequest& WithStoppingCondition(MonitoringStoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}


    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline CreateModelExplainabilityJobDefinitionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline CreateModelExplainabilityJobDefinitionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline CreateModelExplainabilityJobDefinitionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline CreateModelExplainabilityJobDefinitionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_jobDefinitionName;
    bool m_jobDefinitionNameHasBeenSet = false;

    ModelExplainabilityBaselineConfig m_modelExplainabilityBaselineConfig;
    bool m_modelExplainabilityBaselineConfigHasBeenSet = false;

    ModelExplainabilityAppSpecification m_modelExplainabilityAppSpecification;
    bool m_modelExplainabilityAppSpecificationHasBeenSet = false;

    ModelExplainabilityJobInput m_modelExplainabilityJobInput;
    bool m_modelExplainabilityJobInputHasBeenSet = false;

    MonitoringOutputConfig m_modelExplainabilityJobOutputConfig;
    bool m_modelExplainabilityJobOutputConfigHasBeenSet = false;

    MonitoringResources m_jobResources;
    bool m_jobResourcesHasBeenSet = false;

    MonitoringNetworkConfig m_networkConfig;
    bool m_networkConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    MonitoringStoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
