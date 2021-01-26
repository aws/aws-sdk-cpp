/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AWS_TRANSCRIBESERVICE_API ListMedicalTranscriptionJobsRequest : public TranscribeServiceRequest
  {
  public:
    ListMedicalTranscriptionJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMedicalTranscriptionJobs"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>When specified, returns only medical transcription jobs with the specified
     * status. Jobs are ordered by creation date, with the newest jobs returned first.
     * If you don't specify a status, Amazon Transcribe Medical returns all
     * transcription jobs ordered by creation date.</p>
     */
    inline const TranscriptionJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>When specified, returns only medical transcription jobs with the specified
     * status. Jobs are ordered by creation date, with the newest jobs returned first.
     * If you don't specify a status, Amazon Transcribe Medical returns all
     * transcription jobs ordered by creation date.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>When specified, returns only medical transcription jobs with the specified
     * status. Jobs are ordered by creation date, with the newest jobs returned first.
     * If you don't specify a status, Amazon Transcribe Medical returns all
     * transcription jobs ordered by creation date.</p>
     */
    inline void SetStatus(const TranscriptionJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>When specified, returns only medical transcription jobs with the specified
     * status. Jobs are ordered by creation date, with the newest jobs returned first.
     * If you don't specify a status, Amazon Transcribe Medical returns all
     * transcription jobs ordered by creation date.</p>
     */
    inline void SetStatus(TranscriptionJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>When specified, returns only medical transcription jobs with the specified
     * status. Jobs are ordered by creation date, with the newest jobs returned first.
     * If you don't specify a status, Amazon Transcribe Medical returns all
     * transcription jobs ordered by creation date.</p>
     */
    inline ListMedicalTranscriptionJobsRequest& WithStatus(const TranscriptionJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>When specified, returns only medical transcription jobs with the specified
     * status. Jobs are ordered by creation date, with the newest jobs returned first.
     * If you don't specify a status, Amazon Transcribe Medical returns all
     * transcription jobs ordered by creation date.</p>
     */
    inline ListMedicalTranscriptionJobsRequest& WithStatus(TranscriptionJobStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline ListMedicalTranscriptionJobsRequest& WithJobNameContains(const Aws::String& value) { SetJobNameContains(value); return *this;}

    /**
     * <p>When specified, the jobs returned in the list are limited to jobs whose name
     * contains the specified string.</p>
     */
    inline ListMedicalTranscriptionJobsRequest& WithJobNameContains(Aws::String&& value) { SetJobNameContains(std::move(value)); return *this;}

    /**
     * <p>When specified, the jobs returned in the list are limited to jobs whose name
     * contains the specified string.</p>
     */
    inline ListMedicalTranscriptionJobsRequest& WithJobNameContains(const char* value) { SetJobNameContains(value); return *this;}


    /**
     * <p>If you a receive a truncated result in the previous request of
     * <code>ListMedicalTranscriptionJobs</code>, include <code>NextToken</code> to
     * fetch the next set of jobs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you a receive a truncated result in the previous request of
     * <code>ListMedicalTranscriptionJobs</code>, include <code>NextToken</code> to
     * fetch the next set of jobs.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If you a receive a truncated result in the previous request of
     * <code>ListMedicalTranscriptionJobs</code>, include <code>NextToken</code> to
     * fetch the next set of jobs.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If you a receive a truncated result in the previous request of
     * <code>ListMedicalTranscriptionJobs</code>, include <code>NextToken</code> to
     * fetch the next set of jobs.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If you a receive a truncated result in the previous request of
     * <code>ListMedicalTranscriptionJobs</code>, include <code>NextToken</code> to
     * fetch the next set of jobs.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If you a receive a truncated result in the previous request of
     * <code>ListMedicalTranscriptionJobs</code>, include <code>NextToken</code> to
     * fetch the next set of jobs.</p>
     */
    inline ListMedicalTranscriptionJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you a receive a truncated result in the previous request of
     * <code>ListMedicalTranscriptionJobs</code>, include <code>NextToken</code> to
     * fetch the next set of jobs.</p>
     */
    inline ListMedicalTranscriptionJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you a receive a truncated result in the previous request of
     * <code>ListMedicalTranscriptionJobs</code>, include <code>NextToken</code> to
     * fetch the next set of jobs.</p>
     */
    inline ListMedicalTranscriptionJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of medical transcription jobs to return in the response.
     * IF there are fewer results in the list, this response contains only the actual
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of medical transcription jobs to return in the response.
     * IF there are fewer results in the list, this response contains only the actual
     * results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of medical transcription jobs to return in the response.
     * IF there are fewer results in the list, this response contains only the actual
     * results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of medical transcription jobs to return in the response.
     * IF there are fewer results in the list, this response contains only the actual
     * results.</p>
     */
    inline ListMedicalTranscriptionJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

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
