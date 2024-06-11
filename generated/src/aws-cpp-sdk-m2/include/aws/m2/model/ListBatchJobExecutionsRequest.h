﻿/**
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
    AWS_MAINFRAMEMODERNIZATION_API ListBatchJobExecutionsRequest();

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
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline ListBatchJobExecutionsRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline ListBatchJobExecutionsRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline ListBatchJobExecutionsRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of each batch job execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExecutionIds() const{ return m_executionIds; }
    inline bool ExecutionIdsHasBeenSet() const { return m_executionIdsHasBeenSet; }
    inline void SetExecutionIds(const Aws::Vector<Aws::String>& value) { m_executionIdsHasBeenSet = true; m_executionIds = value; }
    inline void SetExecutionIds(Aws::Vector<Aws::String>&& value) { m_executionIdsHasBeenSet = true; m_executionIds = std::move(value); }
    inline ListBatchJobExecutionsRequest& WithExecutionIds(const Aws::Vector<Aws::String>& value) { SetExecutionIds(value); return *this;}
    inline ListBatchJobExecutionsRequest& WithExecutionIds(Aws::Vector<Aws::String>&& value) { SetExecutionIds(std::move(value)); return *this;}
    inline ListBatchJobExecutionsRequest& AddExecutionIds(const Aws::String& value) { m_executionIdsHasBeenSet = true; m_executionIds.push_back(value); return *this; }
    inline ListBatchJobExecutionsRequest& AddExecutionIds(Aws::String&& value) { m_executionIdsHasBeenSet = true; m_executionIds.push_back(std::move(value)); return *this; }
    inline ListBatchJobExecutionsRequest& AddExecutionIds(const char* value) { m_executionIdsHasBeenSet = true; m_executionIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of each batch job execution.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline ListBatchJobExecutionsRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline ListBatchJobExecutionsRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline ListBatchJobExecutionsRequest& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of batch job executions to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListBatchJobExecutionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pagination token to control the number of batch job executions displayed in
     * the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListBatchJobExecutionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBatchJobExecutionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBatchJobExecutionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time after which the batch job executions started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAfter() const{ return m_startedAfter; }
    inline bool StartedAfterHasBeenSet() const { return m_startedAfterHasBeenSet; }
    inline void SetStartedAfter(const Aws::Utils::DateTime& value) { m_startedAfterHasBeenSet = true; m_startedAfter = value; }
    inline void SetStartedAfter(Aws::Utils::DateTime&& value) { m_startedAfterHasBeenSet = true; m_startedAfter = std::move(value); }
    inline ListBatchJobExecutionsRequest& WithStartedAfter(const Aws::Utils::DateTime& value) { SetStartedAfter(value); return *this;}
    inline ListBatchJobExecutionsRequest& WithStartedAfter(Aws::Utils::DateTime&& value) { SetStartedAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time before the batch job executions started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedBefore() const{ return m_startedBefore; }
    inline bool StartedBeforeHasBeenSet() const { return m_startedBeforeHasBeenSet; }
    inline void SetStartedBefore(const Aws::Utils::DateTime& value) { m_startedBeforeHasBeenSet = true; m_startedBefore = value; }
    inline void SetStartedBefore(Aws::Utils::DateTime&& value) { m_startedBeforeHasBeenSet = true; m_startedBefore = std::move(value); }
    inline ListBatchJobExecutionsRequest& WithStartedBefore(const Aws::Utils::DateTime& value) { SetStartedBefore(value); return *this;}
    inline ListBatchJobExecutionsRequest& WithStartedBefore(Aws::Utils::DateTime&& value) { SetStartedBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the batch job executions.</p>
     */
    inline const BatchJobExecutionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const BatchJobExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(BatchJobExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListBatchJobExecutionsRequest& WithStatus(const BatchJobExecutionStatus& value) { SetStatus(value); return *this;}
    inline ListBatchJobExecutionsRequest& WithStatus(BatchJobExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_executionIds;
    bool m_executionIdsHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Utils::DateTime m_startedAfter;
    bool m_startedAfterHasBeenSet = false;

    Aws::Utils::DateTime m_startedBefore;
    bool m_startedBeforeHasBeenSet = false;

    BatchJobExecutionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
