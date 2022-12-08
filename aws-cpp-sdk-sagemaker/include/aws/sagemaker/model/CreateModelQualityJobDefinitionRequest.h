/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelQualityBaselineConfig.h>
#include <aws/sagemaker/model/ModelQualityAppSpecification.h>
#include <aws/sagemaker/model/ModelQualityJobInput.h>
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
  class CreateModelQualityJobDefinitionRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateModelQualityJobDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateModelQualityJobDefinition"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the monitoring job definition.</p>
     */
    inline const Aws::String& GetJobDefinitionName() const{ return m_jobDefinitionName; }

    /**
     * <p>The name of the monitoring job definition.</p>
     */
    inline bool JobDefinitionNameHasBeenSet() const { return m_jobDefinitionNameHasBeenSet; }

    /**
     * <p>The name of the monitoring job definition.</p>
     */
    inline void SetJobDefinitionName(const Aws::String& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = value; }

    /**
     * <p>The name of the monitoring job definition.</p>
     */
    inline void SetJobDefinitionName(Aws::String&& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = std::move(value); }

    /**
     * <p>The name of the monitoring job definition.</p>
     */
    inline void SetJobDefinitionName(const char* value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName.assign(value); }

    /**
     * <p>The name of the monitoring job definition.</p>
     */
    inline CreateModelQualityJobDefinitionRequest& WithJobDefinitionName(const Aws::String& value) { SetJobDefinitionName(value); return *this;}

    /**
     * <p>The name of the monitoring job definition.</p>
     */
    inline CreateModelQualityJobDefinitionRequest& WithJobDefinitionName(Aws::String&& value) { SetJobDefinitionName(std::move(value)); return *this;}

    /**
     * <p>The name of the monitoring job definition.</p>
     */
    inline CreateModelQualityJobDefinitionRequest& WithJobDefinitionName(const char* value) { SetJobDefinitionName(value); return *this;}


    /**
     * <p>Specifies the constraints and baselines for the monitoring job.</p>
     */
    inline const ModelQualityBaselineConfig& GetModelQualityBaselineConfig() const{ return m_modelQualityBaselineConfig; }

    /**
     * <p>Specifies the constraints and baselines for the monitoring job.</p>
     */
    inline bool ModelQualityBaselineConfigHasBeenSet() const { return m_modelQualityBaselineConfigHasBeenSet; }

    /**
     * <p>Specifies the constraints and baselines for the monitoring job.</p>
     */
    inline void SetModelQualityBaselineConfig(const ModelQualityBaselineConfig& value) { m_modelQualityBaselineConfigHasBeenSet = true; m_modelQualityBaselineConfig = value; }

    /**
     * <p>Specifies the constraints and baselines for the monitoring job.</p>
     */
    inline void SetModelQualityBaselineConfig(ModelQualityBaselineConfig&& value) { m_modelQualityBaselineConfigHasBeenSet = true; m_modelQualityBaselineConfig = std::move(value); }

    /**
     * <p>Specifies the constraints and baselines for the monitoring job.</p>
     */
    inline CreateModelQualityJobDefinitionRequest& WithModelQualityBaselineConfig(const ModelQualityBaselineConfig& value) { SetModelQualityBaselineConfig(value); return *this;}

    /**
     * <p>Specifies the constraints and baselines for the monitoring job.</p>
     */
    inline CreateModelQualityJobDefinitionRequest& WithModelQualityBaselineConfig(ModelQualityBaselineConfig&& value) { SetModelQualityBaselineConfig(std::move(value)); return *this;}


    /**
     * <p>The container that runs the monitoring job.</p>
     */
    inline const ModelQualityAppSpecification& GetModelQualityAppSpecification() const{ return m_modelQualityAppSpecification; }

    /**
     * <p>The container that runs the monitoring job.</p>
     */
    inline bool ModelQualityAppSpecificationHasBeenSet() const { return m_modelQualityAppSpecificationHasBeenSet; }

    /**
     * <p>The container that runs the monitoring job.</p>
     */
    inline void SetModelQualityAppSpecification(const ModelQualityAppSpecification& value) { m_modelQualityAppSpecificationHasBeenSet = true; m_modelQualityAppSpecification = value; }

    /**
     * <p>The container that runs the monitoring job.</p>
     */
    inline void SetModelQualityAppSpecification(ModelQualityAppSpecification&& value) { m_modelQualityAppSpecificationHasBeenSet = true; m_modelQualityAppSpecification = std::move(value); }

    /**
     * <p>The container that runs the monitoring job.</p>
     */
    inline CreateModelQualityJobDefinitionRequest& WithModelQualityAppSpecification(const ModelQualityAppSpecification& value) { SetModelQualityAppSpecification(value); return *this;}

    /**
     * <p>The container that runs the monitoring job.</p>
     */
    inline CreateModelQualityJobDefinitionRequest& WithModelQualityAppSpecification(ModelQualityAppSpecification&& value) { SetModelQualityAppSpecification(std::move(value)); return *this;}


    /**
     * <p>A list of the inputs that are monitored. Currently endpoints are
     * supported.</p>
     */
    inline const ModelQualityJobInput& GetModelQualityJobInput() const{ return m_modelQualityJobInput; }

    /**
     * <p>A list of the inputs that are monitored. Currently endpoints are
     * supported.</p>
     */
    inline bool ModelQualityJobInputHasBeenSet() const { return m_modelQualityJobInputHasBeenSet; }

    /**
     * <p>A list of the inputs that are monitored. Currently endpoints are
     * supported.</p>
     */
    inline void SetModelQualityJobInput(const ModelQualityJobInput& value) { m_modelQualityJobInputHasBeenSet = true; m_modelQualityJobInput = value; }

    /**
     * <p>A list of the inputs that are monitored. Currently endpoints are
     * supported.</p>
     */
    inline void SetModelQualityJobInput(ModelQualityJobInput&& value) { m_modelQualityJobInputHasBeenSet = true; m_modelQualityJobInput = std::move(value); }

    /**
     * <p>A list of the inputs that are monitored. Currently endpoints are
     * supported.</p>
     */
    inline CreateModelQualityJobDefinitionRequest& WithModelQualityJobInput(const ModelQualityJobInput& value) { SetModelQualityJobInput(value); return *this;}

    /**
     * <p>A list of the inputs that are monitored. Currently endpoints are
     * supported.</p>
     */
    inline CreateModelQualityJobDefinitionRequest& WithModelQualityJobInput(ModelQualityJobInput&& value) { SetModelQualityJobInput(std::move(value)); return *this;}


    
    inline const MonitoringOutputConfig& GetModelQualityJobOutputConfig() const{ return m_modelQualityJobOutputConfig; }

    
    inline bool ModelQualityJobOutputConfigHasBeenSet() const { return m_modelQualityJobOutputConfigHasBeenSet; }

    
    inline void SetModelQualityJobOutputConfig(const MonitoringOutputConfig& value) { m_modelQualityJobOutputConfigHasBeenSet = true; m_modelQualityJobOutputConfig = value; }

    
    inline void SetModelQualityJobOutputConfig(MonitoringOutputConfig&& value) { m_modelQualityJobOutputConfigHasBeenSet = true; m_modelQualityJobOutputConfig = std::move(value); }

    
    inline CreateModelQualityJobDefinitionRequest& WithModelQualityJobOutputConfig(const MonitoringOutputConfig& value) { SetModelQualityJobOutputConfig(value); return *this;}

    
    inline CreateModelQualityJobDefinitionRequest& WithModelQualityJobOutputConfig(MonitoringOutputConfig&& value) { SetModelQualityJobOutputConfig(std::move(value)); return *this;}


    
    inline const MonitoringResources& GetJobResources() const{ return m_jobResources; }

    
    inline bool JobResourcesHasBeenSet() const { return m_jobResourcesHasBeenSet; }

    
    inline void SetJobResources(const MonitoringResources& value) { m_jobResourcesHasBeenSet = true; m_jobResources = value; }

    
    inline void SetJobResources(MonitoringResources&& value) { m_jobResourcesHasBeenSet = true; m_jobResources = std::move(value); }

    
    inline CreateModelQualityJobDefinitionRequest& WithJobResources(const MonitoringResources& value) { SetJobResources(value); return *this;}

    
    inline CreateModelQualityJobDefinitionRequest& WithJobResources(MonitoringResources&& value) { SetJobResources(std::move(value)); return *this;}


    /**
     * <p>Specifies the network configuration for the monitoring job.</p>
     */
    inline const MonitoringNetworkConfig& GetNetworkConfig() const{ return m_networkConfig; }

    /**
     * <p>Specifies the network configuration for the monitoring job.</p>
     */
    inline bool NetworkConfigHasBeenSet() const { return m_networkConfigHasBeenSet; }

    /**
     * <p>Specifies the network configuration for the monitoring job.</p>
     */
    inline void SetNetworkConfig(const MonitoringNetworkConfig& value) { m_networkConfigHasBeenSet = true; m_networkConfig = value; }

    /**
     * <p>Specifies the network configuration for the monitoring job.</p>
     */
    inline void SetNetworkConfig(MonitoringNetworkConfig&& value) { m_networkConfigHasBeenSet = true; m_networkConfig = std::move(value); }

    /**
     * <p>Specifies the network configuration for the monitoring job.</p>
     */
    inline CreateModelQualityJobDefinitionRequest& WithNetworkConfig(const MonitoringNetworkConfig& value) { SetNetworkConfig(value); return *this;}

    /**
     * <p>Specifies the network configuration for the monitoring job.</p>
     */
    inline CreateModelQualityJobDefinitionRequest& WithNetworkConfig(MonitoringNetworkConfig&& value) { SetNetworkConfig(std::move(value)); return *this;}


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
    inline CreateModelQualityJobDefinitionRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline CreateModelQualityJobDefinitionRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf.</p>
     */
    inline CreateModelQualityJobDefinitionRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    
    inline const MonitoringStoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }

    
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }

    
    inline void SetStoppingCondition(const MonitoringStoppingCondition& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = value; }

    
    inline void SetStoppingCondition(MonitoringStoppingCondition&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::move(value); }

    
    inline CreateModelQualityJobDefinitionRequest& WithStoppingCondition(const MonitoringStoppingCondition& value) { SetStoppingCondition(value); return *this;}

    
    inline CreateModelQualityJobDefinitionRequest& WithStoppingCondition(MonitoringStoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}


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
    inline CreateModelQualityJobDefinitionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline CreateModelQualityJobDefinitionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline CreateModelQualityJobDefinitionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>(Optional) An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-whatURL">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline CreateModelQualityJobDefinitionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_jobDefinitionName;
    bool m_jobDefinitionNameHasBeenSet = false;

    ModelQualityBaselineConfig m_modelQualityBaselineConfig;
    bool m_modelQualityBaselineConfigHasBeenSet = false;

    ModelQualityAppSpecification m_modelQualityAppSpecification;
    bool m_modelQualityAppSpecificationHasBeenSet = false;

    ModelQualityJobInput m_modelQualityJobInput;
    bool m_modelQualityJobInputHasBeenSet = false;

    MonitoringOutputConfig m_modelQualityJobOutputConfig;
    bool m_modelQualityJobOutputConfigHasBeenSet = false;

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
