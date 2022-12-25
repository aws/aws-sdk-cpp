/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/sagemaker/model/ModelApprovalStatus.h>
#include <aws/sagemaker/model/UserContext.h>
#include <aws/sagemaker/model/MetadataProperties.h>
#include <aws/sagemaker/model/ModelMetrics.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/DriftCheckBaselines.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/AdditionalInferenceSpecificationDefinition.h>
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
  class DescribeModelPackageResult
  {
  public:
    AWS_SAGEMAKER_API DescribeModelPackageResult();
    AWS_SAGEMAKER_API DescribeModelPackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeModelPackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
     * <p>If the model is a versioned model, the name of the model group that the
     * versioned model belongs to.</p>
     */
    inline const Aws::String& GetModelPackageGroupName() const{ return m_modelPackageGroupName; }

    /**
     * <p>If the model is a versioned model, the name of the model group that the
     * versioned model belongs to.</p>
     */
    inline void SetModelPackageGroupName(const Aws::String& value) { m_modelPackageGroupName = value; }

    /**
     * <p>If the model is a versioned model, the name of the model group that the
     * versioned model belongs to.</p>
     */
    inline void SetModelPackageGroupName(Aws::String&& value) { m_modelPackageGroupName = std::move(value); }

    /**
     * <p>If the model is a versioned model, the name of the model group that the
     * versioned model belongs to.</p>
     */
    inline void SetModelPackageGroupName(const char* value) { m_modelPackageGroupName.assign(value); }

    /**
     * <p>If the model is a versioned model, the name of the model group that the
     * versioned model belongs to.</p>
     */
    inline DescribeModelPackageResult& WithModelPackageGroupName(const Aws::String& value) { SetModelPackageGroupName(value); return *this;}

    /**
     * <p>If the model is a versioned model, the name of the model group that the
     * versioned model belongs to.</p>
     */
    inline DescribeModelPackageResult& WithModelPackageGroupName(Aws::String&& value) { SetModelPackageGroupName(std::move(value)); return *this;}

    /**
     * <p>If the model is a versioned model, the name of the model group that the
     * versioned model belongs to.</p>
     */
    inline DescribeModelPackageResult& WithModelPackageGroupName(const char* value) { SetModelPackageGroupName(value); return *this;}


    /**
     * <p>The version of the model package.</p>
     */
    inline int GetModelPackageVersion() const{ return m_modelPackageVersion; }

    /**
     * <p>The version of the model package.</p>
     */
    inline void SetModelPackageVersion(int value) { m_modelPackageVersion = value; }

    /**
     * <p>The version of the model package.</p>
     */
    inline DescribeModelPackageResult& WithModelPackageVersion(int value) { SetModelPackageVersion(value); return *this;}


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
     * <p>Configurations for one or more transform jobs that SageMaker runs to test the
     * model package.</p>
     */
    inline const ModelPackageValidationSpecification& GetValidationSpecification() const{ return m_validationSpecification; }

    /**
     * <p>Configurations for one or more transform jobs that SageMaker runs to test the
     * model package.</p>
     */
    inline void SetValidationSpecification(const ModelPackageValidationSpecification& value) { m_validationSpecification = value; }

    /**
     * <p>Configurations for one or more transform jobs that SageMaker runs to test the
     * model package.</p>
     */
    inline void SetValidationSpecification(ModelPackageValidationSpecification&& value) { m_validationSpecification = std::move(value); }

    /**
     * <p>Configurations for one or more transform jobs that SageMaker runs to test the
     * model package.</p>
     */
    inline DescribeModelPackageResult& WithValidationSpecification(const ModelPackageValidationSpecification& value) { SetValidationSpecification(value); return *this;}

    /**
     * <p>Configurations for one or more transform jobs that SageMaker runs to test the
     * model package.</p>
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
     * <p>Whether the model package is certified for listing on Amazon Web Services
     * Marketplace.</p>
     */
    inline bool GetCertifyForMarketplace() const{ return m_certifyForMarketplace; }

    /**
     * <p>Whether the model package is certified for listing on Amazon Web Services
     * Marketplace.</p>
     */
    inline void SetCertifyForMarketplace(bool value) { m_certifyForMarketplace = value; }

    /**
     * <p>Whether the model package is certified for listing on Amazon Web Services
     * Marketplace.</p>
     */
    inline DescribeModelPackageResult& WithCertifyForMarketplace(bool value) { SetCertifyForMarketplace(value); return *this;}


    /**
     * <p>The approval status of the model package.</p>
     */
    inline const ModelApprovalStatus& GetModelApprovalStatus() const{ return m_modelApprovalStatus; }

    /**
     * <p>The approval status of the model package.</p>
     */
    inline void SetModelApprovalStatus(const ModelApprovalStatus& value) { m_modelApprovalStatus = value; }

    /**
     * <p>The approval status of the model package.</p>
     */
    inline void SetModelApprovalStatus(ModelApprovalStatus&& value) { m_modelApprovalStatus = std::move(value); }

    /**
     * <p>The approval status of the model package.</p>
     */
    inline DescribeModelPackageResult& WithModelApprovalStatus(const ModelApprovalStatus& value) { SetModelApprovalStatus(value); return *this;}

    /**
     * <p>The approval status of the model package.</p>
     */
    inline DescribeModelPackageResult& WithModelApprovalStatus(ModelApprovalStatus&& value) { SetModelApprovalStatus(std::move(value)); return *this;}


    
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }

    
    inline void SetCreatedBy(const UserContext& value) { m_createdBy = value; }

    
    inline void SetCreatedBy(UserContext&& value) { m_createdBy = std::move(value); }

    
    inline DescribeModelPackageResult& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}

    
    inline DescribeModelPackageResult& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}


    
    inline const MetadataProperties& GetMetadataProperties() const{ return m_metadataProperties; }

    
    inline void SetMetadataProperties(const MetadataProperties& value) { m_metadataProperties = value; }

    
    inline void SetMetadataProperties(MetadataProperties&& value) { m_metadataProperties = std::move(value); }

    
    inline DescribeModelPackageResult& WithMetadataProperties(const MetadataProperties& value) { SetMetadataProperties(value); return *this;}

    
    inline DescribeModelPackageResult& WithMetadataProperties(MetadataProperties&& value) { SetMetadataProperties(std::move(value)); return *this;}


    /**
     * <p>Metrics for the model.</p>
     */
    inline const ModelMetrics& GetModelMetrics() const{ return m_modelMetrics; }

    /**
     * <p>Metrics for the model.</p>
     */
    inline void SetModelMetrics(const ModelMetrics& value) { m_modelMetrics = value; }

    /**
     * <p>Metrics for the model.</p>
     */
    inline void SetModelMetrics(ModelMetrics&& value) { m_modelMetrics = std::move(value); }

    /**
     * <p>Metrics for the model.</p>
     */
    inline DescribeModelPackageResult& WithModelMetrics(const ModelMetrics& value) { SetModelMetrics(value); return *this;}

    /**
     * <p>Metrics for the model.</p>
     */
    inline DescribeModelPackageResult& WithModelMetrics(ModelMetrics&& value) { SetModelMetrics(std::move(value)); return *this;}


    /**
     * <p>The last time that the model package was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The last time that the model package was modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The last time that the model package was modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The last time that the model package was modified.</p>
     */
    inline DescribeModelPackageResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The last time that the model package was modified.</p>
     */
    inline DescribeModelPackageResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedBy = value; }

    
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedBy = std::move(value); }

    
    inline DescribeModelPackageResult& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}

    
    inline DescribeModelPackageResult& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}


    /**
     * <p>A description provided for the model approval.</p>
     */
    inline const Aws::String& GetApprovalDescription() const{ return m_approvalDescription; }

    /**
     * <p>A description provided for the model approval.</p>
     */
    inline void SetApprovalDescription(const Aws::String& value) { m_approvalDescription = value; }

    /**
     * <p>A description provided for the model approval.</p>
     */
    inline void SetApprovalDescription(Aws::String&& value) { m_approvalDescription = std::move(value); }

    /**
     * <p>A description provided for the model approval.</p>
     */
    inline void SetApprovalDescription(const char* value) { m_approvalDescription.assign(value); }

    /**
     * <p>A description provided for the model approval.</p>
     */
    inline DescribeModelPackageResult& WithApprovalDescription(const Aws::String& value) { SetApprovalDescription(value); return *this;}

    /**
     * <p>A description provided for the model approval.</p>
     */
    inline DescribeModelPackageResult& WithApprovalDescription(Aws::String&& value) { SetApprovalDescription(std::move(value)); return *this;}

    /**
     * <p>A description provided for the model approval.</p>
     */
    inline DescribeModelPackageResult& WithApprovalDescription(const char* value) { SetApprovalDescription(value); return *this;}


    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomerMetadataProperties() const{ return m_customerMetadataProperties; }

    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline void SetCustomerMetadataProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_customerMetadataProperties = value; }

    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline void SetCustomerMetadataProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_customerMetadataProperties = std::move(value); }

    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline DescribeModelPackageResult& WithCustomerMetadataProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomerMetadataProperties(value); return *this;}

    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline DescribeModelPackageResult& WithCustomerMetadataProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomerMetadataProperties(std::move(value)); return *this;}

    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline DescribeModelPackageResult& AddCustomerMetadataProperties(const Aws::String& key, const Aws::String& value) { m_customerMetadataProperties.emplace(key, value); return *this; }

    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline DescribeModelPackageResult& AddCustomerMetadataProperties(Aws::String&& key, const Aws::String& value) { m_customerMetadataProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline DescribeModelPackageResult& AddCustomerMetadataProperties(const Aws::String& key, Aws::String&& value) { m_customerMetadataProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline DescribeModelPackageResult& AddCustomerMetadataProperties(Aws::String&& key, Aws::String&& value) { m_customerMetadataProperties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline DescribeModelPackageResult& AddCustomerMetadataProperties(const char* key, Aws::String&& value) { m_customerMetadataProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline DescribeModelPackageResult& AddCustomerMetadataProperties(Aws::String&& key, const char* value) { m_customerMetadataProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline DescribeModelPackageResult& AddCustomerMetadataProperties(const char* key, const char* value) { m_customerMetadataProperties.emplace(key, value); return *this; }


    /**
     * <p>Represents the drift check baselines that can be used when the model monitor
     * is set using the model package. For more information, see the topic on <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/pipelines-quality-clarify-baseline-lifecycle.html#pipelines-quality-clarify-baseline-drift-detection">Drift
     * Detection against Previous Baselines in SageMaker Pipelines</a> in the <i>Amazon
     * SageMaker Developer Guide</i>. </p>
     */
    inline const DriftCheckBaselines& GetDriftCheckBaselines() const{ return m_driftCheckBaselines; }

    /**
     * <p>Represents the drift check baselines that can be used when the model monitor
     * is set using the model package. For more information, see the topic on <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/pipelines-quality-clarify-baseline-lifecycle.html#pipelines-quality-clarify-baseline-drift-detection">Drift
     * Detection against Previous Baselines in SageMaker Pipelines</a> in the <i>Amazon
     * SageMaker Developer Guide</i>. </p>
     */
    inline void SetDriftCheckBaselines(const DriftCheckBaselines& value) { m_driftCheckBaselines = value; }

    /**
     * <p>Represents the drift check baselines that can be used when the model monitor
     * is set using the model package. For more information, see the topic on <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/pipelines-quality-clarify-baseline-lifecycle.html#pipelines-quality-clarify-baseline-drift-detection">Drift
     * Detection against Previous Baselines in SageMaker Pipelines</a> in the <i>Amazon
     * SageMaker Developer Guide</i>. </p>
     */
    inline void SetDriftCheckBaselines(DriftCheckBaselines&& value) { m_driftCheckBaselines = std::move(value); }

    /**
     * <p>Represents the drift check baselines that can be used when the model monitor
     * is set using the model package. For more information, see the topic on <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/pipelines-quality-clarify-baseline-lifecycle.html#pipelines-quality-clarify-baseline-drift-detection">Drift
     * Detection against Previous Baselines in SageMaker Pipelines</a> in the <i>Amazon
     * SageMaker Developer Guide</i>. </p>
     */
    inline DescribeModelPackageResult& WithDriftCheckBaselines(const DriftCheckBaselines& value) { SetDriftCheckBaselines(value); return *this;}

    /**
     * <p>Represents the drift check baselines that can be used when the model monitor
     * is set using the model package. For more information, see the topic on <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/pipelines-quality-clarify-baseline-lifecycle.html#pipelines-quality-clarify-baseline-drift-detection">Drift
     * Detection against Previous Baselines in SageMaker Pipelines</a> in the <i>Amazon
     * SageMaker Developer Guide</i>. </p>
     */
    inline DescribeModelPackageResult& WithDriftCheckBaselines(DriftCheckBaselines&& value) { SetDriftCheckBaselines(std::move(value)); return *this;}


    /**
     * <p>The machine learning domain of the model package you specified. Common
     * machine learning domains include computer vision and natural language
     * processing.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The machine learning domain of the model package you specified. Common
     * machine learning domains include computer vision and natural language
     * processing.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domain = value; }

    /**
     * <p>The machine learning domain of the model package you specified. Common
     * machine learning domains include computer vision and natural language
     * processing.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domain = std::move(value); }

    /**
     * <p>The machine learning domain of the model package you specified. Common
     * machine learning domains include computer vision and natural language
     * processing.</p>
     */
    inline void SetDomain(const char* value) { m_domain.assign(value); }

    /**
     * <p>The machine learning domain of the model package you specified. Common
     * machine learning domains include computer vision and natural language
     * processing.</p>
     */
    inline DescribeModelPackageResult& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The machine learning domain of the model package you specified. Common
     * machine learning domains include computer vision and natural language
     * processing.</p>
     */
    inline DescribeModelPackageResult& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The machine learning domain of the model package you specified. Common
     * machine learning domains include computer vision and natural language
     * processing.</p>
     */
    inline DescribeModelPackageResult& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The machine learning task you specified that your model package accomplishes.
     * Common machine learning tasks include object detection and image
     * classification.</p>
     */
    inline const Aws::String& GetTask() const{ return m_task; }

    /**
     * <p>The machine learning task you specified that your model package accomplishes.
     * Common machine learning tasks include object detection and image
     * classification.</p>
     */
    inline void SetTask(const Aws::String& value) { m_task = value; }

    /**
     * <p>The machine learning task you specified that your model package accomplishes.
     * Common machine learning tasks include object detection and image
     * classification.</p>
     */
    inline void SetTask(Aws::String&& value) { m_task = std::move(value); }

    /**
     * <p>The machine learning task you specified that your model package accomplishes.
     * Common machine learning tasks include object detection and image
     * classification.</p>
     */
    inline void SetTask(const char* value) { m_task.assign(value); }

    /**
     * <p>The machine learning task you specified that your model package accomplishes.
     * Common machine learning tasks include object detection and image
     * classification.</p>
     */
    inline DescribeModelPackageResult& WithTask(const Aws::String& value) { SetTask(value); return *this;}

    /**
     * <p>The machine learning task you specified that your model package accomplishes.
     * Common machine learning tasks include object detection and image
     * classification.</p>
     */
    inline DescribeModelPackageResult& WithTask(Aws::String&& value) { SetTask(std::move(value)); return *this;}

    /**
     * <p>The machine learning task you specified that your model package accomplishes.
     * Common machine learning tasks include object detection and image
     * classification.</p>
     */
    inline DescribeModelPackageResult& WithTask(const char* value) { SetTask(value); return *this;}


    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where the sample payload
     * are stored. This path points to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline const Aws::String& GetSamplePayloadUrl() const{ return m_samplePayloadUrl; }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where the sample payload
     * are stored. This path points to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline void SetSamplePayloadUrl(const Aws::String& value) { m_samplePayloadUrl = value; }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where the sample payload
     * are stored. This path points to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline void SetSamplePayloadUrl(Aws::String&& value) { m_samplePayloadUrl = std::move(value); }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where the sample payload
     * are stored. This path points to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline void SetSamplePayloadUrl(const char* value) { m_samplePayloadUrl.assign(value); }

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where the sample payload
     * are stored. This path points to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline DescribeModelPackageResult& WithSamplePayloadUrl(const Aws::String& value) { SetSamplePayloadUrl(value); return *this;}

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where the sample payload
     * are stored. This path points to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline DescribeModelPackageResult& WithSamplePayloadUrl(Aws::String&& value) { SetSamplePayloadUrl(std::move(value)); return *this;}

    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where the sample payload
     * are stored. This path points to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline DescribeModelPackageResult& WithSamplePayloadUrl(const char* value) { SetSamplePayloadUrl(value); return *this;}


    /**
     * <p>An array of additional Inference Specification objects. Each additional
     * Inference Specification specifies artifacts based on this model package that can
     * be used on inference endpoints. Generally used with SageMaker Neo to store the
     * compiled artifacts.</p>
     */
    inline const Aws::Vector<AdditionalInferenceSpecificationDefinition>& GetAdditionalInferenceSpecifications() const{ return m_additionalInferenceSpecifications; }

    /**
     * <p>An array of additional Inference Specification objects. Each additional
     * Inference Specification specifies artifacts based on this model package that can
     * be used on inference endpoints. Generally used with SageMaker Neo to store the
     * compiled artifacts.</p>
     */
    inline void SetAdditionalInferenceSpecifications(const Aws::Vector<AdditionalInferenceSpecificationDefinition>& value) { m_additionalInferenceSpecifications = value; }

    /**
     * <p>An array of additional Inference Specification objects. Each additional
     * Inference Specification specifies artifacts based on this model package that can
     * be used on inference endpoints. Generally used with SageMaker Neo to store the
     * compiled artifacts.</p>
     */
    inline void SetAdditionalInferenceSpecifications(Aws::Vector<AdditionalInferenceSpecificationDefinition>&& value) { m_additionalInferenceSpecifications = std::move(value); }

    /**
     * <p>An array of additional Inference Specification objects. Each additional
     * Inference Specification specifies artifacts based on this model package that can
     * be used on inference endpoints. Generally used with SageMaker Neo to store the
     * compiled artifacts.</p>
     */
    inline DescribeModelPackageResult& WithAdditionalInferenceSpecifications(const Aws::Vector<AdditionalInferenceSpecificationDefinition>& value) { SetAdditionalInferenceSpecifications(value); return *this;}

    /**
     * <p>An array of additional Inference Specification objects. Each additional
     * Inference Specification specifies artifacts based on this model package that can
     * be used on inference endpoints. Generally used with SageMaker Neo to store the
     * compiled artifacts.</p>
     */
    inline DescribeModelPackageResult& WithAdditionalInferenceSpecifications(Aws::Vector<AdditionalInferenceSpecificationDefinition>&& value) { SetAdditionalInferenceSpecifications(std::move(value)); return *this;}

    /**
     * <p>An array of additional Inference Specification objects. Each additional
     * Inference Specification specifies artifacts based on this model package that can
     * be used on inference endpoints. Generally used with SageMaker Neo to store the
     * compiled artifacts.</p>
     */
    inline DescribeModelPackageResult& AddAdditionalInferenceSpecifications(const AdditionalInferenceSpecificationDefinition& value) { m_additionalInferenceSpecifications.push_back(value); return *this; }

    /**
     * <p>An array of additional Inference Specification objects. Each additional
     * Inference Specification specifies artifacts based on this model package that can
     * be used on inference endpoints. Generally used with SageMaker Neo to store the
     * compiled artifacts.</p>
     */
    inline DescribeModelPackageResult& AddAdditionalInferenceSpecifications(AdditionalInferenceSpecificationDefinition&& value) { m_additionalInferenceSpecifications.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_modelPackageName;

    Aws::String m_modelPackageGroupName;

    int m_modelPackageVersion;

    Aws::String m_modelPackageArn;

    Aws::String m_modelPackageDescription;

    Aws::Utils::DateTime m_creationTime;

    InferenceSpecification m_inferenceSpecification;

    SourceAlgorithmSpecification m_sourceAlgorithmSpecification;

    ModelPackageValidationSpecification m_validationSpecification;

    ModelPackageStatus m_modelPackageStatus;

    ModelPackageStatusDetails m_modelPackageStatusDetails;

    bool m_certifyForMarketplace;

    ModelApprovalStatus m_modelApprovalStatus;

    UserContext m_createdBy;

    MetadataProperties m_metadataProperties;

    ModelMetrics m_modelMetrics;

    Aws::Utils::DateTime m_lastModifiedTime;

    UserContext m_lastModifiedBy;

    Aws::String m_approvalDescription;

    Aws::Map<Aws::String, Aws::String> m_customerMetadataProperties;

    DriftCheckBaselines m_driftCheckBaselines;

    Aws::String m_domain;

    Aws::String m_task;

    Aws::String m_samplePayloadUrl;

    Aws::Vector<AdditionalInferenceSpecificationDefinition> m_additionalInferenceSpecifications;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
