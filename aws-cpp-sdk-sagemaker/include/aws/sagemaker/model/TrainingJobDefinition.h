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
#include <aws/sagemaker/model/TrainingInputMode.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/OutputDataConfig.h>
#include <aws/sagemaker/model/ResourceConfig.h>
#include <aws/sagemaker/model/StoppingCondition.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Defines the input needed to run a training job using the
   * algorithm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrainingJobDefinition">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API TrainingJobDefinition
  {
  public:
    TrainingJobDefinition();
    TrainingJobDefinition(Aws::Utils::Json::JsonView jsonValue);
    TrainingJobDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The input mode used by the algorithm for the training job. For the input
     * modes that Amazon SageMaker algorithms support, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.</p>
     * <p>If an algorithm supports the <code>File</code> input mode, Amazon SageMaker
     * downloads the training data from S3 to the provisioned ML storage Volume, and
     * mounts the directory to docker volume for training container. If an algorithm
     * supports the <code>Pipe</code> input mode, Amazon SageMaker streams data
     * directly from S3 to the container.</p>
     */
    inline const TrainingInputMode& GetTrainingInputMode() const{ return m_trainingInputMode; }

    /**
     * <p>The input mode used by the algorithm for the training job. For the input
     * modes that Amazon SageMaker algorithms support, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.</p>
     * <p>If an algorithm supports the <code>File</code> input mode, Amazon SageMaker
     * downloads the training data from S3 to the provisioned ML storage Volume, and
     * mounts the directory to docker volume for training container. If an algorithm
     * supports the <code>Pipe</code> input mode, Amazon SageMaker streams data
     * directly from S3 to the container.</p>
     */
    inline bool TrainingInputModeHasBeenSet() const { return m_trainingInputModeHasBeenSet; }

    /**
     * <p>The input mode used by the algorithm for the training job. For the input
     * modes that Amazon SageMaker algorithms support, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.</p>
     * <p>If an algorithm supports the <code>File</code> input mode, Amazon SageMaker
     * downloads the training data from S3 to the provisioned ML storage Volume, and
     * mounts the directory to docker volume for training container. If an algorithm
     * supports the <code>Pipe</code> input mode, Amazon SageMaker streams data
     * directly from S3 to the container.</p>
     */
    inline void SetTrainingInputMode(const TrainingInputMode& value) { m_trainingInputModeHasBeenSet = true; m_trainingInputMode = value; }

    /**
     * <p>The input mode used by the algorithm for the training job. For the input
     * modes that Amazon SageMaker algorithms support, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.</p>
     * <p>If an algorithm supports the <code>File</code> input mode, Amazon SageMaker
     * downloads the training data from S3 to the provisioned ML storage Volume, and
     * mounts the directory to docker volume for training container. If an algorithm
     * supports the <code>Pipe</code> input mode, Amazon SageMaker streams data
     * directly from S3 to the container.</p>
     */
    inline void SetTrainingInputMode(TrainingInputMode&& value) { m_trainingInputModeHasBeenSet = true; m_trainingInputMode = std::move(value); }

    /**
     * <p>The input mode used by the algorithm for the training job. For the input
     * modes that Amazon SageMaker algorithms support, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.</p>
     * <p>If an algorithm supports the <code>File</code> input mode, Amazon SageMaker
     * downloads the training data from S3 to the provisioned ML storage Volume, and
     * mounts the directory to docker volume for training container. If an algorithm
     * supports the <code>Pipe</code> input mode, Amazon SageMaker streams data
     * directly from S3 to the container.</p>
     */
    inline TrainingJobDefinition& WithTrainingInputMode(const TrainingInputMode& value) { SetTrainingInputMode(value); return *this;}

    /**
     * <p>The input mode used by the algorithm for the training job. For the input
     * modes that Amazon SageMaker algorithms support, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.</p>
     * <p>If an algorithm supports the <code>File</code> input mode, Amazon SageMaker
     * downloads the training data from S3 to the provisioned ML storage Volume, and
     * mounts the directory to docker volume for training container. If an algorithm
     * supports the <code>Pipe</code> input mode, Amazon SageMaker streams data
     * directly from S3 to the container.</p>
     */
    inline TrainingJobDefinition& WithTrainingInputMode(TrainingInputMode&& value) { SetTrainingInputMode(std::move(value)); return *this;}


    /**
     * <p>The hyperparameters used for the training job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHyperParameters() const{ return m_hyperParameters; }

    /**
     * <p>The hyperparameters used for the training job.</p>
     */
    inline bool HyperParametersHasBeenSet() const { return m_hyperParametersHasBeenSet; }

    /**
     * <p>The hyperparameters used for the training job.</p>
     */
    inline void SetHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters = value; }

    /**
     * <p>The hyperparameters used for the training job.</p>
     */
    inline void SetHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters = std::move(value); }

    /**
     * <p>The hyperparameters used for the training job.</p>
     */
    inline TrainingJobDefinition& WithHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetHyperParameters(value); return *this;}

    /**
     * <p>The hyperparameters used for the training job.</p>
     */
    inline TrainingJobDefinition& WithHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetHyperParameters(std::move(value)); return *this;}

    /**
     * <p>The hyperparameters used for the training job.</p>
     */
    inline TrainingJobDefinition& AddHyperParameters(const Aws::String& key, const Aws::String& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(key, value); return *this; }

    /**
     * <p>The hyperparameters used for the training job.</p>
     */
    inline TrainingJobDefinition& AddHyperParameters(Aws::String&& key, const Aws::String& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The hyperparameters used for the training job.</p>
     */
    inline TrainingJobDefinition& AddHyperParameters(const Aws::String& key, Aws::String&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The hyperparameters used for the training job.</p>
     */
    inline TrainingJobDefinition& AddHyperParameters(Aws::String&& key, Aws::String&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The hyperparameters used for the training job.</p>
     */
    inline TrainingJobDefinition& AddHyperParameters(const char* key, Aws::String&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The hyperparameters used for the training job.</p>
     */
    inline TrainingJobDefinition& AddHyperParameters(Aws::String&& key, const char* value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The hyperparameters used for the training job.</p>
     */
    inline TrainingJobDefinition& AddHyperParameters(const char* key, const char* value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(key, value); return *this; }


    /**
     * <p>An array of <code>Channel</code> objects, each of which specifies an input
     * source.</p>
     */
    inline const Aws::Vector<Channel>& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>An array of <code>Channel</code> objects, each of which specifies an input
     * source.</p>
     */
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }

    /**
     * <p>An array of <code>Channel</code> objects, each of which specifies an input
     * source.</p>
     */
    inline void SetInputDataConfig(const Aws::Vector<Channel>& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    /**
     * <p>An array of <code>Channel</code> objects, each of which specifies an input
     * source.</p>
     */
    inline void SetInputDataConfig(Aws::Vector<Channel>&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    /**
     * <p>An array of <code>Channel</code> objects, each of which specifies an input
     * source.</p>
     */
    inline TrainingJobDefinition& WithInputDataConfig(const Aws::Vector<Channel>& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>An array of <code>Channel</code> objects, each of which specifies an input
     * source.</p>
     */
    inline TrainingJobDefinition& WithInputDataConfig(Aws::Vector<Channel>&& value) { SetInputDataConfig(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Channel</code> objects, each of which specifies an input
     * source.</p>
     */
    inline TrainingJobDefinition& AddInputDataConfig(const Channel& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig.push_back(value); return *this; }

    /**
     * <p>An array of <code>Channel</code> objects, each of which specifies an input
     * source.</p>
     */
    inline TrainingJobDefinition& AddInputDataConfig(Channel&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>the path to the S3 bucket where you want to store model artifacts. Amazon
     * SageMaker creates subfolders for the artifacts.</p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    /**
     * <p>the path to the S3 bucket where you want to store model artifacts. Amazon
     * SageMaker creates subfolders for the artifacts.</p>
     */
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }

    /**
     * <p>the path to the S3 bucket where you want to store model artifacts. Amazon
     * SageMaker creates subfolders for the artifacts.</p>
     */
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }

    /**
     * <p>the path to the S3 bucket where you want to store model artifacts. Amazon
     * SageMaker creates subfolders for the artifacts.</p>
     */
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }

    /**
     * <p>the path to the S3 bucket where you want to store model artifacts. Amazon
     * SageMaker creates subfolders for the artifacts.</p>
     */
    inline TrainingJobDefinition& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    /**
     * <p>the path to the S3 bucket where you want to store model artifacts. Amazon
     * SageMaker creates subfolders for the artifacts.</p>
     */
    inline TrainingJobDefinition& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}


    /**
     * <p>The resources, including the ML compute instances and ML storage volumes, to
     * use for model training.</p>
     */
    inline const ResourceConfig& GetResourceConfig() const{ return m_resourceConfig; }

    /**
     * <p>The resources, including the ML compute instances and ML storage volumes, to
     * use for model training.</p>
     */
    inline bool ResourceConfigHasBeenSet() const { return m_resourceConfigHasBeenSet; }

    /**
     * <p>The resources, including the ML compute instances and ML storage volumes, to
     * use for model training.</p>
     */
    inline void SetResourceConfig(const ResourceConfig& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = value; }

    /**
     * <p>The resources, including the ML compute instances and ML storage volumes, to
     * use for model training.</p>
     */
    inline void SetResourceConfig(ResourceConfig&& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = std::move(value); }

    /**
     * <p>The resources, including the ML compute instances and ML storage volumes, to
     * use for model training.</p>
     */
    inline TrainingJobDefinition& WithResourceConfig(const ResourceConfig& value) { SetResourceConfig(value); return *this;}

    /**
     * <p>The resources, including the ML compute instances and ML storage volumes, to
     * use for model training.</p>
     */
    inline TrainingJobDefinition& WithResourceConfig(ResourceConfig&& value) { SetResourceConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies a limit to how long a model training job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the training job. Use this API to
     * cap model training costs.</p> <p>To stop a job, Amazon SageMaker sends the
     * algorithm the SIGTERM signal, which delays job termination for 120 seconds.
     * Algorithms can use this 120-second window to save the model artifacts.</p>
     */
    inline const StoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }

    /**
     * <p>Specifies a limit to how long a model training job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the training job. Use this API to
     * cap model training costs.</p> <p>To stop a job, Amazon SageMaker sends the
     * algorithm the SIGTERM signal, which delays job termination for 120 seconds.
     * Algorithms can use this 120-second window to save the model artifacts.</p>
     */
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }

    /**
     * <p>Specifies a limit to how long a model training job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the training job. Use this API to
     * cap model training costs.</p> <p>To stop a job, Amazon SageMaker sends the
     * algorithm the SIGTERM signal, which delays job termination for 120 seconds.
     * Algorithms can use this 120-second window to save the model artifacts.</p>
     */
    inline void SetStoppingCondition(const StoppingCondition& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = value; }

    /**
     * <p>Specifies a limit to how long a model training job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the training job. Use this API to
     * cap model training costs.</p> <p>To stop a job, Amazon SageMaker sends the
     * algorithm the SIGTERM signal, which delays job termination for 120 seconds.
     * Algorithms can use this 120-second window to save the model artifacts.</p>
     */
    inline void SetStoppingCondition(StoppingCondition&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::move(value); }

    /**
     * <p>Specifies a limit to how long a model training job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the training job. Use this API to
     * cap model training costs.</p> <p>To stop a job, Amazon SageMaker sends the
     * algorithm the SIGTERM signal, which delays job termination for 120 seconds.
     * Algorithms can use this 120-second window to save the model artifacts.</p>
     */
    inline TrainingJobDefinition& WithStoppingCondition(const StoppingCondition& value) { SetStoppingCondition(value); return *this;}

    /**
     * <p>Specifies a limit to how long a model training job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the training job. Use this API to
     * cap model training costs.</p> <p>To stop a job, Amazon SageMaker sends the
     * algorithm the SIGTERM signal, which delays job termination for 120 seconds.
     * Algorithms can use this 120-second window to save the model artifacts.</p>
     */
    inline TrainingJobDefinition& WithStoppingCondition(StoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}

  private:

    TrainingInputMode m_trainingInputMode;
    bool m_trainingInputModeHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_hyperParameters;
    bool m_hyperParametersHasBeenSet;

    Aws::Vector<Channel> m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet;

    ResourceConfig m_resourceConfig;
    bool m_resourceConfigHasBeenSet;

    StoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
