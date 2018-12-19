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
#include <aws/sagemaker/model/InferenceSpecification.h>
#include <aws/sagemaker/model/SourceAlgorithmSpecification.h>
#include <aws/sagemaker/model/ModelPackageValidationSpecification.h>
#include <aws/sagemaker/model/ModelPackageStatus.h>
#include <aws/sagemaker/model/ModelPackageStatusDetails.h>
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
  class AWS_SAGEMAKER_API DescribeModelPackageResult
  {
  public:
    DescribeModelPackageResult();
    DescribeModelPackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeModelPackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the model package being described.</p>
     */
    inline const Aws::String& GetModelPackageName() const{ return m_modelPackageName; }

    /**
     * <p>The name of the model package being described.</p>
     */
    inline void SetModelPackageName(const Aws::String& value) { m_modelPackageName = value; }

    /**
     * <p>The name of the model package being described.</p>
     */
    inline void SetModelPackageName(Aws::String&& value) { m_modelPackageName = std::move(value); }

    /**
     * <p>The name of the model package being described.</p>
     */
    inline void SetModelPackageName(const char* value) { m_modelPackageName.assign(value); }

    /**
     * <p>The name of the model package being described.</p>
     */
    inline DescribeModelPackageResult& WithModelPackageName(const Aws::String& value) { SetModelPackageName(value); return *this;}

    /**
     * <p>The name of the model package being described.</p>
     */
    inline DescribeModelPackageResult& WithModelPackageName(Aws::String&& value) { SetModelPackageName(std::move(value)); return *this;}

    /**
     * <p>The name of the model package being described.</p>
     */
    inline DescribeModelPackageResult& WithModelPackageName(const char* value) { SetModelPackageName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline const Aws::String& GetModelPackageArn() const{ return m_modelPackageArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline void SetModelPackageArn(const Aws::String& value) { m_modelPackageArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline void SetModelPackageArn(Aws::String&& value) { m_modelPackageArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline void SetModelPackageArn(const char* value) { m_modelPackageArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline DescribeModelPackageResult& WithModelPackageArn(const Aws::String& value) { SetModelPackageArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline DescribeModelPackageResult& WithModelPackageArn(Aws::String&& value) { SetModelPackageArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline DescribeModelPackageResult& WithModelPackageArn(const char* value) { SetModelPackageArn(value); return *this;}


    /**
     * <p>A brief summary of the model package.</p>
     */
    inline const Aws::String& GetModelPackageDescription() const{ return m_modelPackageDescription; }

    /**
     * <p>A brief summary of the model package.</p>
     */
    inline void SetModelPackageDescription(const Aws::String& value) { m_modelPackageDescription = value; }

    /**
     * <p>A brief summary of the model package.</p>
     */
    inline void SetModelPackageDescription(Aws::String&& value) { m_modelPackageDescription = std::move(value); }

    /**
     * <p>A brief summary of the model package.</p>
     */
    inline void SetModelPackageDescription(const char* value) { m_modelPackageDescription.assign(value); }

    /**
     * <p>A brief summary of the model package.</p>
     */
    inline DescribeModelPackageResult& WithModelPackageDescription(const Aws::String& value) { SetModelPackageDescription(value); return *this;}

    /**
     * <p>A brief summary of the model package.</p>
     */
    inline DescribeModelPackageResult& WithModelPackageDescription(Aws::String&& value) { SetModelPackageDescription(std::move(value)); return *this;}

    /**
     * <p>A brief summary of the model package.</p>
     */
    inline DescribeModelPackageResult& WithModelPackageDescription(const char* value) { SetModelPackageDescription(value); return *this;}


    /**
     * <p>A timestamp specifying when the model package was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp specifying when the model package was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>A timestamp specifying when the model package was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>A timestamp specifying when the model package was created.</p>
     */
    inline DescribeModelPackageResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp specifying when the model package was created.</p>
     */
    inline DescribeModelPackageResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Details about inference jobs that can be run with models based on this model
     * package.</p>
     */
    inline const InferenceSpecification& GetInferenceSpecification() const{ return m_inferenceSpecification; }

    /**
     * <p>Details about inference jobs that can be run with models based on this model
     * package.</p>
     */
    inline void SetInferenceSpecification(const InferenceSpecification& value) { m_inferenceSpecification = value; }

    /**
     * <p>Details about inference jobs that can be run with models based on this model
     * package.</p>
     */
    inline void SetInferenceSpecification(InferenceSpecification&& value) { m_inferenceSpecification = std::move(value); }

    /**
     * <p>Details about inference jobs that can be run with models based on this model
     * package.</p>
     */
    inline DescribeModelPackageResult& WithInferenceSpecification(const InferenceSpecification& value) { SetInferenceSpecification(value); return *this;}

    /**
     * <p>Details about inference jobs that can be run with models based on this model
     * package.</p>
     */
    inline DescribeModelPackageResult& WithInferenceSpecification(InferenceSpecification&& value) { SetInferenceSpecification(std::move(value)); return *this;}


    /**
     * <p>Details about the algorithm that was used to create the model package.</p>
     */
    inline const SourceAlgorithmSpecification& GetSourceAlgorithmSpecification() const{ return m_sourceAlgorithmSpecification; }

    /**
     * <p>Details about the algorithm that was used to create the model package.</p>
     */
    inline void SetSourceAlgorithmSpecification(const SourceAlgorithmSpecification& value) { m_sourceAlgorithmSpecification = value; }

    /**
     * <p>Details about the algorithm that was used to create the model package.</p>
     */
    inline void SetSourceAlgorithmSpecification(SourceAlgorithmSpecification&& value) { m_sourceAlgorithmSpecification = std::move(value); }

    /**
     * <p>Details about the algorithm that was used to create the model package.</p>
     */
    inline DescribeModelPackageResult& WithSourceAlgorithmSpecification(const SourceAlgorithmSpecification& value) { SetSourceAlgorithmSpecification(value); return *this;}

    /**
     * <p>Details about the algorithm that was used to create the model package.</p>
     */
    inline DescribeModelPackageResult& WithSourceAlgorithmSpecification(SourceAlgorithmSpecification&& value) { SetSourceAlgorithmSpecification(std::move(value)); return *this;}


    /**
     * <p>Configurations for one or more transform jobs that Amazon SageMaker runs to
     * test the model package.</p>
     */
    inline const ModelPackageValidationSpecification& GetValidationSpecification() const{ return m_validationSpecification; }

    /**
     * <p>Configurations for one or more transform jobs that Amazon SageMaker runs to
     * test the model package.</p>
     */
    inline void SetValidationSpecification(const ModelPackageValidationSpecification& value) { m_validationSpecification = value; }

    /**
     * <p>Configurations for one or more transform jobs that Amazon SageMaker runs to
     * test the model package.</p>
     */
    inline void SetValidationSpecification(ModelPackageValidationSpecification&& value) { m_validationSpecification = std::move(value); }

    /**
     * <p>Configurations for one or more transform jobs that Amazon SageMaker runs to
     * test the model package.</p>
     */
    inline DescribeModelPackageResult& WithValidationSpecification(const ModelPackageValidationSpecification& value) { SetValidationSpecification(value); return *this;}

    /**
     * <p>Configurations for one or more transform jobs that Amazon SageMaker runs to
     * test the model package.</p>
     */
    inline DescribeModelPackageResult& WithValidationSpecification(ModelPackageValidationSpecification&& value) { SetValidationSpecification(std::move(value)); return *this;}


    /**
     * <p>The current status of the model package.</p>
     */
    inline const ModelPackageStatus& GetModelPackageStatus() const{ return m_modelPackageStatus; }

    /**
     * <p>The current status of the model package.</p>
     */
    inline void SetModelPackageStatus(const ModelPackageStatus& value) { m_modelPackageStatus = value; }

    /**
     * <p>The current status of the model package.</p>
     */
    inline void SetModelPackageStatus(ModelPackageStatus&& value) { m_modelPackageStatus = std::move(value); }

    /**
     * <p>The current status of the model package.</p>
     */
    inline DescribeModelPackageResult& WithModelPackageStatus(const ModelPackageStatus& value) { SetModelPackageStatus(value); return *this;}

    /**
     * <p>The current status of the model package.</p>
     */
    inline DescribeModelPackageResult& WithModelPackageStatus(ModelPackageStatus&& value) { SetModelPackageStatus(std::move(value)); return *this;}


    /**
     * <p>Details about the current status of the model package.</p>
     */
    inline const ModelPackageStatusDetails& GetModelPackageStatusDetails() const{ return m_modelPackageStatusDetails; }

    /**
     * <p>Details about the current status of the model package.</p>
     */
    inline void SetModelPackageStatusDetails(const ModelPackageStatusDetails& value) { m_modelPackageStatusDetails = value; }

    /**
     * <p>Details about the current status of the model package.</p>
     */
    inline void SetModelPackageStatusDetails(ModelPackageStatusDetails&& value) { m_modelPackageStatusDetails = std::move(value); }

    /**
     * <p>Details about the current status of the model package.</p>
     */
    inline DescribeModelPackageResult& WithModelPackageStatusDetails(const ModelPackageStatusDetails& value) { SetModelPackageStatusDetails(value); return *this;}

    /**
     * <p>Details about the current status of the model package.</p>
     */
    inline DescribeModelPackageResult& WithModelPackageStatusDetails(ModelPackageStatusDetails&& value) { SetModelPackageStatusDetails(std::move(value)); return *this;}


    /**
     * <p>Whether the model package is certified for listing on AWS Marketplace.</p>
     */
    inline bool GetCertifyForMarketplace() const{ return m_certifyForMarketplace; }

    /**
     * <p>Whether the model package is certified for listing on AWS Marketplace.</p>
     */
    inline void SetCertifyForMarketplace(bool value) { m_certifyForMarketplace = value; }

    /**
     * <p>Whether the model package is certified for listing on AWS Marketplace.</p>
     */
    inline DescribeModelPackageResult& WithCertifyForMarketplace(bool value) { SetCertifyForMarketplace(value); return *this;}

  private:

    Aws::String m_modelPackageName;

    Aws::String m_modelPackageArn;

    Aws::String m_modelPackageDescription;

    Aws::Utils::DateTime m_creationTime;

    InferenceSpecification m_inferenceSpecification;

    SourceAlgorithmSpecification m_sourceAlgorithmSpecification;

    ModelPackageValidationSpecification m_validationSpecification;

    ModelPackageStatus m_modelPackageStatus;

    ModelPackageStatusDetails m_modelPackageStatusDetails;

    bool m_certifyForMarketplace;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
