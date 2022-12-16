/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/InferenceExperimentType.h>
#include <aws/sagemaker/model/InferenceExperimentSchedule.h>
#include <aws/sagemaker/model/InferenceExperimentStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/EndpointMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/InferenceExperimentDataStorageConfig.h>
#include <aws/sagemaker/model/ShadowModeConfig.h>
#include <aws/sagemaker/model/ModelVariantConfigSummary.h>
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
  class DescribeInferenceExperimentResult
  {
  public:
    AWS_SAGEMAKER_API DescribeInferenceExperimentResult();
    AWS_SAGEMAKER_API DescribeInferenceExperimentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeInferenceExperimentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the inference experiment being described.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the inference experiment being described.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the inference experiment being described.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the inference experiment being described.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the inference experiment being described.</p>
     */
    inline DescribeInferenceExperimentResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the inference experiment being described.</p>
     */
    inline DescribeInferenceExperimentResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the inference experiment being described.</p>
     */
    inline DescribeInferenceExperimentResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the inference experiment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the inference experiment.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the inference experiment.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the inference experiment.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the inference experiment.</p>
     */
    inline DescribeInferenceExperimentResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the inference experiment.</p>
     */
    inline DescribeInferenceExperimentResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the inference experiment.</p>
     */
    inline DescribeInferenceExperimentResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of the inference experiment.</p>
     */
    inline const InferenceExperimentType& GetType() const{ return m_type; }

    /**
     * <p>The type of the inference experiment.</p>
     */
    inline void SetType(const InferenceExperimentType& value) { m_type = value; }

    /**
     * <p>The type of the inference experiment.</p>
     */
    inline void SetType(InferenceExperimentType&& value) { m_type = std::move(value); }

    /**
     * <p>The type of the inference experiment.</p>
     */
    inline DescribeInferenceExperimentResult& WithType(const InferenceExperimentType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the inference experiment.</p>
     */
    inline DescribeInferenceExperimentResult& WithType(InferenceExperimentType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The duration for which the inference experiment ran or will run.</p>
     */
    inline const InferenceExperimentSchedule& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The duration for which the inference experiment ran or will run.</p>
     */
    inline void SetSchedule(const InferenceExperimentSchedule& value) { m_schedule = value; }

    /**
     * <p>The duration for which the inference experiment ran or will run.</p>
     */
    inline void SetSchedule(InferenceExperimentSchedule&& value) { m_schedule = std::move(value); }

    /**
     * <p>The duration for which the inference experiment ran or will run.</p>
     */
    inline DescribeInferenceExperimentResult& WithSchedule(const InferenceExperimentSchedule& value) { SetSchedule(value); return *this;}

    /**
     * <p>The duration for which the inference experiment ran or will run.</p>
     */
    inline DescribeInferenceExperimentResult& WithSchedule(InferenceExperimentSchedule&& value) { SetSchedule(std::move(value)); return *this;}


    /**
     * <p> The status of the inference experiment. The following are the possible
     * statuses for an inference experiment: </p> <ul> <li> <p> <code>Creating</code> -
     * Amazon SageMaker is creating your experiment. </p> </li> <li> <p>
     * <code>Created</code> - Amazon SageMaker has finished the creation of your
     * experiment and will begin the experiment at the scheduled time. </p> </li> <li>
     * <p> <code>Updating</code> - When you make changes to your experiment, your
     * experiment shows as updating. </p> </li> <li> <p> <code>Starting</code> - Amazon
     * SageMaker is beginning your experiment. </p> </li> <li> <p> <code>Running</code>
     * - Your experiment is in progress. </p> </li> <li> <p> <code>Stopping</code> -
     * Amazon SageMaker is stopping your experiment. </p> </li> <li> <p>
     * <code>Completed</code> - Your experiment has completed. </p> </li> <li> <p>
     * <code>Cancelled</code> - When you conclude your experiment early using the
     * <a>StopInferenceExperiment</a> API, or if any operation fails with an unexpected
     * error, it shows as cancelled. </p> </li> </ul>
     */
    inline const InferenceExperimentStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status of the inference experiment. The following are the possible
     * statuses for an inference experiment: </p> <ul> <li> <p> <code>Creating</code> -
     * Amazon SageMaker is creating your experiment. </p> </li> <li> <p>
     * <code>Created</code> - Amazon SageMaker has finished the creation of your
     * experiment and will begin the experiment at the scheduled time. </p> </li> <li>
     * <p> <code>Updating</code> - When you make changes to your experiment, your
     * experiment shows as updating. </p> </li> <li> <p> <code>Starting</code> - Amazon
     * SageMaker is beginning your experiment. </p> </li> <li> <p> <code>Running</code>
     * - Your experiment is in progress. </p> </li> <li> <p> <code>Stopping</code> -
     * Amazon SageMaker is stopping your experiment. </p> </li> <li> <p>
     * <code>Completed</code> - Your experiment has completed. </p> </li> <li> <p>
     * <code>Cancelled</code> - When you conclude your experiment early using the
     * <a>StopInferenceExperiment</a> API, or if any operation fails with an unexpected
     * error, it shows as cancelled. </p> </li> </ul>
     */
    inline void SetStatus(const InferenceExperimentStatus& value) { m_status = value; }

    /**
     * <p> The status of the inference experiment. The following are the possible
     * statuses for an inference experiment: </p> <ul> <li> <p> <code>Creating</code> -
     * Amazon SageMaker is creating your experiment. </p> </li> <li> <p>
     * <code>Created</code> - Amazon SageMaker has finished the creation of your
     * experiment and will begin the experiment at the scheduled time. </p> </li> <li>
     * <p> <code>Updating</code> - When you make changes to your experiment, your
     * experiment shows as updating. </p> </li> <li> <p> <code>Starting</code> - Amazon
     * SageMaker is beginning your experiment. </p> </li> <li> <p> <code>Running</code>
     * - Your experiment is in progress. </p> </li> <li> <p> <code>Stopping</code> -
     * Amazon SageMaker is stopping your experiment. </p> </li> <li> <p>
     * <code>Completed</code> - Your experiment has completed. </p> </li> <li> <p>
     * <code>Cancelled</code> - When you conclude your experiment early using the
     * <a>StopInferenceExperiment</a> API, or if any operation fails with an unexpected
     * error, it shows as cancelled. </p> </li> </ul>
     */
    inline void SetStatus(InferenceExperimentStatus&& value) { m_status = std::move(value); }

    /**
     * <p> The status of the inference experiment. The following are the possible
     * statuses for an inference experiment: </p> <ul> <li> <p> <code>Creating</code> -
     * Amazon SageMaker is creating your experiment. </p> </li> <li> <p>
     * <code>Created</code> - Amazon SageMaker has finished the creation of your
     * experiment and will begin the experiment at the scheduled time. </p> </li> <li>
     * <p> <code>Updating</code> - When you make changes to your experiment, your
     * experiment shows as updating. </p> </li> <li> <p> <code>Starting</code> - Amazon
     * SageMaker is beginning your experiment. </p> </li> <li> <p> <code>Running</code>
     * - Your experiment is in progress. </p> </li> <li> <p> <code>Stopping</code> -
     * Amazon SageMaker is stopping your experiment. </p> </li> <li> <p>
     * <code>Completed</code> - Your experiment has completed. </p> </li> <li> <p>
     * <code>Cancelled</code> - When you conclude your experiment early using the
     * <a>StopInferenceExperiment</a> API, or if any operation fails with an unexpected
     * error, it shows as cancelled. </p> </li> </ul>
     */
    inline DescribeInferenceExperimentResult& WithStatus(const InferenceExperimentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of the inference experiment. The following are the possible
     * statuses for an inference experiment: </p> <ul> <li> <p> <code>Creating</code> -
     * Amazon SageMaker is creating your experiment. </p> </li> <li> <p>
     * <code>Created</code> - Amazon SageMaker has finished the creation of your
     * experiment and will begin the experiment at the scheduled time. </p> </li> <li>
     * <p> <code>Updating</code> - When you make changes to your experiment, your
     * experiment shows as updating. </p> </li> <li> <p> <code>Starting</code> - Amazon
     * SageMaker is beginning your experiment. </p> </li> <li> <p> <code>Running</code>
     * - Your experiment is in progress. </p> </li> <li> <p> <code>Stopping</code> -
     * Amazon SageMaker is stopping your experiment. </p> </li> <li> <p>
     * <code>Completed</code> - Your experiment has completed. </p> </li> <li> <p>
     * <code>Cancelled</code> - When you conclude your experiment early using the
     * <a>StopInferenceExperiment</a> API, or if any operation fails with an unexpected
     * error, it shows as cancelled. </p> </li> </ul>
     */
    inline DescribeInferenceExperimentResult& WithStatus(InferenceExperimentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The error message or client-specified <code>Reason</code> from the
     * <a>StopInferenceExperiment</a> API, that explains the status of the inference
     * experiment. </p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p> The error message or client-specified <code>Reason</code> from the
     * <a>StopInferenceExperiment</a> API, that explains the status of the inference
     * experiment. </p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }

    /**
     * <p> The error message or client-specified <code>Reason</code> from the
     * <a>StopInferenceExperiment</a> API, that explains the status of the inference
     * experiment. </p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }

    /**
     * <p> The error message or client-specified <code>Reason</code> from the
     * <a>StopInferenceExperiment</a> API, that explains the status of the inference
     * experiment. </p>
     */
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }

    /**
     * <p> The error message or client-specified <code>Reason</code> from the
     * <a>StopInferenceExperiment</a> API, that explains the status of the inference
     * experiment. </p>
     */
    inline DescribeInferenceExperimentResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p> The error message or client-specified <code>Reason</code> from the
     * <a>StopInferenceExperiment</a> API, that explains the status of the inference
     * experiment. </p>
     */
    inline DescribeInferenceExperimentResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p> The error message or client-specified <code>Reason</code> from the
     * <a>StopInferenceExperiment</a> API, that explains the status of the inference
     * experiment. </p>
     */
    inline DescribeInferenceExperimentResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The description of the inference experiment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the inference experiment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the inference experiment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the inference experiment.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the inference experiment.</p>
     */
    inline DescribeInferenceExperimentResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the inference experiment.</p>
     */
    inline DescribeInferenceExperimentResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the inference experiment.</p>
     */
    inline DescribeInferenceExperimentResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The timestamp at which you created the inference experiment.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp at which you created the inference experiment.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The timestamp at which you created the inference experiment.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The timestamp at which you created the inference experiment.</p>
     */
    inline DescribeInferenceExperimentResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp at which you created the inference experiment.</p>
     */
    inline DescribeInferenceExperimentResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p> The timestamp at which the inference experiment was completed. </p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p> The timestamp at which the inference experiment was completed. </p>
     */
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTime = value; }

    /**
     * <p> The timestamp at which the inference experiment was completed. </p>
     */
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTime = std::move(value); }

    /**
     * <p> The timestamp at which the inference experiment was completed. </p>
     */
    inline DescribeInferenceExperimentResult& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p> The timestamp at which the inference experiment was completed. </p>
     */
    inline DescribeInferenceExperimentResult& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp at which you last modified the inference experiment.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The timestamp at which you last modified the inference experiment.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The timestamp at which you last modified the inference experiment.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The timestamp at which you last modified the inference experiment.</p>
     */
    inline DescribeInferenceExperimentResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The timestamp at which you last modified the inference experiment.</p>
     */
    inline DescribeInferenceExperimentResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline DescribeInferenceExperimentResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline DescribeInferenceExperimentResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline DescribeInferenceExperimentResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The metadata of the endpoint on which the inference experiment ran.</p>
     */
    inline const EndpointMetadata& GetEndpointMetadata() const{ return m_endpointMetadata; }

    /**
     * <p>The metadata of the endpoint on which the inference experiment ran.</p>
     */
    inline void SetEndpointMetadata(const EndpointMetadata& value) { m_endpointMetadata = value; }

    /**
     * <p>The metadata of the endpoint on which the inference experiment ran.</p>
     */
    inline void SetEndpointMetadata(EndpointMetadata&& value) { m_endpointMetadata = std::move(value); }

    /**
     * <p>The metadata of the endpoint on which the inference experiment ran.</p>
     */
    inline DescribeInferenceExperimentResult& WithEndpointMetadata(const EndpointMetadata& value) { SetEndpointMetadata(value); return *this;}

    /**
     * <p>The metadata of the endpoint on which the inference experiment ran.</p>
     */
    inline DescribeInferenceExperimentResult& WithEndpointMetadata(EndpointMetadata&& value) { SetEndpointMetadata(std::move(value)); return *this;}


    /**
     * <p> An array of <code>ModelVariantConfigSummary</code> objects. There is one for
     * each variant in the inference experiment. Each
     * <code>ModelVariantConfigSummary</code> object in the array describes the
     * infrastructure configuration for deploying the corresponding variant. </p>
     */
    inline const Aws::Vector<ModelVariantConfigSummary>& GetModelVariants() const{ return m_modelVariants; }

    /**
     * <p> An array of <code>ModelVariantConfigSummary</code> objects. There is one for
     * each variant in the inference experiment. Each
     * <code>ModelVariantConfigSummary</code> object in the array describes the
     * infrastructure configuration for deploying the corresponding variant. </p>
     */
    inline void SetModelVariants(const Aws::Vector<ModelVariantConfigSummary>& value) { m_modelVariants = value; }

    /**
     * <p> An array of <code>ModelVariantConfigSummary</code> objects. There is one for
     * each variant in the inference experiment. Each
     * <code>ModelVariantConfigSummary</code> object in the array describes the
     * infrastructure configuration for deploying the corresponding variant. </p>
     */
    inline void SetModelVariants(Aws::Vector<ModelVariantConfigSummary>&& value) { m_modelVariants = std::move(value); }

    /**
     * <p> An array of <code>ModelVariantConfigSummary</code> objects. There is one for
     * each variant in the inference experiment. Each
     * <code>ModelVariantConfigSummary</code> object in the array describes the
     * infrastructure configuration for deploying the corresponding variant. </p>
     */
    inline DescribeInferenceExperimentResult& WithModelVariants(const Aws::Vector<ModelVariantConfigSummary>& value) { SetModelVariants(value); return *this;}

    /**
     * <p> An array of <code>ModelVariantConfigSummary</code> objects. There is one for
     * each variant in the inference experiment. Each
     * <code>ModelVariantConfigSummary</code> object in the array describes the
     * infrastructure configuration for deploying the corresponding variant. </p>
     */
    inline DescribeInferenceExperimentResult& WithModelVariants(Aws::Vector<ModelVariantConfigSummary>&& value) { SetModelVariants(std::move(value)); return *this;}

    /**
     * <p> An array of <code>ModelVariantConfigSummary</code> objects. There is one for
     * each variant in the inference experiment. Each
     * <code>ModelVariantConfigSummary</code> object in the array describes the
     * infrastructure configuration for deploying the corresponding variant. </p>
     */
    inline DescribeInferenceExperimentResult& AddModelVariants(const ModelVariantConfigSummary& value) { m_modelVariants.push_back(value); return *this; }

    /**
     * <p> An array of <code>ModelVariantConfigSummary</code> objects. There is one for
     * each variant in the inference experiment. Each
     * <code>ModelVariantConfigSummary</code> object in the array describes the
     * infrastructure configuration for deploying the corresponding variant. </p>
     */
    inline DescribeInferenceExperimentResult& AddModelVariants(ModelVariantConfigSummary&& value) { m_modelVariants.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon S3 location and configuration for storing inference request and
     * response data.</p>
     */
    inline const InferenceExperimentDataStorageConfig& GetDataStorageConfig() const{ return m_dataStorageConfig; }

    /**
     * <p>The Amazon S3 location and configuration for storing inference request and
     * response data.</p>
     */
    inline void SetDataStorageConfig(const InferenceExperimentDataStorageConfig& value) { m_dataStorageConfig = value; }

    /**
     * <p>The Amazon S3 location and configuration for storing inference request and
     * response data.</p>
     */
    inline void SetDataStorageConfig(InferenceExperimentDataStorageConfig&& value) { m_dataStorageConfig = std::move(value); }

    /**
     * <p>The Amazon S3 location and configuration for storing inference request and
     * response data.</p>
     */
    inline DescribeInferenceExperimentResult& WithDataStorageConfig(const InferenceExperimentDataStorageConfig& value) { SetDataStorageConfig(value); return *this;}

    /**
     * <p>The Amazon S3 location and configuration for storing inference request and
     * response data.</p>
     */
    inline DescribeInferenceExperimentResult& WithDataStorageConfig(InferenceExperimentDataStorageConfig&& value) { SetDataStorageConfig(std::move(value)); return *this;}


    /**
     * <p> The configuration of <code>ShadowMode</code> inference experiment type,
     * which shows the production variant that takes all the inference requests, and
     * the shadow variant to which Amazon SageMaker replicates a percentage of the
     * inference requests. For the shadow variant it also shows the percentage of
     * requests that Amazon SageMaker replicates. </p>
     */
    inline const ShadowModeConfig& GetShadowModeConfig() const{ return m_shadowModeConfig; }

    /**
     * <p> The configuration of <code>ShadowMode</code> inference experiment type,
     * which shows the production variant that takes all the inference requests, and
     * the shadow variant to which Amazon SageMaker replicates a percentage of the
     * inference requests. For the shadow variant it also shows the percentage of
     * requests that Amazon SageMaker replicates. </p>
     */
    inline void SetShadowModeConfig(const ShadowModeConfig& value) { m_shadowModeConfig = value; }

    /**
     * <p> The configuration of <code>ShadowMode</code> inference experiment type,
     * which shows the production variant that takes all the inference requests, and
     * the shadow variant to which Amazon SageMaker replicates a percentage of the
     * inference requests. For the shadow variant it also shows the percentage of
     * requests that Amazon SageMaker replicates. </p>
     */
    inline void SetShadowModeConfig(ShadowModeConfig&& value) { m_shadowModeConfig = std::move(value); }

    /**
     * <p> The configuration of <code>ShadowMode</code> inference experiment type,
     * which shows the production variant that takes all the inference requests, and
     * the shadow variant to which Amazon SageMaker replicates a percentage of the
     * inference requests. For the shadow variant it also shows the percentage of
     * requests that Amazon SageMaker replicates. </p>
     */
    inline DescribeInferenceExperimentResult& WithShadowModeConfig(const ShadowModeConfig& value) { SetShadowModeConfig(value); return *this;}

    /**
     * <p> The configuration of <code>ShadowMode</code> inference experiment type,
     * which shows the production variant that takes all the inference requests, and
     * the shadow variant to which Amazon SageMaker replicates a percentage of the
     * inference requests. For the shadow variant it also shows the percentage of
     * requests that Amazon SageMaker replicates. </p>
     */
    inline DescribeInferenceExperimentResult& WithShadowModeConfig(ShadowModeConfig&& value) { SetShadowModeConfig(std::move(value)); return *this;}


    /**
     * <p> The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance that hosts the endpoint. For more information, see
     * <a>CreateInferenceExperimentRequest$KmsKey</a>. </p>
     */
    inline const Aws::String& GetKmsKey() const{ return m_kmsKey; }

    /**
     * <p> The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance that hosts the endpoint. For more information, see
     * <a>CreateInferenceExperimentRequest$KmsKey</a>. </p>
     */
    inline void SetKmsKey(const Aws::String& value) { m_kmsKey = value; }

    /**
     * <p> The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance that hosts the endpoint. For more information, see
     * <a>CreateInferenceExperimentRequest$KmsKey</a>. </p>
     */
    inline void SetKmsKey(Aws::String&& value) { m_kmsKey = std::move(value); }

    /**
     * <p> The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance that hosts the endpoint. For more information, see
     * <a>CreateInferenceExperimentRequest$KmsKey</a>. </p>
     */
    inline void SetKmsKey(const char* value) { m_kmsKey.assign(value); }

    /**
     * <p> The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance that hosts the endpoint. For more information, see
     * <a>CreateInferenceExperimentRequest$KmsKey</a>. </p>
     */
    inline DescribeInferenceExperimentResult& WithKmsKey(const Aws::String& value) { SetKmsKey(value); return *this;}

    /**
     * <p> The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance that hosts the endpoint. For more information, see
     * <a>CreateInferenceExperimentRequest$KmsKey</a>. </p>
     */
    inline DescribeInferenceExperimentResult& WithKmsKey(Aws::String&& value) { SetKmsKey(std::move(value)); return *this;}

    /**
     * <p> The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance that hosts the endpoint. For more information, see
     * <a>CreateInferenceExperimentRequest$KmsKey</a>. </p>
     */
    inline DescribeInferenceExperimentResult& WithKmsKey(const char* value) { SetKmsKey(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_name;

    InferenceExperimentType m_type;

    InferenceExperimentSchedule m_schedule;

    InferenceExperimentStatus m_status;

    Aws::String m_statusReason;

    Aws::String m_description;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_completionTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_roleArn;

    EndpointMetadata m_endpointMetadata;

    Aws::Vector<ModelVariantConfigSummary> m_modelVariants;

    InferenceExperimentDataStorageConfig m_dataStorageConfig;

    ShadowModeConfig m_shadowModeConfig;

    Aws::String m_kmsKey;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
