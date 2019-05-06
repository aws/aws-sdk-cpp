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
#include <aws/sagemaker/model/InferenceSpecification.h>
#include <aws/sagemaker/model/ModelPackageValidationSpecification.h>
#include <aws/sagemaker/model/SourceAlgorithmSpecification.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API CreateModelPackageRequest : public SageMakerRequest
  {
  public:
    CreateModelPackageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateModelPackage"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the model package. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline const Aws::String& GetModelPackageName() const{ return m_modelPackageName; }

    /**
     * <p>The name of the model package. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline bool ModelPackageNameHasBeenSet() const { return m_modelPackageNameHasBeenSet; }

    /**
     * <p>The name of the model package. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline void SetModelPackageName(const Aws::String& value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName = value; }

    /**
     * <p>The name of the model package. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline void SetModelPackageName(Aws::String&& value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName = std::move(value); }

    /**
     * <p>The name of the model package. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline void SetModelPackageName(const char* value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName.assign(value); }

    /**
     * <p>The name of the model package. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline CreateModelPackageRequest& WithModelPackageName(const Aws::String& value) { SetModelPackageName(value); return *this;}

    /**
     * <p>The name of the model package. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline CreateModelPackageRequest& WithModelPackageName(Aws::String&& value) { SetModelPackageName(std::move(value)); return *this;}

    /**
     * <p>The name of the model package. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p>
     */
    inline CreateModelPackageRequest& WithModelPackageName(const char* value) { SetModelPackageName(value); return *this;}


    /**
     * <p>A description of the model package.</p>
     */
    inline const Aws::String& GetModelPackageDescription() const{ return m_modelPackageDescription; }

    /**
     * <p>A description of the model package.</p>
     */
    inline bool ModelPackageDescriptionHasBeenSet() const { return m_modelPackageDescriptionHasBeenSet; }

    /**
     * <p>A description of the model package.</p>
     */
    inline void SetModelPackageDescription(const Aws::String& value) { m_modelPackageDescriptionHasBeenSet = true; m_modelPackageDescription = value; }

    /**
     * <p>A description of the model package.</p>
     */
    inline void SetModelPackageDescription(Aws::String&& value) { m_modelPackageDescriptionHasBeenSet = true; m_modelPackageDescription = std::move(value); }

    /**
     * <p>A description of the model package.</p>
     */
    inline void SetModelPackageDescription(const char* value) { m_modelPackageDescriptionHasBeenSet = true; m_modelPackageDescription.assign(value); }

    /**
     * <p>A description of the model package.</p>
     */
    inline CreateModelPackageRequest& WithModelPackageDescription(const Aws::String& value) { SetModelPackageDescription(value); return *this;}

    /**
     * <p>A description of the model package.</p>
     */
    inline CreateModelPackageRequest& WithModelPackageDescription(Aws::String&& value) { SetModelPackageDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the model package.</p>
     */
    inline CreateModelPackageRequest& WithModelPackageDescription(const char* value) { SetModelPackageDescription(value); return *this;}


    /**
     * <p>Specifies details about inference jobs that can be run with models based on
     * this model package, including the following:</p> <ul> <li> <p>The Amazon ECR
     * paths of containers that contain the inference code and model artifacts.</p>
     * </li> <li> <p>The instance types that the model package supports for transform
     * jobs and real-time endpoints used for inference.</p> </li> <li> <p>The input and
     * output content formats that the model package supports for inference.</p> </li>
     * </ul>
     */
    inline const InferenceSpecification& GetInferenceSpecification() const{ return m_inferenceSpecification; }

    /**
     * <p>Specifies details about inference jobs that can be run with models based on
     * this model package, including the following:</p> <ul> <li> <p>The Amazon ECR
     * paths of containers that contain the inference code and model artifacts.</p>
     * </li> <li> <p>The instance types that the model package supports for transform
     * jobs and real-time endpoints used for inference.</p> </li> <li> <p>The input and
     * output content formats that the model package supports for inference.</p> </li>
     * </ul>
     */
    inline bool InferenceSpecificationHasBeenSet() const { return m_inferenceSpecificationHasBeenSet; }

    /**
     * <p>Specifies details about inference jobs that can be run with models based on
     * this model package, including the following:</p> <ul> <li> <p>The Amazon ECR
     * paths of containers that contain the inference code and model artifacts.</p>
     * </li> <li> <p>The instance types that the model package supports for transform
     * jobs and real-time endpoints used for inference.</p> </li> <li> <p>The input and
     * output content formats that the model package supports for inference.</p> </li>
     * </ul>
     */
    inline void SetInferenceSpecification(const InferenceSpecification& value) { m_inferenceSpecificationHasBeenSet = true; m_inferenceSpecification = value; }

    /**
     * <p>Specifies details about inference jobs that can be run with models based on
     * this model package, including the following:</p> <ul> <li> <p>The Amazon ECR
     * paths of containers that contain the inference code and model artifacts.</p>
     * </li> <li> <p>The instance types that the model package supports for transform
     * jobs and real-time endpoints used for inference.</p> </li> <li> <p>The input and
     * output content formats that the model package supports for inference.</p> </li>
     * </ul>
     */
    inline void SetInferenceSpecification(InferenceSpecification&& value) { m_inferenceSpecificationHasBeenSet = true; m_inferenceSpecification = std::move(value); }

    /**
     * <p>Specifies details about inference jobs that can be run with models based on
     * this model package, including the following:</p> <ul> <li> <p>The Amazon ECR
     * paths of containers that contain the inference code and model artifacts.</p>
     * </li> <li> <p>The instance types that the model package supports for transform
     * jobs and real-time endpoints used for inference.</p> </li> <li> <p>The input and
     * output content formats that the model package supports for inference.</p> </li>
     * </ul>
     */
    inline CreateModelPackageRequest& WithInferenceSpecification(const InferenceSpecification& value) { SetInferenceSpecification(value); return *this;}

    /**
     * <p>Specifies details about inference jobs that can be run with models based on
     * this model package, including the following:</p> <ul> <li> <p>The Amazon ECR
     * paths of containers that contain the inference code and model artifacts.</p>
     * </li> <li> <p>The instance types that the model package supports for transform
     * jobs and real-time endpoints used for inference.</p> </li> <li> <p>The input and
     * output content formats that the model package supports for inference.</p> </li>
     * </ul>
     */
    inline CreateModelPackageRequest& WithInferenceSpecification(InferenceSpecification&& value) { SetInferenceSpecification(std::move(value)); return *this;}


    /**
     * <p>Specifies configurations for one or more transform jobs that Amazon SageMaker
     * runs to test the model package.</p>
     */
    inline const ModelPackageValidationSpecification& GetValidationSpecification() const{ return m_validationSpecification; }

    /**
     * <p>Specifies configurations for one or more transform jobs that Amazon SageMaker
     * runs to test the model package.</p>
     */
    inline bool ValidationSpecificationHasBeenSet() const { return m_validationSpecificationHasBeenSet; }

    /**
     * <p>Specifies configurations for one or more transform jobs that Amazon SageMaker
     * runs to test the model package.</p>
     */
    inline void SetValidationSpecification(const ModelPackageValidationSpecification& value) { m_validationSpecificationHasBeenSet = true; m_validationSpecification = value; }

    /**
     * <p>Specifies configurations for one or more transform jobs that Amazon SageMaker
     * runs to test the model package.</p>
     */
    inline void SetValidationSpecification(ModelPackageValidationSpecification&& value) { m_validationSpecificationHasBeenSet = true; m_validationSpecification = std::move(value); }

    /**
     * <p>Specifies configurations for one or more transform jobs that Amazon SageMaker
     * runs to test the model package.</p>
     */
    inline CreateModelPackageRequest& WithValidationSpecification(const ModelPackageValidationSpecification& value) { SetValidationSpecification(value); return *this;}

    /**
     * <p>Specifies configurations for one or more transform jobs that Amazon SageMaker
     * runs to test the model package.</p>
     */
    inline CreateModelPackageRequest& WithValidationSpecification(ModelPackageValidationSpecification&& value) { SetValidationSpecification(std::move(value)); return *this;}


    /**
     * <p>Details about the algorithm that was used to create the model package.</p>
     */
    inline const SourceAlgorithmSpecification& GetSourceAlgorithmSpecification() const{ return m_sourceAlgorithmSpecification; }

    /**
     * <p>Details about the algorithm that was used to create the model package.</p>
     */
    inline bool SourceAlgorithmSpecificationHasBeenSet() const { return m_sourceAlgorithmSpecificationHasBeenSet; }

    /**
     * <p>Details about the algorithm that was used to create the model package.</p>
     */
    inline void SetSourceAlgorithmSpecification(const SourceAlgorithmSpecification& value) { m_sourceAlgorithmSpecificationHasBeenSet = true; m_sourceAlgorithmSpecification = value; }

    /**
     * <p>Details about the algorithm that was used to create the model package.</p>
     */
    inline void SetSourceAlgorithmSpecification(SourceAlgorithmSpecification&& value) { m_sourceAlgorithmSpecificationHasBeenSet = true; m_sourceAlgorithmSpecification = std::move(value); }

    /**
     * <p>Details about the algorithm that was used to create the model package.</p>
     */
    inline CreateModelPackageRequest& WithSourceAlgorithmSpecification(const SourceAlgorithmSpecification& value) { SetSourceAlgorithmSpecification(value); return *this;}

    /**
     * <p>Details about the algorithm that was used to create the model package.</p>
     */
    inline CreateModelPackageRequest& WithSourceAlgorithmSpecification(SourceAlgorithmSpecification&& value) { SetSourceAlgorithmSpecification(std::move(value)); return *this;}


    /**
     * <p>Whether to certify the model package for listing on AWS Marketplace.</p>
     */
    inline bool GetCertifyForMarketplace() const{ return m_certifyForMarketplace; }

    /**
     * <p>Whether to certify the model package for listing on AWS Marketplace.</p>
     */
    inline bool CertifyForMarketplaceHasBeenSet() const { return m_certifyForMarketplaceHasBeenSet; }

    /**
     * <p>Whether to certify the model package for listing on AWS Marketplace.</p>
     */
    inline void SetCertifyForMarketplace(bool value) { m_certifyForMarketplaceHasBeenSet = true; m_certifyForMarketplace = value; }

    /**
     * <p>Whether to certify the model package for listing on AWS Marketplace.</p>
     */
    inline CreateModelPackageRequest& WithCertifyForMarketplace(bool value) { SetCertifyForMarketplace(value); return *this;}

  private:

    Aws::String m_modelPackageName;
    bool m_modelPackageNameHasBeenSet;

    Aws::String m_modelPackageDescription;
    bool m_modelPackageDescriptionHasBeenSet;

    InferenceSpecification m_inferenceSpecification;
    bool m_inferenceSpecificationHasBeenSet;

    ModelPackageValidationSpecification m_validationSpecification;
    bool m_validationSpecificationHasBeenSet;

    SourceAlgorithmSpecification m_sourceAlgorithmSpecification;
    bool m_sourceAlgorithmSpecificationHasBeenSet;

    bool m_certifyForMarketplace;
    bool m_certifyForMarketplaceHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
