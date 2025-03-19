/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/MainframeModernizationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/m2/model/BatchJobExecutionStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MainframeModernization
{
namespace Model
{

  /**
   */
  class ListBatchJobExecutionsRequest : public MainframeModernizationRequest
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ListBatchJobExecutionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBatchJobExecutions"; }

    AWS_MAINFRAMEMODERNIZATION_API Aws::String SerializePayload() const override;

    AWS_MAINFRAMEMODERNIZATION_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifier of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    ListBatchJobExecutionsRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of each batch job execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExecutionIds() const { return m_executionIds; }
    inline bool ExecutionIdsHasBeenSet() const { return m_executionIdsHasBeenSet; }
    template<typename ExecutionIdsT = Aws::Vector<Aws::String>>
    void SetExecutionIds(ExecutionIdsT&& value) { m_executionIdsHasBeenSet = true; m_executionIds = std::forward<ExecutionIdsT>(value); }
    template<typename ExecutionIdsT = Aws::Vector<Aws::String>>
    ListBatchJobExecutionsRequest& WithExecutionIds(ExecutionIdsT&& value) { SetExecutionIds(std::forward<ExecutionIdsT>(value)); return *this;}
    template<typename ExecutionIdsT = Aws::String>
    ListBatchJobExecutionsRequest& AddExecutionIds(ExecutionIdsT&& value) { m_executionIdsHasBeenSet = true; m_executionIds.emplace_back(std::forward<ExecutionIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of each batch job execution.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    ListBatchJobExecutionsRequest& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of batch job executions to return.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListBatchJobExecutionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pagination token to control the number of batch job executions displayed in
     * the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBatchJobExecutionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time after which the batch job executions started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAfter() const { return m_startedAfter; }
    inline bool StartedAfterHasBeenSet() const { return m_startedAfterHasBeenSet; }
    template<typename StartedAfterT = Aws::Utils::DateTime>
    void SetStartedAfter(StartedAfterT&& value) { m_startedAfterHasBeenSet = true; m_startedAfter = std::forward<StartedAfterT>(value); }
    template<typename StartedAfterT = Aws::Utils::DateTime>
    ListBatchJobExecutionsRequest& WithStartedAfter(StartedAfterT&& value) { SetStartedAfter(std::forward<StartedAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time before the batch job executions started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedBefore() const { return m_startedBefore; }
    inline bool StartedBeforeHasBeenSet() const { return m_startedBeforeHasBeenSet; }
    template<typename StartedBeforeT = Aws::Utils::DateTime>
    void SetStartedBefore(StartedBeforeT&& value) { m_startedBeforeHasBeenSet = true; m_startedBefore = std::forward<StartedBeforeT>(value); }
    template<typename StartedBeforeT = Aws::Utils::DateTime>
    ListBatchJobExecutionsRequest& WithStartedBefore(StartedBeforeT&& value) { SetStartedBefore(std::forward<StartedBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the batch job executions.</p>
     */
    inline BatchJobExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(BatchJobExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListBatchJobExecutionsRequest& WithStatus(BatchJobExecutionStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_executionIds;
    bool m_executionIdsHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Utils::DateTime m_startedAfter{};
    bool m_startedAfterHasBeenSet = false;

    Aws::Utils::DateTime m_startedBefore{};
    bool m_startedBeforeHasBeenSet = false;

    BatchJobExecutionStatus m_status{BatchJobExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
