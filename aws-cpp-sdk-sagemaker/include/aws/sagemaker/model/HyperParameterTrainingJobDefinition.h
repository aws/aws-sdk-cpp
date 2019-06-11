/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/HyperParameterAlgorithmSpecification.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/VpcConfig.h>
#include <aws/sagemaker/model/OutputDataConfig.h>
#include <aws/sagemaker/model/ResourceConfig.h>
#include <aws/sagemaker/model/StoppingCondition.h>
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
  class AWS_SAGEMAKER_API HyperParameterTrainingJobDefinition
  {
  public:
    HyperParameterTrainingJobDefinition();
    HyperParameterTrainingJobDefinition(Aws::Utils::Json::JsonView jsonValue);
    HyperParameterTrainingJobDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * storage volumes for scratch space. If you want Amazon SageMaker to use the
     * storage volume to store the training data, choose <code>File</code> as the
     * <code>TrainingInputMode</code> in the algorithm specification. For distributed
     * training algorithms, specify an instance count greater than 1.</p>
     */
    inline const ResourceConfig& GetResourceConfig() const{ return m_resourceConfig; }

    /**
     * <p>The resources, including the compute instances and storage volumes, to use
     * for the training jobs that the tuning job launches.</p> <p>Storage volumes store
     * model artifacts and incremental states. Training algorithms might also use
     * storage volumes for scratch space. If you want Amazon SageMaker to use the
     * storage volume to store the training data, choose <code>File</code> as the
     * <code>TrainingInputMode</code> in the algorithm specification. For distributed
     * training algorithms, specify an instance count greater than 1.</p>
     */
    inline bool ResourceConfigHasBeenSet() const { return m_resourceConfigHasBeenSet; }

    /**
     * <p>The resources, including the compute instances and storage volumes, to use
     * for the training jobs that the tuning job launches.</p> <p>Storage volumes store
     * model artifacts and incremental states. Training algorithms might also use
     * storage volumes for scratch space. If you want Amazon SageMaker to use the
     * storage volume to store the training data, choose <code>File</code> as the
     * <code>TrainingInputMode</code> in the algorithm specification. For distributed
     * training algorithms, specify an instance count greater than 1.</p>
     */
    inline void SetResourceConfig(const ResourceConfig& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = value; }

    /**
     * <p>The resources, including the compute instances and storage volumes, to use
     * for the training jobs that the tuning job launches.</p> <p>Storage volumes store
     * model artifacts and incremental states. Training algorithms might also use
     * storage volumes for scratch space. If you want Amazon SageMaker to use the
     * storage volume to store the training data, choose <code>File</code> as the
     * <code>TrainingInputMode</code> in the algorithm specification. For distributed
     * training algorithms, specify an instance count greater than 1.</p>
     */
    inline void SetResourceConfig(ResourceConfig&& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = std::move(value); }

    /**
     * <p>The resources, including the compute instances and storage volumes, to use
     * for the training jobs that the tuning job launches.</p> <p>Storage volumes store
     * model artifacts and incremental states. Training algorithms might also use
     * storage volumes for scratch space. If you want Amazon SageMaker to use the
     * storage volume to store the training data, choose <code>File</code> as the
     * <code>TrainingInputMode</code> in the algorithm specification. For distributed
     * training algorithms, specify an instance count greater than 1.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithResourceConfig(const ResourceConfig& value) { SetResourceConfig(value); return *this;}

    /**
     * <p>The resources, including the compute instances and storage volumes, to use
     * for the training jobs that the tuning job launches.</p> <p>Storage volumes store
     * model artifacts and incremental states. Training algorithms might also use
     * storage volumes for scratch space. If you want Amazon SageMaker to use the
     * storage volume to store the training data, choose <code>File</code> as the
     * <code>TrainingInputMode</code> in the algorithm specification. For distributed
     * training algorithms, specify an instance count greater than 1.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithResourceConfig(ResourceConfig&& value) { SetResourceConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies a limit to how long a model hyperparameter training job can run.
     * When the job reaches the time limit, Amazon SageMaker ends the training job. Use
     * this API to cap model training costs.</p>
     */
    inline const StoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }

    /**
     * <p>Specifies a limit to how long a model hyperparameter training job can run.
     * When the job reaches the time limit, Amazon SageMaker ends the training job. Use
     * this API to cap model training costs.</p>
     */
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }

    /**
     * <p>Specifies a limit to how long a model hyperparameter training job can run.
     * When the job reaches the time limit, Amazon SageMaker ends the training job. Use
     * this API to cap model training costs.</p>
     */
    inline void SetStoppingCondition(const StoppingCondition& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = value; }

    /**
     * <p>Specifies a limit to how long a model hyperparameter training job can run.
     * When the job reaches the time limit, Amazon SageMaker ends the training job. Use
     * this API to cap model training costs.</p>
     */
    inline void SetStoppingCondition(StoppingCondition&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::move(value); }

    /**
     * <p>Specifies a limit to how long a model hyperparameter training job can run.
     * When the job reaches the time limit, Amazon SageMaker ends the training job. Use
     * this API to cap model training costs.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithStoppingCondition(const StoppingCondition& value) { SetStoppingCondition(value); return *this;}

    /**
     * <p>Specifies a limit to how long a model hyperparameter training job can run.
     * When the job reaches the time limit, Amazon SageMaker ends the training job. Use
     * this API to cap model training costs.</p>
     */
    inline HyperParameterTrainingJobDefinition& WithStoppingCondition(StoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}


    /**
     * <p>Isolates the training container. No inbound or outbound network calls can be
     * made, except for calls between peers within a training cluster for distributed
     * training. If network isolation is used for training jobs that are configured to
     * use a VPC, Amazon SageMaker downloads and uploads customer data and model
     * artifacts through the specified VPC, but the training container does not have
     * network access.</p> <note> <p>The Semantic Segmentation built-in algorithm does
     * not support network isolation.</p> </note>
     */
    inline bool GetEnableNetworkIsolation() const{ return m_enableNetworkIsolation; }

    /**
     * <p>Isolates the training container. No inbound or outbound network calls can be
     * made, except for calls between peers within a training cluster for distributed
     * training. If network isolation is used for training jobs that are configured to
     * use a VPC, Amazon SageMaker downloads and uploads customer data and model
     * artifacts through the specified VPC, but the training container does not have
     * network access.</p> <note> <p>The Semantic Segmentation built-in algorithm does
     * not support network isolation.</p> </note>
     */
    inline bool EnableNetworkIsolationHasBeenSet() const { return m_enableNetworkIsolationHasBeenSet; }

    /**
     * <p>Isolates the training container. No inbound or outbound network calls can be
     * made, except for calls between peers within a training cluster for distributed
     * training. If network isolation is used for training jobs that are configured to
     * use a VPC, Amazon SageMaker downloads and uploads customer data and model
     * artifacts through the specified VPC, but the training container does not have
     * network access.</p> <note> <p>The Semantic Segmentation built-in algorithm does
     * not support network isolation.</p> </note>
     */
    inline void SetEnableNetworkIsolation(bool value) { m_enableNetworkIsolationHasBeenSet = true; m_enableNetworkIsolation = value; }

    /**
     * <p>Isolates the training container. No inbound or outbound network calls can be
     * made, except for calls between peers within a training cluster for distributed
     * training. If network isolation is used for training jobs that are configured to
     * use a VPC, Amazon SageMaker downloads and uploads customer data and model
     * artifacts through the specified VPC, but the training container does not have
     * network access.</p> <note> <p>The Semantic Segmentation built-in algorithm does
     * not support network isolation.</p> </note>
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

  private:

    Aws::Map<Aws::String, Aws::String> m_staticHyperParameters;
    bool m_staticHyperParametersHasBeenSet;

    HyperParameterAlgorithmSpecification m_algorithmSpecification;
    bool m_algorithmSpecificationHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::Vector<Channel> m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet;

    ResourceConfig m_resourceConfig;
    bool m_resourceConfigHasBeenSet;

    StoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet;

    bool m_enableNetworkIsolation;
    bool m_enableNetworkIsolationHasBeenSet;

    bool m_enableInterContainerTrafficEncryption;
    bool m_enableInterContainerTrafficEncryptionHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
