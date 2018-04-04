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
#include <utility>

namespace Aws
{
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

  /**
   * <p>Specifies the training algorithm to use in a <a
   * href="http://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateTrainingJob.html">CreateTrainingJob</a>
   * request. </p> <p>For more information about algorithms provided by Amazon
   * SageMaker, see <a
   * href="http://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
   * For information about using your own algorithms, see <a>your-algorithms</a>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AlgorithmSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API AlgorithmSpecification
  {
  public:
    AlgorithmSpecification();
    AlgorithmSpecification(const Aws::Utils::Json::JsonValue& jsonValue);
    AlgorithmSpecification& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The registry path of the Docker image that contains the training algorithm.
     * For information about docker registry paths for built-in algorithms, see
     * <a>sagemaker-algo-docker-registry-paths</a>.</p>
     */
    inline const Aws::String& GetTrainingImage() const{ return m_trainingImage; }

    /**
     * <p>The registry path of the Docker image that contains the training algorithm.
     * For information about docker registry paths for built-in algorithms, see
     * <a>sagemaker-algo-docker-registry-paths</a>.</p>
     */
    inline void SetTrainingImage(const Aws::String& value) { m_trainingImageHasBeenSet = true; m_trainingImage = value; }

    /**
     * <p>The registry path of the Docker image that contains the training algorithm.
     * For information about docker registry paths for built-in algorithms, see
     * <a>sagemaker-algo-docker-registry-paths</a>.</p>
     */
    inline void SetTrainingImage(Aws::String&& value) { m_trainingImageHasBeenSet = true; m_trainingImage = std::move(value); }

    /**
     * <p>The registry path of the Docker image that contains the training algorithm.
     * For information about docker registry paths for built-in algorithms, see
     * <a>sagemaker-algo-docker-registry-paths</a>.</p>
     */
    inline void SetTrainingImage(const char* value) { m_trainingImageHasBeenSet = true; m_trainingImage.assign(value); }

    /**
     * <p>The registry path of the Docker image that contains the training algorithm.
     * For information about docker registry paths for built-in algorithms, see
     * <a>sagemaker-algo-docker-registry-paths</a>.</p>
     */
    inline AlgorithmSpecification& WithTrainingImage(const Aws::String& value) { SetTrainingImage(value); return *this;}

    /**
     * <p>The registry path of the Docker image that contains the training algorithm.
     * For information about docker registry paths for built-in algorithms, see
     * <a>sagemaker-algo-docker-registry-paths</a>.</p>
     */
    inline AlgorithmSpecification& WithTrainingImage(Aws::String&& value) { SetTrainingImage(std::move(value)); return *this;}

    /**
     * <p>The registry path of the Docker image that contains the training algorithm.
     * For information about docker registry paths for built-in algorithms, see
     * <a>sagemaker-algo-docker-registry-paths</a>.</p>
     */
    inline AlgorithmSpecification& WithTrainingImage(const char* value) { SetTrainingImage(value); return *this;}


    /**
     * <p>The input mode that the algorithm supports. For the input modes that Amazon
     * SageMaker algorithms support, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
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
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
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
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
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
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
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
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
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

  private:

    Aws::String m_trainingImage;
    bool m_trainingImageHasBeenSet;

    TrainingInputMode m_trainingInputMode;
    bool m_trainingInputModeHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
