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
#include <aws/emr-serverless/model/JobRunMode.h>
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
    AWS_EMRSERVERLESS_API ListJobRunsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListJobRuns"; }

    AWS_EMRSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_EMRSERVERLESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the application for which to list the job run.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    ListJobRunsRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of job run results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListJobRunsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of job runs that can be listed.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListJobRunsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lower bound of the option to filter by creation date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAtAfter() const { return m_createdAtAfter; }
    inline bool CreatedAtAfterHasBeenSet() const { return m_createdAtAfterHasBeenSet; }
    template<typename CreatedAtAfterT = Aws::Utils::DateTime>
    void SetCreatedAtAfter(CreatedAtAfterT&& value) { m_createdAtAfterHasBeenSet = true; m_createdAtAfter = std::forward<CreatedAtAfterT>(value); }
    template<typename CreatedAtAfterT = Aws::Utils::DateTime>
    ListJobRunsRequest& WithCreatedAtAfter(CreatedAtAfterT&& value) { SetCreatedAtAfter(std::forward<CreatedAtAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upper bound of the option to filter by creation date and time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAtBefore() const { return m_createdAtBefore; }
    inline bool CreatedAtBeforeHasBeenSet() const { return m_createdAtBeforeHasBeenSet; }
    template<typename CreatedAtBeforeT = Aws::Utils::DateTime>
    void SetCreatedAtBefore(CreatedAtBeforeT&& value) { m_createdAtBeforeHasBeenSet = true; m_createdAtBefore = std::forward<CreatedAtBeforeT>(value); }
    template<typename CreatedAtBeforeT = Aws::Utils::DateTime>
    ListJobRunsRequest& WithCreatedAtBefore(CreatedAtBeforeT&& value) { SetCreatedAtBefore(std::forward<CreatedAtBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional filter for job run states. Note that if this filter contains
     * multiple states, the resulting list will be grouped by the state.</p>
     */
    inline const Aws::Vector<JobRunState>& GetStates() const { return m_states; }
    inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }
    template<typename StatesT = Aws::Vector<JobRunState>>
    void SetStates(StatesT&& value) { m_statesHasBeenSet = true; m_states = std::forward<StatesT>(value); }
    template<typename StatesT = Aws::Vector<JobRunState>>
    ListJobRunsRequest& WithStates(StatesT&& value) { SetStates(std::forward<StatesT>(value)); return *this;}
    inline ListJobRunsRequest& AddStates(JobRunState value) { m_statesHasBeenSet = true; m_states.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The mode of the job runs to list.</p>
     */
    inline JobRunMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(JobRunMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline ListJobRunsRequest& WithMode(JobRunMode value) { SetMode(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAtAfter{};
    bool m_createdAtAfterHasBeenSet = false;

    Aws::Utils::DateTime m_createdAtBefore{};
    bool m_createdAtBeforeHasBeenSet = false;

    Aws::Vector<JobRunState> m_states;
    bool m_statesHasBeenSet = false;

    JobRunMode m_mode{JobRunMode::NOT_SET};
    bool m_modeHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
