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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelArtifacts.h>
#include <aws/sagemaker/model/TrainingJobStatus.h>
#include <aws/sagemaker/model/SecondaryStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/AlgorithmSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/OutputDataConfig.h>
#include <aws/sagemaker/model/ResourceConfig.h>
#include <aws/sagemaker/model/VpcConfig.h>
#include <aws/sagemaker/model/StoppingCondition.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/Channel.h>
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
  class AWS_SAGEMAKER_API DescribeTrainingJobResult
  {
  public:
    DescribeTrainingJobResult();
    DescribeTrainingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeTrainingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Name of the model training job. </p>
     */
    inline const Aws::String& GetTrainingJobName() const{ return m_trainingJobName; }

    /**
     * <p> Name of the model training job. </p>
     */
    inline void SetTrainingJobName(const Aws::String& value) { m_trainingJobName = value; }

    /**
     * <p> Name of the model training job. </p>
     */
    inline void SetTrainingJobName(Aws::String&& value) { m_trainingJobName = std::move(value); }

    /**
     * <p> Name of the model training job. </p>
     */
    inline void SetTrainingJobName(const char* value) { m_trainingJobName.assign(value); }

    /**
     * <p> Name of the model training job. </p>
     */
    inline DescribeTrainingJobResult& WithTrainingJobName(const Aws::String& value) { SetTrainingJobName(value); return *this;}

    /**
     * <p> Name of the model training job. </p>
     */
    inline DescribeTrainingJobResult& WithTrainingJobName(Aws::String&& value) { SetTrainingJobName(std::move(value)); return *this;}

    /**
     * <p> Name of the model training job. </p>
     */
    inline DescribeTrainingJobResult& WithTrainingJobName(const char* value) { SetTrainingJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline const Aws::String& GetTrainingJobArn() const{ return m_trainingJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline void SetTrainingJobArn(const Aws::String& value) { m_trainingJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline void SetTrainingJobArn(Aws::String&& value) { m_trainingJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline void SetTrainingJobArn(const char* value) { m_trainingJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline DescribeTrainingJobResult& WithTrainingJobArn(const Aws::String& value) { SetTrainingJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline DescribeTrainingJobResult& WithTrainingJobArn(Aws::String&& value) { SetTrainingJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the training job.</p>
     */
    inline DescribeTrainingJobResult& WithTrainingJobArn(const char* value) { SetTrainingJobArn(value); return *this;}


    /**
     * <p>Information about the Amazon S3 location that is configured for storing model
     * artifacts. </p>
     */
    inline const ModelArtifacts& GetModelArtifacts() const{ return m_modelArtifacts; }

    /**
     * <p>Information about the Amazon S3 location that is configured for storing model
     * artifacts. </p>
     */
    inline void SetModelArtifacts(const ModelArtifacts& value) { m_modelArtifacts = value; }

    /**
     * <p>Information about the Amazon S3 location that is configured for storing model
     * artifacts. </p>
     */
    inline void SetModelArtifacts(ModelArtifacts&& value) { m_modelArtifacts = std::move(value); }

    /**
     * <p>Information about the Amazon S3 location that is configured for storing model
     * artifacts. </p>
     */
    inline DescribeTrainingJobResult& WithModelArtifacts(const ModelArtifacts& value) { SetModelArtifacts(value); return *this;}

    /**
     * <p>Information about the Amazon S3 location that is configured for storing model
     * artifacts. </p>
     */
    inline DescribeTrainingJobResult& WithModelArtifacts(ModelArtifacts&& value) { SetModelArtifacts(std::move(value)); return *this;}


    /**
     * <p>The status of the training job. </p> <p>For the <code>InProgress</code>
     * status, Amazon SageMaker can return these secondary statuses:</p> <ul> <li>
     * <p>Starting - Preparing for training.</p> </li> <li> <p>Downloading - Optional
     * stage for algorithms that support File training input mode. It indicates data is
     * being downloaded to ML storage volumes.</p> </li> <li> <p>Training - Training is
     * in progress.</p> </li> <li> <p>Uploading - Training is complete and model upload
     * is in progress.</p> </li> </ul> <p>For the <code>Stopped</code> training status,
     * Amazon SageMaker can return these secondary statuses:</p> <ul> <li>
     * <p>MaxRuntimeExceeded - Job stopped as a result of maximum allowed runtime
     * exceeded.</p> </li> </ul>
     */
    inline const TrainingJobStatus& GetTrainingJobStatus() const{ return m_trainingJobStatus; }

    /**
     * <p>The status of the training job. </p> <p>For the <code>InProgress</code>
     * status, Amazon SageMaker can return these secondary statuses:</p> <ul> <li>
     * <p>Starting - Preparing for training.</p> </li> <li> <p>Downloading - Optional
     * stage for algorithms that support File training input mode. It indicates data is
     * being downloaded to ML storage volumes.</p> </li> <li> <p>Training - Training is
     * in progress.</p> </li> <li> <p>Uploading - Training is complete and model upload
     * is in progress.</p> </li> </ul> <p>For the <code>Stopped</code> training status,
     * Amazon SageMaker can return these secondary statuses:</p> <ul> <li>
     * <p>MaxRuntimeExceeded - Job stopped as a result of maximum allowed runtime
     * exceeded.</p> </li> </ul>
     */
    inline void SetTrainingJobStatus(const TrainingJobStatus& value) { m_trainingJobStatus = value; }

    /**
     * <p>The status of the training job. </p> <p>For the <code>InProgress</code>
     * status, Amazon SageMaker can return these secondary statuses:</p> <ul> <li>
     * <p>Starting - Preparing for training.</p> </li> <li> <p>Downloading - Optional
     * stage for algorithms that support File training input mode. It indicates data is
     * being downloaded to ML storage volumes.</p> </li> <li> <p>Training - Training is
     * in progress.</p> </li> <li> <p>Uploading - Training is complete and model upload
     * is in progress.</p> </li> </ul> <p>For the <code>Stopped</code> training status,
     * Amazon SageMaker can return these secondary statuses:</p> <ul> <li>
     * <p>MaxRuntimeExceeded - Job stopped as a result of maximum allowed runtime
     * exceeded.</p> </li> </ul>
     */
    inline void SetTrainingJobStatus(TrainingJobStatus&& value) { m_trainingJobStatus = std::move(value); }

    /**
     * <p>The status of the training job. </p> <p>For the <code>InProgress</code>
     * status, Amazon SageMaker can return these secondary statuses:</p> <ul> <li>
     * <p>Starting - Preparing for training.</p> </li> <li> <p>Downloading - Optional
     * stage for algorithms that support File training input mode. It indicates data is
     * being downloaded to ML storage volumes.</p> </li> <li> <p>Training - Training is
     * in progress.</p> </li> <li> <p>Uploading - Training is complete and model upload
     * is in progress.</p> </li> </ul> <p>For the <code>Stopped</code> training status,
     * Amazon SageMaker can return these secondary statuses:</p> <ul> <li>
     * <p>MaxRuntimeExceeded - Job stopped as a result of maximum allowed runtime
     * exceeded.</p> </li> </ul>
     */
    inline DescribeTrainingJobResult& WithTrainingJobStatus(const TrainingJobStatus& value) { SetTrainingJobStatus(value); return *this;}

    /**
     * <p>The status of the training job. </p> <p>For the <code>InProgress</code>
     * status, Amazon SageMaker can return these secondary statuses:</p> <ul> <li>
     * <p>Starting - Preparing for training.</p> </li> <li> <p>Downloading - Optional
     * stage for algorithms that support File training input mode. It indicates data is
     * being downloaded to ML storage volumes.</p> </li> <li> <p>Training - Training is
     * in progress.</p> </li> <li> <p>Uploading - Training is complete and model upload
     * is in progress.</p> </li> </ul> <p>For the <code>Stopped</code> training status,
     * Amazon SageMaker can return these secondary statuses:</p> <ul> <li>
     * <p>MaxRuntimeExceeded - Job stopped as a result of maximum allowed runtime
     * exceeded.</p> </li> </ul>
     */
    inline DescribeTrainingJobResult& WithTrainingJobStatus(TrainingJobStatus&& value) { SetTrainingJobStatus(std::move(value)); return *this;}


    /**
     * <p> Provides granular information about the system state. For more information,
     * see <code>TrainingJobStatus</code>. </p>
     */
    inline const SecondaryStatus& GetSecondaryStatus() const{ return m_secondaryStatus; }

    /**
     * <p> Provides granular information about the system state. For more information,
     * see <code>TrainingJobStatus</code>. </p>
     */
    inline void SetSecondaryStatus(const SecondaryStatus& value) { m_secondaryStatus = value; }

    /**
     * <p> Provides granular information about the system state. For more information,
     * see <code>TrainingJobStatus</code>. </p>
     */
    inline void SetSecondaryStatus(SecondaryStatus&& value) { m_secondaryStatus = std::move(value); }

    /**
     * <p> Provides granular information about the system state. For more information,
     * see <code>TrainingJobStatus</code>. </p>
     */
    inline DescribeTrainingJobResult& WithSecondaryStatus(const SecondaryStatus& value) { SetSecondaryStatus(value); return *this;}

    /**
     * <p> Provides granular information about the system state. For more information,
     * see <code>TrainingJobStatus</code>. </p>
     */
    inline DescribeTrainingJobResult& WithSecondaryStatus(SecondaryStatus&& value) { SetSecondaryStatus(std::move(value)); return *this;}


    /**
     * <p>If the training job failed, the reason it failed. </p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the training job failed, the reason it failed. </p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>If the training job failed, the reason it failed. </p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>If the training job failed, the reason it failed. </p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>If the training job failed, the reason it failed. </p>
     */
    inline DescribeTrainingJobResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the training job failed, the reason it failed. </p>
     */
    inline DescribeTrainingJobResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the training job failed, the reason it failed. </p>
     */
    inline DescribeTrainingJobResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>Algorithm-specific parameters. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHyperParameters() const{ return m_hyperParameters; }

    /**
     * <p>Algorithm-specific parameters. </p>
     */
    inline void SetHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_hyperParameters = value; }

    /**
     * <p>Algorithm-specific parameters. </p>
     */
    inline void SetHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_hyperParameters = std::move(value); }

    /**
     * <p>Algorithm-specific parameters. </p>
     */
    inline DescribeTrainingJobResult& WithHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetHyperParameters(value); return *this;}

    /**
     * <p>Algorithm-specific parameters. </p>
     */
    inline DescribeTrainingJobResult& WithHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetHyperParameters(std::move(value)); return *this;}

    /**
     * <p>Algorithm-specific parameters. </p>
     */
    inline DescribeTrainingJobResult& AddHyperParameters(const Aws::String& key, const Aws::String& value) { m_hyperParameters.emplace(key, value); return *this; }

    /**
     * <p>Algorithm-specific parameters. </p>
     */
    inline DescribeTrainingJobResult& AddHyperParameters(Aws::String&& key, const Aws::String& value) { m_hyperParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Algorithm-specific parameters. </p>
     */
    inline DescribeTrainingJobResult& AddHyperParameters(const Aws::String& key, Aws::String&& value) { m_hyperParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Algorithm-specific parameters. </p>
     */
    inline DescribeTrainingJobResult& AddHyperParameters(Aws::String&& key, Aws::String&& value) { m_hyperParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Algorithm-specific parameters. </p>
     */
    inline DescribeTrainingJobResult& AddHyperParameters(const char* key, Aws::String&& value) { m_hyperParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Algorithm-specific parameters. </p>
     */
    inline DescribeTrainingJobResult& AddHyperParameters(Aws::String&& key, const char* value) { m_hyperParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Algorithm-specific parameters. </p>
     */
    inline DescribeTrainingJobResult& AddHyperParameters(const char* key, const char* value) { m_hyperParameters.emplace(key, value); return *this; }


    /**
     * <p>Information about the algorithm used for training, and algorithm metadata.
     * </p>
     */
    inline const AlgorithmSpecification& GetAlgorithmSpecification() const{ return m_algorithmSpecification; }

    /**
     * <p>Information about the algorithm used for training, and algorithm metadata.
     * </p>
     */
    inline void SetAlgorithmSpecification(const AlgorithmSpecification& value) { m_algorithmSpecification = value; }

    /**
     * <p>Information about the algorithm used for training, and algorithm metadata.
     * </p>
     */
    inline void SetAlgorithmSpecification(AlgorithmSpecification&& value) { m_algorithmSpecification = std::move(value); }

    /**
     * <p>Information about the algorithm used for training, and algorithm metadata.
     * </p>
     */
    inline DescribeTrainingJobResult& WithAlgorithmSpecification(const AlgorithmSpecification& value) { SetAlgorithmSpecification(value); return *this;}

    /**
     * <p>Information about the algorithm used for training, and algorithm metadata.
     * </p>
     */
    inline DescribeTrainingJobResult& WithAlgorithmSpecification(AlgorithmSpecification&& value) { SetAlgorithmSpecification(std::move(value)); return *this;}


    /**
     * <p>The AWS Identity and Access Management (IAM) role configured for the training
     * job. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The AWS Identity and Access Management (IAM) role configured for the training
     * job. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The AWS Identity and Access Management (IAM) role configured for the training
     * job. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The AWS Identity and Access Management (IAM) role configured for the training
     * job. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The AWS Identity and Access Management (IAM) role configured for the training
     * job. </p>
     */
    inline DescribeTrainingJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The AWS Identity and Access Management (IAM) role configured for the training
     * job. </p>
     */
    inline DescribeTrainingJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The AWS Identity and Access Management (IAM) role configured for the training
     * job. </p>
     */
    inline DescribeTrainingJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>An array of <code>Channel</code> objects that describes each data input
     * channel. </p>
     */
    inline const Aws::Vector<Channel>& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>An array of <code>Channel</code> objects that describes each data input
     * channel. </p>
     */
    inline void SetInputDataConfig(const Aws::Vector<Channel>& value) { m_inputDataConfig = value; }

    /**
     * <p>An array of <code>Channel</code> objects that describes each data input
     * channel. </p>
     */
    inline void SetInputDataConfig(Aws::Vector<Channel>&& value) { m_inputDataConfig = std::move(value); }

    /**
     * <p>An array of <code>Channel</code> objects that describes each data input
     * channel. </p>
     */
    inline DescribeTrainingJobResult& WithInputDataConfig(const Aws::Vector<Channel>& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>An array of <code>Channel</code> objects that describes each data input
     * channel. </p>
     */
    inline DescribeTrainingJobResult& WithInputDataConfig(Aws::Vector<Channel>&& value) { SetInputDataConfig(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Channel</code> objects that describes each data input
     * channel. </p>
     */
    inline DescribeTrainingJobResult& AddInputDataConfig(const Channel& value) { m_inputDataConfig.push_back(value); return *this; }

    /**
     * <p>An array of <code>Channel</code> objects that describes each data input
     * channel. </p>
     */
    inline DescribeTrainingJobResult& AddInputDataConfig(Channel&& value) { m_inputDataConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>The S3 path where model artifacts that you configured when creating the job
     * are stored. Amazon SageMaker creates subfolders for model artifacts. </p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    /**
     * <p>The S3 path where model artifacts that you configured when creating the job
     * are stored. Amazon SageMaker creates subfolders for model artifacts. </p>
     */
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfig = value; }

    /**
     * <p>The S3 path where model artifacts that you configured when creating the job
     * are stored. Amazon SageMaker creates subfolders for model artifacts. </p>
     */
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfig = std::move(value); }

    /**
     * <p>The S3 path where model artifacts that you configured when creating the job
     * are stored. Amazon SageMaker creates subfolders for model artifacts. </p>
     */
    inline DescribeTrainingJobResult& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    /**
     * <p>The S3 path where model artifacts that you configured when creating the job
     * are stored. Amazon SageMaker creates subfolders for model artifacts. </p>
     */
    inline DescribeTrainingJobResult& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}


    /**
     * <p>Resources, including ML compute instances and ML storage volumes, that are
     * configured for model training. </p>
     */
    inline const ResourceConfig& GetResourceConfig() const{ return m_resourceConfig; }

    /**
     * <p>Resources, including ML compute instances and ML storage volumes, that are
     * configured for model training. </p>
     */
    inline void SetResourceConfig(const ResourceConfig& value) { m_resourceConfig = value; }

    /**
     * <p>Resources, including ML compute instances and ML storage volumes, that are
     * configured for model training. </p>
     */
    inline void SetResourceConfig(ResourceConfig&& value) { m_resourceConfig = std::move(value); }

    /**
     * <p>Resources, including ML compute instances and ML storage volumes, that are
     * configured for model training. </p>
     */
    inline DescribeTrainingJobResult& WithResourceConfig(const ResourceConfig& value) { SetResourceConfig(value); return *this;}

    /**
     * <p>Resources, including ML compute instances and ML storage volumes, that are
     * configured for model training. </p>
     */
    inline DescribeTrainingJobResult& WithResourceConfig(ResourceConfig&& value) { SetResourceConfig(std::move(value)); return *this;}


    /**
     * <p>A object that specifies the VPC that this training job has access to. For
     * more information, see <a>train-vpc</a>.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>A object that specifies the VPC that this training job has access to. For
     * more information, see <a>train-vpc</a>.</p>
     */
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfig = value; }

    /**
     * <p>A object that specifies the VPC that this training job has access to. For
     * more information, see <a>train-vpc</a>.</p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfig = std::move(value); }

    /**
     * <p>A object that specifies the VPC that this training job has access to. For
     * more information, see <a>train-vpc</a>.</p>
     */
    inline DescribeTrainingJobResult& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>A object that specifies the VPC that this training job has access to. For
     * more information, see <a>train-vpc</a>.</p>
     */
    inline DescribeTrainingJobResult& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>The condition under which to stop the training job. </p>
     */
    inline const StoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }

    /**
     * <p>The condition under which to stop the training job. </p>
     */
    inline void SetStoppingCondition(const StoppingCondition& value) { m_stoppingCondition = value; }

    /**
     * <p>The condition under which to stop the training job. </p>
     */
    inline void SetStoppingCondition(StoppingCondition&& value) { m_stoppingCondition = std::move(value); }

    /**
     * <p>The condition under which to stop the training job. </p>
     */
    inline DescribeTrainingJobResult& WithStoppingCondition(const StoppingCondition& value) { SetStoppingCondition(value); return *this;}

    /**
     * <p>The condition under which to stop the training job. </p>
     */
    inline DescribeTrainingJobResult& WithStoppingCondition(StoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}


    /**
     * <p>A timestamp that indicates when the training job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that indicates when the training job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>A timestamp that indicates when the training job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the training job was created.</p>
     */
    inline DescribeTrainingJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the training job was created.</p>
     */
    inline DescribeTrainingJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that indicates when training started.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingStartTime() const{ return m_trainingStartTime; }

    /**
     * <p>A timestamp that indicates when training started.</p>
     */
    inline void SetTrainingStartTime(const Aws::Utils::DateTime& value) { m_trainingStartTime = value; }

    /**
     * <p>A timestamp that indicates when training started.</p>
     */
    inline void SetTrainingStartTime(Aws::Utils::DateTime&& value) { m_trainingStartTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when training started.</p>
     */
    inline DescribeTrainingJobResult& WithTrainingStartTime(const Aws::Utils::DateTime& value) { SetTrainingStartTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when training started.</p>
     */
    inline DescribeTrainingJobResult& WithTrainingStartTime(Aws::Utils::DateTime&& value) { SetTrainingStartTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that indicates when model training ended.</p>
     */
    inline const Aws::Utils::DateTime& GetTrainingEndTime() const{ return m_trainingEndTime; }

    /**
     * <p>A timestamp that indicates when model training ended.</p>
     */
    inline void SetTrainingEndTime(const Aws::Utils::DateTime& value) { m_trainingEndTime = value; }

    /**
     * <p>A timestamp that indicates when model training ended.</p>
     */
    inline void SetTrainingEndTime(Aws::Utils::DateTime&& value) { m_trainingEndTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when model training ended.</p>
     */
    inline DescribeTrainingJobResult& WithTrainingEndTime(const Aws::Utils::DateTime& value) { SetTrainingEndTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when model training ended.</p>
     */
    inline DescribeTrainingJobResult& WithTrainingEndTime(Aws::Utils::DateTime&& value) { SetTrainingEndTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that indicates when the status of the training job was last
     * modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>A timestamp that indicates when the status of the training job was last
     * modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>A timestamp that indicates when the status of the training job was last
     * modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the status of the training job was last
     * modified.</p>
     */
    inline DescribeTrainingJobResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the status of the training job was last
     * modified.</p>
     */
    inline DescribeTrainingJobResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_trainingJobName;

    Aws::String m_trainingJobArn;

    ModelArtifacts m_modelArtifacts;

    TrainingJobStatus m_trainingJobStatus;

    SecondaryStatus m_secondaryStatus;

    Aws::String m_failureReason;

    Aws::Map<Aws::String, Aws::String> m_hyperParameters;

    AlgorithmSpecification m_algorithmSpecification;

    Aws::String m_roleArn;

    Aws::Vector<Channel> m_inputDataConfig;

    OutputDataConfig m_outputDataConfig;

    ResourceConfig m_resourceConfig;

    VpcConfig m_vpcConfig;

    StoppingCondition m_stoppingCondition;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_trainingStartTime;

    Aws::Utils::DateTime m_trainingEndTime;

    Aws::Utils::DateTime m_lastModifiedTime;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
