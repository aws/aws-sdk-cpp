/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/emr-serverless/EMRServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/emr-serverless/model/JobRunState.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace EMRServerless
{
namespace Model
{

  /**
   */
  class ListJobRunsRequest : public EMRServerlessRequest
  {
  public:
    AWS_EMRSERVERLESS_API ListJobRunsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListJobRuns"; }

    AWS_EMRSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_EMRSERVERLESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the application for which to list the job run.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The ID of the application for which to list the job run.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The ID of the application for which to list the job run.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The ID of the application for which to list the job run.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The ID of the application for which to list the job run.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The ID of the application for which to list the job run.</p>
     */
    inline ListJobRunsRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The ID of the application for which to list the job run.</p>
     */
    inline ListJobRunsRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application for which to list the job run.</p>
     */
    inline ListJobRunsRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The token for the next set of job run results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of job run results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of job run results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of job run results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of job run results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of job run results.</p>
     */
    inline ListJobRunsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of job run results.</p>
     */
    inline ListJobRunsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of job run results.</p>
     */
    inline ListJobRunsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of job runs that can be listed.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of job runs that can be listed.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of job runs that can be listed.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of job runs that can be listed.</p>
     */
    inline ListJobRunsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The lower bound of the option to filter by creation date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAtAfter() const{ return m_createdAtAfter; }

    /**
     * <p>The lower bound of the option to filter by creation date and time.</p>
     */
    inline bool CreatedAtAfterHasBeenSet() const { return m_createdAtAfterHasBeenSet; }

    /**
     * <p>The lower bound of the option to filter by creation date and time.</p>
     */
    inline void SetCreatedAtAfter(const Aws::Utils::DateTime& value) { m_createdAtAfterHasBeenSet = true; m_createdAtAfter = value; }

    /**
     * <p>The lower bound of the option to filter by creation date and time.</p>
     */
    inline void SetCreatedAtAfter(Aws::Utils::DateTime&& value) { m_createdAtAfterHasBeenSet = true; m_createdAtAfter = std::move(value); }

    /**
     * <p>The lower bound of the option to filter by creation date and time.</p>
     */
    inline ListJobRunsRequest& WithCreatedAtAfter(const Aws::Utils::DateTime& value) { SetCreatedAtAfter(value); return *this;}

    /**
     * <p>The lower bound of the option to filter by creation date and time.</p>
     */
    inline ListJobRunsRequest& WithCreatedAtAfter(Aws::Utils::DateTime&& value) { SetCreatedAtAfter(std::move(value)); return *this;}


    /**
     * <p>The upper bound of the option to filter by creation date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAtBefore() const{ return m_createdAtBefore; }

    /**
     * <p>The upper bound of the option to filter by creation date and time.</p>
     */
    inline bool CreatedAtBeforeHasBeenSet() const { return m_createdAtBeforeHasBeenSet; }

    /**
     * <p>The upper bound of the option to filter by creation date and time.</p>
     */
    inline void SetCreatedAtBefore(const Aws::Utils::DateTime& value) { m_createdAtBeforeHasBeenSet = true; m_createdAtBefore = value; }

    /**
     * <p>The upper bound of the option to filter by creation date and time.</p>
     */
    inline void SetCreatedAtBefore(Aws::Utils::DateTime&& value) { m_createdAtBeforeHasBeenSet = true; m_createdAtBefore = std::move(value); }

    /**
     * <p>The upper bound of the option to filter by creation date and time.</p>
     */
    inline ListJobRunsRequest& WithCreatedAtBefore(const Aws::Utils::DateTime& value) { SetCreatedAtBefore(value); return *this;}

    /**
     * <p>The upper bound of the option to filter by creation date and time.</p>
     */
    inline ListJobRunsRequest& WithCreatedAtBefore(Aws::Utils::DateTime&& value) { SetCreatedAtBefore(std::move(value)); return *this;}


    /**
     * <p>An optional filter for job run states. Note that if this filter contains
     * multiple states, the resulting list will be grouped by the state.</p>
     */
    inline const Aws::Vector<JobRunState>& GetStates() const{ return m_states; }

    /**
     * <p>An optional filter for job run states. Note that if this filter contains
     * multiple states, the resulting list will be grouped by the state.</p>
     */
    inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }

    /**
     * <p>An optional filter for job run states. Note that if this filter contains
     * multiple states, the resulting list will be grouped by the state.</p>
     */
    inline void SetStates(const Aws::Vector<JobRunState>& value) { m_statesHasBeenSet = true; m_states = value; }

    /**
     * <p>An optional filter for job run states. Note that if this filter contains
     * multiple states, the resulting list will be grouped by the state.</p>
     */
    inline void SetStates(Aws::Vector<JobRunState>&& value) { m_statesHasBeenSet = true; m_states = std::move(value); }

    /**
     * <p>An optional filter for job run states. Note that if this filter contains
     * multiple states, the resulting list will be grouped by the state.</p>
     */
    inline ListJobRunsRequest& WithStates(const Aws::Vector<JobRunState>& value) { SetStates(value); return *this;}

    /**
     * <p>An optional filter for job run states. Note that if this filter contains
     * multiple states, the resulting list will be grouped by the state.</p>
     */
    inline ListJobRunsRequest& WithStates(Aws::Vector<JobRunState>&& value) { SetStates(std::move(value)); return *this;}

    /**
     * <p>An optional filter for job run states. Note that if this filter contains
     * multiple states, the resulting list will be grouped by the state.</p>
     */
    inline ListJobRunsRequest& AddStates(const JobRunState& value) { m_statesHasBeenSet = true; m_states.push_back(value); return *this; }

    /**
     * <p>An optional filter for job run states. Note that if this filter contains
     * multiple states, the resulting list will be grouped by the state.</p>
     */
    inline ListJobRunsRequest& AddStates(JobRunState&& value) { m_statesHasBeenSet = true; m_states.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAtAfter;
    bool m_createdAtAfterHasBeenSet = false;

    Aws::Utils::DateTime m_createdAtBefore;
    bool m_createdAtBeforeHasBeenSet = false;

    Aws::Vector<JobRunState> m_states;
    bool m_statesHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
