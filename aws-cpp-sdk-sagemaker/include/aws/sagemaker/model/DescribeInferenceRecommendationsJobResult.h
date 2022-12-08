/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/RecommendationJobType.h>
#include <aws/sagemaker/model/RecommendationJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/RecommendationJobInputConfig.h>
#include <aws/sagemaker/model/RecommendationJobStoppingConditions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/InferenceRecommendation.h>
#include <aws/sagemaker/model/EndpointPerformance.h>
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
  class DescribeInferenceRecommendationsJobResult
  {
  public:
    AWS_SAGEMAKER_API DescribeInferenceRecommendationsJobResult();
    AWS_SAGEMAKER_API DescribeInferenceRecommendationsJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeInferenceRecommendationsJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the job. The name must be unique within an Amazon Web Services
     * Region in the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the job. The name must be unique within an Amazon Web Services
     * Region in the Amazon Web Services account.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobName = value; }

    /**
     * <p>The name of the job. The name must be unique within an Amazon Web Services
     * Region in the Amazon Web Services account.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobName = std::move(value); }

    /**
     * <p>The name of the job. The name must be unique within an Amazon Web Services
     * Region in the Amazon Web Services account.</p>
     */
    inline void SetJobName(const char* value) { m_jobName.assign(value); }

    /**
     * <p>The name of the job. The name must be unique within an Amazon Web Services
     * Region in the Amazon Web Services account.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the job. The name must be unique within an Amazon Web Services
     * Region in the Amazon Web Services account.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the job. The name must be unique within an Amazon Web Services
     * Region in the Amazon Web Services account.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The job description that you provided when you initiated the job.</p>
     */
    inline const Aws::String& GetJobDescription() const{ return m_jobDescription; }

    /**
     * <p>The job description that you provided when you initiated the job.</p>
     */
    inline void SetJobDescription(const Aws::String& value) { m_jobDescription = value; }

    /**
     * <p>The job description that you provided when you initiated the job.</p>
     */
    inline void SetJobDescription(Aws::String&& value) { m_jobDescription = std::move(value); }

    /**
     * <p>The job description that you provided when you initiated the job.</p>
     */
    inline void SetJobDescription(const char* value) { m_jobDescription.assign(value); }

    /**
     * <p>The job description that you provided when you initiated the job.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithJobDescription(const Aws::String& value) { SetJobDescription(value); return *this;}

    /**
     * <p>The job description that you provided when you initiated the job.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithJobDescription(Aws::String&& value) { SetJobDescription(std::move(value)); return *this;}

    /**
     * <p>The job description that you provided when you initiated the job.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithJobDescription(const char* value) { SetJobDescription(value); return *this;}


    /**
     * <p>The job type that you provided when you initiated the job.</p>
     */
    inline const RecommendationJobType& GetJobType() const{ return m_jobType; }

    /**
     * <p>The job type that you provided when you initiated the job.</p>
     */
    inline void SetJobType(const RecommendationJobType& value) { m_jobType = value; }

    /**
     * <p>The job type that you provided when you initiated the job.</p>
     */
    inline void SetJobType(RecommendationJobType&& value) { m_jobType = std::move(value); }

    /**
     * <p>The job type that you provided when you initiated the job.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithJobType(const RecommendationJobType& value) { SetJobType(value); return *this;}

    /**
     * <p>The job type that you provided when you initiated the job.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithJobType(RecommendationJobType&& value) { SetJobType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline void SetJobArn(const Aws::String& value) { m_jobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline void SetJobArn(Aws::String&& value) { m_jobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline void SetJobArn(const char* value) { m_jobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithJobArn(const char* value) { SetJobArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) role you provided when you initiated the job.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) role you provided when you initiated the job.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) role you provided when you initiated the job.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) role you provided when you initiated the job.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) role you provided when you initiated the job.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) role you provided when you initiated the job.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) role you provided when you initiated the job.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The status of the job.</p>
     */
    inline const RecommendationJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the job.</p>
     */
    inline void SetStatus(const RecommendationJobStatus& value) { m_status = value; }

    /**
     * <p>The status of the job.</p>
     */
    inline void SetStatus(RecommendationJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the job.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithStatus(const RecommendationJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the job.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithStatus(RecommendationJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that shows when the job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>A timestamp that shows when the job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the job was created.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the job was created.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p>A timestamp that shows when the job completed.</p>
     */
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTime = value; }

    /**
     * <p>A timestamp that shows when the job completed.</p>
     */
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the job completed.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the job completed.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>A timestamp that shows when the job was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>A timestamp that shows when the job was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the job was last modified.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the job was last modified.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>If the job fails, provides information why the job failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the job fails, provides information why the job failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>If the job fails, provides information why the job failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>If the job fails, provides information why the job failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>If the job fails, provides information why the job failed.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the job fails, provides information why the job failed.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the job fails, provides information why the job failed.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>Returns information about the versioned model package Amazon Resource Name
     * (ARN), the traffic pattern, and endpoint configurations you provided when you
     * initiated the job.</p>
     */
    inline const RecommendationJobInputConfig& GetInputConfig() const{ return m_inputConfig; }

    /**
     * <p>Returns information about the versioned model package Amazon Resource Name
     * (ARN), the traffic pattern, and endpoint configurations you provided when you
     * initiated the job.</p>
     */
    inline void SetInputConfig(const RecommendationJobInputConfig& value) { m_inputConfig = value; }

    /**
     * <p>Returns information about the versioned model package Amazon Resource Name
     * (ARN), the traffic pattern, and endpoint configurations you provided when you
     * initiated the job.</p>
     */
    inline void SetInputConfig(RecommendationJobInputConfig&& value) { m_inputConfig = std::move(value); }

    /**
     * <p>Returns information about the versioned model package Amazon Resource Name
     * (ARN), the traffic pattern, and endpoint configurations you provided when you
     * initiated the job.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithInputConfig(const RecommendationJobInputConfig& value) { SetInputConfig(value); return *this;}

    /**
     * <p>Returns information about the versioned model package Amazon Resource Name
     * (ARN), the traffic pattern, and endpoint configurations you provided when you
     * initiated the job.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithInputConfig(RecommendationJobInputConfig&& value) { SetInputConfig(std::move(value)); return *this;}


    /**
     * <p>The stopping conditions that you provided when you initiated the job.</p>
     */
    inline const RecommendationJobStoppingConditions& GetStoppingConditions() const{ return m_stoppingConditions; }

    /**
     * <p>The stopping conditions that you provided when you initiated the job.</p>
     */
    inline void SetStoppingConditions(const RecommendationJobStoppingConditions& value) { m_stoppingConditions = value; }

    /**
     * <p>The stopping conditions that you provided when you initiated the job.</p>
     */
    inline void SetStoppingConditions(RecommendationJobStoppingConditions&& value) { m_stoppingConditions = std::move(value); }

    /**
     * <p>The stopping conditions that you provided when you initiated the job.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithStoppingConditions(const RecommendationJobStoppingConditions& value) { SetStoppingConditions(value); return *this;}

    /**
     * <p>The stopping conditions that you provided when you initiated the job.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithStoppingConditions(RecommendationJobStoppingConditions&& value) { SetStoppingConditions(std::move(value)); return *this;}


    /**
     * <p>The recommendations made by Inference Recommender.</p>
     */
    inline const Aws::Vector<InferenceRecommendation>& GetInferenceRecommendations() const{ return m_inferenceRecommendations; }

    /**
     * <p>The recommendations made by Inference Recommender.</p>
     */
    inline void SetInferenceRecommendations(const Aws::Vector<InferenceRecommendation>& value) { m_inferenceRecommendations = value; }

    /**
     * <p>The recommendations made by Inference Recommender.</p>
     */
    inline void SetInferenceRecommendations(Aws::Vector<InferenceRecommendation>&& value) { m_inferenceRecommendations = std::move(value); }

    /**
     * <p>The recommendations made by Inference Recommender.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithInferenceRecommendations(const Aws::Vector<InferenceRecommendation>& value) { SetInferenceRecommendations(value); return *this;}

    /**
     * <p>The recommendations made by Inference Recommender.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithInferenceRecommendations(Aws::Vector<InferenceRecommendation>&& value) { SetInferenceRecommendations(std::move(value)); return *this;}

    /**
     * <p>The recommendations made by Inference Recommender.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& AddInferenceRecommendations(const InferenceRecommendation& value) { m_inferenceRecommendations.push_back(value); return *this; }

    /**
     * <p>The recommendations made by Inference Recommender.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& AddInferenceRecommendations(InferenceRecommendation&& value) { m_inferenceRecommendations.push_back(std::move(value)); return *this; }


    /**
     * <p>The performance results from running an Inference Recommender job on an
     * existing endpoint.</p>
     */
    inline const Aws::Vector<EndpointPerformance>& GetEndpointPerformances() const{ return m_endpointPerformances; }

    /**
     * <p>The performance results from running an Inference Recommender job on an
     * existing endpoint.</p>
     */
    inline void SetEndpointPerformances(const Aws::Vector<EndpointPerformance>& value) { m_endpointPerformances = value; }

    /**
     * <p>The performance results from running an Inference Recommender job on an
     * existing endpoint.</p>
     */
    inline void SetEndpointPerformances(Aws::Vector<EndpointPerformance>&& value) { m_endpointPerformances = std::move(value); }

    /**
     * <p>The performance results from running an Inference Recommender job on an
     * existing endpoint.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithEndpointPerformances(const Aws::Vector<EndpointPerformance>& value) { SetEndpointPerformances(value); return *this;}

    /**
     * <p>The performance results from running an Inference Recommender job on an
     * existing endpoint.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& WithEndpointPerformances(Aws::Vector<EndpointPerformance>&& value) { SetEndpointPerformances(std::move(value)); return *this;}

    /**
     * <p>The performance results from running an Inference Recommender job on an
     * existing endpoint.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& AddEndpointPerformances(const EndpointPerformance& value) { m_endpointPerformances.push_back(value); return *this; }

    /**
     * <p>The performance results from running an Inference Recommender job on an
     * existing endpoint.</p>
     */
    inline DescribeInferenceRecommendationsJobResult& AddEndpointPerformances(EndpointPerformance&& value) { m_endpointPerformances.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_jobName;

    Aws::String m_jobDescription;

    RecommendationJobType m_jobType;

    Aws::String m_jobArn;

    Aws::String m_roleArn;

    RecommendationJobStatus m_status;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_completionTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_failureReason;

    RecommendationJobInputConfig m_inputConfig;

    RecommendationJobStoppingConditions m_stoppingConditions;

    Aws::Vector<InferenceRecommendation> m_inferenceRecommendations;

    Aws::Vector<EndpointPerformance> m_endpointPerformances;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
