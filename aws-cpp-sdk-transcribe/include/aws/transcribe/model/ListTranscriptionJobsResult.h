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
#include <aws/transcribe/model/TranscriptionJobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/TranscriptionJobSummary.h>
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
  class AWS_TRANSCRIBESERVICE_API ListTranscriptionJobsResult
  {
  public:
    ListTranscriptionJobsResult();
    ListTranscriptionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTranscriptionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested status of the jobs returned.</p>
     */
    inline const TranscriptionJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The requested status of the jobs returned.</p>
     */
    inline void SetStatus(const TranscriptionJobStatus& value) { m_status = value; }

    /**
     * <p>The requested status of the jobs returned.</p>
     */
    inline void SetStatus(TranscriptionJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The requested status of the jobs returned.</p>
     */
    inline ListTranscriptionJobsResult& WithStatus(const TranscriptionJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The requested status of the jobs returned.</p>
     */
    inline ListTranscriptionJobsResult& WithStatus(TranscriptionJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The <code>ListTranscriptionJobs</code> operation returns a page of jobs at a
     * time. The maximum size of the page is set by the <code>MaxResults</code>
     * parameter. If there are more jobs in the list than the page size, Amazon
     * Transcribe returns the <code>NextPage</code> token. Include the token in the
     * next request to the <code>ListTranscriptionJobs</code> operation to return in
     * the next page of jobs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>ListTranscriptionJobs</code> operation returns a page of jobs at a
     * time. The maximum size of the page is set by the <code>MaxResults</code>
     * parameter. If there are more jobs in the list than the page size, Amazon
     * Transcribe returns the <code>NextPage</code> token. Include the token in the
     * next request to the <code>ListTranscriptionJobs</code> operation to return in
     * the next page of jobs.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>ListTranscriptionJobs</code> operation returns a page of jobs at a
     * time. The maximum size of the page is set by the <code>MaxResults</code>
     * parameter. If there are more jobs in the list than the page size, Amazon
     * Transcribe returns the <code>NextPage</code> token. Include the token in the
     * next request to the <code>ListTranscriptionJobs</code> operation to return in
     * the next page of jobs.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>ListTranscriptionJobs</code> operation returns a page of jobs at a
     * time. The maximum size of the page is set by the <code>MaxResults</code>
     * parameter. If there are more jobs in the list than the page size, Amazon
     * Transcribe returns the <code>NextPage</code> token. Include the token in the
     * next request to the <code>ListTranscriptionJobs</code> operation to return in
     * the next page of jobs.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>ListTranscriptionJobs</code> operation returns a page of jobs at a
     * time. The maximum size of the page is set by the <code>MaxResults</code>
     * parameter. If there are more jobs in the list than the page size, Amazon
     * Transcribe returns the <code>NextPage</code> token. Include the token in the
     * next request to the <code>ListTranscriptionJobs</code> operation to return in
     * the next page of jobs.</p>
     */
    inline ListTranscriptionJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>ListTranscriptionJobs</code> operation returns a page of jobs at a
     * time. The maximum size of the page is set by the <code>MaxResults</code>
     * parameter. If there are more jobs in the list than the page size, Amazon
     * Transcribe returns the <code>NextPage</code> token. Include the token in the
     * next request to the <code>ListTranscriptionJobs</code> operation to return in
     * the next page of jobs.</p>
     */
    inline ListTranscriptionJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>ListTranscriptionJobs</code> operation returns a page of jobs at a
     * time. The maximum size of the page is set by the <code>MaxResults</code>
     * parameter. If there are more jobs in the list than the page size, Amazon
     * Transcribe returns the <code>NextPage</code> token. Include the token in the
     * next request to the <code>ListTranscriptionJobs</code> operation to return in
     * the next page of jobs.</p>
     */
    inline ListTranscriptionJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of objects containing summary information for a transcription job.</p>
     */
    inline const Aws::Vector<TranscriptionJobSummary>& GetTranscriptionJobSummaries() const{ return m_transcriptionJobSummaries; }

    /**
     * <p>A list of objects containing summary information for a transcription job.</p>
     */
    inline void SetTranscriptionJobSummaries(const Aws::Vector<TranscriptionJobSummary>& value) { m_transcriptionJobSummaries = value; }

    /**
     * <p>A list of objects containing summary information for a transcription job.</p>
     */
    inline void SetTranscriptionJobSummaries(Aws::Vector<TranscriptionJobSummary>&& value) { m_transcriptionJobSummaries = std::move(value); }

    /**
     * <p>A list of objects containing summary information for a transcription job.</p>
     */
    inline ListTranscriptionJobsResult& WithTranscriptionJobSummaries(const Aws::Vector<TranscriptionJobSummary>& value) { SetTranscriptionJobSummaries(value); return *this;}

    /**
     * <p>A list of objects containing summary information for a transcription job.</p>
     */
    inline ListTranscriptionJobsResult& WithTranscriptionJobSummaries(Aws::Vector<TranscriptionJobSummary>&& value) { SetTranscriptionJobSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of objects containing summary information for a transcription job.</p>
     */
    inline ListTranscriptionJobsResult& AddTranscriptionJobSummaries(const TranscriptionJobSummary& value) { m_transcriptionJobSummaries.push_back(value); return *this; }

    /**
     * <p>A list of objects containing summary information for a transcription job.</p>
     */
    inline ListTranscriptionJobsResult& AddTranscriptionJobSummaries(TranscriptionJobSummary&& value) { m_transcriptionJobSummaries.push_back(std::move(value)); return *this; }

  private:

    TranscriptionJobStatus m_status;

    Aws::String m_nextToken;

    Aws::Vector<TranscriptionJobSummary> m_transcriptionJobSummaries;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
