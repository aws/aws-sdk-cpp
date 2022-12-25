/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HyperParameterTuningJobObjective.h>
#include <aws/sagemaker/model/ParameterRanges.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/HyperParameterAlgorithmSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/VpcConfig.h>
#include <aws/sagemaker/model/OutputDataConfig.h>
#include <aws/sagemaker/model/ResourceConfig.h>
#include <aws/sagemaker/model/StoppingCondition.h>
#include <aws/sagemaker/model/CheckpointConfig.h>
#include <aws/sagemaker/model/RetryStrategy.h>
#include <aws/sagemaker/model/HyperParameterTuningResourceConfig.h>
#include <aws/sagemaker/model/Channel.h>
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
   * <p>Defines the training jobs launched by a hyperparameter tuning
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HyperParameterTrainingJobDefinition">AWS
   * API Reference</a></p>
   */
  class HyperParameterTrainingJobDefinition
  {
  public:
    AWS_SAGEMAKER_API HyperParameterTrainingJobDefinition();
    AWS_SAGEMAKER_API HyperParameterTrainingJobDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HyperParameterTrainingJobDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The job definition name.</p>
     */
    inline const Aws::String& GetDefinitionName() const{ return m_definitionName; }

    /**
     * <p>The job definition name.</p>
     */
    inline bool DefinitionNameHasBeenSet() const { return m_definitionNameHasBeenSet; }

    /**
     * <p>The job definition name.</p>
     */
    inline void SetDefinitionName(const Aws::String& value) { m_definitionNameHasBeenSet = true; m_definitionName = value; }

    /**
     * <p>The job definition name.</p>
     */
    inline void SetDefinitionName(Aws::String&& value) { m_definitionNameHasBeenSet = true; m_definitionName = std::move(value); }

    /**
     * <p>The job definition name.</p>
     */
    inline void SetDefinitionName(const char* value) { m_definitionNameHasBeenSet = true; m_definitionName.assign(value); }

    /**
     * <p>The job definition name.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithDefinitionName(const Aws::String& value) { SetDefinitionName(value); return *this;}

    /**
     * <p>The job definition name.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithDefinitionName(Aws::String&& value) { SetDefinitionName(std::move(value)); return *this;}

    /**
     * <p>The job definition name.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithDefinitionName(const char* value) { SetDefinitionName(value); return *this;}


    
    inline const HyperParameterTuningJobObjective& GetTuningObjective() const{ return m_tuningObjective; }

    
    inline bool TuningObjectiveHasBeenSet() const { return m_tuningObjectiveHasBeenSet; }

    
    inline void SetTuningObjective(const HyperParameterTuningJobObjective& value) { m_tuningObjectiveHasBeenSet = true; m_tuningObjective = value; }

    
    inline void SetTuningObjective(HyperParameterTuningJobObjective&& value) { m_tuningObjectiveHasBeenSet = true; m_tuningObjective = std::move(value); }

    
    inline HyperParameterTrainingJobDefinition& WithTuningObjective(const HyperParameterTuningJobObjective& value) { SetTuningObjective(value); return *this;}

    
    inline HyperParameterTrainingJobDefinition& WithTuningObjective(HyperParameterTuningJobObjective&& value) { SetTuningObjective(std::move(value)); return *this;}


    
    inline const ParameterRanges& GetHyperParameterRanges() const{ return m_hyperParameterRanges; }

    
    inline bool HyperParameterRangesHasBeenSet() const { return m_hyperParameterRangesHasBeenSet; }

    
    inline void SetHyperParameterRanges(const ParameterRanges& value) { m_hyperParameterRangesHasBeenSet = true; m_hyperParameterRanges = value; }

    
    inline void SetHyperParameterRanges(ParameterRanges&& value) { m_hyperParameterRangesHasBeenSet = true; m_hyperParameterRanges = std::move(value); }

    
    inline HyperParameterTrainingJobDefinition& WithHyperParameterRanges(const ParameterRanges& value) { SetHyperParameterRanges(value); return *this;}

    
    inline HyperParameterTrainingJobDefinition& WithHyperParameterRanges(ParameterRanges&& value) { SetHyperParameterRanges(std::move(value)); return *this;}


    /**
     * <p>Specifies the values of hyperparameters that do not change for the tuning
     * job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStaticHyperParameters() const{ return m_staticHyperParameters; }

    /**
     * <p>Specifies the values of hyperparameters that do not change for the tuning
     * job.</p>
     */
    inline bool StaticHyperParametersHasBeenSet() const { return m_staticHyperParametersHasBeenSet; }

    /**
     * <p>Specifies the values of hyperparameters that do not change for the tuning
     * job.</p>
     */
    inline void SetStaticHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_staticHyperParametersHasBeenSet = true; m_staticHyperParameters = value; }

    /**
     * <p>Specifies the values of hyperparameters that do not change for the tuning
     * job.</p>
     */
    inline void SetStaticHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_staticHyperParametersHasBeenSet = true; m_staticHyperParameters = std::move(value); }

    /**
     * <p>Specifies the values of hyperparameters that do not change for the tuning
     * job.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithStaticHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetStaticHyperParameters(value); return *this;}

    /**
     * <p>Specifies the values of hyperparameters that do not change for the tuning
     * job.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithStaticHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetStaticHyperParameters(std::move(value)); return *this;}

    /**
     * <p>Specifies the values of hyperparameters that do not change for the tuning
     * job.</p>
     */
    inline HyperParameterTrainingJobDefinition& AddStaticHyperParameters(const Aws::String& key, const Aws::String& value) { m_staticHyperParametersHasBeenSet = true; m_staticHyperParameters.emplace(key, value); return *this; }

    /**
     * <p>Specifies the values of hyperparameters that do not change for the tuning
     * job.</p>
     */
    inline HyperParameterTrainingJobDefinition& AddStaticHyperParameters(Aws::String&& key, const Aws::String& value) { m_staticHyperParametersHasBeenSet = true; m_staticHyperParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the values of hyperparameters that do not change for the tuning
     * job.</p>
     */
    inline HyperParameterTrainingJobDefinition& AddStaticHyperParameters(const Aws::String& key, Aws::String&& value) { m_staticHyperParametersHasBeenSet = true; m_staticHyperParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the values of hyperparameters that do not change for the tuning
     * job.</p>
     */
    inline HyperParameterTrainingJobDefinition& AddStaticHyperParameters(Aws::String&& key, Aws::String&& value) { m_staticHyperParametersHasBeenSet = true; m_staticHyperParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies the values of hyperparameters that do not change for the tuning
     * job.</p>
     */
    inline HyperParameterTrainingJobDefinition& AddStaticHyperParameters(const char* key, Aws::String&& value) { m_staticHyperParametersHasBeenSet = true; m_staticHyperParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the values of hyperparameters that do not change for the tuning
     * job.</p>
     */
    inline HyperParameterTrainingJobDefinition& AddStaticHyperParameters(Aws::String&& key, const char* value) { m_staticHyperParametersHasBeenSet = true; m_staticHyperParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the values of hyperparameters that do not change for the tuning
     * job.</p>
     */
    inline HyperParameterTrainingJobDefinition& AddStaticHyperParameters(const char* key, const char* value) { m_staticHyperParametersHasBeenSet = true; m_staticHyperParameters.emplace(key, value); return *this; }


    /**
     * <p>The <a>HyperParameterAlgorithmSpecification</a> object that specifies the
     * resource algorithm to use for the training jobs that the tuning job
     * launches.</p>
     */
    inline const HyperParameterAlgorithmSpecification& GetAlgorithmSpecification() const{ return m_algorithmSpecification; }

    /**
     * <p>The <a>HyperParameterAlgorithmSpecification</a> object that specifies the
     * resource algorithm to use for the training jobs that the tuning job
     * launches.</p>
     */
    inline bool AlgorithmSpecificationHasBeenSet() const { return m_algorithmSpecificationHasBeenSet; }

    /**
     * <p>The <a>HyperParameterAlgorithmSpecification</a> object that specifies the
     * resource algorithm to use for the training jobs that the tuning job
     * launches.</p>
     */
    inline void SetAlgorithmSpecification(const HyperParameterAlgorithmSpecification& value) { m_algorithmSpecificationHasBeenSet = true; m_algorithmSpecification = value; }

    /**
     * <p>The <a>HyperParameterAlgorithmSpecification</a> object that specifies the
     * resource algorithm to use for the training jobs that the tuning job
     * launches.</p>
     */
    inline void SetAlgorithmSpecification(HyperParameterAlgorithmSpecification&& value) { m_algorithmSpecificationHasBeenSet = true; m_algorithmSpecification = std::move(value); }

    /**
     * <p>The <a>HyperParameterAlgorithmSpecification</a> object that specifies the
     * resource algorithm to use for the training jobs that the tuning job
     * launches.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithAlgorithmSpecification(const HyperParameterAlgorithmSpecification& value) { SetAlgorithmSpecification(value); return *this;}

    /**
     * <p>The <a>HyperParameterAlgorithmSpecification</a> object that specifies the
     * resource algorithm to use for the training jobs that the tuning job
     * launches.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithAlgorithmSpecification(HyperParameterAlgorithmSpecification&& value) { SetAlgorithmSpecification(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the training
     * jobs that the tuning job launches.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the training
     * jobs that the tuning job launches.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the training
     * jobs that the tuning job launches.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the training
     * jobs that the tuning job launches.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the training
     * jobs that the tuning job launches.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the training
     * jobs that the tuning job launches.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the training
     * jobs that the tuning job launches.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role associated with the training
     * jobs that the tuning job launches.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>An array of <a>Channel</a> objects that specify the input for the training
     * jobs that the tuning job launches.</p>
     */
    inline const Aws::Vector<Channel>& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>An array of <a>Channel</a> objects that specify the input for the training
     * jobs that the tuning job launches.</p>
     */
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }

    /**
     * <p>An array of <a>Channel</a> objects that specify the input for the training
     * jobs that the tuning job launches.</p>
     */
    inline void SetInputDataConfig(const Aws::Vector<Channel>& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    /**
     * <p>An array of <a>Channel</a> objects that specify the input for the training
     * jobs that the tuning job launches.</p>
     */
    inline void SetInputDataConfig(Aws::Vector<Channel>&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    /**
     * <p>An array of <a>Channel</a> objects that specify the input for the training
     * jobs that the tuning job launches.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithInputDataConfig(const Aws::Vector<Channel>& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>An array of <a>Channel</a> objects that specify the input for the training
     * jobs that the tuning job launches.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithInputDataConfig(Aws::Vector<Channel>&& value) { SetInputDataConfig(std::move(value)); return *this;}

    /**
     * <p>An array of <a>Channel</a> objects that specify the input for the training
     * jobs that the tuning job launches.</p>
     */
    inline HyperParameterTrainingJobDefinition& AddInputDataConfig(const Channel& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig.push_back(value); return *this; }

    /**
     * <p>An array of <a>Channel</a> objects that specify the input for the training
     * jobs that the tuning job launches.</p>
     */
    inline HyperParameterTrainingJobDefinition& AddInputDataConfig(Channel&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>The <a>VpcConfig</a> object that specifies the VPC that you want the training
     * jobs that this hyperparameter tuning job launches to connect to. Control access
     * to and from your training container by configuring the VPC. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-vpc.html">Protect
     * Training Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>The <a>VpcConfig</a> object that specifies the VPC that you want the training
     * jobs that this hyperparameter tuning job launches to connect to. Control access
     * to and from your training container by configuring the VPC. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-vpc.html">Protect
     * Training Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    /**
     * <p>The <a>VpcConfig</a> object that specifies the VPC that you want the training
     * jobs that this hyperparameter tuning job launches to connect to. Control access
     * to and from your training container by configuring the VPC. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-vpc.html">Protect
     * Training Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>The <a>VpcConfig</a> object that specifies the VPC that you want the training
     * jobs that this hyperparameter tuning job launches to connect to. Control access
     * to and from your training container by configuring the VPC. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-vpc.html">Protect
     * Training Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>The <a>VpcConfig</a> object that specifies the VPC that you want the training
     * jobs that this hyperparameter tuning job launches to connect to. Control access
     * to and from your training container by configuring the VPC. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-vpc.html">Protect
     * Training Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>The <a>VpcConfig</a> object that specifies the VPC that you want the training
     * jobs that this hyperparameter tuning job launches to connect to. Control access
     * to and from your training container by configuring the VPC. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-vpc.html">Protect
     * Training Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies the path to the Amazon S3 bucket where you store model artifacts
     * from the training jobs that the tuning job launches.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    /**
     * <p>Specifies the path to the Amazon S3 bucket where you store model artifacts
     * from the training jobs that the tuning job launches.</p>
     */
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }

    /**
     * <p>Specifies the path to the Amazon S3 bucket where you store model artifacts
     * from the training jobs that the tuning job launches.</p>
     */
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }

    /**
     * <p>Specifies the path to the Amazon S3 bucket where you store model artifacts
     * from the training jobs that the tuning job launches.</p>
     */
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }

    /**
     * <p>Specifies the path to the Amazon S3 bucket where you store model artifacts
     * from the training jobs that the tuning job launches.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    /**
     * <p>Specifies the path to the Amazon S3 bucket where you store model artifacts
     * from the training jobs that the tuning job launches.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}


    /**
     * <p>The resources, including the compute instances and storage volumes, to use
     * for the training jobs that the tuning job launches.</p> <p>Storage volumes store
     * model artifacts and incremental states. Training algorithms might also use
     * storage volumes for scratch space. If you want SageMaker to use the storage
     * volume to store the training data, choose <code>File</code> as the
     * <code>TrainingInputMode</code> in the algorithm specification. For distributed
     * training algorithms, specify an instance count greater than 1.</p>  <p>If
     * you want to use hyperparameter optimization with instance type flexibility, use
     * <code>HyperParameterTuningResourceConfig</code> instead.</p> 
     */
    inline const ResourceConfig& GetResourceConfig() const{ return m_resourceConfig; }

    /**
     * <p>The resources, including the compute instances and storage volumes, to use
     * for the training jobs that the tuning job launches.</p> <p>Storage volumes store
     * model artifacts and incremental states. Training algorithms might also use
     * storage volumes for scratch space. If you want SageMaker to use the storage
     * volume to store the training data, choose <code>File</code> as the
     * <code>TrainingInputMode</code> in the algorithm specification. For distributed
     * training algorithms, specify an instance count greater than 1.</p>  <p>If
     * you want to use hyperparameter optimization with instance type flexibility, use
     * <code>HyperParameterTuningResourceConfig</code> instead.</p> 
     */
    inline bool ResourceConfigHasBeenSet() const { return m_resourceConfigHasBeenSet; }

    /**
     * <p>The resources, including the compute instances and storage volumes, to use
     * for the training jobs that the tuning job launches.</p> <p>Storage volumes store
     * model artifacts and incremental states. Training algorithms might also use
     * storage volumes for scratch space. If you want SageMaker to use the storage
     * volume to store the training data, choose <code>File</code> as the
     * <code>TrainingInputMode</code> in the algorithm specification. For distributed
     * training algorithms, specify an instance count greater than 1.</p>  <p>If
     * you want to use hyperparameter optimization with instance type flexibility, use
     * <code>HyperParameterTuningResourceConfig</code> instead.</p> 
     */
    inline void SetResourceConfig(const ResourceConfig& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = value; }

    /**
     * <p>The resources, including the compute instances and storage volumes, to use
     * for the training jobs that the tuning job launches.</p> <p>Storage volumes store
     * model artifacts and incremental states. Training algorithms might also use
     * storage volumes for scratch space. If you want SageMaker to use the storage
     * volume to store the training data, choose <code>File</code> as the
     * <code>TrainingInputMode</code> in the algorithm specification. For distributed
     * training algorithms, specify an instance count greater than 1.</p>  <p>If
     * you want to use hyperparameter optimization with instance type flexibility, use
     * <code>HyperParameterTuningResourceConfig</code> instead.</p> 
     */
    inline void SetResourceConfig(ResourceConfig&& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = std::move(value); }

    /**
     * <p>The resources, including the compute instances and storage volumes, to use
     * for the training jobs that the tuning job launches.</p> <p>Storage volumes store
     * model artifacts and incremental states. Training algorithms might also use
     * storage volumes for scratch space. If you want SageMaker to use the storage
     * volume to store the training data, choose <code>File</code> as the
     * <code>TrainingInputMode</code> in the algorithm specification. For distributed
     * training algorithms, specify an instance count greater than 1.</p>  <p>If
     * you want to use hyperparameter optimization with instance type flexibility, use
     * <code>HyperParameterTuningResourceConfig</code> instead.</p> 
     */
    inline HyperParameterTrainingJobDefinition& WithResourceConfig(const ResourceConfig& value) { SetResourceConfig(value); return *this;}

    /**
     * <p>The resources, including the compute instances and storage volumes, to use
     * for the training jobs that the tuning job launches.</p> <p>Storage volumes store
     * model artifacts and incremental states. Training algorithms might also use
     * storage volumes for scratch space. If you want SageMaker to use the storage
     * volume to store the training data, choose <code>File</code> as the
     * <code>TrainingInputMode</code> in the algorithm specification. For distributed
     * training algorithms, specify an instance count greater than 1.</p>  <p>If
     * you want to use hyperparameter optimization with instance type flexibility, use
     * <code>HyperParameterTuningResourceConfig</code> instead.</p> 
     */
    inline HyperParameterTrainingJobDefinition& WithResourceConfig(ResourceConfig&& value) { SetResourceConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies a limit to how long a model hyperparameter training job can run. It
     * also specifies how long a managed spot training job has to complete. When the
     * job reaches the time limit, SageMaker ends the training job. Use this API to cap
     * model training costs.</p>
     */
    inline const StoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }

    /**
     * <p>Specifies a limit to how long a model hyperparameter training job can run. It
     * also specifies how long a managed spot training job has to complete. When the
     * job reaches the time limit, SageMaker ends the training job. Use this API to cap
     * model training costs.</p>
     */
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }

    /**
     * <p>Specifies a limit to how long a model hyperparameter training job can run. It
     * also specifies how long a managed spot training job has to complete. When the
     * job reaches the time limit, SageMaker ends the training job. Use this API to cap
     * model training costs.</p>
     */
    inline void SetStoppingCondition(const StoppingCondition& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = value; }

    /**
     * <p>Specifies a limit to how long a model hyperparameter training job can run. It
     * also specifies how long a managed spot training job has to complete. When the
     * job reaches the time limit, SageMaker ends the training job. Use this API to cap
     * model training costs.</p>
     */
    inline void SetStoppingCondition(StoppingCondition&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::move(value); }

    /**
     * <p>Specifies a limit to how long a model hyperparameter training job can run. It
     * also specifies how long a managed spot training job has to complete. When the
     * job reaches the time limit, SageMaker ends the training job. Use this API to cap
     * model training costs.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithStoppingCondition(const StoppingCondition& value) { SetStoppingCondition(value); return *this;}

    /**
     * <p>Specifies a limit to how long a model hyperparameter training job can run. It
     * also specifies how long a managed spot training job has to complete. When the
     * job reaches the time limit, SageMaker ends the training job. Use this API to cap
     * model training costs.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithStoppingCondition(StoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}


    /**
     * <p>Isolates the training container. No inbound or outbound network calls can be
     * made, except for calls between peers within a training cluster for distributed
     * training. If network isolation is used for training jobs that are configured to
     * use a VPC, SageMaker downloads and uploads customer data and model artifacts
     * through the specified VPC, but the training container does not have network
     * access.</p>
     */
    inline bool GetEnableNetworkIsolation() const{ return m_enableNetworkIsolation; }

    /**
     * <p>Isolates the training container. No inbound or outbound network calls can be
     * made, except for calls between peers within a training cluster for distributed
     * training. If network isolation is used for training jobs that are configured to
     * use a VPC, SageMaker downloads and uploads customer data and model artifacts
     * through the specified VPC, but the training container does not have network
     * access.</p>
     */
    inline bool EnableNetworkIsolationHasBeenSet() const { return m_enableNetworkIsolationHasBeenSet; }

    /**
     * <p>Isolates the training container. No inbound or outbound network calls can be
     * made, except for calls between peers within a training cluster for distributed
     * training. If network isolation is used for training jobs that are configured to
     * use a VPC, SageMaker downloads and uploads customer data and model artifacts
     * through the specified VPC, but the training container does not have network
     * access.</p>
     */
    inline void SetEnableNetworkIsolation(bool value) { m_enableNetworkIsolationHasBeenSet = true; m_enableNetworkIsolation = value; }

    /**
     * <p>Isolates the training container. No inbound or outbound network calls can be
     * made, except for calls between peers within a training cluster for distributed
     * training. If network isolation is used for training jobs that are configured to
     * use a VPC, SageMaker downloads and uploads customer data and model artifacts
     * through the specified VPC, but the training container does not have network
     * access.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithEnableNetworkIsolation(bool value) { SetEnableNetworkIsolation(value); return *this;}


    /**
     * <p>To encrypt all communications between ML compute instances in distributed
     * training, choose <code>True</code>. Encryption provides greater security for
     * distributed training, but training might take longer. How long it takes depends
     * on the amount of communication between compute instances, especially if you use
     * a deep learning algorithm in distributed training.</p>
     */
    inline bool GetEnableInterContainerTrafficEncryption() const{ return m_enableInterContainerTrafficEncryption; }

    /**
     * <p>To encrypt all communications between ML compute instances in distributed
     * training, choose <code>True</code>. Encryption provides greater security for
     * distributed training, but training might take longer. How long it takes depends
     * on the amount of communication between compute instances, especially if you use
     * a deep learning algorithm in distributed training.</p>
     */
    inline bool EnableInterContainerTrafficEncryptionHasBeenSet() const { return m_enableInterContainerTrafficEncryptionHasBeenSet; }

    /**
     * <p>To encrypt all communications between ML compute instances in distributed
     * training, choose <code>True</code>. Encryption provides greater security for
     * distributed training, but training might take longer. How long it takes depends
     * on the amount of communication between compute instances, especially if you use
     * a deep learning algorithm in distributed training.</p>
     */
    inline void SetEnableInterContainerTrafficEncryption(bool value) { m_enableInterContainerTrafficEncryptionHasBeenSet = true; m_enableInterContainerTrafficEncryption = value; }

    /**
     * <p>To encrypt all communications between ML compute instances in distributed
     * training, choose <code>True</code>. Encryption provides greater security for
     * distributed training, but training might take longer. How long it takes depends
     * on the amount of communication between compute instances, especially if you use
     * a deep learning algorithm in distributed training.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithEnableInterContainerTrafficEncryption(bool value) { SetEnableInterContainerTrafficEncryption(value); return *this;}


    /**
     * <p>A Boolean indicating whether managed spot training is enabled
     * (<code>True</code>) or not (<code>False</code>).</p>
     */
    inline bool GetEnableManagedSpotTraining() const{ return m_enableManagedSpotTraining; }

    /**
     * <p>A Boolean indicating whether managed spot training is enabled
     * (<code>True</code>) or not (<code>False</code>).</p>
     */
    inline bool EnableManagedSpotTrainingHasBeenSet() const { return m_enableManagedSpotTrainingHasBeenSet; }

    /**
     * <p>A Boolean indicating whether managed spot training is enabled
     * (<code>True</code>) or not (<code>False</code>).</p>
     */
    inline void SetEnableManagedSpotTraining(bool value) { m_enableManagedSpotTrainingHasBeenSet = true; m_enableManagedSpotTraining = value; }

    /**
     * <p>A Boolean indicating whether managed spot training is enabled
     * (<code>True</code>) or not (<code>False</code>).</p>
     */
    inline HyperParameterTrainingJobDefinition& WithEnableManagedSpotTraining(bool value) { SetEnableManagedSpotTraining(value); return *this;}


    
    inline const CheckpointConfig& GetCheckpointConfig() const{ return m_checkpointConfig; }

    
    inline bool CheckpointConfigHasBeenSet() const { return m_checkpointConfigHasBeenSet; }

    
    inline void SetCheckpointConfig(const CheckpointConfig& value) { m_checkpointConfigHasBeenSet = true; m_checkpointConfig = value; }

    
    inline void SetCheckpointConfig(CheckpointConfig&& value) { m_checkpointConfigHasBeenSet = true; m_checkpointConfig = std::move(value); }

    
    inline HyperParameterTrainingJobDefinition& WithCheckpointConfig(const CheckpointConfig& value) { SetCheckpointConfig(value); return *this;}

    
    inline HyperParameterTrainingJobDefinition& WithCheckpointConfig(CheckpointConfig&& value) { SetCheckpointConfig(std::move(value)); return *this;}


    /**
     * <p>The number of times to retry the job when the job fails due to an
     * <code>InternalServerError</code>.</p>
     */
    inline const RetryStrategy& GetRetryStrategy() const{ return m_retryStrategy; }

    /**
     * <p>The number of times to retry the job when the job fails due to an
     * <code>InternalServerError</code>.</p>
     */
    inline bool RetryStrategyHasBeenSet() const { return m_retryStrategyHasBeenSet; }

    /**
     * <p>The number of times to retry the job when the job fails due to an
     * <code>InternalServerError</code>.</p>
     */
    inline void SetRetryStrategy(const RetryStrategy& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = value; }

    /**
     * <p>The number of times to retry the job when the job fails due to an
     * <code>InternalServerError</code>.</p>
     */
    inline void SetRetryStrategy(RetryStrategy&& value) { m_retryStrategyHasBeenSet = true; m_retryStrategy = std::move(value); }

    /**
     * <p>The number of times to retry the job when the job fails due to an
     * <code>InternalServerError</code>.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithRetryStrategy(const RetryStrategy& value) { SetRetryStrategy(value); return *this;}

    /**
     * <p>The number of times to retry the job when the job fails due to an
     * <code>InternalServerError</code>.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithRetryStrategy(RetryStrategy&& value) { SetRetryStrategy(std::move(value)); return *this;}


    /**
     * <p>The configuration for the hyperparameter tuning resources, including the
     * compute instances and storage volumes, used for training jobs launched by the
     * tuning job. By default, storage volumes hold model artifacts and incremental
     * states. Choose <code>File</code> for <code>TrainingInputMode</code> in the
     * <code>AlgorithmSpecification</code> parameter to additionally store training
     * data in the storage volume (optional).</p>
     */
    inline const HyperParameterTuningResourceConfig& GetHyperParameterTuningResourceConfig() const{ return m_hyperParameterTuningResourceConfig; }

    /**
     * <p>The configuration for the hyperparameter tuning resources, including the
     * compute instances and storage volumes, used for training jobs launched by the
     * tuning job. By default, storage volumes hold model artifacts and incremental
     * states. Choose <code>File</code> for <code>TrainingInputMode</code> in the
     * <code>AlgorithmSpecification</code> parameter to additionally store training
     * data in the storage volume (optional).</p>
     */
    inline bool HyperParameterTuningResourceConfigHasBeenSet() const { return m_hyperParameterTuningResourceConfigHasBeenSet; }

    /**
     * <p>The configuration for the hyperparameter tuning resources, including the
     * compute instances and storage volumes, used for training jobs launched by the
     * tuning job. By default, storage volumes hold model artifacts and incremental
     * states. Choose <code>File</code> for <code>TrainingInputMode</code> in the
     * <code>AlgorithmSpecification</code> parameter to additionally store training
     * data in the storage volume (optional).</p>
     */
    inline void SetHyperParameterTuningResourceConfig(const HyperParameterTuningResourceConfig& value) { m_hyperParameterTuningResourceConfigHasBeenSet = true; m_hyperParameterTuningResourceConfig = value; }

    /**
     * <p>The configuration for the hyperparameter tuning resources, including the
     * compute instances and storage volumes, used for training jobs launched by the
     * tuning job. By default, storage volumes hold model artifacts and incremental
     * states. Choose <code>File</code> for <code>TrainingInputMode</code> in the
     * <code>AlgorithmSpecification</code> parameter to additionally store training
     * data in the storage volume (optional).</p>
     */
    inline void SetHyperParameterTuningResourceConfig(HyperParameterTuningResourceConfig&& value) { m_hyperParameterTuningResourceConfigHasBeenSet = true; m_hyperParameterTuningResourceConfig = std::move(value); }

    /**
     * <p>The configuration for the hyperparameter tuning resources, including the
     * compute instances and storage volumes, used for training jobs launched by the
     * tuning job. By default, storage volumes hold model artifacts and incremental
     * states. Choose <code>File</code> for <code>TrainingInputMode</code> in the
     * <code>AlgorithmSpecification</code> parameter to additionally store training
     * data in the storage volume (optional).</p>
     */
    inline HyperParameterTrainingJobDefinition& WithHyperParameterTuningResourceConfig(const HyperParameterTuningResourceConfig& value) { SetHyperParameterTuningResourceConfig(value); return *this;}

    /**
     * <p>The configuration for the hyperparameter tuning resources, including the
     * compute instances and storage volumes, used for training jobs launched by the
     * tuning job. By default, storage volumes hold model artifacts and incremental
     * states. Choose <code>File</code> for <code>TrainingInputMode</code> in the
     * <code>AlgorithmSpecification</code> parameter to additionally store training
     * data in the storage volume (optional).</p>
     */
    inline HyperParameterTrainingJobDefinition& WithHyperParameterTuningResourceConfig(HyperParameterTuningResourceConfig&& value) { SetHyperParameterTuningResourceConfig(std::move(value)); return *this;}

  private:

    Aws::String m_definitionName;
    bool m_definitionNameHasBeenSet = false;

    HyperParameterTuningJobObjective m_tuningObjective;
    bool m_tuningObjectiveHasBeenSet = false;

    ParameterRanges m_hyperParameterRanges;
    bool m_hyperParameterRangesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_staticHyperParameters;
    bool m_staticHyperParametersHasBeenSet = false;

    HyperParameterAlgorithmSpecification m_algorithmSpecification;
    bool m_algorithmSpecificationHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Channel> m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    ResourceConfig m_resourceConfig;
    bool m_resourceConfigHasBeenSet = false;

    StoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet = false;

    bool m_enableNetworkIsolation;
    bool m_enableNetworkIsolationHasBeenSet = false;

    bool m_enableInterContainerTrafficEncryption;
    bool m_enableInterContainerTrafficEncryptionHasBeenSet = false;

    bool m_enableManagedSpotTraining;
    bool m_enableManagedSpotTrainingHasBeenSet = false;

    CheckpointConfig m_checkpointConfig;
    bool m_checkpointConfigHasBeenSet = false;

    RetryStrategy m_retryStrategy;
    bool m_retryStrategyHasBeenSet = false;

    HyperParameterTuningResourceConfig m_hyperParameterTuningResourceConfig;
    bool m_hyperParameterTuningResourceConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
