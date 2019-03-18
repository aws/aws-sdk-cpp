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
#include <aws/sagemaker/model/TrainingInputMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/MetricDefinition.h>
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
   * <p>Specifies which training algorithm to use for training jobs that a
   * hyperparameter tuning job launches and the metrics to monitor.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HyperParameterAlgorithmSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API HyperParameterAlgorithmSpecification
  {
  public:
    HyperParameterAlgorithmSpecification();
    HyperParameterAlgorithmSpecification(Aws::Utils::Json::JsonView jsonValue);
    HyperParameterAlgorithmSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The registry path of the Docker image that contains the training algorithm.
     * For information about Docker registry paths for built-in algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-algo-docker-registry-paths.html">Algorithms
     * Provided by Amazon SageMaker: Common Parameters</a>. Amazon SageMaker supports
     * both <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline const Aws::String& GetTrainingImage() const{ return m_trainingImage; }

    /**
     * <p> The registry path of the Docker image that contains the training algorithm.
     * For information about Docker registry paths for built-in algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-algo-docker-registry-paths.html">Algorithms
     * Provided by Amazon SageMaker: Common Parameters</a>. Amazon SageMaker supports
     * both <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline bool TrainingImageHasBeenSet() const { return m_trainingImageHasBeenSet; }

    /**
     * <p> The registry path of the Docker image that contains the training algorithm.
     * For information about Docker registry paths for built-in algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-algo-docker-registry-paths.html">Algorithms
     * Provided by Amazon SageMaker: Common Parameters</a>. Amazon SageMaker supports
     * both <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline void SetTrainingImage(const Aws::String& value) { m_trainingImageHasBeenSet = true; m_trainingImage = value; }

    /**
     * <p> The registry path of the Docker image that contains the training algorithm.
     * For information about Docker registry paths for built-in algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-algo-docker-registry-paths.html">Algorithms
     * Provided by Amazon SageMaker: Common Parameters</a>. Amazon SageMaker supports
     * both <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline void SetTrainingImage(Aws::String&& value) { m_trainingImageHasBeenSet = true; m_trainingImage = std::move(value); }

    /**
     * <p> The registry path of the Docker image that contains the training algorithm.
     * For information about Docker registry paths for built-in algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-algo-docker-registry-paths.html">Algorithms
     * Provided by Amazon SageMaker: Common Parameters</a>. Amazon SageMaker supports
     * both <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline void SetTrainingImage(const char* value) { m_trainingImageHasBeenSet = true; m_trainingImage.assign(value); }

    /**
     * <p> The registry path of the Docker image that contains the training algorithm.
     * For information about Docker registry paths for built-in algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-algo-docker-registry-paths.html">Algorithms
     * Provided by Amazon SageMaker: Common Parameters</a>. Amazon SageMaker supports
     * both <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline HyperParameterAlgorithmSpecification& WithTrainingImage(const Aws::String& value) { SetTrainingImage(value); return *this;}

    /**
     * <p> The registry path of the Docker image that contains the training algorithm.
     * For information about Docker registry paths for built-in algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-algo-docker-registry-paths.html">Algorithms
     * Provided by Amazon SageMaker: Common Parameters</a>. Amazon SageMaker supports
     * both <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline HyperParameterAlgorithmSpecification& WithTrainingImage(Aws::String&& value) { SetTrainingImage(std::move(value)); return *this;}

    /**
     * <p> The registry path of the Docker image that contains the training algorithm.
     * For information about Docker registry paths for built-in algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-algo-docker-registry-paths.html">Algorithms
     * Provided by Amazon SageMaker: Common Parameters</a>. Amazon SageMaker supports
     * both <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline HyperParameterAlgorithmSpecification& WithTrainingImage(const char* value) { SetTrainingImage(value); return *this;}


    /**
     * <p>The input mode that the algorithm supports: File or Pipe. In File input mode,
     * Amazon SageMaker downloads the training data from Amazon S3 to the storage
     * volume that is attached to the training instance and mounts the directory to the
     * Docker volume for the training container. In Pipe input mode, Amazon SageMaker
     * streams data directly from Amazon S3 to the container. </p> <p>If you specify
     * File mode, make sure that you provision the storage volume that is attached to
     * the training instance with enough capacity to accommodate the training data
     * downloaded from Amazon S3, the model artifacts, and intermediate
     * information.</p> <p/> <p>For more information about input modes, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * </p>
     */
    inline const TrainingInputMode& GetTrainingInputMode() const{ return m_trainingInputMode; }

    /**
     * <p>The input mode that the algorithm supports: File or Pipe. In File input mode,
     * Amazon SageMaker downloads the training data from Amazon S3 to the storage
     * volume that is attached to the training instance and mounts the directory to the
     * Docker volume for the training container. In Pipe input mode, Amazon SageMaker
     * streams data directly from Amazon S3 to the container. </p> <p>If you specify
     * File mode, make sure that you provision the storage volume that is attached to
     * the training instance with enough capacity to accommodate the training data
     * downloaded from Amazon S3, the model artifacts, and intermediate
     * information.</p> <p/> <p>For more information about input modes, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * </p>
     */
    inline bool TrainingInputModeHasBeenSet() const { return m_trainingInputModeHasBeenSet; }

    /**
     * <p>The input mode that the algorithm supports: File or Pipe. In File input mode,
     * Amazon SageMaker downloads the training data from Amazon S3 to the storage
     * volume that is attached to the training instance and mounts the directory to the
     * Docker volume for the training container. In Pipe input mode, Amazon SageMaker
     * streams data directly from Amazon S3 to the container. </p> <p>If you specify
     * File mode, make sure that you provision the storage volume that is attached to
     * the training instance with enough capacity to accommodate the training data
     * downloaded from Amazon S3, the model artifacts, and intermediate
     * information.</p> <p/> <p>For more information about input modes, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * </p>
     */
    inline void SetTrainingInputMode(const TrainingInputMode& value) { m_trainingInputModeHasBeenSet = true; m_trainingInputMode = value; }

    /**
     * <p>The input mode that the algorithm supports: File or Pipe. In File input mode,
     * Amazon SageMaker downloads the training data from Amazon S3 to the storage
     * volume that is attached to the training instance and mounts the directory to the
     * Docker volume for the training container. In Pipe input mode, Amazon SageMaker
     * streams data directly from Amazon S3 to the container. </p> <p>If you specify
     * File mode, make sure that you provision the storage volume that is attached to
     * the training instance with enough capacity to accommodate the training data
     * downloaded from Amazon S3, the model artifacts, and intermediate
     * information.</p> <p/> <p>For more information about input modes, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * </p>
     */
    inline void SetTrainingInputMode(TrainingInputMode&& value) { m_trainingInputModeHasBeenSet = true; m_trainingInputMode = std::move(value); }

    /**
     * <p>The input mode that the algorithm supports: File or Pipe. In File input mode,
     * Amazon SageMaker downloads the training data from Amazon S3 to the storage
     * volume that is attached to the training instance and mounts the directory to the
     * Docker volume for the training container. In Pipe input mode, Amazon SageMaker
     * streams data directly from Amazon S3 to the container. </p> <p>If you specify
     * File mode, make sure that you provision the storage volume that is attached to
     * the training instance with enough capacity to accommodate the training data
     * downloaded from Amazon S3, the model artifacts, and intermediate
     * information.</p> <p/> <p>For more information about input modes, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * </p>
     */
    inline HyperParameterAlgorithmSpecification& WithTrainingInputMode(const TrainingInputMode& value) { SetTrainingInputMode(value); return *this;}

    /**
     * <p>The input mode that the algorithm supports: File or Pipe. In File input mode,
     * Amazon SageMaker downloads the training data from Amazon S3 to the storage
     * volume that is attached to the training instance and mounts the directory to the
     * Docker volume for the training container. In Pipe input mode, Amazon SageMaker
     * streams data directly from Amazon S3 to the container. </p> <p>If you specify
     * File mode, make sure that you provision the storage volume that is attached to
     * the training instance with enough capacity to accommodate the training data
     * downloaded from Amazon S3, the model artifacts, and intermediate
     * information.</p> <p/> <p>For more information about input modes, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * </p>
     */
    inline HyperParameterAlgorithmSpecification& WithTrainingInputMode(TrainingInputMode&& value) { SetTrainingInputMode(std::move(value)); return *this;}


    /**
     * <p>The name of the resource algorithm to use for the hyperparameter tuning job.
     * If you specify a value for this parameter, do not specify a value for
     * <code>TrainingImage</code>.</p>
     */
    inline const Aws::String& GetAlgorithmName() const{ return m_algorithmName; }

    /**
     * <p>The name of the resource algorithm to use for the hyperparameter tuning job.
     * If you specify a value for this parameter, do not specify a value for
     * <code>TrainingImage</code>.</p>
     */
    inline bool AlgorithmNameHasBeenSet() const { return m_algorithmNameHasBeenSet; }

    /**
     * <p>The name of the resource algorithm to use for the hyperparameter tuning job.
     * If you specify a value for this parameter, do not specify a value for
     * <code>TrainingImage</code>.</p>
     */
    inline void SetAlgorithmName(const Aws::String& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = value; }

    /**
     * <p>The name of the resource algorithm to use for the hyperparameter tuning job.
     * If you specify a value for this parameter, do not specify a value for
     * <code>TrainingImage</code>.</p>
     */
    inline void SetAlgorithmName(Aws::String&& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = std::move(value); }

    /**
     * <p>The name of the resource algorithm to use for the hyperparameter tuning job.
     * If you specify a value for this parameter, do not specify a value for
     * <code>TrainingImage</code>.</p>
     */
    inline void SetAlgorithmName(const char* value) { m_algorithmNameHasBeenSet = true; m_algorithmName.assign(value); }

    /**
     * <p>The name of the resource algorithm to use for the hyperparameter tuning job.
     * If you specify a value for this parameter, do not specify a value for
     * <code>TrainingImage</code>.</p>
     */
    inline HyperParameterAlgorithmSpecification& WithAlgorithmName(const Aws::String& value) { SetAlgorithmName(value); return *this;}

    /**
     * <p>The name of the resource algorithm to use for the hyperparameter tuning job.
     * If you specify a value for this parameter, do not specify a value for
     * <code>TrainingImage</code>.</p>
     */
    inline HyperParameterAlgorithmSpecification& WithAlgorithmName(Aws::String&& value) { SetAlgorithmName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource algorithm to use for the hyperparameter tuning job.
     * If you specify a value for this parameter, do not specify a value for
     * <code>TrainingImage</code>.</p>
     */
    inline HyperParameterAlgorithmSpecification& WithAlgorithmName(const char* value) { SetAlgorithmName(value); return *this;}


    /**
     * <p>An array of <a>MetricDefinition</a> objects that specify the metrics that the
     * algorithm emits.</p>
     */
    inline const Aws::Vector<MetricDefinition>& GetMetricDefinitions() const{ return m_metricDefinitions; }

    /**
     * <p>An array of <a>MetricDefinition</a> objects that specify the metrics that the
     * algorithm emits.</p>
     */
    inline bool MetricDefinitionsHasBeenSet() const { return m_metricDefinitionsHasBeenSet; }

    /**
     * <p>An array of <a>MetricDefinition</a> objects that specify the metrics that the
     * algorithm emits.</p>
     */
    inline void SetMetricDefinitions(const Aws::Vector<MetricDefinition>& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions = value; }

    /**
     * <p>An array of <a>MetricDefinition</a> objects that specify the metrics that the
     * algorithm emits.</p>
     */
    inline void SetMetricDefinitions(Aws::Vector<MetricDefinition>&& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions = std::move(value); }

    /**
     * <p>An array of <a>MetricDefinition</a> objects that specify the metrics that the
     * algorithm emits.</p>
     */
    inline HyperParameterAlgorithmSpecification& WithMetricDefinitions(const Aws::Vector<MetricDefinition>& value) { SetMetricDefinitions(value); return *this;}

    /**
     * <p>An array of <a>MetricDefinition</a> objects that specify the metrics that the
     * algorithm emits.</p>
     */
    inline HyperParameterAlgorithmSpecification& WithMetricDefinitions(Aws::Vector<MetricDefinition>&& value) { SetMetricDefinitions(std::move(value)); return *this;}

    /**
     * <p>An array of <a>MetricDefinition</a> objects that specify the metrics that the
     * algorithm emits.</p>
     */
    inline HyperParameterAlgorithmSpecification& AddMetricDefinitions(const MetricDefinition& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions.push_back(value); return *this; }

    /**
     * <p>An array of <a>MetricDefinition</a> objects that specify the metrics that the
     * algorithm emits.</p>
     */
    inline HyperParameterAlgorithmSpecification& AddMetricDefinitions(MetricDefinition&& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_trainingImage;
    bool m_trainingImageHasBeenSet;

    TrainingInputMode m_trainingInputMode;
    bool m_trainingInputModeHasBeenSet;

    Aws::String m_algorithmName;
    bool m_algorithmNameHasBeenSet;

    Aws::Vector<MetricDefinition> m_metricDefinitions;
    bool m_metricDefinitionsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
