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
   * <p>Specifies the training algorithm to use in a <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateTrainingJob.html">CreateTrainingJob</a>
   * request.</p> <p>For more information about algorithms provided by Amazon
   * SageMaker, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
   * For information about using your own algorithms, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
   * Your Own Algorithms with Amazon SageMaker</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AlgorithmSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API AlgorithmSpecification
  {
  public:
    AlgorithmSpecification();
    AlgorithmSpecification(Aws::Utils::Json::JsonView jsonValue);
    AlgorithmSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The registry path of the Docker image that contains the training algorithm.
     * For information about docker registry paths for built-in algorithms, see <a
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
     * <p>The registry path of the Docker image that contains the training algorithm.
     * For information about docker registry paths for built-in algorithms, see <a
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
     * <p>The registry path of the Docker image that contains the training algorithm.
     * For information about docker registry paths for built-in algorithms, see <a
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
     * <p>The registry path of the Docker image that contains the training algorithm.
     * For information about docker registry paths for built-in algorithms, see <a
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
     * <p>The registry path of the Docker image that contains the training algorithm.
     * For information about docker registry paths for built-in algorithms, see <a
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
     * <p>The registry path of the Docker image that contains the training algorithm.
     * For information about docker registry paths for built-in algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-algo-docker-registry-paths.html">Algorithms
     * Provided by Amazon SageMaker: Common Parameters</a>. Amazon SageMaker supports
     * both <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline AlgorithmSpecification& WithTrainingImage(const Aws::String& value) { SetTrainingImage(value); return *this;}

    /**
     * <p>The registry path of the Docker image that contains the training algorithm.
     * For information about docker registry paths for built-in algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-algo-docker-registry-paths.html">Algorithms
     * Provided by Amazon SageMaker: Common Parameters</a>. Amazon SageMaker supports
     * both <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline AlgorithmSpecification& WithTrainingImage(Aws::String&& value) { SetTrainingImage(std::move(value)); return *this;}

    /**
     * <p>The registry path of the Docker image that contains the training algorithm.
     * For information about docker registry paths for built-in algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-algo-docker-registry-paths.html">Algorithms
     * Provided by Amazon SageMaker: Common Parameters</a>. Amazon SageMaker supports
     * both <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline AlgorithmSpecification& WithTrainingImage(const char* value) { SetTrainingImage(value); return *this;}


    /**
     * <p>The name of the algorithm resource to use for the training job. This must be
     * an algorithm resource that you created or subscribe to on AWS Marketplace. If
     * you specify a value for this parameter, you can't specify a value for
     * <code>TrainingImage</code>.</p>
     */
    inline const Aws::String& GetAlgorithmName() const{ return m_algorithmName; }

    /**
     * <p>The name of the algorithm resource to use for the training job. This must be
     * an algorithm resource that you created or subscribe to on AWS Marketplace. If
     * you specify a value for this parameter, you can't specify a value for
     * <code>TrainingImage</code>.</p>
     */
    inline bool AlgorithmNameHasBeenSet() const { return m_algorithmNameHasBeenSet; }

    /**
     * <p>The name of the algorithm resource to use for the training job. This must be
     * an algorithm resource that you created or subscribe to on AWS Marketplace. If
     * you specify a value for this parameter, you can't specify a value for
     * <code>TrainingImage</code>.</p>
     */
    inline void SetAlgorithmName(const Aws::String& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = value; }

    /**
     * <p>The name of the algorithm resource to use for the training job. This must be
     * an algorithm resource that you created or subscribe to on AWS Marketplace. If
     * you specify a value for this parameter, you can't specify a value for
     * <code>TrainingImage</code>.</p>
     */
    inline void SetAlgorithmName(Aws::String&& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = std::move(value); }

    /**
     * <p>The name of the algorithm resource to use for the training job. This must be
     * an algorithm resource that you created or subscribe to on AWS Marketplace. If
     * you specify a value for this parameter, you can't specify a value for
     * <code>TrainingImage</code>.</p>
     */
    inline void SetAlgorithmName(const char* value) { m_algorithmNameHasBeenSet = true; m_algorithmName.assign(value); }

    /**
     * <p>The name of the algorithm resource to use for the training job. This must be
     * an algorithm resource that you created or subscribe to on AWS Marketplace. If
     * you specify a value for this parameter, you can't specify a value for
     * <code>TrainingImage</code>.</p>
     */
    inline AlgorithmSpecification& WithAlgorithmName(const Aws::String& value) { SetAlgorithmName(value); return *this;}

    /**
     * <p>The name of the algorithm resource to use for the training job. This must be
     * an algorithm resource that you created or subscribe to on AWS Marketplace. If
     * you specify a value for this parameter, you can't specify a value for
     * <code>TrainingImage</code>.</p>
     */
    inline AlgorithmSpecification& WithAlgorithmName(Aws::String&& value) { SetAlgorithmName(std::move(value)); return *this;}

    /**
     * <p>The name of the algorithm resource to use for the training job. This must be
     * an algorithm resource that you created or subscribe to on AWS Marketplace. If
     * you specify a value for this parameter, you can't specify a value for
     * <code>TrainingImage</code>.</p>
     */
    inline AlgorithmSpecification& WithAlgorithmName(const char* value) { SetAlgorithmName(value); return *this;}


    /**
     * <p>The input mode that the algorithm supports. For the input modes that Amazon
     * SageMaker algorithms support, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * If an algorithm supports the <code>File</code> input mode, Amazon SageMaker
     * downloads the training data from S3 to the provisioned ML storage Volume, and
     * mounts the directory to docker volume for training container. If an algorithm
     * supports the <code>Pipe</code> input mode, Amazon SageMaker streams data
     * directly from S3 to the container. </p> <p> In File mode, make sure you
     * provision ML storage volume with sufficient capacity to accommodate the data
     * download from S3. In addition to the training data, the ML storage volume also
     * stores the output model. The algorithm container use ML storage volume to also
     * store intermediate information, if any. </p> <p> For distributed algorithms
     * using File mode, training data is distributed uniformly, and your training
     * duration is predictable if the input data objects size is approximately same.
     * Amazon SageMaker does not split the files any further for model training. If the
     * object sizes are skewed, training won't be optimal as the data distribution is
     * also skewed where one host in a training cluster is overloaded, thus becoming
     * bottleneck in training. </p>
     */
    inline const TrainingInputMode& GetTrainingInputMode() const{ return m_trainingInputMode; }

    /**
     * <p>The input mode that the algorithm supports. For the input modes that Amazon
     * SageMaker algorithms support, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * If an algorithm supports the <code>File</code> input mode, Amazon SageMaker
     * downloads the training data from S3 to the provisioned ML storage Volume, and
     * mounts the directory to docker volume for training container. If an algorithm
     * supports the <code>Pipe</code> input mode, Amazon SageMaker streams data
     * directly from S3 to the container. </p> <p> In File mode, make sure you
     * provision ML storage volume with sufficient capacity to accommodate the data
     * download from S3. In addition to the training data, the ML storage volume also
     * stores the output model. The algorithm container use ML storage volume to also
     * store intermediate information, if any. </p> <p> For distributed algorithms
     * using File mode, training data is distributed uniformly, and your training
     * duration is predictable if the input data objects size is approximately same.
     * Amazon SageMaker does not split the files any further for model training. If the
     * object sizes are skewed, training won't be optimal as the data distribution is
     * also skewed where one host in a training cluster is overloaded, thus becoming
     * bottleneck in training. </p>
     */
    inline bool TrainingInputModeHasBeenSet() const { return m_trainingInputModeHasBeenSet; }

    /**
     * <p>The input mode that the algorithm supports. For the input modes that Amazon
     * SageMaker algorithms support, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * If an algorithm supports the <code>File</code> input mode, Amazon SageMaker
     * downloads the training data from S3 to the provisioned ML storage Volume, and
     * mounts the directory to docker volume for training container. If an algorithm
     * supports the <code>Pipe</code> input mode, Amazon SageMaker streams data
     * directly from S3 to the container. </p> <p> In File mode, make sure you
     * provision ML storage volume with sufficient capacity to accommodate the data
     * download from S3. In addition to the training data, the ML storage volume also
     * stores the output model. The algorithm container use ML storage volume to also
     * store intermediate information, if any. </p> <p> For distributed algorithms
     * using File mode, training data is distributed uniformly, and your training
     * duration is predictable if the input data objects size is approximately same.
     * Amazon SageMaker does not split the files any further for model training. If the
     * object sizes are skewed, training won't be optimal as the data distribution is
     * also skewed where one host in a training cluster is overloaded, thus becoming
     * bottleneck in training. </p>
     */
    inline void SetTrainingInputMode(const TrainingInputMode& value) { m_trainingInputModeHasBeenSet = true; m_trainingInputMode = value; }

    /**
     * <p>The input mode that the algorithm supports. For the input modes that Amazon
     * SageMaker algorithms support, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * If an algorithm supports the <code>File</code> input mode, Amazon SageMaker
     * downloads the training data from S3 to the provisioned ML storage Volume, and
     * mounts the directory to docker volume for training container. If an algorithm
     * supports the <code>Pipe</code> input mode, Amazon SageMaker streams data
     * directly from S3 to the container. </p> <p> In File mode, make sure you
     * provision ML storage volume with sufficient capacity to accommodate the data
     * download from S3. In addition to the training data, the ML storage volume also
     * stores the output model. The algorithm container use ML storage volume to also
     * store intermediate information, if any. </p> <p> For distributed algorithms
     * using File mode, training data is distributed uniformly, and your training
     * duration is predictable if the input data objects size is approximately same.
     * Amazon SageMaker does not split the files any further for model training. If the
     * object sizes are skewed, training won't be optimal as the data distribution is
     * also skewed where one host in a training cluster is overloaded, thus becoming
     * bottleneck in training. </p>
     */
    inline void SetTrainingInputMode(TrainingInputMode&& value) { m_trainingInputModeHasBeenSet = true; m_trainingInputMode = std::move(value); }

    /**
     * <p>The input mode that the algorithm supports. For the input modes that Amazon
     * SageMaker algorithms support, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * If an algorithm supports the <code>File</code> input mode, Amazon SageMaker
     * downloads the training data from S3 to the provisioned ML storage Volume, and
     * mounts the directory to docker volume for training container. If an algorithm
     * supports the <code>Pipe</code> input mode, Amazon SageMaker streams data
     * directly from S3 to the container. </p> <p> In File mode, make sure you
     * provision ML storage volume with sufficient capacity to accommodate the data
     * download from S3. In addition to the training data, the ML storage volume also
     * stores the output model. The algorithm container use ML storage volume to also
     * store intermediate information, if any. </p> <p> For distributed algorithms
     * using File mode, training data is distributed uniformly, and your training
     * duration is predictable if the input data objects size is approximately same.
     * Amazon SageMaker does not split the files any further for model training. If the
     * object sizes are skewed, training won't be optimal as the data distribution is
     * also skewed where one host in a training cluster is overloaded, thus becoming
     * bottleneck in training. </p>
     */
    inline AlgorithmSpecification& WithTrainingInputMode(const TrainingInputMode& value) { SetTrainingInputMode(value); return *this;}

    /**
     * <p>The input mode that the algorithm supports. For the input modes that Amazon
     * SageMaker algorithms support, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * If an algorithm supports the <code>File</code> input mode, Amazon SageMaker
     * downloads the training data from S3 to the provisioned ML storage Volume, and
     * mounts the directory to docker volume for training container. If an algorithm
     * supports the <code>Pipe</code> input mode, Amazon SageMaker streams data
     * directly from S3 to the container. </p> <p> In File mode, make sure you
     * provision ML storage volume with sufficient capacity to accommodate the data
     * download from S3. In addition to the training data, the ML storage volume also
     * stores the output model. The algorithm container use ML storage volume to also
     * store intermediate information, if any. </p> <p> For distributed algorithms
     * using File mode, training data is distributed uniformly, and your training
     * duration is predictable if the input data objects size is approximately same.
     * Amazon SageMaker does not split the files any further for model training. If the
     * object sizes are skewed, training won't be optimal as the data distribution is
     * also skewed where one host in a training cluster is overloaded, thus becoming
     * bottleneck in training. </p>
     */
    inline AlgorithmSpecification& WithTrainingInputMode(TrainingInputMode&& value) { SetTrainingInputMode(std::move(value)); return *this;}


    /**
     * <p>A list of metric definition objects. Each object specifies the metric name
     * and regular expressions used to parse algorithm logs. Amazon SageMaker publishes
     * each metric to Amazon CloudWatch.</p>
     */
    inline const Aws::Vector<MetricDefinition>& GetMetricDefinitions() const{ return m_metricDefinitions; }

    /**
     * <p>A list of metric definition objects. Each object specifies the metric name
     * and regular expressions used to parse algorithm logs. Amazon SageMaker publishes
     * each metric to Amazon CloudWatch.</p>
     */
    inline bool MetricDefinitionsHasBeenSet() const { return m_metricDefinitionsHasBeenSet; }

    /**
     * <p>A list of metric definition objects. Each object specifies the metric name
     * and regular expressions used to parse algorithm logs. Amazon SageMaker publishes
     * each metric to Amazon CloudWatch.</p>
     */
    inline void SetMetricDefinitions(const Aws::Vector<MetricDefinition>& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions = value; }

    /**
     * <p>A list of metric definition objects. Each object specifies the metric name
     * and regular expressions used to parse algorithm logs. Amazon SageMaker publishes
     * each metric to Amazon CloudWatch.</p>
     */
    inline void SetMetricDefinitions(Aws::Vector<MetricDefinition>&& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions = std::move(value); }

    /**
     * <p>A list of metric definition objects. Each object specifies the metric name
     * and regular expressions used to parse algorithm logs. Amazon SageMaker publishes
     * each metric to Amazon CloudWatch.</p>
     */
    inline AlgorithmSpecification& WithMetricDefinitions(const Aws::Vector<MetricDefinition>& value) { SetMetricDefinitions(value); return *this;}

    /**
     * <p>A list of metric definition objects. Each object specifies the metric name
     * and regular expressions used to parse algorithm logs. Amazon SageMaker publishes
     * each metric to Amazon CloudWatch.</p>
     */
    inline AlgorithmSpecification& WithMetricDefinitions(Aws::Vector<MetricDefinition>&& value) { SetMetricDefinitions(std::move(value)); return *this;}

    /**
     * <p>A list of metric definition objects. Each object specifies the metric name
     * and regular expressions used to parse algorithm logs. Amazon SageMaker publishes
     * each metric to Amazon CloudWatch.</p>
     */
    inline AlgorithmSpecification& AddMetricDefinitions(const MetricDefinition& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions.push_back(value); return *this; }

    /**
     * <p>A list of metric definition objects. Each object specifies the metric name
     * and regular expressions used to parse algorithm logs. Amazon SageMaker publishes
     * each metric to Amazon CloudWatch.</p>
     */
    inline AlgorithmSpecification& AddMetricDefinitions(MetricDefinition&& value) { m_metricDefinitionsHasBeenSet = true; m_metricDefinitions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_trainingImage;
    bool m_trainingImageHasBeenSet;

    Aws::String m_algorithmName;
    bool m_algorithmNameHasBeenSet;

    TrainingInputMode m_trainingInputMode;
    bool m_trainingInputModeHasBeenSet;

    Aws::Vector<MetricDefinition> m_metricDefinitions;
    bool m_metricDefinitionsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
