/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/TranscriptionJobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/MedicalTranscriptionJobSummary.h>
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
  class AWS_TRANSCRIBESERVICE_API ListMedicalTranscriptionJobsResult
  {
  public:
    ListMedicalTranscriptionJobsResult();
    ListMedicalTranscriptionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListMedicalTranscriptionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested status of the medical transcription jobs returned.</p>
     */
    inline const TranscriptionJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The requested status of the medical transcription jobs returned.</p>
     */
    inline void SetStatus(const TranscriptionJobStatus& value) { m_status = value; }

    /**
     * <p>The requested status of the medical transcription jobs returned.</p>
     */
    inline void SetStatus(TranscriptionJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The requested status of the medical transcription jobs returned.</p>
     */
    inline ListMedicalTranscriptionJobsResult& WithStatus(const TranscriptionJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The requested status of the medical transcription jobs returned.</p>
     */
    inline ListMedicalTranscriptionJobsResult& WithStatus(TranscriptionJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The <code>ListMedicalTranscriptionJobs</code> operation returns a page of
     * jobs at a time. The maximum size of the page is set by the
     * <code>MaxResults</code> parameter. If the number of jobs exceeds what can fit on
     * a page, Amazon Transcribe Medical returns the <code>NextPage</code> token.
     * Include the token in the next request to the
     * <code>ListMedicalTranscriptionJobs</code> operation to return in the next page
     * of jobs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>ListMedicalTranscriptionJobs</code> operation returns a page of
     * jobs at a time. The maximum size of the page is set by the
     * <code>MaxResults</code> parameter. If the number of jobs exceeds what can fit on
     * a page, Amazon Transcribe Medical returns the <code>NextPage</code> token.
     * Include the token in the next request to the
     * <code>ListMedicalTranscriptionJobs</code> operation to return in the next page
     * of jobs.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>ListMedicalTranscriptionJobs</code> operation returns a page of
     * jobs at a time. The maximum size of the page is set by the
     * <code>MaxResults</code> parameter. If the number of jobs exceeds what can fit on
     * a page, Amazon Transcribe Medical returns the <code>NextPage</code> token.
     * Include the token in the next request to the
     * <code>ListMedicalTranscriptionJobs</code> operation to return in the next page
     * of jobs.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>ListMedicalTranscriptionJobs</code> operation returns a page of
     * jobs at a time. The maximum size of the page is set by the
     * <code>MaxResults</code> parameter. If the number of jobs exceeds what can fit on
     * a page, Amazon Transcribe Medical returns the <code>NextPage</code> token.
     * Include the token in the next request to the
     * <code>ListMedicalTranscriptionJobs</code> operation to return in the next page
     * of jobs.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>ListMedicalTranscriptionJobs</code> operation returns a page of
     * jobs at a time. The maximum size of the page is set by the
     * <code>MaxResults</code> parameter. If the number of jobs exceeds what can fit on
     * a page, Amazon Transcribe Medical returns the <code>NextPage</code> token.
     * Include the token in the next request to the
     * <code>ListMedicalTranscriptionJobs</code> operation to return in the next page
     * of jobs.</p>
     */
    inline ListMedicalTranscriptionJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>ListMedicalTranscriptionJobs</code> operation returns a page of
     * jobs at a time. The maximum size of the page is set by the
     * <code>MaxResults</code> parameter. If the number of jobs exceeds what can fit on
     * a page, Amazon Transcribe Medical returns the <code>NextPage</code> token.
     * Include the token in the next request to the
     * <code>ListMedicalTranscriptionJobs</code> operation to return in the next page
     * of jobs.</p>
     */
    inline ListMedicalTranscriptionJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>ListMedicalTranscriptionJobs</code> operation returns a page of
     * jobs at a time. The maximum size of the page is set by the
     * <code>MaxResults</code> parameter. If the number of jobs exceeds what can fit on
     * a page, Amazon Transcribe Medical returns the <code>NextPage</code> token.
     * Include the token in the next request to the
     * <code>ListMedicalTranscriptionJobs</code> operation to return in the next page
     * of jobs.</p>
     */
    inline ListMedicalTranscriptionJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of objects containing summary information for a transcription job.</p>
     */
    inline const Aws::Vector<MedicalTranscriptionJobSummary>& GetMedicalTranscriptionJobSummaries() const{ return m_medicalTranscriptionJobSummaries; }

    /**
     * <p>A list of objects containing summary information for a transcription job.</p>
     */
    inline void SetMedicalTranscriptionJobSummaries(const Aws::Vector<MedicalTranscriptionJobSummary>& value) { m_medicalTranscriptionJobSummaries = value; }

    /**
     * <p>A list of objects containing summary information for a transcription job.</p>
     */
    inline void SetMedicalTranscriptionJobSummaries(Aws::Vector<MedicalTranscriptionJobSummary>&& value) { m_medicalTranscriptionJobSummaries = std::move(value); }

    /**
     * <p>A list of objects containing summary information for a transcription job.</p>
     */
    inline ListMedicalTranscriptionJobsResult& WithMedicalTranscriptionJobSummaries(const Aws::Vector<MedicalTranscriptionJobSummary>& value) { SetMedicalTranscriptionJobSummaries(value); return *this;}

    /**
     * <p>A list of objects containing summary information for a transcription job.</p>
     */
    inline ListMedicalTranscriptionJobsResult& WithMedicalTranscriptionJobSummaries(Aws::Vector<MedicalTranscriptionJobSummary>&& value) { SetMedicalTranscriptionJobSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of objects containing summary information for a transcription job.</p>
     */
    inline ListMedicalTranscriptionJobsResult& AddMedicalTranscriptionJobSummaries(const MedicalTranscriptionJobSummary& value) { m_medicalTranscriptionJobSummaries.push_back(value); return *this; }

    /**
     * <p>A list of objects containing summary information for a transcription job.</p>
     */
    inline ListMedicalTranscriptionJobsResult& AddMedicalTranscriptionJobSummaries(MedicalTranscriptionJobSummary&& value) { m_medicalTranscriptionJobSummaries.push_back(std::move(value)); return *this; }

  private:

    TranscriptionJobStatus m_status;

    Aws::String m_nextToken;

    Aws::Vector<MedicalTranscriptionJobSummary> m_medicalTranscriptionJobSummaries;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
