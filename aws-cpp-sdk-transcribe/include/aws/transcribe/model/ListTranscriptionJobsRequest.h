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
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/TranscribeServiceRequest.h>
#include <aws/transcribe/model/TranscriptionJobStatus.h>
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
  class AWS_TRANSCRIBESERVICE_API ListTranscriptionJobsRequest : public TranscribeServiceRequest
  {
  public:
    ListTranscriptionJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTranscriptionJobs"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>When specified, returns only transcription jobs with the specified status.
     * Jobs are ordered by creation date, with the newest jobs returned first. If you
     * don’t specify a status, Amazon Transcribe returns all transcription jobs ordered
     * by creation date. </p>
     */
    inline const TranscriptionJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>When specified, returns only transcription jobs with the specified status.
     * Jobs are ordered by creation date, with the newest jobs returned first. If you
     * don’t specify a status, Amazon Transcribe returns all transcription jobs ordered
     * by creation date. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>When specified, returns only transcription jobs with the specified status.
     * Jobs are ordered by creation date, with the newest jobs returned first. If you
     * don’t specify a status, Amazon Transcribe returns all transcription jobs ordered
     * by creation date. </p>
     */
    inline void SetStatus(const TranscriptionJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>When specified, returns only transcription jobs with the specified status.
     * Jobs are ordered by creation date, with the newest jobs returned first. If you
     * don’t specify a status, Amazon Transcribe returns all transcription jobs ordered
     * by creation date. </p>
     */
    inline void SetStatus(TranscriptionJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>When specified, returns only transcription jobs with the specified status.
     * Jobs are ordered by creation date, with the newest jobs returned first. If you
     * don’t specify a status, Amazon Transcribe returns all transcription jobs ordered
     * by creation date. </p>
     */
    inline ListTranscriptionJobsRequest& WithStatus(const TranscriptionJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>When specified, returns only transcription jobs with the specified status.
     * Jobs are ordered by creation date, with the newest jobs returned first. If you
     * don’t specify a status, Amazon Transcribe returns all transcription jobs ordered
     * by creation date. </p>
     */
    inline ListTranscriptionJobsRequest& WithStatus(TranscriptionJobStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline ListTranscriptionJobsRequest& WithJobNameContains(const Aws::String& value) { SetJobNameContains(value); return *this;}

    /**
     * <p>When specified, the jobs returned in the list are limited to jobs whose name
     * contains the specified string.</p>
     */
    inline ListTranscriptionJobsRequest& WithJobNameContains(Aws::String&& value) { SetJobNameContains(std::move(value)); return *this;}

    /**
     * <p>When specified, the jobs returned in the list are limited to jobs whose name
     * contains the specified string.</p>
     */
    inline ListTranscriptionJobsRequest& WithJobNameContains(const char* value) { SetJobNameContains(value); return *this;}


    /**
     * <p>If the result of the previous request to <code>ListTranscriptionJobs</code>
     * was truncated, include the <code>NextToken</code> to fetch the next set of
     * jobs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the result of the previous request to <code>ListTranscriptionJobs</code>
     * was truncated, include the <code>NextToken</code> to fetch the next set of
     * jobs.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the result of the previous request to <code>ListTranscriptionJobs</code>
     * was truncated, include the <code>NextToken</code> to fetch the next set of
     * jobs.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the result of the previous request to <code>ListTranscriptionJobs</code>
     * was truncated, include the <code>NextToken</code> to fetch the next set of
     * jobs.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the result of the previous request to <code>ListTranscriptionJobs</code>
     * was truncated, include the <code>NextToken</code> to fetch the next set of
     * jobs.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the result of the previous request to <code>ListTranscriptionJobs</code>
     * was truncated, include the <code>NextToken</code> to fetch the next set of
     * jobs.</p>
     */
    inline ListTranscriptionJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the result of the previous request to <code>ListTranscriptionJobs</code>
     * was truncated, include the <code>NextToken</code> to fetch the next set of
     * jobs.</p>
     */
    inline ListTranscriptionJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the result of the previous request to <code>ListTranscriptionJobs</code>
     * was truncated, include the <code>NextToken</code> to fetch the next set of
     * jobs.</p>
     */
    inline ListTranscriptionJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of jobs to return in the response. If there are fewer
     * results in the list, this response contains only the actual results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of jobs to return in the response. If there are fewer
     * results in the list, this response contains only the actual results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of jobs to return in the response. If there are fewer
     * results in the list, this response contains only the actual results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of jobs to return in the response. If there are fewer
     * results in the list, this response contains only the actual results.</p>
     */
    inline ListTranscriptionJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    TranscriptionJobStatus m_status;
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
