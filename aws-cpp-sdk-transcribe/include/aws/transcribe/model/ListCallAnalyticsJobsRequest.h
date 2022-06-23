/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/transcribe/model/CallAnalyticsJobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

  /**
   */
  class AWS_TRANSCRIBESERVICE_API ListCallAnalyticsJobsRequest : public TranscribeServiceRequest
  {
  public:
    ListCallAnalyticsJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCallAnalyticsJobs"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>When specified, returns only call analytics jobs with the specified status.
     * Jobs are ordered by creation date, with the most recent jobs returned first. If
     * you don't specify a status, Amazon Transcribe returns all analytics jobs ordered
     * by creation date.</p>
     */
    inline const CallAnalyticsJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>When specified, returns only call analytics jobs with the specified status.
     * Jobs are ordered by creation date, with the most recent jobs returned first. If
     * you don't specify a status, Amazon Transcribe returns all analytics jobs ordered
     * by creation date.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>When specified, returns only call analytics jobs with the specified status.
     * Jobs are ordered by creation date, with the most recent jobs returned first. If
     * you don't specify a status, Amazon Transcribe returns all analytics jobs ordered
     * by creation date.</p>
     */
    inline void SetStatus(const CallAnalyticsJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>When specified, returns only call analytics jobs with the specified status.
     * Jobs are ordered by creation date, with the most recent jobs returned first. If
     * you don't specify a status, Amazon Transcribe returns all analytics jobs ordered
     * by creation date.</p>
     */
    inline void SetStatus(CallAnalyticsJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>When specified, returns only call analytics jobs with the specified status.
     * Jobs are ordered by creation date, with the most recent jobs returned first. If
     * you don't specify a status, Amazon Transcribe returns all analytics jobs ordered
     * by creation date.</p>
     */
    inline ListCallAnalyticsJobsRequest& WithStatus(const CallAnalyticsJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>When specified, returns only call analytics jobs with the specified status.
     * Jobs are ordered by creation date, with the most recent jobs returned first. If
     * you don't specify a status, Amazon Transcribe returns all analytics jobs ordered
     * by creation date.</p>
     */
    inline ListCallAnalyticsJobsRequest& WithStatus(CallAnalyticsJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>When specified, the jobs returned in the list are limited to jobs whose name
     * contains the specified string.</p>
     */
    inline const Aws::String& GetJobNameContains() const{ return m_jobNameContains; }

    /**
     * <p>When specified, the jobs returned in the list are limited to jobs whose name
     * contains the specified string.</p>
     */
    inline bool JobNameContainsHasBeenSet() const { return m_jobNameContainsHasBeenSet; }

    /**
     * <p>When specified, the jobs returned in the list are limited to jobs whose name
     * contains the specified string.</p>
     */
    inline void SetJobNameContains(const Aws::String& value) { m_jobNameContainsHasBeenSet = true; m_jobNameContains = value; }

    /**
     * <p>When specified, the jobs returned in the list are limited to jobs whose name
     * contains the specified string.</p>
     */
    inline void SetJobNameContains(Aws::String&& value) { m_jobNameContainsHasBeenSet = true; m_jobNameContains = std::move(value); }

    /**
     * <p>When specified, the jobs returned in the list are limited to jobs whose name
     * contains the specified string.</p>
     */
    inline void SetJobNameContains(const char* value) { m_jobNameContainsHasBeenSet = true; m_jobNameContains.assign(value); }

    /**
     * <p>When specified, the jobs returned in the list are limited to jobs whose name
     * contains the specified string.</p>
     */
    inline ListCallAnalyticsJobsRequest& WithJobNameContains(const Aws::String& value) { SetJobNameContains(value); return *this;}

    /**
     * <p>When specified, the jobs returned in the list are limited to jobs whose name
     * contains the specified string.</p>
     */
    inline ListCallAnalyticsJobsRequest& WithJobNameContains(Aws::String&& value) { SetJobNameContains(std::move(value)); return *this;}

    /**
     * <p>When specified, the jobs returned in the list are limited to jobs whose name
     * contains the specified string.</p>
     */
    inline ListCallAnalyticsJobsRequest& WithJobNameContains(const char* value) { SetJobNameContains(value); return *this;}


    /**
     * <p>If you receive a truncated result in the previous request of , include
     * <code>NextToken</code> to fetch the next set of jobs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you receive a truncated result in the previous request of , include
     * <code>NextToken</code> to fetch the next set of jobs.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If you receive a truncated result in the previous request of , include
     * <code>NextToken</code> to fetch the next set of jobs.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If you receive a truncated result in the previous request of , include
     * <code>NextToken</code> to fetch the next set of jobs.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If you receive a truncated result in the previous request of , include
     * <code>NextToken</code> to fetch the next set of jobs.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If you receive a truncated result in the previous request of , include
     * <code>NextToken</code> to fetch the next set of jobs.</p>
     */
    inline ListCallAnalyticsJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you receive a truncated result in the previous request of , include
     * <code>NextToken</code> to fetch the next set of jobs.</p>
     */
    inline ListCallAnalyticsJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you receive a truncated result in the previous request of , include
     * <code>NextToken</code> to fetch the next set of jobs.</p>
     */
    inline ListCallAnalyticsJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The maximum number of call analytics jobs to return in each page of results.
     * If there are fewer results than the value you specify, only the actual results
     * are returned. If you do not specify a value, the default of 5 is used. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of call analytics jobs to return in each page of results.
     * If there are fewer results than the value you specify, only the actual results
     * are returned. If you do not specify a value, the default of 5 is used. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of call analytics jobs to return in each page of results.
     * If there are fewer results than the value you specify, only the actual results
     * are returned. If you do not specify a value, the default of 5 is used. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of call analytics jobs to return in each page of results.
     * If there are fewer results than the value you specify, only the actual results
     * are returned. If you do not specify a value, the default of 5 is used. </p>
     */
    inline ListCallAnalyticsJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    CallAnalyticsJobStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_jobNameContains;
    bool m_jobNameContainsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
