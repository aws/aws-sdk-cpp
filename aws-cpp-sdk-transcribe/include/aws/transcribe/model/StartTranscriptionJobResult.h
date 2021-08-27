/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/TranscriptionJob.h>
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
  class AWS_TRANSCRIBESERVICE_API StartTranscriptionJobResult
  {
  public:
    StartTranscriptionJobResult();
    StartTranscriptionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartTranscriptionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object containing details of the asynchronous transcription job.</p>
     */
    inline const TranscriptionJob& GetTranscriptionJob() const{ return m_transcriptionJob; }

    /**
     * <p>An object containing details of the asynchronous transcription job.</p>
     */
    inline void SetTranscriptionJob(const TranscriptionJob& value) { m_transcriptionJob = value; }

    /**
     * <p>An object containing details of the asynchronous transcription job.</p>
     */
    inline void SetTranscriptionJob(TranscriptionJob&& value) { m_transcriptionJob = std::move(value); }

    /**
     * <p>An object containing details of the asynchronous transcription job.</p>
     */
    inline StartTranscriptionJobResult& WithTranscriptionJob(const TranscriptionJob& value) { SetTranscriptionJob(value); return *this;}

    /**
     * <p>An object containing details of the asynchronous transcription job.</p>
     */
    inline StartTranscriptionJobResult& WithTranscriptionJob(TranscriptionJob&& value) { SetTranscriptionJob(std::move(value)); return *this;}

  private:

    TranscriptionJob m_transcriptionJob;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
