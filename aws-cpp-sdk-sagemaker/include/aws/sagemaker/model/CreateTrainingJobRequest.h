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
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/AlgorithmSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/OutputDataConfig.h>
#include <aws/sagemaker/model/ResourceConfig.h>
#include <aws/sagemaker/model/VpcConfig.h>
#include <aws/sagemaker/model/StoppingCondition.h>
#include <aws/sagemaker/model/Channel.h>
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
  class AWS_SAGEMAKER_API CreateTrainingJobRequest : public SageMakerRequest
  {
  public:
    CreateTrainingJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTrainingJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the training job. The name must be unique within an AWS Region in
     * an AWS account. </p>
     */
    inline const Aws::String& GetTrainingJobName() const{ return m_trainingJobName; }

    /**
     * <p>The name of the training job. The name must be unique within an AWS Region in
     * an AWS account. </p>
     */
    inline bool TrainingJobNameHasBeenSet() const { return m_trainingJobNameHasBeenSet; }

    /**
     * <p>The name of the training job. The name must be unique within an AWS Region in
     * an AWS account. </p>
     */
    inline void SetTrainingJobName(const Aws::String& value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName = value; }

    /**
     * <p>The name of the training job. The name must be unique within an AWS Region in
     * an AWS account. </p>
     */
    inline void SetTrainingJobName(Aws::String&& value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName = std::move(value); }

    /**
     * <p>The name of the training job. The name must be unique within an AWS Region in
     * an AWS account. </p>
     */
    inline void SetTrainingJobName(const char* value) { m_trainingJobNameHasBeenSet = true; m_trainingJobName.assign(value); }

    /**
     * <p>The name of the training job. The name must be unique within an AWS Region in
     * an AWS account. </p>
     */
    inline CreateTrainingJobRequest& WithTrainingJobName(const Aws::String& value) { SetTrainingJobName(value); return *this;}

    /**
     * <p>The name of the training job. The name must be unique within an AWS Region in
     * an AWS account. </p>
     */
    inline CreateTrainingJobRequest& WithTrainingJobName(Aws::String&& value) { SetTrainingJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the training job. The name must be unique within an AWS Region in
     * an AWS account. </p>
     */
    inline CreateTrainingJobRequest& WithTrainingJobName(const char* value) { SetTrainingJobName(value); return *this;}


    /**
     * <p>Algorithm-specific parameters that influence the quality of the model. You
     * set hyperparameters before you start the learning process. For a list of
     * hyperparameters for each training algorithm provided by Amazon SageMaker, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * </p> <p>You can specify a maximum of 100 hyperparameters. Each hyperparameter is
     * a key-value pair. Each key and value is limited to 256 characters, as specified
     * by the <code>Length Constraint</code>. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHyperParameters() const{ return m_hyperParameters; }

    /**
     * <p>Algorithm-specific parameters that influence the quality of the model. You
     * set hyperparameters before you start the learning process. For a list of
     * hyperparameters for each training algorithm provided by Amazon SageMaker, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * </p> <p>You can specify a maximum of 100 hyperparameters. Each hyperparameter is
     * a key-value pair. Each key and value is limited to 256 characters, as specified
     * by the <code>Length Constraint</code>. </p>
     */
    inline bool HyperParametersHasBeenSet() const { return m_hyperParametersHasBeenSet; }

    /**
     * <p>Algorithm-specific parameters that influence the quality of the model. You
     * set hyperparameters before you start the learning process. For a list of
     * hyperparameters for each training algorithm provided by Amazon SageMaker, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * </p> <p>You can specify a maximum of 100 hyperparameters. Each hyperparameter is
     * a key-value pair. Each key and value is limited to 256 characters, as specified
     * by the <code>Length Constraint</code>. </p>
     */
    inline void SetHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters = value; }

    /**
     * <p>Algorithm-specific parameters that influence the quality of the model. You
     * set hyperparameters before you start the learning process. For a list of
     * hyperparameters for each training algorithm provided by Amazon SageMaker, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * </p> <p>You can specify a maximum of 100 hyperparameters. Each hyperparameter is
     * a key-value pair. Each key and value is limited to 256 characters, as specified
     * by the <code>Length Constraint</code>. </p>
     */
    inline void SetHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters = std::move(value); }

    /**
     * <p>Algorithm-specific parameters that influence the quality of the model. You
     * set hyperparameters before you start the learning process. For a list of
     * hyperparameters for each training algorithm provided by Amazon SageMaker, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * </p> <p>You can specify a maximum of 100 hyperparameters. Each hyperparameter is
     * a key-value pair. Each key and value is limited to 256 characters, as specified
     * by the <code>Length Constraint</code>. </p>
     */
    inline CreateTrainingJobRequest& WithHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetHyperParameters(value); return *this;}

    /**
     * <p>Algorithm-specific parameters that influence the quality of the model. You
     * set hyperparameters before you start the learning process. For a list of
     * hyperparameters for each training algorithm provided by Amazon SageMaker, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * </p> <p>You can specify a maximum of 100 hyperparameters. Each hyperparameter is
     * a key-value pair. Each key and value is limited to 256 characters, as specified
     * by the <code>Length Constraint</code>. </p>
     */
    inline CreateTrainingJobRequest& WithHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetHyperParameters(std::move(value)); return *this;}

    /**
     * <p>Algorithm-specific parameters that influence the quality of the model. You
     * set hyperparameters before you start the learning process. For a list of
     * hyperparameters for each training algorithm provided by Amazon SageMaker, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * </p> <p>You can specify a maximum of 100 hyperparameters. Each hyperparameter is
     * a key-value pair. Each key and value is limited to 256 characters, as specified
     * by the <code>Length Constraint</code>. </p>
     */
    inline CreateTrainingJobRequest& AddHyperParameters(const Aws::String& key, const Aws::String& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(key, value); return *this; }

    /**
     * <p>Algorithm-specific parameters that influence the quality of the model. You
     * set hyperparameters before you start the learning process. For a list of
     * hyperparameters for each training algorithm provided by Amazon SageMaker, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * </p> <p>You can specify a maximum of 100 hyperparameters. Each hyperparameter is
     * a key-value pair. Each key and value is limited to 256 characters, as specified
     * by the <code>Length Constraint</code>. </p>
     */
    inline CreateTrainingJobRequest& AddHyperParameters(Aws::String&& key, const Aws::String& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Algorithm-specific parameters that influence the quality of the model. You
     * set hyperparameters before you start the learning process. For a list of
     * hyperparameters for each training algorithm provided by Amazon SageMaker, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * </p> <p>You can specify a maximum of 100 hyperparameters. Each hyperparameter is
     * a key-value pair. Each key and value is limited to 256 characters, as specified
     * by the <code>Length Constraint</code>. </p>
     */
    inline CreateTrainingJobRequest& AddHyperParameters(const Aws::String& key, Aws::String&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Algorithm-specific parameters that influence the quality of the model. You
     * set hyperparameters before you start the learning process. For a list of
     * hyperparameters for each training algorithm provided by Amazon SageMaker, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * </p> <p>You can specify a maximum of 100 hyperparameters. Each hyperparameter is
     * a key-value pair. Each key and value is limited to 256 characters, as specified
     * by the <code>Length Constraint</code>. </p>
     */
    inline CreateTrainingJobRequest& AddHyperParameters(Aws::String&& key, Aws::String&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Algorithm-specific parameters that influence the quality of the model. You
     * set hyperparameters before you start the learning process. For a list of
     * hyperparameters for each training algorithm provided by Amazon SageMaker, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * </p> <p>You can specify a maximum of 100 hyperparameters. Each hyperparameter is
     * a key-value pair. Each key and value is limited to 256 characters, as specified
     * by the <code>Length Constraint</code>. </p>
     */
    inline CreateTrainingJobRequest& AddHyperParameters(const char* key, Aws::String&& value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Algorithm-specific parameters that influence the quality of the model. You
     * set hyperparameters before you start the learning process. For a list of
     * hyperparameters for each training algorithm provided by Amazon SageMaker, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * </p> <p>You can specify a maximum of 100 hyperparameters. Each hyperparameter is
     * a key-value pair. Each key and value is limited to 256 characters, as specified
     * by the <code>Length Constraint</code>. </p>
     */
    inline CreateTrainingJobRequest& AddHyperParameters(Aws::String&& key, const char* value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Algorithm-specific parameters that influence the quality of the model. You
     * set hyperparameters before you start the learning process. For a list of
     * hyperparameters for each training algorithm provided by Amazon SageMaker, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * </p> <p>You can specify a maximum of 100 hyperparameters. Each hyperparameter is
     * a key-value pair. Each key and value is limited to 256 characters, as specified
     * by the <code>Length Constraint</code>. </p>
     */
    inline CreateTrainingJobRequest& AddHyperParameters(const char* key, const char* value) { m_hyperParametersHasBeenSet = true; m_hyperParameters.emplace(key, value); return *this; }


    /**
     * <p>The registry path of the Docker image that contains the training algorithm
     * and algorithm-specific metadata, including the input mode. For more information
     * about algorithms provided by Amazon SageMaker, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * For information about providing your own algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>. </p>
     */
    inline const AlgorithmSpecification& GetAlgorithmSpecification() const{ return m_algorithmSpecification; }

    /**
     * <p>The registry path of the Docker image that contains the training algorithm
     * and algorithm-specific metadata, including the input mode. For more information
     * about algorithms provided by Amazon SageMaker, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * For information about providing your own algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>. </p>
     */
    inline bool AlgorithmSpecificationHasBeenSet() const { return m_algorithmSpecificationHasBeenSet; }

    /**
     * <p>The registry path of the Docker image that contains the training algorithm
     * and algorithm-specific metadata, including the input mode. For more information
     * about algorithms provided by Amazon SageMaker, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * For information about providing your own algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>. </p>
     */
    inline void SetAlgorithmSpecification(const AlgorithmSpecification& value) { m_algorithmSpecificationHasBeenSet = true; m_algorithmSpecification = value; }

    /**
     * <p>The registry path of the Docker image that contains the training algorithm
     * and algorithm-specific metadata, including the input mode. For more information
     * about algorithms provided by Amazon SageMaker, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * For information about providing your own algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>. </p>
     */
    inline void SetAlgorithmSpecification(AlgorithmSpecification&& value) { m_algorithmSpecificationHasBeenSet = true; m_algorithmSpecification = std::move(value); }

    /**
     * <p>The registry path of the Docker image that contains the training algorithm
     * and algorithm-specific metadata, including the input mode. For more information
     * about algorithms provided by Amazon SageMaker, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * For information about providing your own algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>. </p>
     */
    inline CreateTrainingJobRequest& WithAlgorithmSpecification(const AlgorithmSpecification& value) { SetAlgorithmSpecification(value); return *this;}

    /**
     * <p>The registry path of the Docker image that contains the training algorithm
     * and algorithm-specific metadata, including the input mode. For more information
     * about algorithms provided by Amazon SageMaker, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/algos.html">Algorithms</a>.
     * For information about providing your own algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>. </p>
     */
    inline CreateTrainingJobRequest& WithAlgorithmSpecification(AlgorithmSpecification&& value) { SetAlgorithmSpecification(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf. </p> <p>During model training, Amazon
     * SageMaker needs your permission to read input data from an S3 bucket, download a
     * Docker image that contains training code, write model artifacts to an S3 bucket,
     * write logs to Amazon CloudWatch Logs, and publish metrics to Amazon CloudWatch.
     * You grant permissions for all of these tasks to an IAM role. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles</a>. </p> <note> <p>To be able to pass this role to Amazon
     * SageMaker, the caller of this API must have the <code>iam:PassRole</code>
     * permission.</p> </note>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf. </p> <p>During model training, Amazon
     * SageMaker needs your permission to read input data from an S3 bucket, download a
     * Docker image that contains training code, write model artifacts to an S3 bucket,
     * write logs to Amazon CloudWatch Logs, and publish metrics to Amazon CloudWatch.
     * You grant permissions for all of these tasks to an IAM role. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles</a>. </p> <note> <p>To be able to pass this role to Amazon
     * SageMaker, the caller of this API must have the <code>iam:PassRole</code>
     * permission.</p> </note>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf. </p> <p>During model training, Amazon
     * SageMaker needs your permission to read input data from an S3 bucket, download a
     * Docker image that contains training code, write model artifacts to an S3 bucket,
     * write logs to Amazon CloudWatch Logs, and publish metrics to Amazon CloudWatch.
     * You grant permissions for all of these tasks to an IAM role. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles</a>. </p> <note> <p>To be able to pass this role to Amazon
     * SageMaker, the caller of this API must have the <code>iam:PassRole</code>
     * permission.</p> </note>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf. </p> <p>During model training, Amazon
     * SageMaker needs your permission to read input data from an S3 bucket, download a
     * Docker image that contains training code, write model artifacts to an S3 bucket,
     * write logs to Amazon CloudWatch Logs, and publish metrics to Amazon CloudWatch.
     * You grant permissions for all of these tasks to an IAM role. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles</a>. </p> <note> <p>To be able to pass this role to Amazon
     * SageMaker, the caller of this API must have the <code>iam:PassRole</code>
     * permission.</p> </note>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf. </p> <p>During model training, Amazon
     * SageMaker needs your permission to read input data from an S3 bucket, download a
     * Docker image that contains training code, write model artifacts to an S3 bucket,
     * write logs to Amazon CloudWatch Logs, and publish metrics to Amazon CloudWatch.
     * You grant permissions for all of these tasks to an IAM role. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles</a>. </p> <note> <p>To be able to pass this role to Amazon
     * SageMaker, the caller of this API must have the <code>iam:PassRole</code>
     * permission.</p> </note>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf. </p> <p>During model training, Amazon
     * SageMaker needs your permission to read input data from an S3 bucket, download a
     * Docker image that contains training code, write model artifacts to an S3 bucket,
     * write logs to Amazon CloudWatch Logs, and publish metrics to Amazon CloudWatch.
     * You grant permissions for all of these tasks to an IAM role. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles</a>. </p> <note> <p>To be able to pass this role to Amazon
     * SageMaker, the caller of this API must have the <code>iam:PassRole</code>
     * permission.</p> </note>
     */
    inline CreateTrainingJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf. </p> <p>During model training, Amazon
     * SageMaker needs your permission to read input data from an S3 bucket, download a
     * Docker image that contains training code, write model artifacts to an S3 bucket,
     * write logs to Amazon CloudWatch Logs, and publish metrics to Amazon CloudWatch.
     * You grant permissions for all of these tasks to an IAM role. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles</a>. </p> <note> <p>To be able to pass this role to Amazon
     * SageMaker, the caller of this API must have the <code>iam:PassRole</code>
     * permission.</p> </note>
     */
    inline CreateTrainingJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker can
     * assume to perform tasks on your behalf. </p> <p>During model training, Amazon
     * SageMaker needs your permission to read input data from an S3 bucket, download a
     * Docker image that contains training code, write model artifacts to an S3 bucket,
     * write logs to Amazon CloudWatch Logs, and publish metrics to Amazon CloudWatch.
     * You grant permissions for all of these tasks to an IAM role. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles</a>. </p> <note> <p>To be able to pass this role to Amazon
     * SageMaker, the caller of this API must have the <code>iam:PassRole</code>
     * permission.</p> </note>
     */
    inline CreateTrainingJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>An array of <code>Channel</code> objects. Each channel is a named input
     * source. <code>InputDataConfig</code> describes the input data and its location.
     * </p> <p>Algorithms can accept input data from one or more channels. For example,
     * an algorithm might have two channels of input data, <code>training_data</code>
     * and <code>validation_data</code>. The configuration for each channel provides
     * the S3 location where the input data is stored. It also provides information
     * about the stored data: the MIME type, compression method, and whether the data
     * is wrapped in RecordIO format. </p> <p>Depending on the input mode that the
     * algorithm supports, Amazon SageMaker either copies input data files from an S3
     * bucket to a local directory in the Docker container, or makes it available as
     * input streams. </p>
     */
    inline const Aws::Vector<Channel>& GetInputDataConfig() const{ return m_inputDataConfig; }

    /**
     * <p>An array of <code>Channel</code> objects. Each channel is a named input
     * source. <code>InputDataConfig</code> describes the input data and its location.
     * </p> <p>Algorithms can accept input data from one or more channels. For example,
     * an algorithm might have two channels of input data, <code>training_data</code>
     * and <code>validation_data</code>. The configuration for each channel provides
     * the S3 location where the input data is stored. It also provides information
     * about the stored data: the MIME type, compression method, and whether the data
     * is wrapped in RecordIO format. </p> <p>Depending on the input mode that the
     * algorithm supports, Amazon SageMaker either copies input data files from an S3
     * bucket to a local directory in the Docker container, or makes it available as
     * input streams. </p>
     */
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }

    /**
     * <p>An array of <code>Channel</code> objects. Each channel is a named input
     * source. <code>InputDataConfig</code> describes the input data and its location.
     * </p> <p>Algorithms can accept input data from one or more channels. For example,
     * an algorithm might have two channels of input data, <code>training_data</code>
     * and <code>validation_data</code>. The configuration for each channel provides
     * the S3 location where the input data is stored. It also provides information
     * about the stored data: the MIME type, compression method, and whether the data
     * is wrapped in RecordIO format. </p> <p>Depending on the input mode that the
     * algorithm supports, Amazon SageMaker either copies input data files from an S3
     * bucket to a local directory in the Docker container, or makes it available as
     * input streams. </p>
     */
    inline void SetInputDataConfig(const Aws::Vector<Channel>& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }

    /**
     * <p>An array of <code>Channel</code> objects. Each channel is a named input
     * source. <code>InputDataConfig</code> describes the input data and its location.
     * </p> <p>Algorithms can accept input data from one or more channels. For example,
     * an algorithm might have two channels of input data, <code>training_data</code>
     * and <code>validation_data</code>. The configuration for each channel provides
     * the S3 location where the input data is stored. It also provides information
     * about the stored data: the MIME type, compression method, and whether the data
     * is wrapped in RecordIO format. </p> <p>Depending on the input mode that the
     * algorithm supports, Amazon SageMaker either copies input data files from an S3
     * bucket to a local directory in the Docker container, or makes it available as
     * input streams. </p>
     */
    inline void SetInputDataConfig(Aws::Vector<Channel>&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }

    /**
     * <p>An array of <code>Channel</code> objects. Each channel is a named input
     * source. <code>InputDataConfig</code> describes the input data and its location.
     * </p> <p>Algorithms can accept input data from one or more channels. For example,
     * an algorithm might have two channels of input data, <code>training_data</code>
     * and <code>validation_data</code>. The configuration for each channel provides
     * the S3 location where the input data is stored. It also provides information
     * about the stored data: the MIME type, compression method, and whether the data
     * is wrapped in RecordIO format. </p> <p>Depending on the input mode that the
     * algorithm supports, Amazon SageMaker either copies input data files from an S3
     * bucket to a local directory in the Docker container, or makes it available as
     * input streams. </p>
     */
    inline CreateTrainingJobRequest& WithInputDataConfig(const Aws::Vector<Channel>& value) { SetInputDataConfig(value); return *this;}

    /**
     * <p>An array of <code>Channel</code> objects. Each channel is a named input
     * source. <code>InputDataConfig</code> describes the input data and its location.
     * </p> <p>Algorithms can accept input data from one or more channels. For example,
     * an algorithm might have two channels of input data, <code>training_data</code>
     * and <code>validation_data</code>. The configuration for each channel provides
     * the S3 location where the input data is stored. It also provides information
     * about the stored data: the MIME type, compression method, and whether the data
     * is wrapped in RecordIO format. </p> <p>Depending on the input mode that the
     * algorithm supports, Amazon SageMaker either copies input data files from an S3
     * bucket to a local directory in the Docker container, or makes it available as
     * input streams. </p>
     */
    inline CreateTrainingJobRequest& WithInputDataConfig(Aws::Vector<Channel>&& value) { SetInputDataConfig(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Channel</code> objects. Each channel is a named input
     * source. <code>InputDataConfig</code> describes the input data and its location.
     * </p> <p>Algorithms can accept input data from one or more channels. For example,
     * an algorithm might have two channels of input data, <code>training_data</code>
     * and <code>validation_data</code>. The configuration for each channel provides
     * the S3 location where the input data is stored. It also provides information
     * about the stored data: the MIME type, compression method, and whether the data
     * is wrapped in RecordIO format. </p> <p>Depending on the input mode that the
     * algorithm supports, Amazon SageMaker either copies input data files from an S3
     * bucket to a local directory in the Docker container, or makes it available as
     * input streams. </p>
     */
    inline CreateTrainingJobRequest& AddInputDataConfig(const Channel& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig.push_back(value); return *this; }

    /**
     * <p>An array of <code>Channel</code> objects. Each channel is a named input
     * source. <code>InputDataConfig</code> describes the input data and its location.
     * </p> <p>Algorithms can accept input data from one or more channels. For example,
     * an algorithm might have two channels of input data, <code>training_data</code>
     * and <code>validation_data</code>. The configuration for each channel provides
     * the S3 location where the input data is stored. It also provides information
     * about the stored data: the MIME type, compression method, and whether the data
     * is wrapped in RecordIO format. </p> <p>Depending on the input mode that the
     * algorithm supports, Amazon SageMaker either copies input data files from an S3
     * bucket to a local directory in the Docker container, or makes it available as
     * input streams. </p>
     */
    inline CreateTrainingJobRequest& AddInputDataConfig(Channel&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the path to the S3 bucket where you want to store model artifacts.
     * Amazon SageMaker creates subfolders for the artifacts. </p>
     */
    inline const OutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }

    /**
     * <p>Specifies the path to the S3 bucket where you want to store model artifacts.
     * Amazon SageMaker creates subfolders for the artifacts. </p>
     */
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }

    /**
     * <p>Specifies the path to the S3 bucket where you want to store model artifacts.
     * Amazon SageMaker creates subfolders for the artifacts. </p>
     */
    inline void SetOutputDataConfig(const OutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }

    /**
     * <p>Specifies the path to the S3 bucket where you want to store model artifacts.
     * Amazon SageMaker creates subfolders for the artifacts. </p>
     */
    inline void SetOutputDataConfig(OutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }

    /**
     * <p>Specifies the path to the S3 bucket where you want to store model artifacts.
     * Amazon SageMaker creates subfolders for the artifacts. </p>
     */
    inline CreateTrainingJobRequest& WithOutputDataConfig(const OutputDataConfig& value) { SetOutputDataConfig(value); return *this;}

    /**
     * <p>Specifies the path to the S3 bucket where you want to store model artifacts.
     * Amazon SageMaker creates subfolders for the artifacts. </p>
     */
    inline CreateTrainingJobRequest& WithOutputDataConfig(OutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}


    /**
     * <p>The resources, including the ML compute instances and ML storage volumes, to
     * use for model training. </p> <p>ML storage volumes store model artifacts and
     * incremental states. Training algorithms might also use ML storage volumes for
     * scratch space. If you want Amazon SageMaker to use the ML storage volume to
     * store the training data, choose <code>File</code> as the
     * <code>TrainingInputMode</code> in the algorithm specification. For distributed
     * training algorithms, specify an instance count greater than 1.</p>
     */
    inline const ResourceConfig& GetResourceConfig() const{ return m_resourceConfig; }

    /**
     * <p>The resources, including the ML compute instances and ML storage volumes, to
     * use for model training. </p> <p>ML storage volumes store model artifacts and
     * incremental states. Training algorithms might also use ML storage volumes for
     * scratch space. If you want Amazon SageMaker to use the ML storage volume to
     * store the training data, choose <code>File</code> as the
     * <code>TrainingInputMode</code> in the algorithm specification. For distributed
     * training algorithms, specify an instance count greater than 1.</p>
     */
    inline bool ResourceConfigHasBeenSet() const { return m_resourceConfigHasBeenSet; }

    /**
     * <p>The resources, including the ML compute instances and ML storage volumes, to
     * use for model training. </p> <p>ML storage volumes store model artifacts and
     * incremental states. Training algorithms might also use ML storage volumes for
     * scratch space. If you want Amazon SageMaker to use the ML storage volume to
     * store the training data, choose <code>File</code> as the
     * <code>TrainingInputMode</code> in the algorithm specification. For distributed
     * training algorithms, specify an instance count greater than 1.</p>
     */
    inline void SetResourceConfig(const ResourceConfig& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = value; }

    /**
     * <p>The resources, including the ML compute instances and ML storage volumes, to
     * use for model training. </p> <p>ML storage volumes store model artifacts and
     * incremental states. Training algorithms might also use ML storage volumes for
     * scratch space. If you want Amazon SageMaker to use the ML storage volume to
     * store the training data, choose <code>File</code> as the
     * <code>TrainingInputMode</code> in the algorithm specification. For distributed
     * training algorithms, specify an instance count greater than 1.</p>
     */
    inline void SetResourceConfig(ResourceConfig&& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = std::move(value); }

    /**
     * <p>The resources, including the ML compute instances and ML storage volumes, to
     * use for model training. </p> <p>ML storage volumes store model artifacts and
     * incremental states. Training algorithms might also use ML storage volumes for
     * scratch space. If you want Amazon SageMaker to use the ML storage volume to
     * store the training data, choose <code>File</code> as the
     * <code>TrainingInputMode</code> in the algorithm specification. For distributed
     * training algorithms, specify an instance count greater than 1.</p>
     */
    inline CreateTrainingJobRequest& WithResourceConfig(const ResourceConfig& value) { SetResourceConfig(value); return *this;}

    /**
     * <p>The resources, including the ML compute instances and ML storage volumes, to
     * use for model training. </p> <p>ML storage volumes store model artifacts and
     * incremental states. Training algorithms might also use ML storage volumes for
     * scratch space. If you want Amazon SageMaker to use the ML storage volume to
     * store the training data, choose <code>File</code> as the
     * <code>TrainingInputMode</code> in the algorithm specification. For distributed
     * training algorithms, specify an instance count greater than 1.</p>
     */
    inline CreateTrainingJobRequest& WithResourceConfig(ResourceConfig&& value) { SetResourceConfig(std::move(value)); return *this;}


    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that you want your training
     * job to connect to. Control access to and from your training container by
     * configuring the VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-vpc.html">Protect
     * Training Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that you want your training
     * job to connect to. Control access to and from your training container by
     * configuring the VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-vpc.html">Protect
     * Training Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that you want your training
     * job to connect to. Control access to and from your training container by
     * configuring the VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-vpc.html">Protect
     * Training Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that you want your training
     * job to connect to. Control access to and from your training container by
     * configuring the VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-vpc.html">Protect
     * Training Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that you want your training
     * job to connect to. Control access to and from your training container by
     * configuring the VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-vpc.html">Protect
     * Training Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline CreateTrainingJobRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that you want your training
     * job to connect to. Control access to and from your training container by
     * configuring the VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-vpc.html">Protect
     * Training Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline CreateTrainingJobRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies a limit to how long a model training job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the training job. Use this API to
     * cap model training costs.</p> <p>To stop a job, Amazon SageMaker sends the
     * algorithm the <code>SIGTERM</code> signal, which delays job termination for 120
     * seconds. Algorithms can use this 120-second window to save the model artifacts,
     * so the results of training are not lost. </p>
     */
    inline const StoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }

    /**
     * <p>Specifies a limit to how long a model training job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the training job. Use this API to
     * cap model training costs.</p> <p>To stop a job, Amazon SageMaker sends the
     * algorithm the <code>SIGTERM</code> signal, which delays job termination for 120
     * seconds. Algorithms can use this 120-second window to save the model artifacts,
     * so the results of training are not lost. </p>
     */
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }

    /**
     * <p>Specifies a limit to how long a model training job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the training job. Use this API to
     * cap model training costs.</p> <p>To stop a job, Amazon SageMaker sends the
     * algorithm the <code>SIGTERM</code> signal, which delays job termination for 120
     * seconds. Algorithms can use this 120-second window to save the model artifacts,
     * so the results of training are not lost. </p>
     */
    inline void SetStoppingCondition(const StoppingCondition& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = value; }

    /**
     * <p>Specifies a limit to how long a model training job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the training job. Use this API to
     * cap model training costs.</p> <p>To stop a job, Amazon SageMaker sends the
     * algorithm the <code>SIGTERM</code> signal, which delays job termination for 120
     * seconds. Algorithms can use this 120-second window to save the model artifacts,
     * so the results of training are not lost. </p>
     */
    inline void SetStoppingCondition(StoppingCondition&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::move(value); }

    /**
     * <p>Specifies a limit to how long a model training job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the training job. Use this API to
     * cap model training costs.</p> <p>To stop a job, Amazon SageMaker sends the
     * algorithm the <code>SIGTERM</code> signal, which delays job termination for 120
     * seconds. Algorithms can use this 120-second window to save the model artifacts,
     * so the results of training are not lost. </p>
     */
    inline CreateTrainingJobRequest& WithStoppingCondition(const StoppingCondition& value) { SetStoppingCondition(value); return *this;}

    /**
     * <p>Specifies a limit to how long a model training job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the training job. Use this API to
     * cap model training costs.</p> <p>To stop a job, Amazon SageMaker sends the
     * algorithm the <code>SIGTERM</code> signal, which delays job termination for 120
     * seconds. Algorithms can use this 120-second window to save the model artifacts,
     * so the results of training are not lost. </p>
     */
    inline CreateTrainingJobRequest& WithStoppingCondition(StoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}


    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline CreateTrainingJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline CreateTrainingJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline CreateTrainingJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>AWS Billing and Cost Management User
     * Guide</i>. </p>
     */
    inline CreateTrainingJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Isolates the training container. No inbound or outbound network calls can be
     * made, except for calls between peers within a training cluster for distributed
     * training. If you enable network isolation for training jobs that are configured
     * to use a VPC, Amazon SageMaker downloads and uploads customer data and model
     * artifacts through the specified VPC, but the training container does not have
     * network access.</p> <note> <p>The Semantic Segmentation built-in algorithm does
     * not support network isolation.</p> </note>
     */
    inline bool GetEnableNetworkIsolation() const{ return m_enableNetworkIsolation; }

    /**
     * <p>Isolates the training container. No inbound or outbound network calls can be
     * made, except for calls between peers within a training cluster for distributed
     * training. If you enable network isolation for training jobs that are configured
     * to use a VPC, Amazon SageMaker downloads and uploads customer data and model
     * artifacts through the specified VPC, but the training container does not have
     * network access.</p> <note> <p>The Semantic Segmentation built-in algorithm does
     * not support network isolation.</p> </note>
     */
    inline bool EnableNetworkIsolationHasBeenSet() const { return m_enableNetworkIsolationHasBeenSet; }

    /**
     * <p>Isolates the training container. No inbound or outbound network calls can be
     * made, except for calls between peers within a training cluster for distributed
     * training. If you enable network isolation for training jobs that are configured
     * to use a VPC, Amazon SageMaker downloads and uploads customer data and model
     * artifacts through the specified VPC, but the training container does not have
     * network access.</p> <note> <p>The Semantic Segmentation built-in algorithm does
     * not support network isolation.</p> </note>
     */
    inline void SetEnableNetworkIsolation(bool value) { m_enableNetworkIsolationHasBeenSet = true; m_enableNetworkIsolation = value; }

    /**
     * <p>Isolates the training container. No inbound or outbound network calls can be
     * made, except for calls between peers within a training cluster for distributed
     * training. If you enable network isolation for training jobs that are configured
     * to use a VPC, Amazon SageMaker downloads and uploads customer data and model
     * artifacts through the specified VPC, but the training container does not have
     * network access.</p> <note> <p>The Semantic Segmentation built-in algorithm does
     * not support network isolation.</p> </note>
     */
    inline CreateTrainingJobRequest& WithEnableNetworkIsolation(bool value) { SetEnableNetworkIsolation(value); return *this;}


    /**
     * <p>To encrypt all communications between ML compute instances in distributed
     * training, choose <code>True</code>. Encryption provides greater security for
     * distributed training, but training might take longer. How long it takes depends
     * on the amount of communication between compute instances, especially if you use
     * a deep learning algorithm in distributed training. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-encrypt.html">Protect
     * Communications Between ML Compute Instances in a Distributed Training
     * Job</a>.</p>
     */
    inline bool GetEnableInterContainerTrafficEncryption() const{ return m_enableInterContainerTrafficEncryption; }

    /**
     * <p>To encrypt all communications between ML compute instances in distributed
     * training, choose <code>True</code>. Encryption provides greater security for
     * distributed training, but training might take longer. How long it takes depends
     * on the amount of communication between compute instances, especially if you use
     * a deep learning algorithm in distributed training. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-encrypt.html">Protect
     * Communications Between ML Compute Instances in a Distributed Training
     * Job</a>.</p>
     */
    inline bool EnableInterContainerTrafficEncryptionHasBeenSet() const { return m_enableInterContainerTrafficEncryptionHasBeenSet; }

    /**
     * <p>To encrypt all communications between ML compute instances in distributed
     * training, choose <code>True</code>. Encryption provides greater security for
     * distributed training, but training might take longer. How long it takes depends
     * on the amount of communication between compute instances, especially if you use
     * a deep learning algorithm in distributed training. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-encrypt.html">Protect
     * Communications Between ML Compute Instances in a Distributed Training
     * Job</a>.</p>
     */
    inline void SetEnableInterContainerTrafficEncryption(bool value) { m_enableInterContainerTrafficEncryptionHasBeenSet = true; m_enableInterContainerTrafficEncryption = value; }

    /**
     * <p>To encrypt all communications between ML compute instances in distributed
     * training, choose <code>True</code>. Encryption provides greater security for
     * distributed training, but training might take longer. How long it takes depends
     * on the amount of communication between compute instances, especially if you use
     * a deep learning algorithm in distributed training. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/train-encrypt.html">Protect
     * Communications Between ML Compute Instances in a Distributed Training
     * Job</a>.</p>
     */
    inline CreateTrainingJobRequest& WithEnableInterContainerTrafficEncryption(bool value) { SetEnableInterContainerTrafficEncryption(value); return *this;}

  private:

    Aws::String m_trainingJobName;
    bool m_trainingJobNameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_hyperParameters;
    bool m_hyperParametersHasBeenSet;

    AlgorithmSpecification m_algorithmSpecification;
    bool m_algorithmSpecificationHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::Vector<Channel> m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet;

    OutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet;

    ResourceConfig m_resourceConfig;
    bool m_resourceConfigHasBeenSet;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet;

    StoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    bool m_enableNetworkIsolation;
    bool m_enableNetworkIsolationHasBeenSet;

    bool m_enableInterContainerTrafficEncryption;
    bool m_enableInterContainerTrafficEncryptionHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
