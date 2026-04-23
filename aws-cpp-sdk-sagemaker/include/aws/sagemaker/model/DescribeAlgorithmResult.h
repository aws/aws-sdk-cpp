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
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/TrainingSpecification.h>
#include <aws/sagemaker/model/InferenceSpecification.h>
#include <aws/sagemaker/model/AlgorithmValidationSpecification.h>
#include <aws/sagemaker/model/AlgorithmStatus.h>
#include <aws/sagemaker/model/AlgorithmStatusDetails.h>
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
  class AWS_SAGEMAKER_API DescribeAlgorithmResult
  {
  public:
    DescribeAlgorithmResult();
    DescribeAlgorithmResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAlgorithmResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the algorithm being described.</p>
     */
    inline const Aws::String& GetAlgorithmName() const{ return m_algorithmName; }

    /**
     * <p>The name of the algorithm being described.</p>
     */
    inline void SetAlgorithmName(const Aws::String& value) { m_algorithmName = value; }

    /**
     * <p>The name of the algorithm being described.</p>
     */
    inline void SetAlgorithmName(Aws::String&& value) { m_algorithmName = std::move(value); }

    /**
     * <p>The name of the algorithm being described.</p>
     */
    inline void SetAlgorithmName(const char* value) { m_algorithmName.assign(value); }

    /**
     * <p>The name of the algorithm being described.</p>
     */
    inline DescribeAlgorithmResult& WithAlgorithmName(const Aws::String& value) { SetAlgorithmName(value); return *this;}

    /**
     * <p>The name of the algorithm being described.</p>
     */
    inline DescribeAlgorithmResult& WithAlgorithmName(Aws::String&& value) { SetAlgorithmName(std::move(value)); return *this;}

    /**
     * <p>The name of the algorithm being described.</p>
     */
    inline DescribeAlgorithmResult& WithAlgorithmName(const char* value) { SetAlgorithmName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm.</p>
     */
    inline const Aws::String& GetAlgorithmArn() const{ return m_algorithmArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm.</p>
     */
    inline void SetAlgorithmArn(const Aws::String& value) { m_algorithmArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm.</p>
     */
    inline void SetAlgorithmArn(Aws::String&& value) { m_algorithmArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm.</p>
     */
    inline void SetAlgorithmArn(const char* value) { m_algorithmArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm.</p>
     */
    inline DescribeAlgorithmResult& WithAlgorithmArn(const Aws::String& value) { SetAlgorithmArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm.</p>
     */
    inline DescribeAlgorithmResult& WithAlgorithmArn(Aws::String&& value) { SetAlgorithmArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the algorithm.</p>
     */
    inline DescribeAlgorithmResult& WithAlgorithmArn(const char* value) { SetAlgorithmArn(value); return *this;}


    /**
     * <p>A brief summary about the algorithm.</p>
     */
    inline const Aws::String& GetAlgorithmDescription() const{ return m_algorithmDescription; }

    /**
     * <p>A brief summary about the algorithm.</p>
     */
    inline void SetAlgorithmDescription(const Aws::String& value) { m_algorithmDescription = value; }

    /**
     * <p>A brief summary about the algorithm.</p>
     */
    inline void SetAlgorithmDescription(Aws::String&& value) { m_algorithmDescription = std::move(value); }

    /**
     * <p>A brief summary about the algorithm.</p>
     */
    inline void SetAlgorithmDescription(const char* value) { m_algorithmDescription.assign(value); }

    /**
     * <p>A brief summary about the algorithm.</p>
     */
    inline DescribeAlgorithmResult& WithAlgorithmDescription(const Aws::String& value) { SetAlgorithmDescription(value); return *this;}

    /**
     * <p>A brief summary about the algorithm.</p>
     */
    inline DescribeAlgorithmResult& WithAlgorithmDescription(Aws::String&& value) { SetAlgorithmDescription(std::move(value)); return *this;}

    /**
     * <p>A brief summary about the algorithm.</p>
     */
    inline DescribeAlgorithmResult& WithAlgorithmDescription(const char* value) { SetAlgorithmDescription(value); return *this;}


    /**
     * <p>A timestamp specifying when the algorithm was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp specifying when the algorithm was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>A timestamp specifying when the algorithm was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>A timestamp specifying when the algorithm was created.</p>
     */
    inline DescribeAlgorithmResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp specifying when the algorithm was created.</p>
     */
    inline DescribeAlgorithmResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Details about training jobs run by this algorithm.</p>
     */
    inline const TrainingSpecification& GetTrainingSpecification() const{ return m_trainingSpecification; }

    /**
     * <p>Details about training jobs run by this algorithm.</p>
     */
    inline void SetTrainingSpecification(const TrainingSpecification& value) { m_trainingSpecification = value; }

    /**
     * <p>Details about training jobs run by this algorithm.</p>
     */
    inline void SetTrainingSpecification(TrainingSpecification&& value) { m_trainingSpecification = std::move(value); }

    /**
     * <p>Details about training jobs run by this algorithm.</p>
     */
    inline DescribeAlgorithmResult& WithTrainingSpecification(const TrainingSpecification& value) { SetTrainingSpecification(value); return *this;}

    /**
     * <p>Details about training jobs run by this algorithm.</p>
     */
    inline DescribeAlgorithmResult& WithTrainingSpecification(TrainingSpecification&& value) { SetTrainingSpecification(std::move(value)); return *this;}


    /**
     * <p>Details about inference jobs that the algorithm runs.</p>
     */
    inline const InferenceSpecification& GetInferenceSpecification() const{ return m_inferenceSpecification; }

    /**
     * <p>Details about inference jobs that the algorithm runs.</p>
     */
    inline void SetInferenceSpecification(const InferenceSpecification& value) { m_inferenceSpecification = value; }

    /**
     * <p>Details about inference jobs that the algorithm runs.</p>
     */
    inline void SetInferenceSpecification(InferenceSpecification&& value) { m_inferenceSpecification = std::move(value); }

    /**
     * <p>Details about inference jobs that the algorithm runs.</p>
     */
    inline DescribeAlgorithmResult& WithInferenceSpecification(const InferenceSpecification& value) { SetInferenceSpecification(value); return *this;}

    /**
     * <p>Details about inference jobs that the algorithm runs.</p>
     */
    inline DescribeAlgorithmResult& WithInferenceSpecification(InferenceSpecification&& value) { SetInferenceSpecification(std::move(value)); return *this;}


    /**
     * <p>Details about configurations for one or more training jobs that Amazon
     * SageMaker runs to test the algorithm.</p>
     */
    inline const AlgorithmValidationSpecification& GetValidationSpecification() const{ return m_validationSpecification; }

    /**
     * <p>Details about configurations for one or more training jobs that Amazon
     * SageMaker runs to test the algorithm.</p>
     */
    inline void SetValidationSpecification(const AlgorithmValidationSpecification& value) { m_validationSpecification = value; }

    /**
     * <p>Details about configurations for one or more training jobs that Amazon
     * SageMaker runs to test the algorithm.</p>
     */
    inline void SetValidationSpecification(AlgorithmValidationSpecification&& value) { m_validationSpecification = std::move(value); }

    /**
     * <p>Details about configurations for one or more training jobs that Amazon
     * SageMaker runs to test the algorithm.</p>
     */
    inline DescribeAlgorithmResult& WithValidationSpecification(const AlgorithmValidationSpecification& value) { SetValidationSpecification(value); return *this;}

    /**
     * <p>Details about configurations for one or more training jobs that Amazon
     * SageMaker runs to test the algorithm.</p>
     */
    inline DescribeAlgorithmResult& WithValidationSpecification(AlgorithmValidationSpecification&& value) { SetValidationSpecification(std::move(value)); return *this;}


    /**
     * <p>The current status of the algorithm.</p>
     */
    inline const AlgorithmStatus& GetAlgorithmStatus() const{ return m_algorithmStatus; }

    /**
     * <p>The current status of the algorithm.</p>
     */
    inline void SetAlgorithmStatus(const AlgorithmStatus& value) { m_algorithmStatus = value; }

    /**
     * <p>The current status of the algorithm.</p>
     */
    inline void SetAlgorithmStatus(AlgorithmStatus&& value) { m_algorithmStatus = std::move(value); }

    /**
     * <p>The current status of the algorithm.</p>
     */
    inline DescribeAlgorithmResult& WithAlgorithmStatus(const AlgorithmStatus& value) { SetAlgorithmStatus(value); return *this;}

    /**
     * <p>The current status of the algorithm.</p>
     */
    inline DescribeAlgorithmResult& WithAlgorithmStatus(AlgorithmStatus&& value) { SetAlgorithmStatus(std::move(value)); return *this;}


    /**
     * <p>Details about the current status of the algorithm.</p>
     */
    inline const AlgorithmStatusDetails& GetAlgorithmStatusDetails() const{ return m_algorithmStatusDetails; }

    /**
     * <p>Details about the current status of the algorithm.</p>
     */
    inline void SetAlgorithmStatusDetails(const AlgorithmStatusDetails& value) { m_algorithmStatusDetails = value; }

    /**
     * <p>Details about the current status of the algorithm.</p>
     */
    inline void SetAlgorithmStatusDetails(AlgorithmStatusDetails&& value) { m_algorithmStatusDetails = std::move(value); }

    /**
     * <p>Details about the current status of the algorithm.</p>
     */
    inline DescribeAlgorithmResult& WithAlgorithmStatusDetails(const AlgorithmStatusDetails& value) { SetAlgorithmStatusDetails(value); return *this;}

    /**
     * <p>Details about the current status of the algorithm.</p>
     */
    inline DescribeAlgorithmResult& WithAlgorithmStatusDetails(AlgorithmStatusDetails&& value) { SetAlgorithmStatusDetails(std::move(value)); return *this;}


    /**
     * <p>The product identifier of the algorithm.</p>
     */
    inline const Aws::String& GetProductId() const{ return m_productId; }

    /**
     * <p>The product identifier of the algorithm.</p>
     */
    inline void SetProductId(const Aws::String& value) { m_productId = value; }

    /**
     * <p>The product identifier of the algorithm.</p>
     */
    inline void SetProductId(Aws::String&& value) { m_productId = std::move(value); }

    /**
     * <p>The product identifier of the algorithm.</p>
     */
    inline void SetProductId(const char* value) { m_productId.assign(value); }

    /**
     * <p>The product identifier of the algorithm.</p>
     */
    inline DescribeAlgorithmResult& WithProductId(const Aws::String& value) { SetProductId(value); return *this;}

    /**
     * <p>The product identifier of the algorithm.</p>
     */
    inline DescribeAlgorithmResult& WithProductId(Aws::String&& value) { SetProductId(std::move(value)); return *this;}

    /**
     * <p>The product identifier of the algorithm.</p>
     */
    inline DescribeAlgorithmResult& WithProductId(const char* value) { SetProductId(value); return *this;}


    /**
     * <p>Whether the algorithm is certified to be listed in AWS Marketplace.</p>
     */
    inline bool GetCertifyForMarketplace() const{ return m_certifyForMarketplace; }

    /**
     * <p>Whether the algorithm is certified to be listed in AWS Marketplace.</p>
     */
    inline void SetCertifyForMarketplace(bool value) { m_certifyForMarketplace = value; }

    /**
     * <p>Whether the algorithm is certified to be listed in AWS Marketplace.</p>
     */
    inline DescribeAlgorithmResult& WithCertifyForMarketplace(bool value) { SetCertifyForMarketplace(value); return *this;}

  private:

    Aws::String m_algorithmName;

    Aws::String m_algorithmArn;

    Aws::String m_algorithmDescription;

    Aws::Utils::DateTime m_creationTime;

    TrainingSpecification m_trainingSpecification;

    InferenceSpecification m_inferenceSpecification;

    AlgorithmValidationSpecification m_validationSpecification;

    AlgorithmStatus m_algorithmStatus;

    AlgorithmStatusDetails m_algorithmStatusDetails;

    Aws::String m_productId;

    bool m_certifyForMarketplace;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
