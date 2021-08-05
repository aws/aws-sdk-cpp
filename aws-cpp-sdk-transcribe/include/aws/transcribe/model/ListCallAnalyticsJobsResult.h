/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/CallAnalyticsJobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/CallAnalyticsJobSummary.h>
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
namespace TranscribeService
{
namespace Model
{
  class AWS_TRANSCRIBESERVICE_API ListCallAnalyticsJobsResult
  {
  public:
    ListCallAnalyticsJobsResult();
    ListCallAnalyticsJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListCallAnalyticsJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>When specified, returns only call analytics jobs with that status. Jobs are
     * ordered by creation date, with the most recent jobs returned first. If you don't
     * specify a status, Amazon Transcribe returns all transcription jobs ordered by
     * creation date.</p>
     */
    inline const CallAnalyticsJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>When specified, returns only call analytics jobs with that status. Jobs are
     * ordered by creation date, with the most recent jobs returned first. If you don't
     * specify a status, Amazon Transcribe returns all transcription jobs ordered by
     * creation date.</p>
     */
    inline void SetStatus(const CallAnalyticsJobStatus& value) { m_status = value; }

    /**
     * <p>When specified, returns only call analytics jobs with that status. Jobs are
     * ordered by creation date, with the most recent jobs returned first. If you don't
     * specify a status, Amazon Transcribe returns all transcription jobs ordered by
     * creation date.</p>
     */
    inline void SetStatus(CallAnalyticsJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>When specified, returns only call analytics jobs with that status. Jobs are
     * ordered by creation date, with the most recent jobs returned first. If you don't
     * specify a status, Amazon Transcribe returns all transcription jobs ordered by
     * creation date.</p>
     */
    inline ListCallAnalyticsJobsResult& WithStatus(const CallAnalyticsJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>When specified, returns only call analytics jobs with that status. Jobs are
     * ordered by creation date, with the most recent jobs returned first. If you don't
     * specify a status, Amazon Transcribe returns all transcription jobs ordered by
     * creation date.</p>
     */
    inline ListCallAnalyticsJobsResult& WithStatus(CallAnalyticsJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The operation returns a page of jobs at a time. The maximum size of the page
     * is set by the <code>MaxResults</code> parameter. If there are more jobs in the
     * list than the page size, Amazon Transcribe returns the <code>NextPage</code>
     * token. Include the token in your next request to the operation to return next
     * page of jobs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The operation returns a page of jobs at a time. The maximum size of the page
     * is set by the <code>MaxResults</code> parameter. If there are more jobs in the
     * list than the page size, Amazon Transcribe returns the <code>NextPage</code>
     * token. Include the token in your next request to the operation to return next
     * page of jobs.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The operation returns a page of jobs at a time. The maximum size of the page
     * is set by the <code>MaxResults</code> parameter. If there are more jobs in the
     * list than the page size, Amazon Transcribe returns the <code>NextPage</code>
     * token. Include the token in your next request to the operation to return next
     * page of jobs.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The operation returns a page of jobs at a time. The maximum size of the page
     * is set by the <code>MaxResults</code> parameter. If there are more jobs in the
     * list than the page size, Amazon Transcribe returns the <code>NextPage</code>
     * token. Include the token in your next request to the operation to return next
     * page of jobs.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The operation returns a page of jobs at a time. The maximum size of the page
     * is set by the <code>MaxResults</code> parameter. If there are more jobs in the
     * list than the page size, Amazon Transcribe returns the <code>NextPage</code>
     * token. Include the token in your next request to the operation to return next
     * page of jobs.</p>
     */
    inline ListCallAnalyticsJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The operation returns a page of jobs at a time. The maximum size of the page
     * is set by the <code>MaxResults</code> parameter. If there are more jobs in the
     * list than the page size, Amazon Transcribe returns the <code>NextPage</code>
     * token. Include the token in your next request to the operation to return next
     * page of jobs.</p>
     */
    inline ListCallAnalyticsJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The operation returns a page of jobs at a time. The maximum size of the page
     * is set by the <code>MaxResults</code> parameter. If there are more jobs in the
     * list than the page size, Amazon Transcribe returns the <code>NextPage</code>
     * token. Include the token in your next request to the operation to return next
     * page of jobs.</p>
     */
    inline ListCallAnalyticsJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of objects containing summary information for a transcription job.</p>
     */
    inline const Aws::Vector<CallAnalyticsJobSummary>& GetCallAnalyticsJobSummaries() const{ return m_callAnalyticsJobSummaries; }

    /**
     * <p>A list of objects containing summary information for a transcription job.</p>
     */
    inline void SetCallAnalyticsJobSummaries(const Aws::Vector<CallAnalyticsJobSummary>& value) { m_callAnalyticsJobSummaries = value; }

    /**
     * <p>A list of objects containing summary information for a transcription job.</p>
     */
    inline void SetCallAnalyticsJobSummaries(Aws::Vector<CallAnalyticsJobSummary>&& value) { m_callAnalyticsJobSummaries = std::move(value); }

    /**
     * <p>A list of objects containing summary information for a transcription job.</p>
     */
    inline ListCallAnalyticsJobsResult& WithCallAnalyticsJobSummaries(const Aws::Vector<CallAnalyticsJobSummary>& value) { SetCallAnalyticsJobSummaries(value); return *this;}

    /**
     * <p>A list of objects containing summary information for a transcription job.</p>
     */
    inline ListCallAnalyticsJobsResult& WithCallAnalyticsJobSummaries(Aws::Vector<CallAnalyticsJobSummary>&& value) { SetCallAnalyticsJobSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of objects containing summary information for a transcription job.</p>
     */
    inline ListCallAnalyticsJobsResult& AddCallAnalyticsJobSummaries(const CallAnalyticsJobSummary& value) { m_callAnalyticsJobSummaries.push_back(value); return *this; }

    /**
     * <p>A list of objects containing summary information for a transcription job.</p>
     */
    inline ListCallAnalyticsJobsResult& AddCallAnalyticsJobSummaries(CallAnalyticsJobSummary&& value) { m_callAnalyticsJobSummaries.push_back(std::move(value)); return *this; }

  private:

    CallAnalyticsJobStatus m_status;

    Aws::String m_nextToken;

    Aws::Vector<CallAnalyticsJobSummary> m_callAnalyticsJobSummaries;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
