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
#include <aws/sagemaker/model/TrainingSpecification.h>
#include <aws/sagemaker/model/InferenceSpecification.h>
#include <aws/sagemaker/model/AlgorithmValidationSpecification.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API CreateAlgorithmRequest : public SageMakerRequest
  {
  public:
    CreateAlgorithmRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAlgorithm"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the algorithm.</p>
     */
    inline const Aws::String& GetAlgorithmName() const{ return m_algorithmName; }

    /**
     * <p>The name of the algorithm.</p>
     */
    inline bool AlgorithmNameHasBeenSet() const { return m_algorithmNameHasBeenSet; }

    /**
     * <p>The name of the algorithm.</p>
     */
    inline void SetAlgorithmName(const Aws::String& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = value; }

    /**
     * <p>The name of the algorithm.</p>
     */
    inline void SetAlgorithmName(Aws::String&& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = std::move(value); }

    /**
     * <p>The name of the algorithm.</p>
     */
    inline void SetAlgorithmName(const char* value) { m_algorithmNameHasBeenSet = true; m_algorithmName.assign(value); }

    /**
     * <p>The name of the algorithm.</p>
     */
    inline CreateAlgorithmRequest& WithAlgorithmName(const Aws::String& value) { SetAlgorithmName(value); return *this;}

    /**
     * <p>The name of the algorithm.</p>
     */
    inline CreateAlgorithmRequest& WithAlgorithmName(Aws::String&& value) { SetAlgorithmName(std::move(value)); return *this;}

    /**
     * <p>The name of the algorithm.</p>
     */
    inline CreateAlgorithmRequest& WithAlgorithmName(const char* value) { SetAlgorithmName(value); return *this;}


    /**
     * <p>A description of the algorithm.</p>
     */
    inline const Aws::String& GetAlgorithmDescription() const{ return m_algorithmDescription; }

    /**
     * <p>A description of the algorithm.</p>
     */
    inline bool AlgorithmDescriptionHasBeenSet() const { return m_algorithmDescriptionHasBeenSet; }

    /**
     * <p>A description of the algorithm.</p>
     */
    inline void SetAlgorithmDescription(const Aws::String& value) { m_algorithmDescriptionHasBeenSet = true; m_algorithmDescription = value; }

    /**
     * <p>A description of the algorithm.</p>
     */
    inline void SetAlgorithmDescription(Aws::String&& value) { m_algorithmDescriptionHasBeenSet = true; m_algorithmDescription = std::move(value); }

    /**
     * <p>A description of the algorithm.</p>
     */
    inline void SetAlgorithmDescription(const char* value) { m_algorithmDescriptionHasBeenSet = true; m_algorithmDescription.assign(value); }

    /**
     * <p>A description of the algorithm.</p>
     */
    inline CreateAlgorithmRequest& WithAlgorithmDescription(const Aws::String& value) { SetAlgorithmDescription(value); return *this;}

    /**
     * <p>A description of the algorithm.</p>
     */
    inline CreateAlgorithmRequest& WithAlgorithmDescription(Aws::String&& value) { SetAlgorithmDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the algorithm.</p>
     */
    inline CreateAlgorithmRequest& WithAlgorithmDescription(const char* value) { SetAlgorithmDescription(value); return *this;}


    /**
     * <p>Specifies details about training jobs run by this algorithm, including the
     * following:</p> <ul> <li> <p>The Amazon ECR path of the container and the version
     * digest of the algorithm.</p> </li> <li> <p>The hyperparameters that the
     * algorithm supports.</p> </li> <li> <p>The instance types that the algorithm
     * supports for training.</p> </li> <li> <p>Whether the algorithm supports
     * distributed training.</p> </li> <li> <p>The metrics that the algorithm emits to
     * Amazon CloudWatch.</p> </li> <li> <p>Which metrics that the algorithm emits can
     * be used as the objective metric for hyperparameter tuning jobs.</p> </li> <li>
     * <p>The input channels that the algorithm supports for training data. For
     * example, an algorithm might support <code>train</code>, <code>validation</code>,
     * and <code>test</code> channels.</p> </li> </ul>
     */
    inline const TrainingSpecification& GetTrainingSpecification() const{ return m_trainingSpecification; }

    /**
     * <p>Specifies details about training jobs run by this algorithm, including the
     * following:</p> <ul> <li> <p>The Amazon ECR path of the container and the version
     * digest of the algorithm.</p> </li> <li> <p>The hyperparameters that the
     * algorithm supports.</p> </li> <li> <p>The instance types that the algorithm
     * supports for training.</p> </li> <li> <p>Whether the algorithm supports
     * distributed training.</p> </li> <li> <p>The metrics that the algorithm emits to
     * Amazon CloudWatch.</p> </li> <li> <p>Which metrics that the algorithm emits can
     * be used as the objective metric for hyperparameter tuning jobs.</p> </li> <li>
     * <p>The input channels that the algorithm supports for training data. For
     * example, an algorithm might support <code>train</code>, <code>validation</code>,
     * and <code>test</code> channels.</p> </li> </ul>
     */
    inline bool TrainingSpecificationHasBeenSet() const { return m_trainingSpecificationHasBeenSet; }

    /**
     * <p>Specifies details about training jobs run by this algorithm, including the
     * following:</p> <ul> <li> <p>The Amazon ECR path of the container and the version
     * digest of the algorithm.</p> </li> <li> <p>The hyperparameters that the
     * algorithm supports.</p> </li> <li> <p>The instance types that the algorithm
     * supports for training.</p> </li> <li> <p>Whether the algorithm supports
     * distributed training.</p> </li> <li> <p>The metrics that the algorithm emits to
     * Amazon CloudWatch.</p> </li> <li> <p>Which metrics that the algorithm emits can
     * be used as the objective metric for hyperparameter tuning jobs.</p> </li> <li>
     * <p>The input channels that the algorithm supports for training data. For
     * example, an algorithm might support <code>train</code>, <code>validation</code>,
     * and <code>test</code> channels.</p> </li> </ul>
     */
    inline void SetTrainingSpecification(const TrainingSpecification& value) { m_trainingSpecificationHasBeenSet = true; m_trainingSpecification = value; }

    /**
     * <p>Specifies details about training jobs run by this algorithm, including the
     * following:</p> <ul> <li> <p>The Amazon ECR path of the container and the version
     * digest of the algorithm.</p> </li> <li> <p>The hyperparameters that the
     * algorithm supports.</p> </li> <li> <p>The instance types that the algorithm
     * supports for training.</p> </li> <li> <p>Whether the algorithm supports
     * distributed training.</p> </li> <li> <p>The metrics that the algorithm emits to
     * Amazon CloudWatch.</p> </li> <li> <p>Which metrics that the algorithm emits can
     * be used as the objective metric for hyperparameter tuning jobs.</p> </li> <li>
     * <p>The input channels that the algorithm supports for training data. For
     * example, an algorithm might support <code>train</code>, <code>validation</code>,
     * and <code>test</code> channels.</p> </li> </ul>
     */
    inline void SetTrainingSpecification(TrainingSpecification&& value) { m_trainingSpecificationHasBeenSet = true; m_trainingSpecification = std::move(value); }

    /**
     * <p>Specifies details about training jobs run by this algorithm, including the
     * following:</p> <ul> <li> <p>The Amazon ECR path of the container and the version
     * digest of the algorithm.</p> </li> <li> <p>The hyperparameters that the
     * algorithm supports.</p> </li> <li> <p>The instance types that the algorithm
     * supports for training.</p> </li> <li> <p>Whether the algorithm supports
     * distributed training.</p> </li> <li> <p>The metrics that the algorithm emits to
     * Amazon CloudWatch.</p> </li> <li> <p>Which metrics that the algorithm emits can
     * be used as the objective metric for hyperparameter tuning jobs.</p> </li> <li>
     * <p>The input channels that the algorithm supports for training data. For
     * example, an algorithm might support <code>train</code>, <code>validation</code>,
     * and <code>test</code> channels.</p> </li> </ul>
     */
    inline CreateAlgorithmRequest& WithTrainingSpecification(const TrainingSpecification& value) { SetTrainingSpecification(value); return *this;}

    /**
     * <p>Specifies details about training jobs run by this algorithm, including the
     * following:</p> <ul> <li> <p>The Amazon ECR path of the container and the version
     * digest of the algorithm.</p> </li> <li> <p>The hyperparameters that the
     * algorithm supports.</p> </li> <li> <p>The instance types that the algorithm
     * supports for training.</p> </li> <li> <p>Whether the algorithm supports
     * distributed training.</p> </li> <li> <p>The metrics that the algorithm emits to
     * Amazon CloudWatch.</p> </li> <li> <p>Which metrics that the algorithm emits can
     * be used as the objective metric for hyperparameter tuning jobs.</p> </li> <li>
     * <p>The input channels that the algorithm supports for training data. For
     * example, an algorithm might support <code>train</code>, <code>validation</code>,
     * and <code>test</code> channels.</p> </li> </ul>
     */
    inline CreateAlgorithmRequest& WithTrainingSpecification(TrainingSpecification&& value) { SetTrainingSpecification(std::move(value)); return *this;}


    /**
     * <p>Specifies details about inference jobs that the algorithm runs, including the
     * following:</p> <ul> <li> <p>The Amazon ECR paths of containers that contain the
     * inference code and model artifacts.</p> </li> <li> <p>The instance types that
     * the algorithm supports for transform jobs and real-time endpoints used for
     * inference.</p> </li> <li> <p>The input and output content formats that the
     * algorithm supports for inference.</p> </li> </ul>
     */
    inline const InferenceSpecification& GetInferenceSpecification() const{ return m_inferenceSpecification; }

    /**
     * <p>Specifies details about inference jobs that the algorithm runs, including the
     * following:</p> <ul> <li> <p>The Amazon ECR paths of containers that contain the
     * inference code and model artifacts.</p> </li> <li> <p>The instance types that
     * the algorithm supports for transform jobs and real-time endpoints used for
     * inference.</p> </li> <li> <p>The input and output content formats that the
     * algorithm supports for inference.</p> </li> </ul>
     */
    inline bool InferenceSpecificationHasBeenSet() const { return m_inferenceSpecificationHasBeenSet; }

    /**
     * <p>Specifies details about inference jobs that the algorithm runs, including the
     * following:</p> <ul> <li> <p>The Amazon ECR paths of containers that contain the
     * inference code and model artifacts.</p> </li> <li> <p>The instance types that
     * the algorithm supports for transform jobs and real-time endpoints used for
     * inference.</p> </li> <li> <p>The input and output content formats that the
     * algorithm supports for inference.</p> </li> </ul>
     */
    inline void SetInferenceSpecification(const InferenceSpecification& value) { m_inferenceSpecificationHasBeenSet = true; m_inferenceSpecification = value; }

    /**
     * <p>Specifies details about inference jobs that the algorithm runs, including the
     * following:</p> <ul> <li> <p>The Amazon ECR paths of containers that contain the
     * inference code and model artifacts.</p> </li> <li> <p>The instance types that
     * the algorithm supports for transform jobs and real-time endpoints used for
     * inference.</p> </li> <li> <p>The input and output content formats that the
     * algorithm supports for inference.</p> </li> </ul>
     */
    inline void SetInferenceSpecification(InferenceSpecification&& value) { m_inferenceSpecificationHasBeenSet = true; m_inferenceSpecification = std::move(value); }

    /**
     * <p>Specifies details about inference jobs that the algorithm runs, including the
     * following:</p> <ul> <li> <p>The Amazon ECR paths of containers that contain the
     * inference code and model artifacts.</p> </li> <li> <p>The instance types that
     * the algorithm supports for transform jobs and real-time endpoints used for
     * inference.</p> </li> <li> <p>The input and output content formats that the
     * algorithm supports for inference.</p> </li> </ul>
     */
    inline CreateAlgorithmRequest& WithInferenceSpecification(const InferenceSpecification& value) { SetInferenceSpecification(value); return *this;}

    /**
     * <p>Specifies details about inference jobs that the algorithm runs, including the
     * following:</p> <ul> <li> <p>The Amazon ECR paths of containers that contain the
     * inference code and model artifacts.</p> </li> <li> <p>The instance types that
     * the algorithm supports for transform jobs and real-time endpoints used for
     * inference.</p> </li> <li> <p>The input and output content formats that the
     * algorithm supports for inference.</p> </li> </ul>
     */
    inline CreateAlgorithmRequest& WithInferenceSpecification(InferenceSpecification&& value) { SetInferenceSpecification(std::move(value)); return *this;}


    /**
     * <p>Specifies configurations for one or more training jobs and that Amazon
     * SageMaker runs to test the algorithm's training code and, optionally, one or
     * more batch transform jobs that Amazon SageMaker runs to test the algorithm's
     * inference code.</p>
     */
    inline const AlgorithmValidationSpecification& GetValidationSpecification() const{ return m_validationSpecification; }

    /**
     * <p>Specifies configurations for one or more training jobs and that Amazon
     * SageMaker runs to test the algorithm's training code and, optionally, one or
     * more batch transform jobs that Amazon SageMaker runs to test the algorithm's
     * inference code.</p>
     */
    inline bool ValidationSpecificationHasBeenSet() const { return m_validationSpecificationHasBeenSet; }

    /**
     * <p>Specifies configurations for one or more training jobs and that Amazon
     * SageMaker runs to test the algorithm's training code and, optionally, one or
     * more batch transform jobs that Amazon SageMaker runs to test the algorithm's
     * inference code.</p>
     */
    inline void SetValidationSpecification(const AlgorithmValidationSpecification& value) { m_validationSpecificationHasBeenSet = true; m_validationSpecification = value; }

    /**
     * <p>Specifies configurations for one or more training jobs and that Amazon
     * SageMaker runs to test the algorithm's training code and, optionally, one or
     * more batch transform jobs that Amazon SageMaker runs to test the algorithm's
     * inference code.</p>
     */
    inline void SetValidationSpecification(AlgorithmValidationSpecification&& value) { m_validationSpecificationHasBeenSet = true; m_validationSpecification = std::move(value); }

    /**
     * <p>Specifies configurations for one or more training jobs and that Amazon
     * SageMaker runs to test the algorithm's training code and, optionally, one or
     * more batch transform jobs that Amazon SageMaker runs to test the algorithm's
     * inference code.</p>
     */
    inline CreateAlgorithmRequest& WithValidationSpecification(const AlgorithmValidationSpecification& value) { SetValidationSpecification(value); return *this;}

    /**
     * <p>Specifies configurations for one or more training jobs and that Amazon
     * SageMaker runs to test the algorithm's training code and, optionally, one or
     * more batch transform jobs that Amazon SageMaker runs to test the algorithm's
     * inference code.</p>
     */
    inline CreateAlgorithmRequest& WithValidationSpecification(AlgorithmValidationSpecification&& value) { SetValidationSpecification(std::move(value)); return *this;}


    /**
     * <p>Whether to certify the algorithm so that it can be listed in AWS
     * Marketplace.</p>
     */
    inline bool GetCertifyForMarketplace() const{ return m_certifyForMarketplace; }

    /**
     * <p>Whether to certify the algorithm so that it can be listed in AWS
     * Marketplace.</p>
     */
    inline bool CertifyForMarketplaceHasBeenSet() const { return m_certifyForMarketplaceHasBeenSet; }

    /**
     * <p>Whether to certify the algorithm so that it can be listed in AWS
     * Marketplace.</p>
     */
    inline void SetCertifyForMarketplace(bool value) { m_certifyForMarketplaceHasBeenSet = true; m_certifyForMarketplace = value; }

    /**
     * <p>Whether to certify the algorithm so that it can be listed in AWS
     * Marketplace.</p>
     */
    inline CreateAlgorithmRequest& WithCertifyForMarketplace(bool value) { SetCertifyForMarketplace(value); return *this;}

  private:

    Aws::String m_algorithmName;
    bool m_algorithmNameHasBeenSet;

    Aws::String m_algorithmDescription;
    bool m_algorithmDescriptionHasBeenSet;

    TrainingSpecification m_trainingSpecification;
    bool m_trainingSpecificationHasBeenSet;

    InferenceSpecification m_inferenceSpecification;
    bool m_inferenceSpecificationHasBeenSet;

    AlgorithmValidationSpecification m_validationSpecification;
    bool m_validationSpecificationHasBeenSet;

    bool m_certifyForMarketplace;
    bool m_certifyForMarketplaceHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
