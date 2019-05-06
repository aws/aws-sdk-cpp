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
#include <aws/sagemaker/model/TrainingJobStatus.h>
#include <aws/sagemaker/model/TrainingJobSortByOptions.h>
#include <aws/sagemaker/model/SortOrder.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API ListTrainingJobsForHyperParameterTuningJobRequest : public SageMakerRequest
  {
  public:
    ListTrainingJobsForHyperParameterTuningJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTrainingJobsForHyperParameterTuningJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the tuning job whose training jobs you want to list.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobName() const{ return m_hyperParameterTuningJobName; }

    /**
     * <p>The name of the tuning job whose training jobs you want to list.</p>
     */
    inline bool HyperParameterTuningJobNameHasBeenSet() const { return m_hyperParameterTuningJobNameHasBeenSet; }

    /**
     * <p>The name of the tuning job whose training jobs you want to list.</p>
     */
    inline void SetHyperParameterTuningJobName(const Aws::String& value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName = value; }

    /**
     * <p>The name of the tuning job whose training jobs you want to list.</p>
     */
    inline void SetHyperParameterTuningJobName(Aws::String&& value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName = std::move(value); }

    /**
     * <p>The name of the tuning job whose training jobs you want to list.</p>
     */
    inline void SetHyperParameterTuningJobName(const char* value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName.assign(value); }

    /**
     * <p>The name of the tuning job whose training jobs you want to list.</p>
     */
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithHyperParameterTuningJobName(const Aws::String& value) { SetHyperParameterTuningJobName(value); return *this;}

    /**
     * <p>The name of the tuning job whose training jobs you want to list.</p>
     */
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithHyperParameterTuningJobName(Aws::String&& value) { SetHyperParameterTuningJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the tuning job whose training jobs you want to list.</p>
     */
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithHyperParameterTuningJobName(const char* value) { SetHyperParameterTuningJobName(value); return *this;}


    /**
     * <p>If the result of the previous
     * <code>ListTrainingJobsForHyperParameterTuningJob</code> request was truncated,
     * the response includes a <code>NextToken</code>. To retrieve the next set of
     * training jobs, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of the previous
     * <code>ListTrainingJobsForHyperParameterTuningJob</code> request was truncated,
     * the response includes a <code>NextToken</code>. To retrieve the next set of
     * training jobs, use the token in the next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the result of the previous
     * <code>ListTrainingJobsForHyperParameterTuningJob</code> request was truncated,
     * the response includes a <code>NextToken</code>. To retrieve the next set of
     * training jobs, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the result of the previous
     * <code>ListTrainingJobsForHyperParameterTuningJob</code> request was truncated,
     * the response includes a <code>NextToken</code>. To retrieve the next set of
     * training jobs, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the result of the previous
     * <code>ListTrainingJobsForHyperParameterTuningJob</code> request was truncated,
     * the response includes a <code>NextToken</code>. To retrieve the next set of
     * training jobs, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the result of the previous
     * <code>ListTrainingJobsForHyperParameterTuningJob</code> request was truncated,
     * the response includes a <code>NextToken</code>. To retrieve the next set of
     * training jobs, use the token in the next request.</p>
     */
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of the previous
     * <code>ListTrainingJobsForHyperParameterTuningJob</code> request was truncated,
     * the response includes a <code>NextToken</code>. To retrieve the next set of
     * training jobs, use the token in the next request.</p>
     */
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of the previous
     * <code>ListTrainingJobsForHyperParameterTuningJob</code> request was truncated,
     * the response includes a <code>NextToken</code>. To retrieve the next set of
     * training jobs, use the token in the next request.</p>
     */
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of training jobs to return. The default value is 10.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of training jobs to return. The default value is 10.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of training jobs to return. The default value is 10.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of training jobs to return. The default value is 10.</p>
     */
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A filter that returns only training jobs with the specified status.</p>
     */
    inline const TrainingJobStatus& GetStatusEquals() const{ return m_statusEquals; }

    /**
     * <p>A filter that returns only training jobs with the specified status.</p>
     */
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }

    /**
     * <p>A filter that returns only training jobs with the specified status.</p>
     */
    inline void SetStatusEquals(const TrainingJobStatus& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }

    /**
     * <p>A filter that returns only training jobs with the specified status.</p>
     */
    inline void SetStatusEquals(TrainingJobStatus&& value) { m_statusEqualsHasBeenSet = true; m_statusEquals = std::move(value); }

    /**
     * <p>A filter that returns only training jobs with the specified status.</p>
     */
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithStatusEquals(const TrainingJobStatus& value) { SetStatusEquals(value); return *this;}

    /**
     * <p>A filter that returns only training jobs with the specified status.</p>
     */
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithStatusEquals(TrainingJobStatus&& value) { SetStatusEquals(std::move(value)); return *this;}


    /**
     * <p>The field to sort results by. The default is <code>Name</code>.</p> <p>If the
     * value of this field is <code>FinalObjectiveMetricValue</code>, any training jobs
     * that did not return an objective metric are not listed.</p>
     */
    inline const TrainingJobSortByOptions& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The field to sort results by. The default is <code>Name</code>.</p> <p>If the
     * value of this field is <code>FinalObjectiveMetricValue</code>, any training jobs
     * that did not return an objective metric are not listed.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The field to sort results by. The default is <code>Name</code>.</p> <p>If the
     * value of this field is <code>FinalObjectiveMetricValue</code>, any training jobs
     * that did not return an objective metric are not listed.</p>
     */
    inline void SetSortBy(const TrainingJobSortByOptions& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The field to sort results by. The default is <code>Name</code>.</p> <p>If the
     * value of this field is <code>FinalObjectiveMetricValue</code>, any training jobs
     * that did not return an objective metric are not listed.</p>
     */
    inline void SetSortBy(TrainingJobSortByOptions&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The field to sort results by. The default is <code>Name</code>.</p> <p>If the
     * value of this field is <code>FinalObjectiveMetricValue</code>, any training jobs
     * that did not return an objective metric are not listed.</p>
     */
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithSortBy(const TrainingJobSortByOptions& value) { SetSortBy(value); return *this;}

    /**
     * <p>The field to sort results by. The default is <code>Name</code>.</p> <p>If the
     * value of this field is <code>FinalObjectiveMetricValue</code>, any training jobs
     * that did not return an objective metric are not listed.</p>
     */
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithSortBy(TrainingJobSortByOptions&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order for results. The default is <code>Ascending</code>.</p>
     */
    inline ListTrainingJobsForHyperParameterTuningJobRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::String m_hyperParameterTuningJobName;
    bool m_hyperParameterTuningJobNameHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    TrainingJobStatus m_statusEquals;
    bool m_statusEqualsHasBeenSet;

    TrainingJobSortByOptions m_sortBy;
    bool m_sortByHasBeenSet;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
